//==============================================================================
// Copyright (c) 2010-2025 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief Public Counter Definitions ASIC file for OGLP_GFX103
//==============================================================================

#ifndef GPA_AUTO_GEN_COUNTER_GEN_PUBLIC_COUNTER_DEFINITIONS_OGLP_GFX103_ASICS_H_
#define GPA_AUTO_GEN_COUNTER_GEN_PUBLIC_COUNTER_DEFINITIONS_OGLP_GFX103_ASICS_H_

//*** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

#include "gpu_perf_api_counter_generator/gpa_derived_counter.h"

#include "auto_generated/gpu_perf_api_counter_generator/gpa_hw_counter_oglp_gfx103.h"

#include "auto_generated/gpu_perf_api_counter_generator/public_counter_definitions_oglp_gfx103_gfx1031_gfx1032.h"
#include "auto_generated/gpu_perf_api_counter_generator/public_counter_definitions_oglp_gfx103_gfx1033.h"

namespace oglp_gfx103_asics
{
    /// @brief Updates default GPU generation derived counters with ASIC specific derived counters if available.
    ///
    /// @param [in] desired_generation Hardware generation currently in use.
    /// @param [in] asic_type The ASIC type that is currently in use.
    /// @param [out] c Returned set of derived counters, if available.
    ///
    /// @return True if the ASIC matched one available, and c was updated.
    inline void UpdatePublicAsicSpecificCounters(GDT_HW_GENERATION desired_generation, GDT_HW_ASIC_TYPE asic_type, GpaDerivedCounters& c)
    {
        if (oglp_gfx103_gfx1031_gfx1032::UpdatePublicAsicSpecificCounters(desired_generation, asic_type, c))
        {
            return;
        }

        if (oglp_gfx103_gfx1033::UpdatePublicAsicSpecificCounters(desired_generation, asic_type, c))
        {
            return;
        }

    }

}  // namespace oglp_gfx103asics

#endif  // GPA_AUTO_GEN_COUNTER_GEN_PUBLIC_COUNTER_DEFINITIONS_OGLP_GFX103_ASICS_H_
