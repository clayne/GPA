//==============================================================================
// Copyright (c) 2018-2020 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief CL GPA Session Implementation
//==============================================================================

#include "cl_gpa_session.h"
#include "cl_gpa_pass.h"

CLGPASession::CLGPASession(IGPAContext* pParentContext, GPA_Session_Sample_Type sampleType)
    : GPASession(pParentContext, sampleType)
{
}

GPA_API_Type CLGPASession::GetAPIType() const
{
    return GPA_API_OPENCL;
}

GPAPass* CLGPASession::CreateAPIPass(PassIndex passIndex)
{
    GPAPass* pRetPass = nullptr;

    CounterList*     passCounters  = GetCountersForPass(passIndex);
    GPACounterSource counterSource = GetParentContext()->GetCounterSource((*passCounters)[0]);

    CLGPAPass* pClPass = new (std::nothrow) CLGPAPass(this, passIndex, counterSource, passCounters);

    if (nullptr == pClPass)
    {
        GPA_LogError("Unable to allocate memory for the pass.");
    }
    else
    {
        pRetPass = pClPass;
    }

    return pRetPass;
}
