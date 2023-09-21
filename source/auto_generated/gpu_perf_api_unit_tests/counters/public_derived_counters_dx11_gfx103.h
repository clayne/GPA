//==============================================================================
// Copyright (c) 2015-2023 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief PublicCounterDefinitions for DX11 GFX103 for testing.
//==============================================================================

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

#ifndef GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_DX11_GFX103
#define GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_DX11_GFX103

#include "gpu_perf_api_unit_tests/counters/gpa_counter_desc.h"

/// Macros for DX11Gfx103 Public counter index
#define GPUTIME_PUBLIC_DX11_GFX103 0
#define GPUBUSY_PUBLIC_DX11_GFX103 1
#define GPUBUSYCYCLES_PUBLIC_DX11_GFX103 2
#define TESSELLATORBUSY_PUBLIC_DX11_GFX103 3
#define TESSELLATORBUSYCYCLES_PUBLIC_DX11_GFX103 4
#define VSGSBUSY_PUBLIC_DX11_GFX103 5
#define VSGSBUSYCYCLES_PUBLIC_DX11_GFX103 6
#define VSGSTIME_PUBLIC_DX11_GFX103 7
#define PRETESSELLATIONBUSY_PUBLIC_DX11_GFX103 8
#define PRETESSELLATIONBUSYCYCLES_PUBLIC_DX11_GFX103 9
#define PRETESSELLATIONTIME_PUBLIC_DX11_GFX103 10
#define POSTTESSELLATIONBUSY_PUBLIC_DX11_GFX103 11
#define POSTTESSELLATIONBUSYCYCLES_PUBLIC_DX11_GFX103 12
#define POSTTESSELLATIONTIME_PUBLIC_DX11_GFX103 13
#define PSBUSY_PUBLIC_DX11_GFX103 14
#define PSBUSYCYCLES_PUBLIC_DX11_GFX103 15
#define PSTIME_PUBLIC_DX11_GFX103 16
#define CSBUSY_PUBLIC_DX11_GFX103 17
#define CSBUSYCYCLES_PUBLIC_DX11_GFX103 18
#define CSTIME_PUBLIC_DX11_GFX103 19
#define VSGSVERTICESIN_PUBLIC_DX11_GFX103 20
#define VSGSPRIMSIN_PUBLIC_DX11_GFX103 21
#define GSVERTICESOUT_PUBLIC_DX11_GFX103 22
#define PRETESSVERTICESIN_PUBLIC_DX11_GFX103 23
#define POSTTESSPRIMSOUT_PUBLIC_DX11_GFX103 24
#define PRIMITIVEASSEMBLYBUSY_PUBLIC_DX11_GFX103 25
#define PRIMITIVEASSEMBLYBUSYCYCLES_PUBLIC_DX11_GFX103 26
#define PRIMITIVESIN_PUBLIC_DX11_GFX103 27
#define CULLEDPRIMS_PUBLIC_DX11_GFX103 28
#define CLIPPEDPRIMS_PUBLIC_DX11_GFX103 29
#define PASTALLEDONRASTERIZER_PUBLIC_DX11_GFX103 30
#define PASTALLEDONRASTERIZERCYCLES_PUBLIC_DX11_GFX103 31
#define PSPIXELSOUT_PUBLIC_DX11_GFX103 32
#define PSEXPORTSTALLS_PUBLIC_DX11_GFX103 33
#define PSEXPORTSTALLSCYCLES_PUBLIC_DX11_GFX103 34
#define CSTHREADGROUPS_PUBLIC_DX11_GFX103 35
#define CSWAVEFRONTS_PUBLIC_DX11_GFX103 36
#define CSTHREADS_PUBLIC_DX11_GFX103 37
#define CSTHREADGROUPSIZE_PUBLIC_DX11_GFX103 38
#define CSMEMUNITBUSY_PUBLIC_DX11_GFX103 39
#define CSMEMUNITBUSYCYCLES_PUBLIC_DX11_GFX103 40
#define CSMEMUNITSTALLED_PUBLIC_DX11_GFX103 41
#define CSMEMUNITSTALLEDCYCLES_PUBLIC_DX11_GFX103 42
#define CSWRITEUNITSTALLED_PUBLIC_DX11_GFX103 43
#define CSWRITEUNITSTALLEDCYCLES_PUBLIC_DX11_GFX103 44
#define CSGDSINSTS_PUBLIC_DX11_GFX103 45
#define CSLDSINSTS_PUBLIC_DX11_GFX103 46
#define CSALUSTALLEDBYLDS_PUBLIC_DX11_GFX103 47
#define CSALUSTALLEDBYLDSCYCLES_PUBLIC_DX11_GFX103 48
#define CSLDSBANKCONFLICT_PUBLIC_DX11_GFX103 49
#define CSLDSBANKCONFLICTCYCLES_PUBLIC_DX11_GFX103 50
#define TEXUNITBUSY_PUBLIC_DX11_GFX103 51
#define TEXUNITBUSYCYCLES_PUBLIC_DX11_GFX103 52
#define TEXTRIFILTERINGPCT_PUBLIC_DX11_GFX103 53
#define TEXTRIFILTERINGCOUNT_PUBLIC_DX11_GFX103 54
#define NOTEXTRIFILTERINGCOUNT_PUBLIC_DX11_GFX103 55
#define TEXVOLFILTERINGPCT_PUBLIC_DX11_GFX103 56
#define TEXVOLFILTERINGCOUNT_PUBLIC_DX11_GFX103 57
#define NOTEXVOLFILTERINGCOUNT_PUBLIC_DX11_GFX103 58
#define TEXAVEANISOTROPY_PUBLIC_DX11_GFX103 59
#define DEPTHSTENCILTESTBUSY_PUBLIC_DX11_GFX103 60
#define DEPTHSTENCILTESTBUSYCYCLES_PUBLIC_DX11_GFX103 61
#define HIZTILESACCEPTED_PUBLIC_DX11_GFX103 62
#define HIZTILESACCEPTEDCOUNT_PUBLIC_DX11_GFX103 63
#define HIZTILESREJECTEDCOUNT_PUBLIC_DX11_GFX103 64
#define PREZTILESDETAILCULLED_PUBLIC_DX11_GFX103 65
#define PREZTILESDETAILCULLEDCOUNT_PUBLIC_DX11_GFX103 66
#define PREZTILESDETAILSURVIVINGCOUNT_PUBLIC_DX11_GFX103 67
#define HIZQUADSCULLED_PUBLIC_DX11_GFX103 68
#define HIZQUADSCULLEDCOUNT_PUBLIC_DX11_GFX103 69
#define HIZQUADSACCEPTEDCOUNT_PUBLIC_DX11_GFX103 70
#define PREZQUADSCULLED_PUBLIC_DX11_GFX103 71
#define PREZQUADSCULLEDCOUNT_PUBLIC_DX11_GFX103 72
#define PREZQUADSSURVIVINGCOUNT_PUBLIC_DX11_GFX103 73
#define POSTZQUADS_PUBLIC_DX11_GFX103 74
#define POSTZQUADCOUNT_PUBLIC_DX11_GFX103 75
#define PREZSAMPLESPASSING_PUBLIC_DX11_GFX103 76
#define PREZSAMPLESFAILINGS_PUBLIC_DX11_GFX103 77
#define PREZSAMPLESFAILINGZ_PUBLIC_DX11_GFX103 78
#define POSTZSAMPLESPASSING_PUBLIC_DX11_GFX103 79
#define POSTZSAMPLESFAILINGS_PUBLIC_DX11_GFX103 80
#define POSTZSAMPLESFAILINGZ_PUBLIC_DX11_GFX103 81
#define ZUNITSTALLED_PUBLIC_DX11_GFX103 82
#define ZUNITSTALLEDCYCLES_PUBLIC_DX11_GFX103 83
#define DBMEMREAD_PUBLIC_DX11_GFX103 84
#define DBMEMWRITTEN_PUBLIC_DX11_GFX103 85
#define CBMEMREAD_PUBLIC_DX11_GFX103 86
#define CBCOLORANDMASKREAD_PUBLIC_DX11_GFX103 87
#define CBMEMWRITTEN_PUBLIC_DX11_GFX103 88
#define CBCOLORANDMASKWRITTEN_PUBLIC_DX11_GFX103 89
#define CBSLOWPIXELPCT_PUBLIC_DX11_GFX103 90
#define CBSLOWPIXELCOUNT_PUBLIC_DX11_GFX103 91
#define L0CACHEHIT_PUBLIC_DX11_GFX103 92
#define L0CACHEREQUESTCOUNT_PUBLIC_DX11_GFX103 93
#define L0CACHEHITCOUNT_PUBLIC_DX11_GFX103 94
#define L0CACHEMISSCOUNT_PUBLIC_DX11_GFX103 95
#define L1CACHEHIT_PUBLIC_DX11_GFX103 96
#define L1CACHEREQUESTCOUNT_PUBLIC_DX11_GFX103 97
#define L1CACHEHITCOUNT_PUBLIC_DX11_GFX103 98
#define L1CACHEMISSCOUNT_PUBLIC_DX11_GFX103 99
#define L2CACHEHIT_PUBLIC_DX11_GFX103 100
#define L2CACHEMISS_PUBLIC_DX11_GFX103 101
#define L2CACHEREQUESTCOUNT_PUBLIC_DX11_GFX103 102
#define L2CACHEHITCOUNT_PUBLIC_DX11_GFX103 103
#define L2CACHEMISSCOUNT_PUBLIC_DX11_GFX103 104
#define L0TAGCONFLICTREADSTALLEDCYCLES_PUBLIC_DX11_GFX103 105
#define L0TAGCONFLICTWRITESTALLEDCYCLES_PUBLIC_DX11_GFX103 106
#define L0TAGCONFLICTATOMICSTALLEDCYCLES_PUBLIC_DX11_GFX103 107
#define FETCHSIZE_PUBLIC_DX11_GFX103 108
#define WRITESIZE_PUBLIC_DX11_GFX103 109
#define MEMUNITBUSY_PUBLIC_DX11_GFX103 110
#define MEMUNITBUSYCYCLES_PUBLIC_DX11_GFX103 111
#define MEMUNITSTALLED_PUBLIC_DX11_GFX103 112
#define MEMUNITSTALLEDCYCLES_PUBLIC_DX11_GFX103 113
#define WRITEUNITSTALLED_PUBLIC_DX11_GFX103 114
#define WRITEUNITSTALLEDCYCLES_PUBLIC_DX11_GFX103 115

/// Number of public counters for DX11 GFX103 
const size_t kDx11Gfx103PublicCounterCount = 116;

/// Array of public counters for DX11 GFX103 
extern const GpaCounterDesc kDx11Gfx103PublicCounters[kDx11Gfx103PublicCounterCount];

#endif  // GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_DX11_GFX103
