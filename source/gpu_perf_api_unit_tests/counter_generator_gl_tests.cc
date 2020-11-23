//==============================================================================
// Copyright (c) 2012-2020 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  Unit Tests for GL Counter Generator
//==============================================================================

#include "counter_generator_tests.h"
#include "gpu_perf_api_types.h"
#include "gpa_counter.h"

#include "counters/public_derived_counters_gl_gfx8.h"
#include "counters/public_derived_counters_gl_gfx9.h"
#include "counters/public_derived_counters_gl_gfx10.h"
#include "counters/public_derived_counters_gl_gfx103.h"

#ifdef AMDT_INTERNAL
#include "gpa_hw_counter_gl_gfx8.h"
#include "gpa_hw_counter_gl_gfx9.h"
#include "gpa_hw_counter_gl_gfx10.h"
#include "gpa_hw_counter_gl_gfx103.h"
#endif

static void GetExpectedCountersForGeneration(GPA_Hw_Generation gen, std::vector<const char*>& counterNames)
{
    counterNames.clear();

    const GPACounterDesc* pPublicCounters    = nullptr;
    size_t                publicCounterCount = 0;

    GPA_CounterGroupDesc*     pHardwareGroups    = nullptr;
    GPA_HardwareCounterDesc** ppHardwareCounters = nullptr;
    unsigned int              hwGroupCount       = 0;

    switch (gen)
    {
    case GPA_HW_GENERATION_GFX8:
        pPublicCounters    = GLGFX8_PUBLIC_COUNTERS;
        publicCounterCount = GLGFX8_PUBLIC_COUNTER_COUNT;
#ifdef AMDT_INTERNAL
        pHardwareGroups    = counter_gl_gfx8::hw_gl_groups_gfx8;
        hwGroupCount       = counter_gl_gfx8::hw_gl_group_count_gfx8;
        ppHardwareCounters = counter_gl_gfx8::gl_counter_group_array_gfx8;
#endif
        break;

    case GPA_HW_GENERATION_GFX9:
        pPublicCounters    = GLGFX9_PUBLIC_COUNTERS;
        publicCounterCount = GLGFX9_PUBLIC_COUNTER_COUNT;
#ifdef AMDT_INTERNAL
        pHardwareGroups    = counter_gl_gfx9::hw_gl_groups_gfx9;
        hwGroupCount       = counter_gl_gfx9::hw_gl_group_count_gfx9;
        ppHardwareCounters = counter_gl_gfx9::gl_counter_group_array_gfx9;
#endif
        break;

    case GPA_HW_GENERATION_GFX10:
        pPublicCounters    = GLGFX10_PUBLIC_COUNTERS;
        publicCounterCount = GLGFX10_PUBLIC_COUNTER_COUNT;
#ifdef AMDT_INTERNAL
        pHardwareGroups    = counter_gl_gfx10::hw_gl_groups_gfx10;
        hwGroupCount       = counter_gl_gfx10::hw_gl_group_count_gfx10;
        ppHardwareCounters = counter_gl_gfx10::gl_counter_group_array_gfx10;
#endif
        break;

    case GPA_HW_GENERATION_GFX103:
        pPublicCounters    = GLGFX103_PUBLIC_COUNTERS;
        publicCounterCount = GLGFX103_PUBLIC_COUNTER_COUNT;
#ifdef AMDT_INTERNAL
        pHardwareGroups    = counter_gl_gfx103::hw_gl_groups_gfx103;
        hwGroupCount       = counter_gl_gfx103::hw_gl_group_count_gfx103;
        ppHardwareCounters = counter_gl_gfx103::gl_counter_group_array_gfx103;
#endif
        break;

    default:
        break;
    }

    for (size_t i = 0; i < publicCounterCount; i++)
    {
        counterNames.push_back(pPublicCounters[i].m_pName);
    }

    // Optionally, get internal derived counters
    const GPACounterDesc* pInternalDerivedCounters    = nullptr;
    size_t                internalDerivedCounterCount = 0;

#ifdef AMDT_INTERNAL
    GPA_GetInternalDerivedCounters(GPA_API_OPENGL, gen, &pInternalDerivedCounters, &internalDerivedCounterCount);
#endif

    for (size_t i = 0; i < internalDerivedCounterCount; i++)
    {
        counterNames.push_back(pInternalDerivedCounters[i].m_pName);
    }

    for (unsigned int i = 0; i < hwGroupCount; i++)
    {
        for (unsigned int j = 0; j < pHardwareGroups[i].m_numCounters; j++)
        {
            counterNames.push_back(ppHardwareCounters[i][j].m_pName);
        }
    }
}

static std::vector<GPACounterDesc> GetExpectedPublicCounters(GPA_Hw_Generation gen)
{
    const GPACounterDesc* public_counters      = nullptr;
    size_t                public_counter_count = 0;

    switch (gen)
    {
    case GPA_HW_GENERATION_GFX8:
        public_counters      = GLGFX8_PUBLIC_COUNTERS;
        public_counter_count = GLGFX8_PUBLIC_COUNTER_COUNT;
        break;

    case GPA_HW_GENERATION_GFX9:
        public_counters      = GLGFX9_PUBLIC_COUNTERS;
        public_counter_count = GLGFX9_PUBLIC_COUNTER_COUNT;
        break;

    case GPA_HW_GENERATION_GFX10:
        public_counters      = GLGFX10_PUBLIC_COUNTERS;
        public_counter_count = GLGFX10_PUBLIC_COUNTER_COUNT;
        break;

    case GPA_HW_GENERATION_GFX103:
        public_counters      = GLGFX103_PUBLIC_COUNTERS;
        public_counter_count = GLGFX103_PUBLIC_COUNTER_COUNT;
        break;

    default:
        break;
    }

    std::vector<GPACounterDesc> public_counter_list;
    public_counter_list.reserve(public_counter_count);
    for (size_t i = 0; i < public_counter_count; i++)
    {
        public_counter_list.push_back(public_counters[i]);
    }

    return public_counter_list;
}

#ifdef _WIN32
// Test the OpenGL derived counter blocks
TEST(CounterDLLTests, OpenGLDerivedCounterBlocks)
{
    VerifyDerivedCounterCount(GPA_API_OPENGL, GPA_HW_GENERATION_GFX8, FALSE, GetExpectedPublicCounters(GPA_HW_GENERATION_GFX8));
    VerifyDerivedCounterCount(GPA_API_OPENGL, GPA_HW_GENERATION_GFX9, FALSE, GetExpectedPublicCounters(GPA_HW_GENERATION_GFX9));
    VerifyDerivedCounterCount(GPA_API_OPENGL, GPA_HW_GENERATION_GFX10, FALSE, GetExpectedPublicCounters(GPA_HW_GENERATION_GFX10));
    VerifyDerivedCounterCount(GPA_API_OPENGL, GPA_HW_GENERATION_GFX103, FALSE, GetExpectedPublicCounters(GPA_HW_GENERATION_GFX103));
}
#endif

// Test the OpenGL counter names on all supported hardware
TEST(CounterDLLTests, OpenGLCounterNames)
{
    VerifyHardwareNotSupported(GPA_API_OPENGL, gDevIdUnknown, FALSE);

    std::vector<const char*> counterNames;
    GetExpectedCountersForGeneration(GPA_HW_GENERATION_GFX8, counterNames);
    VerifyCounterNames(GPA_API_OPENGL, gDevIdVI, FALSE, counterNames);
    GetExpectedCountersForGeneration(GPA_HW_GENERATION_GFX9, counterNames);
    VerifyCounterNames(GPA_API_OPENGL, gDevIdGfx9, FALSE, counterNames);
    GetExpectedCountersForGeneration(GPA_HW_GENERATION_GFX10, counterNames);
    VerifyCounterNames(GPA_API_OPENGL, gDevIdGfx10, FALSE, counterNames);
    GetExpectedCountersForGeneration(GPA_HW_GENERATION_GFX103, counterNames);
    VerifyCounterNames(GPA_API_OPENGL, gDevIdGfx10_3, FALSE, counterNames);
}

// Test the OpenGL counter names on all generations
TEST(CounterDLLTests, OpenGLCounterNamesByGeneration)
{
    VerifyHardwareNotSupported(GPA_API_OPENGL, GPA_HW_GENERATION_NVIDIA, FALSE);
    VerifyHardwareNotSupported(GPA_API_OPENGL, GPA_HW_GENERATION_INTEL, FALSE);
    VerifyHardwareNotSupported(GPA_API_OPENGL, GPA_HW_GENERATION_GFX6, FALSE);
    VerifyHardwareNotSupported(GPA_API_OPENGL, GPA_HW_GENERATION_GFX7, FALSE);

    std::vector<const char*> counterNames;
    GetExpectedCountersForGeneration(GPA_HW_GENERATION_GFX8, counterNames);
    VerifyCounterNames(GPA_API_OPENGL, GPA_HW_GENERATION_GFX8, FALSE, counterNames);
    GetExpectedCountersForGeneration(GPA_HW_GENERATION_GFX9, counterNames);
    VerifyCounterNames(GPA_API_OPENGL, GPA_HW_GENERATION_GFX9, FALSE, counterNames);
    GetExpectedCountersForGeneration(GPA_HW_GENERATION_GFX10, counterNames);
    VerifyCounterNames(GPA_API_OPENGL, GPA_HW_GENERATION_GFX10, FALSE, counterNames);
    GetExpectedCountersForGeneration(GPA_HW_GENERATION_GFX103, counterNames);
    VerifyCounterNames(GPA_API_OPENGL, GPA_HW_GENERATION_GFX103, FALSE, counterNames);
}

#ifdef _WIN32
TEST(CounterDLLTests, GlCounterLibTest)
{
    VerifyCounterLibInterface(GPA_API_OPENGL, gDevIdVI, REVISION_ID_ANY, false);
    VerifyCounterLibInterface(GPA_API_OPENGL, gDevIdGfx9, REVISION_ID_ANY, false);
    VerifyCounterLibInterface(GPA_API_OPENGL, gDevIdGfx10, REVISION_ID_ANY, false);
    VerifyCounterLibInterface(GPA_API_OPENGL, gDevIdGfx10_3, REVISION_ID_ANY, false);
    VerifyCounterByPassCounterLibEntry(GPA_API_OPENGL, gDevIdGfx9, REVISION_ID_ANY, false);
    VerifyCounterByPassCounterLibEntry(GPA_API_OPENGL, gDevIdGfx10, REVISION_ID_ANY, false);
}
#endif

TEST(CounterDLLTests, GLCounterFormulaTest)
{
    std::vector<const char*> counterNames;
    VerifyCounterFormula(GetExpectedPublicCounters(GPA_HW_GENERATION_GFX8));
    VerifyCounterFormula(GetExpectedPublicCounters(GPA_HW_GENERATION_GFX9));
    VerifyCounterFormula(GetExpectedPublicCounters(GPA_HW_GENERATION_GFX10));
    VerifyCounterFormula(GetExpectedPublicCounters(GPA_HW_GENERATION_GFX103));
}