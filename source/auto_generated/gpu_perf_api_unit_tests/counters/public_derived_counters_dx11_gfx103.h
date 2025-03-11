//==============================================================================
// Copyright (c) 2015-2025 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief PublicCounterDefinitions for DX11 GFX103 for testing.
//==============================================================================

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

#ifndef GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_DX11_GFX103
#define GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_DX11_GFX103

#include "gpu_perf_api_unit_tests/counters/gpa_counter_desc.h"

/// Macros for DX11Gfx103 Public counter index
// clang-format off
#define DISCRETE_GPUTIME_PUBLIC_DX11_GFX103 0
#define DISCRETE_GPUBUSY_PUBLIC_DX11_GFX103 1
#define DISCRETE_GPUBUSYCYCLES_PUBLIC_DX11_GFX103 2
#define DISCRETE_TESSELLATORBUSY_PUBLIC_DX11_GFX103 3
#define DISCRETE_TESSELLATORBUSYCYCLES_PUBLIC_DX11_GFX103 4
#define DISCRETE_VSGSBUSY_PUBLIC_DX11_GFX103 5
#define DISCRETE_VSGSBUSYCYCLES_PUBLIC_DX11_GFX103 6
#define DISCRETE_VSGSTIME_PUBLIC_DX11_GFX103 7
#define DISCRETE_PRETESSELLATIONBUSY_PUBLIC_DX11_GFX103 8
#define DISCRETE_PRETESSELLATIONBUSYCYCLES_PUBLIC_DX11_GFX103 9
#define DISCRETE_PRETESSELLATIONTIME_PUBLIC_DX11_GFX103 10
#define DISCRETE_POSTTESSELLATIONBUSY_PUBLIC_DX11_GFX103 11
#define DISCRETE_POSTTESSELLATIONBUSYCYCLES_PUBLIC_DX11_GFX103 12
#define DISCRETE_POSTTESSELLATIONTIME_PUBLIC_DX11_GFX103 13
#define DISCRETE_PSBUSY_PUBLIC_DX11_GFX103 14
#define DISCRETE_PSBUSYCYCLES_PUBLIC_DX11_GFX103 15
#define DISCRETE_PSTIME_PUBLIC_DX11_GFX103 16
#define DISCRETE_CSBUSY_PUBLIC_DX11_GFX103 17
#define DISCRETE_CSBUSYCYCLES_PUBLIC_DX11_GFX103 18
#define DISCRETE_CSTIME_PUBLIC_DX11_GFX103 19
#define DISCRETE_GSVERTICESOUT_PUBLIC_DX11_GFX103 20
#define DISCRETE_VSGSVALUINSTCOUNT_PUBLIC_DX11_GFX103 21
#define DISCRETE_VSGSSALUINSTCOUNT_PUBLIC_DX11_GFX103 22
#define DISCRETE_VSGSVALUBUSY_PUBLIC_DX11_GFX103 23
#define DISCRETE_VSGSVALUBUSYCYCLES_PUBLIC_DX11_GFX103 24
#define DISCRETE_VSGSSALUBUSY_PUBLIC_DX11_GFX103 25
#define DISCRETE_VSGSSALUBUSYCYCLES_PUBLIC_DX11_GFX103 26
#define DISCRETE_PRETESSVALUINSTCOUNT_PUBLIC_DX11_GFX103 27
#define DISCRETE_PRETESSSALUINSTCOUNT_PUBLIC_DX11_GFX103 28
#define DISCRETE_PRETESSVALUBUSY_PUBLIC_DX11_GFX103 29
#define DISCRETE_PRETESSVALUBUSYCYCLES_PUBLIC_DX11_GFX103 30
#define DISCRETE_PRETESSSALUBUSY_PUBLIC_DX11_GFX103 31
#define DISCRETE_PRETESSSALUBUSYCYCLES_PUBLIC_DX11_GFX103 32
#define DISCRETE_PRETESSVERTICESIN_PUBLIC_DX11_GFX103 33
#define DISCRETE_POSTTESSPRIMSOUT_PUBLIC_DX11_GFX103 34
#define DISCRETE_POSTTESSVALUINSTCOUNT_PUBLIC_DX11_GFX103 35
#define DISCRETE_POSTTESSSALUINSTCOUNT_PUBLIC_DX11_GFX103 36
#define DISCRETE_POSTTESSVALUBUSY_PUBLIC_DX11_GFX103 37
#define DISCRETE_POSTTESSVALUBUSYCYCLES_PUBLIC_DX11_GFX103 38
#define DISCRETE_POSTTESSSALUBUSY_PUBLIC_DX11_GFX103 39
#define DISCRETE_POSTTESSSALUBUSYCYCLES_PUBLIC_DX11_GFX103 40
#define DISCRETE_PRIMITIVEASSEMBLYBUSY_PUBLIC_DX11_GFX103 41
#define DISCRETE_PRIMITIVEASSEMBLYBUSYCYCLES_PUBLIC_DX11_GFX103 42
#define DISCRETE_PRIMITIVESIN_PUBLIC_DX11_GFX103 43
#define DISCRETE_CULLEDPRIMS_PUBLIC_DX11_GFX103 44
#define DISCRETE_CLIPPEDPRIMS_PUBLIC_DX11_GFX103 45
#define DISCRETE_PASTALLEDONRASTERIZER_PUBLIC_DX11_GFX103 46
#define DISCRETE_PASTALLEDONRASTERIZERCYCLES_PUBLIC_DX11_GFX103 47
#define DISCRETE_PSPIXELSOUT_PUBLIC_DX11_GFX103 48
#define DISCRETE_PSEXPORTSTALLS_PUBLIC_DX11_GFX103 49
#define DISCRETE_PSEXPORTSTALLSCYCLES_PUBLIC_DX11_GFX103 50
#define DISCRETE_CSTHREADGROUPSLAUNCHED_PUBLIC_DX11_GFX103 51
#define DISCRETE_CSWAVEFRONTSLAUNCHED_PUBLIC_DX11_GFX103 52
#define DISCRETE_CSTHREADSLAUNCHED_PUBLIC_DX11_GFX103 53
#define DISCRETE_CSTHREADGROUPSIZE_PUBLIC_DX11_GFX103 54
#define DISCRETE_CSVALUINSTS_PUBLIC_DX11_GFX103 55
#define DISCRETE_CSVALUUTILIZATION_PUBLIC_DX11_GFX103 56
#define DISCRETE_CSSALUINSTS_PUBLIC_DX11_GFX103 57
#define DISCRETE_CSVFETCHINSTS_PUBLIC_DX11_GFX103 58
#define DISCRETE_CSSFETCHINSTS_PUBLIC_DX11_GFX103 59
#define DISCRETE_CSVWRITEINSTS_PUBLIC_DX11_GFX103 60
#define DISCRETE_CSGDSINSTS_PUBLIC_DX11_GFX103 61
#define DISCRETE_CSLDSINSTS_PUBLIC_DX11_GFX103 62
#define DISCRETE_CSALUSTALLEDBYLDS_PUBLIC_DX11_GFX103 63
#define DISCRETE_CSALUSTALLEDBYLDSCYCLES_PUBLIC_DX11_GFX103 64
#define DISCRETE_CSLDSBANKCONFLICT_PUBLIC_DX11_GFX103 65
#define DISCRETE_CSLDSBANKCONFLICTCYCLES_PUBLIC_DX11_GFX103 66
#define DISCRETE_TEXUNITBUSY_PUBLIC_DX11_GFX103 67
#define DISCRETE_TEXUNITBUSYCYCLES_PUBLIC_DX11_GFX103 68
#define DISCRETE_TEXTRIFILTERINGPCT_PUBLIC_DX11_GFX103 69
#define DISCRETE_TEXTRIFILTERINGCOUNT_PUBLIC_DX11_GFX103 70
#define DISCRETE_NOTEXTRIFILTERINGCOUNT_PUBLIC_DX11_GFX103 71
#define DISCRETE_TEXVOLFILTERINGPCT_PUBLIC_DX11_GFX103 72
#define DISCRETE_TEXVOLFILTERINGCOUNT_PUBLIC_DX11_GFX103 73
#define DISCRETE_NOTEXVOLFILTERINGCOUNT_PUBLIC_DX11_GFX103 74
#define DISCRETE_TEXAVEANISOTROPY_PUBLIC_DX11_GFX103 75
#define DISCRETE_DEPTHSTENCILTESTBUSY_PUBLIC_DX11_GFX103 76
#define DISCRETE_DEPTHSTENCILTESTBUSYCYCLES_PUBLIC_DX11_GFX103 77
#define DISCRETE_HIZTILESACCEPTED_PUBLIC_DX11_GFX103 78
#define DISCRETE_HIZTILESACCEPTEDCOUNT_PUBLIC_DX11_GFX103 79
#define DISCRETE_HIZTILESREJECTEDCOUNT_PUBLIC_DX11_GFX103 80
#define DISCRETE_PREZTILESDETAILCULLED_PUBLIC_DX11_GFX103 81
#define DISCRETE_PREZTILESDETAILCULLEDCOUNT_PUBLIC_DX11_GFX103 82
#define DISCRETE_PREZTILESDETAILSURVIVINGCOUNT_PUBLIC_DX11_GFX103 83
#define DISCRETE_HIZQUADSCULLED_PUBLIC_DX11_GFX103 84
#define DISCRETE_HIZQUADSCULLEDCOUNT_PUBLIC_DX11_GFX103 85
#define DISCRETE_HIZQUADSACCEPTEDCOUNT_PUBLIC_DX11_GFX103 86
#define DISCRETE_PREZQUADSCULLED_PUBLIC_DX11_GFX103 87
#define DISCRETE_PREZQUADSCULLEDCOUNT_PUBLIC_DX11_GFX103 88
#define DISCRETE_PREZQUADSSURVIVINGCOUNT_PUBLIC_DX11_GFX103 89
#define DISCRETE_POSTZQUADS_PUBLIC_DX11_GFX103 90
#define DISCRETE_POSTZQUADCOUNT_PUBLIC_DX11_GFX103 91
#define DISCRETE_PREZSAMPLESPASSING_PUBLIC_DX11_GFX103 92
#define DISCRETE_PREZSAMPLESFAILINGS_PUBLIC_DX11_GFX103 93
#define DISCRETE_PREZSAMPLESFAILINGZ_PUBLIC_DX11_GFX103 94
#define DISCRETE_POSTZSAMPLESPASSING_PUBLIC_DX11_GFX103 95
#define DISCRETE_POSTZSAMPLESFAILINGS_PUBLIC_DX11_GFX103 96
#define DISCRETE_POSTZSAMPLESFAILINGZ_PUBLIC_DX11_GFX103 97
#define DISCRETE_ZUNITSTALLED_PUBLIC_DX11_GFX103 98
#define DISCRETE_ZUNITSTALLEDCYCLES_PUBLIC_DX11_GFX103 99
#define DISCRETE_DBMEMREAD_PUBLIC_DX11_GFX103 100
#define DISCRETE_DBMEMWRITTEN_PUBLIC_DX11_GFX103 101
#define DISCRETE_CBMEMREAD_PUBLIC_DX11_GFX103 102
#define DISCRETE_CBCOLORANDMASKREAD_PUBLIC_DX11_GFX103 103
#define DISCRETE_CBMEMWRITTEN_PUBLIC_DX11_GFX103 104
#define DISCRETE_CBCOLORANDMASKWRITTEN_PUBLIC_DX11_GFX103 105
#define DISCRETE_CBSLOWPIXELPCT_PUBLIC_DX11_GFX103 106
#define DISCRETE_CBSLOWPIXELCOUNT_PUBLIC_DX11_GFX103 107
#define DISCRETE_L0CACHEHIT_PUBLIC_DX11_GFX103 108
#define DISCRETE_L0CACHEREQUESTCOUNT_PUBLIC_DX11_GFX103 109
#define DISCRETE_L0CACHEHITCOUNT_PUBLIC_DX11_GFX103 110
#define DISCRETE_L0CACHEMISSCOUNT_PUBLIC_DX11_GFX103 111
#define DISCRETE_L1CACHEHIT_PUBLIC_DX11_GFX103 112
#define DISCRETE_L1CACHEREQUESTCOUNT_PUBLIC_DX11_GFX103 113
#define DISCRETE_L1CACHEHITCOUNT_PUBLIC_DX11_GFX103 114
#define DISCRETE_L1CACHEMISSCOUNT_PUBLIC_DX11_GFX103 115
#define DISCRETE_L2CACHEHIT_PUBLIC_DX11_GFX103 116
#define DISCRETE_L2CACHEMISS_PUBLIC_DX11_GFX103 117
#define DISCRETE_L2CACHEREQUESTCOUNT_PUBLIC_DX11_GFX103 118
#define DISCRETE_L2CACHEHITCOUNT_PUBLIC_DX11_GFX103 119
#define DISCRETE_L2CACHEMISSCOUNT_PUBLIC_DX11_GFX103 120
#define DISCRETE_L0TAGCONFLICTREADSTALLEDCYCLES_PUBLIC_DX11_GFX103 121
#define DISCRETE_L0TAGCONFLICTWRITESTALLEDCYCLES_PUBLIC_DX11_GFX103 122
#define DISCRETE_L0TAGCONFLICTATOMICSTALLEDCYCLES_PUBLIC_DX11_GFX103 123
#define DISCRETE_FETCHSIZE_PUBLIC_DX11_GFX103 124
#define DISCRETE_WRITESIZE_PUBLIC_DX11_GFX103 125
#define DISCRETE_MEMUNITBUSY_PUBLIC_DX11_GFX103 126
#define DISCRETE_MEMUNITBUSYCYCLES_PUBLIC_DX11_GFX103 127
#define DISCRETE_MEMUNITSTALLED_PUBLIC_DX11_GFX103 128
#define DISCRETE_MEMUNITSTALLEDCYCLES_PUBLIC_DX11_GFX103 129
#define DISCRETE_WRITEUNITSTALLED_PUBLIC_DX11_GFX103 130
#define DISCRETE_WRITEUNITSTALLEDCYCLES_PUBLIC_DX11_GFX103 131

/// Number of public counters for DX11 GFX103 
const size_t kDx11Gfx103PublicCounterCount = 132;

/// Array of public counters for DX11 GFX103 
extern const GpaCounterDesc kDx11Gfx103PublicCounters[kDx11Gfx103PublicCounterCount];

// clang-format on
#endif  // GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_DX11_GFX103
