//==============================================================================
// Copyright (c) 2015-2023 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief PublicCounterDefinitions for GL GFX9 for testing.
//==============================================================================

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

#ifndef GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_GL_GFX9
#define GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_GL_GFX9

#include "gpu_perf_api_unit_tests/counters/gpa_counter_desc.h"

/// Macros for GLGfx9 Public counter index
#define GPUTIME_PUBLIC_GL_GFX9 0
#define GPUBUSY_PUBLIC_GL_GFX9 1
#define GPUBUSYCYCLES_PUBLIC_GL_GFX9 2
#define TESSELLATORBUSY_PUBLIC_GL_GFX9 3
#define TESSELLATORBUSYCYCLES_PUBLIC_GL_GFX9 4
#define VSGSBUSY_PUBLIC_GL_GFX9 5
#define VSGSBUSYCYCLES_PUBLIC_GL_GFX9 6
#define VSGSTIME_PUBLIC_GL_GFX9 7
#define PRETESSELLATIONBUSY_PUBLIC_GL_GFX9 8
#define PRETESSELLATIONBUSYCYCLES_PUBLIC_GL_GFX9 9
#define PRETESSELLATIONTIME_PUBLIC_GL_GFX9 10
#define POSTTESSELLATIONBUSY_PUBLIC_GL_GFX9 11
#define POSTTESSELLATIONBUSYCYCLES_PUBLIC_GL_GFX9 12
#define POSTTESSELLATIONTIME_PUBLIC_GL_GFX9 13
#define PSBUSY_PUBLIC_GL_GFX9 14
#define PSBUSYCYCLES_PUBLIC_GL_GFX9 15
#define PSTIME_PUBLIC_GL_GFX9 16
#define CSBUSY_PUBLIC_GL_GFX9 17
#define CSBUSYCYCLES_PUBLIC_GL_GFX9 18
#define CSTIME_PUBLIC_GL_GFX9 19
#define VSGSVERTICESIN_PUBLIC_GL_GFX9 20
#define VSGSPRIMSIN_PUBLIC_GL_GFX9 21
#define GSVERTICESOUT_PUBLIC_GL_GFX9 22
#define VSGSVALUINSTCOUNT_PUBLIC_GL_GFX9 23
#define VSGSSALUINSTCOUNT_PUBLIC_GL_GFX9 24
#define VSGSVALUBUSY_PUBLIC_GL_GFX9 25
#define VSGSVALUBUSYCYCLES_PUBLIC_GL_GFX9 26
#define VSGSSALUBUSY_PUBLIC_GL_GFX9 27
#define VSGSSALUBUSYCYCLES_PUBLIC_GL_GFX9 28
#define PRETESSVERTICESIN_PUBLIC_GL_GFX9 29
#define PRETESSVALUINSTCOUNT_PUBLIC_GL_GFX9 30
#define PRETESSSALUINSTCOUNT_PUBLIC_GL_GFX9 31
#define PRETESSVALUBUSY_PUBLIC_GL_GFX9 32
#define PRETESSVALUBUSYCYCLES_PUBLIC_GL_GFX9 33
#define PRETESSSALUBUSY_PUBLIC_GL_GFX9 34
#define PRETESSSALUBUSYCYCLES_PUBLIC_GL_GFX9 35
#define POSTTESSPRIMSOUT_PUBLIC_GL_GFX9 36
#define POSTTESSVALUINSTCOUNT_PUBLIC_GL_GFX9 37
#define POSTTESSSALUINSTCOUNT_PUBLIC_GL_GFX9 38
#define POSTTESSVALUBUSY_PUBLIC_GL_GFX9 39
#define POSTTESSVALUBUSYCYCLES_PUBLIC_GL_GFX9 40
#define POSTTESSSALUBUSY_PUBLIC_GL_GFX9 41
#define POSTTESSSALUBUSYCYCLES_PUBLIC_GL_GFX9 42
#define PRIMITIVEASSEMBLYBUSY_PUBLIC_GL_GFX9 43
#define PRIMITIVEASSEMBLYBUSYCYCLES_PUBLIC_GL_GFX9 44
#define PRIMITIVESIN_PUBLIC_GL_GFX9 45
#define CULLEDPRIMS_PUBLIC_GL_GFX9 46
#define CLIPPEDPRIMS_PUBLIC_GL_GFX9 47
#define PASTALLEDONRASTERIZER_PUBLIC_GL_GFX9 48
#define PASTALLEDONRASTERIZERCYCLES_PUBLIC_GL_GFX9 49
#define PSPIXELSOUT_PUBLIC_GL_GFX9 50
#define PSEXPORTSTALLS_PUBLIC_GL_GFX9 51
#define PSEXPORTSTALLSCYCLES_PUBLIC_GL_GFX9 52
#define PSVALUINSTCOUNT_PUBLIC_GL_GFX9 53
#define PSSALUINSTCOUNT_PUBLIC_GL_GFX9 54
#define PSVALUBUSY_PUBLIC_GL_GFX9 55
#define PSVALUBUSYCYCLES_PUBLIC_GL_GFX9 56
#define PSSALUBUSY_PUBLIC_GL_GFX9 57
#define PSSALUBUSYCYCLES_PUBLIC_GL_GFX9 58
#define CSTHREADGROUPS_PUBLIC_GL_GFX9 59
#define CSWAVEFRONTS_PUBLIC_GL_GFX9 60
#define CSTHREADS_PUBLIC_GL_GFX9 61
#define CSTHREADGROUPSIZE_PUBLIC_GL_GFX9 62
#define CSVALUINSTS_PUBLIC_GL_GFX9 63
#define CSVALUUTILIZATION_PUBLIC_GL_GFX9 64
#define CSSALUINSTS_PUBLIC_GL_GFX9 65
#define CSVFETCHINSTS_PUBLIC_GL_GFX9 66
#define CSSFETCHINSTS_PUBLIC_GL_GFX9 67
#define CSVWRITEINSTS_PUBLIC_GL_GFX9 68
#define CSFLATVMEMINSTS_PUBLIC_GL_GFX9 69
#define CSVALUBUSY_PUBLIC_GL_GFX9 70
#define CSVALUBUSYCYCLES_PUBLIC_GL_GFX9 71
#define CSSALUBUSY_PUBLIC_GL_GFX9 72
#define CSSALUBUSYCYCLES_PUBLIC_GL_GFX9 73
#define CSMEMUNITBUSY_PUBLIC_GL_GFX9 74
#define CSMEMUNITBUSYCYCLES_PUBLIC_GL_GFX9 75
#define CSMEMUNITSTALLED_PUBLIC_GL_GFX9 76
#define CSMEMUNITSTALLEDCYCLES_PUBLIC_GL_GFX9 77
#define CSWRITEUNITSTALLED_PUBLIC_GL_GFX9 78
#define CSWRITEUNITSTALLEDCYCLES_PUBLIC_GL_GFX9 79
#define CSGDSINSTS_PUBLIC_GL_GFX9 80
#define CSLDSINSTS_PUBLIC_GL_GFX9 81
#define CSFLATLDSINSTS_PUBLIC_GL_GFX9 82
#define CSALUSTALLEDBYLDS_PUBLIC_GL_GFX9 83
#define CSALUSTALLEDBYLDSCYCLES_PUBLIC_GL_GFX9 84
#define CSLDSBANKCONFLICT_PUBLIC_GL_GFX9 85
#define CSLDSBANKCONFLICTCYCLES_PUBLIC_GL_GFX9 86
#define TEXUNITBUSY_PUBLIC_GL_GFX9 87
#define TEXUNITBUSYCYCLES_PUBLIC_GL_GFX9 88
#define TEXTRIFILTERINGPCT_PUBLIC_GL_GFX9 89
#define TEXTRIFILTERINGCOUNT_PUBLIC_GL_GFX9 90
#define NOTEXTRIFILTERINGCOUNT_PUBLIC_GL_GFX9 91
#define TEXVOLFILTERINGPCT_PUBLIC_GL_GFX9 92
#define TEXVOLFILTERINGCOUNT_PUBLIC_GL_GFX9 93
#define NOTEXVOLFILTERINGCOUNT_PUBLIC_GL_GFX9 94
#define TEXAVEANISOTROPY_PUBLIC_GL_GFX9 95
#define DEPTHSTENCILTESTBUSY_PUBLIC_GL_GFX9 96
#define DEPTHSTENCILTESTBUSYCYCLES_PUBLIC_GL_GFX9 97
#define HIZTILESACCEPTED_PUBLIC_GL_GFX9 98
#define HIZTILESACCEPTEDCOUNT_PUBLIC_GL_GFX9 99
#define HIZTILESREJECTEDCOUNT_PUBLIC_GL_GFX9 100
#define PREZTILESDETAILCULLED_PUBLIC_GL_GFX9 101
#define PREZTILESDETAILCULLEDCOUNT_PUBLIC_GL_GFX9 102
#define PREZTILESDETAILSURVIVINGCOUNT_PUBLIC_GL_GFX9 103
#define HIZQUADSCULLED_PUBLIC_GL_GFX9 104
#define HIZQUADSCULLEDCOUNT_PUBLIC_GL_GFX9 105
#define HIZQUADSACCEPTEDCOUNT_PUBLIC_GL_GFX9 106
#define PREZQUADSCULLED_PUBLIC_GL_GFX9 107
#define PREZQUADSCULLEDCOUNT_PUBLIC_GL_GFX9 108
#define PREZQUADSSURVIVINGCOUNT_PUBLIC_GL_GFX9 109
#define POSTZQUADS_PUBLIC_GL_GFX9 110
#define POSTZQUADCOUNT_PUBLIC_GL_GFX9 111
#define PREZSAMPLESPASSING_PUBLIC_GL_GFX9 112
#define PREZSAMPLESFAILINGS_PUBLIC_GL_GFX9 113
#define PREZSAMPLESFAILINGZ_PUBLIC_GL_GFX9 114
#define POSTZSAMPLESPASSING_PUBLIC_GL_GFX9 115
#define POSTZSAMPLESFAILINGS_PUBLIC_GL_GFX9 116
#define POSTZSAMPLESFAILINGZ_PUBLIC_GL_GFX9 117
#define ZUNITSTALLED_PUBLIC_GL_GFX9 118
#define ZUNITSTALLEDCYCLES_PUBLIC_GL_GFX9 119
#define DBMEMREAD_PUBLIC_GL_GFX9 120
#define DBMEMWRITTEN_PUBLIC_GL_GFX9 121
#define CBMEMREAD_PUBLIC_GL_GFX9 122
#define CBCOLORANDMASKREAD_PUBLIC_GL_GFX9 123
#define CBMEMWRITTEN_PUBLIC_GL_GFX9 124
#define CBCOLORANDMASKWRITTEN_PUBLIC_GL_GFX9 125
#define CBSLOWPIXELPCT_PUBLIC_GL_GFX9 126
#define CBSLOWPIXELCOUNT_PUBLIC_GL_GFX9 127
#define L0TAGCONFLICTREADSTALLEDCYCLES_PUBLIC_GL_GFX9 128
#define L0TAGCONFLICTWRITESTALLEDCYCLES_PUBLIC_GL_GFX9 129
#define L0TAGCONFLICTATOMICSTALLEDCYCLES_PUBLIC_GL_GFX9 130
#define FETCHSIZE_PUBLIC_GL_GFX9 131
#define WRITESIZE_PUBLIC_GL_GFX9 132
#define L1CACHEHIT_PUBLIC_GL_GFX9 133
#define L1CACHEHITCOUNT_PUBLIC_GL_GFX9 134
#define L1CACHEMISSCOUNT_PUBLIC_GL_GFX9 135
#define L2CACHEHIT_PUBLIC_GL_GFX9 136
#define L2CACHEMISS_PUBLIC_GL_GFX9 137
#define L2CACHEHITCOUNT_PUBLIC_GL_GFX9 138
#define L2CACHEMISSCOUNT_PUBLIC_GL_GFX9 139
#define MEMUNITBUSY_PUBLIC_GL_GFX9 140
#define MEMUNITBUSYCYCLES_PUBLIC_GL_GFX9 141
#define MEMUNITSTALLED_PUBLIC_GL_GFX9 142
#define MEMUNITSTALLEDCYCLES_PUBLIC_GL_GFX9 143
#define WRITEUNITSTALLED_PUBLIC_GL_GFX9 144
#define WRITEUNITSTALLEDCYCLES_PUBLIC_GL_GFX9 145

/// Number of public counters for GL GFX9 
const size_t kGlGfx9PublicCounterCount = 146;

/// Array of public counters for GL GFX9 
extern const GpaCounterDesc kGlGfx9PublicCounters[kGlGfx9PublicCounterCount];

#endif  // GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_GL_GFX9
