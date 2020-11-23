//==============================================================================
// Copyright (c) 2010-2020 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  GL counter definitions for GFX10
//==============================================================================

// This file is autogenerated by the ConvertHWEnums project

#ifndef _GPA_HW_COUNTER_GL_GFX10_H_
#define _GPA_HW_COUNTER_GL_GFX10_H_

// clang-format off

#include <set>

struct GPA_HardwareCounterDesc;
struct GPA_CounterGroupDesc;
struct GPA_SQCounterGroupDesc;

namespace counter_gl_gfx10
{
    extern GPA_HardwareCounterDesc*           gl_counter_group_array_gfx10[]; ///< Array of hardware counter groups for gl for gfx10 family
    extern GPA_HardwareCounterDesc*           gl_exposed_counters_group_array_gfx10[]; ///< Array of hardware exposed counter groups for gl for gfx10 family
    extern GPA_CounterGroupDesc               hw_gl_groups_gfx10[]; ///< Array of counter groups for gl for gfx10 family
    extern GPA_CounterGroupExposedCounterDesc hw_gl_exposed_counters_by_group_gfx10[]; ///< Array of exposed counter groups for gl for gfx10 family
    extern GPA_PaddedCounterDesc              gl_padded_counter_by_group_gfx10[]; ///< Array of reserved counter for gl for gfx10 family
    extern GPA_SQCounterGroupDesc             hw_gl_sq_groups_gfx10[]; ///< Array of SQ groups for gl for gfx10 family
    extern unsigned int                       hw_gl_sq_isolated_groups_gfx10[]; ///< Array of counter groups isolated from SQ counter groups for gl for gfx10 family
    extern const unsigned int                 hw_gl_gputimebottomtobottomduration_index_gfx10; ///< Index of delta between the previous command reaching bottom of pipe and the current command reaching bottom of pipe, will not include latency of first data to travel through pipeline, best for large data sets. for gl for gfx10 family
    extern const unsigned int                 hw_gl_gputimebottomtobottomstart_index_gfx10; ///< Index of time of the previous command reaching bottom of pipe for gl for gfx10 family
    extern const unsigned int                 hw_gl_gputimebottomtobottomend_index_gfx10; ///< Index of time of the current command reaching bottom of pipe for gl for gfx10 family
    extern const unsigned int                 hw_gl_gputimetoptobottomduration_index_gfx10; ///< Index of execution duration of the current command from top of pipe to bottom of pipe, may include overhead of time in queue for gl for gfx10 family
    extern const unsigned int                 hw_gl_gputimetoptobottomstart_index_gfx10; ///< Index of time that the current command reaches the top of pipe for gl for gfx10 family
    extern const unsigned int                 hw_gl_gputimetoptobottomend_index_gfx10; ///< Index of time that the current command reaches the bottom of pipe for gl for gfx10 family
    extern const std::set<unsigned int>       hw_gl_timestamp_block_ids_gfx10; ///< Timestamp block id's for gl for gfx10 family
    extern const std::set<unsigned int>       hw_gl_time_counter_indices_gfx10; ///< Timestamp counter indices for gl for gfx10 family
    extern const unsigned int                 hw_gl_group_count_gfx10; ///< Hardware Group Count for gl for gfx10 family
    extern const unsigned int                 hw_gl_exposed_counters_group_count_gfx10; ///< Whitelist hardware counter Group Count for gl for gfx10 family
    extern const unsigned int                 gl_padded_counter_group_count_gfx10; ///< reserved counter group count for gl for gfx10 family
    extern const unsigned int                 hw_gl_sq_group_count_gfx10; ///< Hardware SQ Group Count for gl for gfx10 family
    extern const unsigned int                 hw_gl_sq_isolated_group_count_gfx10; ///< Hardware Isolated Group Count for gl for gfx10 family

/// If the requested ASIC type is supported, then the global GPU generation block instance counters are updated.
/// \param asic_type The ASIC type that is currently in use.
/// \return True if the ASIC is matched by this file and block instances are updated, otherwise false.
inline bool OverrideMaxBlockEvents(GDT_HW_ASIC_TYPE asic_type)
{
    UNREFERENCED_PARAMETER(asic_type);


    return true;
}
} //  namespace counter_gl_gfx10

// clang-format on

#endif  // _GPA_HW_COUNTER_GL_GFX10_H_
