//==============================================================================
// Copyright (c) 2016-2020 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  Manages a set of derived counters
//==============================================================================

#include <stdio.h>
#include <sstream>
#include <string.h>  // for strcpy
#include <algorithm>

#include "utility.h"
#include "logging.h"
#include "gpa_derived_counter.h"
#include "gpa_common_defs.h"
#include "gpa_hardware_counters.h"

#ifdef __cplusplus
#include <cstdint>
#else
#include <stdint.h>
#endif

GPA_DerivedCounter::GPA_DerivedCounter()
    : m_index(0u)
    , m_pName(nullptr)
    , m_pGroup(nullptr)
    , m_pDescription(nullptr)
    , m_dataType(GPA_DATA_TYPE__LAST)
    , m_usageType(GPA_USAGE_TYPE__LAST)
    , m_pComputeExpression(nullptr)
    , counter_info_(nullptr)
    , derived_counter_info_init_(false)
{
}

GPA_DerivedCounter::GPA_DerivedCounter(unsigned int        index,
                                       const char*         pName,
                                       const char*         pGroup,
                                       const char*         pDescription,
                                       GPA_Data_Type       dataType,
                                       GPA_Usage_Type      usageType,
                                       vector<gpa_uint32>& internalCountersRequired,
                                       const char*         pComputeExpression,
                                       const char*         pUuid)
    : m_index(index)
    , m_pName(pName)
    , m_pGroup(pGroup)
    , m_pDescription(pDescription)
    , m_dataType(dataType)
    , m_usageType(usageType)
    , m_internalCountersRequired(internalCountersRequired)
    , m_pComputeExpression(pComputeExpression)
    , counter_info_(nullptr)
    , derived_counter_info_init_(false)
{
    uint32_t bytes[8];
#ifdef _WIN32
    sscanf_s(pUuid,
             "%08lX-%04hX-%04hX-%02X%02X-%02X%02X%02X%02X%02X%02X",
             &m_uuid.Data1,
             &m_uuid.Data2,
             &m_uuid.Data3,
             &bytes[0],
             &bytes[1],
             &bytes[2],
             &bytes[3],
             &bytes[4],
             &bytes[5],
             &bytes[6],
             &bytes[7]);

    for (int i = 0; i < _countof(bytes); ++i)
    {
        m_uuid.Data4[i] = static_cast<unsigned char>(bytes[i]);
    }

#else
    /*
    Autogenerated hash is MD5 hash which are fixed length of 128-bits (16 bytes).
    */
    uint32_t data1;
    static_assert(sizeof(short) == sizeof(uint16_t), "short is more than 2 bytes for UUID");
    sscanf(pUuid,
           "%08uiX-%04hX-%04hX-%02X%02X-%02X%02X%02X%02X%02X%02X",
           &data1,
           &m_uuid.m_data2,
           &m_uuid.m_data3,
           &bytes[0],
           &bytes[1],
           &bytes[2],
           &bytes[3],
           &bytes[4],
           &bytes[5],
           &bytes[6],
           &bytes[7]);

    /*
    m_data1 of GPA_UUID is a 'long' type which is 8 bytes on GCC/clang on Linux
    We need to copy 4 bytes of data1 to m_data1 until we update the GPA_UUID structure
    to match with standard MD5 struct. This change will be non-backward compatible
    change due to difference in ABI. It should be changed in GPA 4.0
    */
    memset(&m_uuid.m_data1, 0, sizeof(m_uuid.m_data1));
    memcpy(&m_uuid.m_data1, &data1, sizeof(uint32_t));

    for (size_t i = 0; i < (sizeof(bytes) / sizeof(bytes[0])); ++i)
    {
        m_uuid.m_data4[i] = static_cast<unsigned char>(bytes[i]);
    }

#endif
}

GPA_DerivedCounter::~GPA_DerivedCounter()
{
    if (nullptr != counter_info_)
    {
        delete counter_info_->gpa_derived_counter;
    }

    delete counter_info_;
}

bool GPA_DerivedCounter::InitializeDerivedCounterHardwareInfo(const IGPACounterAccessor* gpa_counter_accessor)
{
    bool counter_init = false;
    if (nullptr != counter_info_)
    {
        if (nullptr != counter_info_->gpa_derived_counter)
        {
            // the derived counter has already been initialized, return true
            counter_init = true;
        }
        else
        {
            counter_info_->gpa_derived_counter = new (std::nothrow) GpaDerivedCounterInfo();

            if (nullptr != counter_info_->gpa_derived_counter)
            {
                const GPA_HardwareCounters* hardware_counters = gpa_counter_accessor->GetHardwareCounters();

                for (auto iter = m_internalCountersRequired.cbegin(); iter != m_internalCountersRequired.cend(); ++iter)
                {
                    GpaHwCounter hw_counter;

                    if (hardware_counters->GetHardwareInfo(*iter, hw_counter))
                    {
                        hw_counter_info_list_.push_back(hw_counter);
                    }
                }

                if (!hw_counter_info_list_.empty())
                {
                    assert(m_internalCountersRequired.size() == hw_counter_info_list_.size());
                    counter_info_->is_derived_counter = true;
                    counter_info_->gpa_derived_counter->gpa_hw_counter_count = static_cast<gpa_uint32>(m_internalCountersRequired.size());
                    counter_info_->gpa_derived_counter->counter_usage_type   = m_usageType;
                    counter_info_->gpa_derived_counter->gpa_hw_counters      = hw_counter_info_list_.data();
                    counter_init                                             = true;
                }
            }
        }
    }

    return counter_init;
}

GpaCounterInfo* GPA_DerivedCounter::GetCounterInfo(const IGPACounterAccessor* gpa_counter_accessor)
{
    if (nullptr == counter_info_)
    {
        counter_info_ = new (std::nothrow) GpaCounterInfo();

        if (nullptr != counter_info_ && InitializeDerivedCounterHardwareInfo(gpa_counter_accessor))
        {
            derived_counter_info_init_ = true;
        }
    }

    if (derived_counter_info_init_)
    {
        return counter_info_;
    }

    return nullptr;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------

void GPA_DerivedCounters::DefineDerivedCounter(const char*         pName,
                                               const char*         pGroup,
                                               const char*         pDescription,
                                               GPA_Data_Type       dataType,
                                               GPA_Usage_Type      usageType,
                                               vector<gpa_uint32>& internalCountersRequired,
                                               const char*         pComputeExpression,
                                               const char*         pUuid)
{
    assert(pName);
    assert(pGroup);
    assert(pDescription);
    assert(dataType < GPA_DATA_TYPE__LAST);
    assert(!internalCountersRequired.empty());
    assert(pComputeExpression);
    assert(strlen(pComputeExpression) > 0);
    assert(pUuid);

    unsigned int index = static_cast<unsigned int>(m_counters.size());

#ifdef ANDROID
    if ((strcmp(pName, "LocalVidMemBytes") == 0) || (strcmp(pName, "PcieBytes") == 0))
    {
        return;
    }
#endif

    m_counters.push_back(GPA_DerivedCounter(index, pName, pGroup, pDescription, dataType, usageType, internalCountersRequired, pComputeExpression, pUuid));
}

void GPA_DerivedCounters::UpdateAsicSpecificDerivedCounter(const char* pName, vector<gpa_uint32>& internalCountersRequired, const char* pComputeExpression)
{
    for (auto& counter : m_counters)
    {
        if (!_strcmpi(pName, counter.m_pName))
        {
            counter.m_internalCountersRequired.clear();
            counter.m_internalCountersRequired = internalCountersRequired;
            counter.m_pComputeExpression       = pComputeExpression;
            return;
        }
    }

    // Errors aside, the counter will not be found if it's not supported on the ASIC
    // e.g.: there's a discrete counter version, but not an SPM version
    {
        std::stringstream o;
        o << "Warning: unable to find counter for ASIC-specific update:" << pName << ". This may be an unsupported SPM counter.";
        GPA_LogMessage(o.str().c_str());
    }
}

void GPA_DerivedCounters::Clear()
{
    m_counters.clear();
    m_countersGenerated = false;
}

gpa_uint32 GPA_DerivedCounters::GetNumCounters() const
{
    return static_cast<gpa_uint32>(m_counters.size());
}

#include "gpa_derived_counter_evaluator.inc"

GPA_Status GPA_DerivedCounters::ComputeCounterValue(gpa_uint32                       counterIndex,
                                                    const vector<const gpa_uint64*>& results,
                                                    vector<GPA_Data_Type>&           internalCounterTypes,
                                                    void*                            pResult,
                                                    const GPA_HWInfo*                pHwInfo) const
{
    if (nullptr == m_counters[counterIndex].m_pComputeExpression)
    {
        GPA_LogError("Unable to compute counter value: no equation specified.");
        return GPA_STATUS_ERROR_INVALID_COUNTER_EQUATION;
    }

#ifdef AMDT_INTERNAL
    GPA_LogDebugCounterDefs("'%s' equation is %s.", m_counters[counterIndex].m_pName, m_counters[counterIndex].m_pComputeExpression);
#endif

    GPA_Status status = GPA_STATUS_OK;

    if (internalCounterTypes[0] == GPA_DATA_TYPE_UINT64)
    {
        if (m_counters[counterIndex].m_dataType == GPA_DATA_TYPE_FLOAT64)
        {
            status = EvaluateExpression<gpa_float64, gpa_uint64>(
                m_counters[counterIndex].m_pComputeExpression, pResult, results, m_counters[counterIndex].m_dataType, pHwInfo);
        }
        else if (m_counters[counterIndex].m_dataType == GPA_DATA_TYPE_UINT64)
        {
            status = EvaluateExpression<gpa_uint64, gpa_uint64>(
                m_counters[counterIndex].m_pComputeExpression, pResult, results, m_counters[counterIndex].m_dataType, pHwInfo);
        }
        else
        {
            // derived counter type not recognized or not currently supported.
            GPA_LogError("Unable to compute counter value: unrecognized derived counter type.");
            assert(false);
        }
    }
    else
    {
        GPA_LogError("Unable to compute counter value: unrecognized derived counter type.");
        return GPA_STATUS_ERROR_INVALID_DATATYPE;
    }

    return status;
}
