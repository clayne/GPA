//==============================================================================
// Copyright (c) 2017-2020 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  DX12 GPA Implementation
//==============================================================================

#include <locale>
#include <codecvt>

#include "dx12_gpa_implementor.h"
#include "dx12_utils.h"
#include "DeviceInfoUtils.h"
#include "gpa_counter_generator_dx12.h"
#include "gpa_counter_generator_dx12_non_amd.h"
#include "gpa_counter_scheduler_dx12.h"

IGPAImplementor*                      s_pGpaImp = DX12GPAImplementor::Instance();
static GPA_CounterGeneratorDX12       s_generatorDX12;        ///< static instance of DX12 generator
static GPA_CounterGeneratorDX12NonAMD s_generatorDX12NonAMD;  ///< static instance of DX12 non-AMD generator
static GPA_CounterSchedulerDX12       s_schedulerDX12;        ///< static instance of DX12 scheduler

DX12GPAImplementor::~DX12GPAImplementor()
{
    DX12GPAImplementor::Destroy();
}

GPA_API_Type DX12GPAImplementor::GetAPIType() const
{
    return GPA_API_DIRECTX_12;
}

bool DX12GPAImplementor::GetHwInfoFromAPI(const GPAContextInfoPtr pContextInfo, GPA_HWInfo& hwInfo) const
{
    bool success = false;

    IUnknown*     pUnknownPtr = static_cast<IUnknown*>(pContextInfo);
    ID3D12Device* pD3D12Device;

    if (DX12Utils::GetD3D12Device(pUnknownPtr, &pD3D12Device) && DX12Utils::IsFeatureLevelSupported(pD3D12Device))
    {
        DXGI_ADAPTER_DESC adapterDesc;
        GPA_Status        result = DX12Utils::DX12GetAdapterDesc(pD3D12Device, adapterDesc);

        if (GPA_STATUS_OK == result)
        {
            // For now it is assumed that DX12 MGPU support is exposed to the app
            // and the app always opens the device on the correct GPU.
            // In case where MGPU support hides the GPU from the app, then
            // we will need to use DX12 MGPU extension (and possibly ADL util)
            // to get the correct HW info
            hwInfo.SetVendorID(adapterDesc.VendorId);
            hwInfo.SetDeviceID(adapterDesc.DeviceId);
            hwInfo.SetRevisionID(adapterDesc.Revision);
            std::wstring adapterNameW(adapterDesc.Description);

            std::wstring_convert<std::codecvt_utf8<wchar_t>, wchar_t> wideToUtf8Converter;

            std::string adapterName = wideToUtf8Converter.to_bytes(adapterNameW);

            hwInfo.SetDeviceName(adapterName.c_str());
            GDT_HW_GENERATION hwGen = GDT_HW_GENERATION_NONE;

            if (NVIDIA_VENDOR_ID == adapterDesc.VendorId)
            {
                hwGen = GDT_HW_GENERATION_NVIDIA;
            }
            else if (INTEL_VENDOR_ID == adapterDesc.VendorId)
            {
                hwGen = GDT_HW_GENERATION_INTEL;
            }
            else if (AMD_VENDOR_ID == adapterDesc.VendorId)
            {
                GDT_GfxCardInfo cardInfo;

                if (AMDTDeviceInfoUtils::Instance()->GetDeviceInfo(adapterDesc.DeviceId, adapterDesc.Revision, cardInfo))
                {
                    hwGen = cardInfo.m_generation;

                    // GPA DX12 requires GFX8 or above (but also works on Hawaii)
                    if (GDT_HW_GENERATION_VOLCANICISLAND > hwGen && GDT_HAWAII != cardInfo.m_asicType)
                    {
                        GPA_LogError("Hardware not supported.");
                    }
                    else
                    {
                        UINT64 deviceFrequency = 0ull;
                        if (!DX12Utils::GetTimestampFrequency(pD3D12Device, deviceFrequency))
                        {
                            GPA_LogError("GetTimestampFrequency Failed");
                        }
                        else
                        {
                            hwInfo.SetTimeStampFrequency(deviceFrequency);
                            success = true;
                        }
                    }
                }
            }

            hwInfo.SetHWGeneration(hwGen);
        }
    }

    return success;
}

bool DX12GPAImplementor::VerifyAPIHwSupport(const GPAContextInfoPtr pContextInfo, const GPA_HWInfo& hwInfo) const
{
    UNREFERENCED_PARAMETER(hwInfo);

    bool success = false;

    IUnknown*     pUnknownPtr = static_cast<IUnknown*>(pContextInfo);
    ID3D12Device* pD3D12Device;

    if (DX12Utils::GetD3D12Device(pUnknownPtr, &pD3D12Device) && DX12Utils::IsFeatureLevelSupported(pD3D12Device))
    {
        success = true;
    }

    return success;
}

GPA_Status DX12GPAImplementor::Destroy()
{
    DeleteContexts();
    return GPAImplementor::Destroy();
}

bool DX12GPAImplementor::IsCommandListRequired() const
{
    return true;
}

bool DX12GPAImplementor::IsContinueSampleOnCommandListSupported() const
{
    return true;
}

bool DX12GPAImplementor::IsCopySecondarySampleSupported() const
{
    return true;
}

IGPAContext* DX12GPAImplementor::OpenAPIContext(GPAContextInfoPtr pContextInfo, GPA_HWInfo& hwInfo, GPA_OpenContextFlags flags)
{
    IUnknown*     pUnknownPtr = static_cast<IUnknown*>(pContextInfo);
    ID3D12Device* pD3D12Device;
    IGPAContext*  pRetGpaContext = nullptr;

    if (DX12Utils::GetD3D12Device(pUnknownPtr, &pD3D12Device) && DX12Utils::IsFeatureLevelSupported(pD3D12Device))
    {
        DX12GPAContext* pDX12GpaContext = new (std::nothrow) DX12GPAContext(pD3D12Device, hwInfo, flags);

        if (nullptr != pDX12GpaContext)
        {
            if (pDX12GpaContext->Initialize())
            {
                pRetGpaContext = pDX12GpaContext;
            }
            else
            {
                delete pDX12GpaContext;
                GPA_LogError("Unable to open a context.");
            }
        }
    }
    else
    {
        GPA_LogError("Hardware Not Supported.");
    }

    return pRetGpaContext;
}

bool DX12GPAImplementor::CloseAPIContext(GPADeviceIdentifier pDeviceIdentifier, IGPAContext* pContext)
{
    assert(pDeviceIdentifier);
    assert(pContext);

    UNREFERENCED_PARAMETER(pDeviceIdentifier);
    UNREFERENCED_PARAMETER(pContext);

    if (nullptr != pContext)
    {
        DX12GPAContext* pDx12GpaContext = reinterpret_cast<DX12GPAContext*>(pContext);
        /*
         * Deleting the context resources at this point is causing
         * some issue in driver as some of the resources are still in use on factory object
         * We will defer the release of driver extension resources at time of destroying the GPA
         */
        pDx12GpaContext->SetStableClocks(false);
        m_dx12GpaContextList.push_back(pDx12GpaContext);
    }

    return true;
}

GPADeviceIdentifier DX12GPAImplementor::GetDeviceIdentifierFromContextInfo(GPAContextInfoPtr pContextInfo) const
{
    return static_cast<IUnknown*>(pContextInfo);
}

void DX12GPAImplementor::DeleteContexts()
{
    for (DX12GPAContext* pTempContext : m_dx12GpaContextList)
    {
        delete pTempContext;
    }

    m_dx12GpaContextList.clear();
}
