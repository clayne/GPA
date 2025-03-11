//==============================================================================
// Copyright (c) 2015-2025 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief PublicCounterDefinitions for DX12 GFX10 for testing.
//==============================================================================

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

#ifndef GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_DX12_GFX10
#define GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_DX12_GFX10

#include "gpu_perf_api_unit_tests/counters/gpa_counter_desc.h"

/// Macros for DX12Gfx10 Public counter index
// clang-format off
#define DISCRETE_GPUTIME_PUBLIC_DX12_GFX10 0
#define DISCRETE_EXECUTIONDURATION_PUBLIC_DX12_GFX10 1
#define DISCRETE_EXECUTIONSTART_PUBLIC_DX12_GFX10 2
#define DISCRETE_EXECUTIONEND_PUBLIC_DX12_GFX10 3
#define DISCRETE_GPUBUSY_PUBLIC_DX12_GFX10 4
#define STREAMING_GPUBUSY_PUBLIC_DX12_GFX10 0
#define DISCRETE_GPUBUSYCYCLES_PUBLIC_DX12_GFX10 5
#define STREAMING_GPUBUSYCYCLES_PUBLIC_DX12_GFX10 1
#define DISCRETE_TESSELLATORBUSY_PUBLIC_DX12_GFX10 6
#define STREAMING_TESSELLATORBUSY_PUBLIC_DX12_GFX10 2
#define DISCRETE_TESSELLATORBUSYCYCLES_PUBLIC_DX12_GFX10 7
#define STREAMING_TESSELLATORBUSYCYCLES_PUBLIC_DX12_GFX10 3
#define DISCRETE_VSGSBUSY_PUBLIC_DX12_GFX10 8
#define STREAMING_VSGSBUSY_PUBLIC_DX12_GFX10 4
#define DISCRETE_VSGSBUSYCYCLES_PUBLIC_DX12_GFX10 9
#define STREAMING_VSGSBUSYCYCLES_PUBLIC_DX12_GFX10 5
#define DISCRETE_VSGSTIME_PUBLIC_DX12_GFX10 10
#define DISCRETE_PRETESSELLATIONBUSY_PUBLIC_DX12_GFX10 11
#define STREAMING_PRETESSELLATIONBUSY_PUBLIC_DX12_GFX10 6
#define DISCRETE_PRETESSELLATIONBUSYCYCLES_PUBLIC_DX12_GFX10 12
#define STREAMING_PRETESSELLATIONBUSYCYCLES_PUBLIC_DX12_GFX10 7
#define DISCRETE_PRETESSELLATIONTIME_PUBLIC_DX12_GFX10 13
#define DISCRETE_POSTTESSELLATIONBUSY_PUBLIC_DX12_GFX10 14
#define STREAMING_POSTTESSELLATIONBUSY_PUBLIC_DX12_GFX10 8
#define DISCRETE_POSTTESSELLATIONBUSYCYCLES_PUBLIC_DX12_GFX10 15
#define STREAMING_POSTTESSELLATIONBUSYCYCLES_PUBLIC_DX12_GFX10 9
#define DISCRETE_POSTTESSELLATIONTIME_PUBLIC_DX12_GFX10 16
#define DISCRETE_PSBUSY_PUBLIC_DX12_GFX10 17
#define STREAMING_PSBUSY_PUBLIC_DX12_GFX10 10
#define DISCRETE_PSBUSYCYCLES_PUBLIC_DX12_GFX10 18
#define STREAMING_PSBUSYCYCLES_PUBLIC_DX12_GFX10 11
#define DISCRETE_PSTIME_PUBLIC_DX12_GFX10 19
#define DISCRETE_CSBUSY_PUBLIC_DX12_GFX10 20
#define STREAMING_CSBUSY_PUBLIC_DX12_GFX10 12
#define DISCRETE_CSBUSYCYCLES_PUBLIC_DX12_GFX10 21
#define STREAMING_CSBUSYCYCLES_PUBLIC_DX12_GFX10 13
#define DISCRETE_CSTIME_PUBLIC_DX12_GFX10 22
#define DISCRETE_GSVERTICESOUT_PUBLIC_DX12_GFX10 23
#define STREAMING_GSVERTICESOUT_PUBLIC_DX12_GFX10 14
#define DISCRETE_PRETESSVERTICESIN_PUBLIC_DX12_GFX10 24
#define STREAMING_PRETESSVERTICESIN_PUBLIC_DX12_GFX10 15
#define DISCRETE_PRETESSVALUINSTCOUNT_PUBLIC_DX12_GFX10 25
#define STREAMING_PRETESSVALUINSTCOUNT_PUBLIC_DX12_GFX10 16
#define DISCRETE_PRETESSSALUINSTCOUNT_PUBLIC_DX12_GFX10 26
#define STREAMING_PRETESSSALUINSTCOUNT_PUBLIC_DX12_GFX10 17
#define DISCRETE_PRETESSVALUBUSY_PUBLIC_DX12_GFX10 27
#define STREAMING_PRETESSVALUBUSY_PUBLIC_DX12_GFX10 18
#define DISCRETE_PRETESSVALUBUSYCYCLES_PUBLIC_DX12_GFX10 28
#define STREAMING_PRETESSVALUBUSYCYCLES_PUBLIC_DX12_GFX10 19
#define DISCRETE_PRETESSSALUBUSY_PUBLIC_DX12_GFX10 29
#define STREAMING_PRETESSSALUBUSY_PUBLIC_DX12_GFX10 20
#define DISCRETE_PRETESSSALUBUSYCYCLES_PUBLIC_DX12_GFX10 30
#define STREAMING_PRETESSSALUBUSYCYCLES_PUBLIC_DX12_GFX10 21
#define DISCRETE_POSTTESSPRIMSOUT_PUBLIC_DX12_GFX10 31
#define STREAMING_POSTTESSPRIMSOUT_PUBLIC_DX12_GFX10 22
#define DISCRETE_POSTTESSVALUINSTCOUNT_PUBLIC_DX12_GFX10 32
#define STREAMING_POSTTESSVALUINSTCOUNT_PUBLIC_DX12_GFX10 23
#define DISCRETE_POSTTESSSALUINSTCOUNT_PUBLIC_DX12_GFX10 33
#define DISCRETE_POSTTESSVALUBUSY_PUBLIC_DX12_GFX10 34
#define STREAMING_POSTTESSVALUBUSY_PUBLIC_DX12_GFX10 24
#define DISCRETE_POSTTESSVALUBUSYCYCLES_PUBLIC_DX12_GFX10 35
#define STREAMING_POSTTESSVALUBUSYCYCLES_PUBLIC_DX12_GFX10 25
#define DISCRETE_POSTTESSSALUBUSY_PUBLIC_DX12_GFX10 36
#define STREAMING_POSTTESSSALUBUSY_PUBLIC_DX12_GFX10 26
#define DISCRETE_POSTTESSSALUBUSYCYCLES_PUBLIC_DX12_GFX10 37
#define STREAMING_POSTTESSSALUBUSYCYCLES_PUBLIC_DX12_GFX10 27
#define DISCRETE_PRIMITIVEASSEMBLYBUSY_PUBLIC_DX12_GFX10 38
#define DISCRETE_PRIMITIVEASSEMBLYBUSYCYCLES_PUBLIC_DX12_GFX10 39
#define DISCRETE_PRIMITIVESIN_PUBLIC_DX12_GFX10 40
#define STREAMING_PRIMITIVESIN_PUBLIC_DX12_GFX10 28
#define DISCRETE_CULLEDPRIMS_PUBLIC_DX12_GFX10 41
#define DISCRETE_CLIPPEDPRIMS_PUBLIC_DX12_GFX10 42
#define STREAMING_CLIPPEDPRIMS_PUBLIC_DX12_GFX10 29
#define DISCRETE_PASTALLEDONRASTERIZER_PUBLIC_DX12_GFX10 43
#define STREAMING_PASTALLEDONRASTERIZER_PUBLIC_DX12_GFX10 30
#define DISCRETE_PASTALLEDONRASTERIZERCYCLES_PUBLIC_DX12_GFX10 44
#define STREAMING_PASTALLEDONRASTERIZERCYCLES_PUBLIC_DX12_GFX10 31
#define DISCRETE_PSPIXELSOUT_PUBLIC_DX12_GFX10 45
#define STREAMING_PSPIXELSOUT_PUBLIC_DX12_GFX10 32
#define DISCRETE_PSEXPORTSTALLS_PUBLIC_DX12_GFX10 46
#define STREAMING_PSEXPORTSTALLS_PUBLIC_DX12_GFX10 33
#define DISCRETE_PSEXPORTSTALLSCYCLES_PUBLIC_DX12_GFX10 47
#define STREAMING_PSEXPORTSTALLSCYCLES_PUBLIC_DX12_GFX10 34
#define DISCRETE_CSTHREADGROUPSLAUNCHED_PUBLIC_DX12_GFX10 48
#define STREAMING_CSTHREADGROUPSLAUNCHED_PUBLIC_DX12_GFX10 35
#define DISCRETE_CSWAVEFRONTSLAUNCHED_PUBLIC_DX12_GFX10 49
#define STREAMING_CSWAVEFRONTSLAUNCHED_PUBLIC_DX12_GFX10 36
#define DISCRETE_CSTHREADSLAUNCHED_PUBLIC_DX12_GFX10 50
#define STREAMING_CSTHREADSLAUNCHED_PUBLIC_DX12_GFX10 37
#define DISCRETE_CSTHREADGROUPSIZE_PUBLIC_DX12_GFX10 51
#define DISCRETE_CSVALUINSTS_PUBLIC_DX12_GFX10 52
#define DISCRETE_CSVALUUTILIZATION_PUBLIC_DX12_GFX10 53
#define DISCRETE_CSSALUINSTS_PUBLIC_DX12_GFX10 54
#define DISCRETE_CSVFETCHINSTS_PUBLIC_DX12_GFX10 55
#define DISCRETE_CSSFETCHINSTS_PUBLIC_DX12_GFX10 56
#define DISCRETE_CSVWRITEINSTS_PUBLIC_DX12_GFX10 57
#define DISCRETE_CSVALUBUSY_PUBLIC_DX12_GFX10 58
#define STREAMING_CSVALUBUSY_PUBLIC_DX12_GFX10 38
#define DISCRETE_CSVALUBUSYCYCLES_PUBLIC_DX12_GFX10 59
#define STREAMING_CSVALUBUSYCYCLES_PUBLIC_DX12_GFX10 39
#define DISCRETE_CSSALUBUSY_PUBLIC_DX12_GFX10 60
#define STREAMING_CSSALUBUSY_PUBLIC_DX12_GFX10 40
#define DISCRETE_CSSALUBUSYCYCLES_PUBLIC_DX12_GFX10 61
#define STREAMING_CSSALUBUSYCYCLES_PUBLIC_DX12_GFX10 41
#define DISCRETE_CSGDSINSTS_PUBLIC_DX12_GFX10 62
#define DISCRETE_CSLDSINSTS_PUBLIC_DX12_GFX10 63
#define DISCRETE_CSALUSTALLEDBYLDS_PUBLIC_DX12_GFX10 64
#define STREAMING_CSALUSTALLEDBYLDSPERWAVE_PUBLIC_DX12_GFX10 42
#define DISCRETE_CSALUSTALLEDBYLDSCYCLES_PUBLIC_DX12_GFX10 65
#define DISCRETE_CSLDSBANKCONFLICT_PUBLIC_DX12_GFX10 66
#define STREAMING_CSLDSBANKCONFLICT_PUBLIC_DX12_GFX10 43
#define DISCRETE_CSLDSBANKCONFLICTCYCLES_PUBLIC_DX12_GFX10 67
#define STREAMING_CSLDSBANKCONFLICTCYCLES_PUBLIC_DX12_GFX10 44
#define DISCRETE_TEXUNITBUSY_PUBLIC_DX12_GFX10 68
#define STREAMING_TEXUNITBUSY_PUBLIC_DX12_GFX10 45
#define DISCRETE_TEXUNITBUSYCYCLES_PUBLIC_DX12_GFX10 69
#define STREAMING_TEXUNITBUSYCYCLES_PUBLIC_DX12_GFX10 46
#define DISCRETE_TEXTRIFILTERINGPCT_PUBLIC_DX12_GFX10 70
#define STREAMING_TEXTRIFILTERINGPCT_PUBLIC_DX12_GFX10 47
#define DISCRETE_TEXTRIFILTERINGCOUNT_PUBLIC_DX12_GFX10 71
#define STREAMING_TEXTRIFILTERINGCOUNT_PUBLIC_DX12_GFX10 48
#define DISCRETE_NOTEXTRIFILTERINGCOUNT_PUBLIC_DX12_GFX10 72
#define STREAMING_NOTEXTRIFILTERINGCOUNT_PUBLIC_DX12_GFX10 49
#define DISCRETE_TEXVOLFILTERINGPCT_PUBLIC_DX12_GFX10 73
#define STREAMING_TEXVOLFILTERINGPCT_PUBLIC_DX12_GFX10 50
#define DISCRETE_TEXVOLFILTERINGCOUNT_PUBLIC_DX12_GFX10 74
#define STREAMING_TEXVOLFILTERINGCOUNT_PUBLIC_DX12_GFX10 51
#define DISCRETE_NOTEXVOLFILTERINGCOUNT_PUBLIC_DX12_GFX10 75
#define STREAMING_NOTEXVOLFILTERINGCOUNT_PUBLIC_DX12_GFX10 52
#define DISCRETE_TEXAVEANISOTROPY_PUBLIC_DX12_GFX10 76
#define DISCRETE_DEPTHSTENCILTESTBUSY_PUBLIC_DX12_GFX10 77
#define STREAMING_DEPTHSTENCILTESTBUSY_PUBLIC_DX12_GFX10 53
#define DISCRETE_DEPTHSTENCILTESTBUSYCYCLES_PUBLIC_DX12_GFX10 78
#define STREAMING_DEPTHSTENCILTESTBUSYCYCLES_PUBLIC_DX12_GFX10 54
#define DISCRETE_HIZTILESACCEPTED_PUBLIC_DX12_GFX10 79
#define STREAMING_HIZTILESACCEPTED_PUBLIC_DX12_GFX10 55
#define DISCRETE_HIZTILESACCEPTEDCOUNT_PUBLIC_DX12_GFX10 80
#define STREAMING_HIZTILESACCEPTEDCOUNT_PUBLIC_DX12_GFX10 56
#define DISCRETE_HIZTILESREJECTEDCOUNT_PUBLIC_DX12_GFX10 81
#define STREAMING_HIZTILESREJECTEDCOUNT_PUBLIC_DX12_GFX10 57
#define DISCRETE_PREZTILESDETAILCULLED_PUBLIC_DX12_GFX10 82
#define STREAMING_PREZTILESDETAILCULLED_PUBLIC_DX12_GFX10 58
#define DISCRETE_PREZTILESDETAILCULLEDCOUNT_PUBLIC_DX12_GFX10 83
#define STREAMING_PREZTILESDETAILCULLEDCOUNT_PUBLIC_DX12_GFX10 59
#define DISCRETE_PREZTILESDETAILSURVIVINGCOUNT_PUBLIC_DX12_GFX10 84
#define STREAMING_PREZTILESDETAILSURVIVINGCOUNT_PUBLIC_DX12_GFX10 60
#define DISCRETE_HIZQUADSCULLED_PUBLIC_DX12_GFX10 85
#define DISCRETE_HIZQUADSCULLEDCOUNT_PUBLIC_DX12_GFX10 86
#define DISCRETE_HIZQUADSACCEPTEDCOUNT_PUBLIC_DX12_GFX10 87
#define STREAMING_HIZQUADSACCEPTEDCOUNT_PUBLIC_DX12_GFX10 61
#define DISCRETE_PREZQUADSCULLED_PUBLIC_DX12_GFX10 88
#define DISCRETE_PREZQUADSCULLEDCOUNT_PUBLIC_DX12_GFX10 89
#define DISCRETE_PREZQUADSSURVIVINGCOUNT_PUBLIC_DX12_GFX10 90
#define DISCRETE_POSTZQUADS_PUBLIC_DX12_GFX10 91
#define DISCRETE_POSTZQUADCOUNT_PUBLIC_DX12_GFX10 92
#define STREAMING_POSTZQUADCOUNT_PUBLIC_DX12_GFX10 62
#define DISCRETE_PREZSAMPLESPASSING_PUBLIC_DX12_GFX10 93
#define STREAMING_PREZSAMPLESPASSING_PUBLIC_DX12_GFX10 63
#define DISCRETE_PREZSAMPLESFAILINGS_PUBLIC_DX12_GFX10 94
#define STREAMING_PREZSAMPLESFAILINGS_PUBLIC_DX12_GFX10 64
#define DISCRETE_PREZSAMPLESFAILINGZ_PUBLIC_DX12_GFX10 95
#define STREAMING_PREZSAMPLESFAILINGZ_PUBLIC_DX12_GFX10 65
#define DISCRETE_POSTZSAMPLESPASSING_PUBLIC_DX12_GFX10 96
#define STREAMING_POSTZSAMPLESPASSING_PUBLIC_DX12_GFX10 66
#define DISCRETE_POSTZSAMPLESFAILINGS_PUBLIC_DX12_GFX10 97
#define STREAMING_POSTZSAMPLESFAILINGS_PUBLIC_DX12_GFX10 67
#define DISCRETE_POSTZSAMPLESFAILINGZ_PUBLIC_DX12_GFX10 98
#define STREAMING_POSTZSAMPLESFAILINGZ_PUBLIC_DX12_GFX10 68
#define DISCRETE_ZUNITSTALLED_PUBLIC_DX12_GFX10 99
#define STREAMING_ZUNITSTALLED_PUBLIC_DX12_GFX10 69
#define DISCRETE_ZUNITSTALLEDCYCLES_PUBLIC_DX12_GFX10 100
#define STREAMING_ZUNITSTALLEDCYCLES_PUBLIC_DX12_GFX10 70
#define DISCRETE_DBMEMREAD_PUBLIC_DX12_GFX10 101
#define STREAMING_DBMEMREAD_PUBLIC_DX12_GFX10 71
#define DISCRETE_DBMEMWRITTEN_PUBLIC_DX12_GFX10 102
#define STREAMING_DBMEMWRITTEN_PUBLIC_DX12_GFX10 72
#define DISCRETE_CBMEMREAD_PUBLIC_DX12_GFX10 103
#define STREAMING_CBMEMREAD_PUBLIC_DX12_GFX10 73
#define DISCRETE_CBCOLORANDMASKREAD_PUBLIC_DX12_GFX10 104
#define STREAMING_CBCOLORANDMASKREAD_PUBLIC_DX12_GFX10 74
#define DISCRETE_CBMEMWRITTEN_PUBLIC_DX12_GFX10 105
#define STREAMING_CBMEMWRITTEN_PUBLIC_DX12_GFX10 75
#define DISCRETE_CBCOLORANDMASKWRITTEN_PUBLIC_DX12_GFX10 106
#define STREAMING_CBCOLORANDMASKWRITTEN_PUBLIC_DX12_GFX10 76
#define DISCRETE_CBSLOWPIXELPCT_PUBLIC_DX12_GFX10 107
#define STREAMING_CBSLOWPIXELPCT_PUBLIC_DX12_GFX10 77
#define DISCRETE_CBSLOWPIXELCOUNT_PUBLIC_DX12_GFX10 108
#define STREAMING_CBSLOWPIXELCOUNT_PUBLIC_DX12_GFX10 78
#define DISCRETE_L0CACHEHIT_PUBLIC_DX12_GFX10 109
#define STREAMING_L0CACHEHIT_PUBLIC_DX12_GFX10 79
#define DISCRETE_L0CACHEREQUESTCOUNT_PUBLIC_DX12_GFX10 110
#define STREAMING_L0CACHEREQUESTCOUNT_PUBLIC_DX12_GFX10 80
#define DISCRETE_L0CACHEHITCOUNT_PUBLIC_DX12_GFX10 111
#define STREAMING_L0CACHEHITCOUNT_PUBLIC_DX12_GFX10 81
#define DISCRETE_L0CACHEMISSCOUNT_PUBLIC_DX12_GFX10 112
#define STREAMING_L0CACHEMISSCOUNT_PUBLIC_DX12_GFX10 82
#define DISCRETE_SCALARCACHEHIT_PUBLIC_DX12_GFX10 113
#define STREAMING_SCALARCACHEHIT_PUBLIC_DX12_GFX10 83
#define DISCRETE_SCALARCACHEREQUESTCOUNT_PUBLIC_DX12_GFX10 114
#define STREAMING_SCALARCACHEREQUESTCOUNT_PUBLIC_DX12_GFX10 84
#define DISCRETE_SCALARCACHEHITCOUNT_PUBLIC_DX12_GFX10 115
#define STREAMING_SCALARCACHEHITCOUNT_PUBLIC_DX12_GFX10 85
#define DISCRETE_SCALARCACHEMISSCOUNT_PUBLIC_DX12_GFX10 116
#define STREAMING_SCALARCACHEMISSCOUNT_PUBLIC_DX12_GFX10 86
#define DISCRETE_INSTCACHEHIT_PUBLIC_DX12_GFX10 117
#define STREAMING_INSTCACHEHIT_PUBLIC_DX12_GFX10 87
#define DISCRETE_INSTCACHEREQUESTCOUNT_PUBLIC_DX12_GFX10 118
#define STREAMING_INSTCACHEREQUESTCOUNT_PUBLIC_DX12_GFX10 88
#define DISCRETE_INSTCACHEHITCOUNT_PUBLIC_DX12_GFX10 119
#define STREAMING_INSTCACHEHITCOUNT_PUBLIC_DX12_GFX10 89
#define DISCRETE_INSTCACHEMISSCOUNT_PUBLIC_DX12_GFX10 120
#define STREAMING_INSTCACHEMISSCOUNT_PUBLIC_DX12_GFX10 90
#define DISCRETE_L1CACHEHIT_PUBLIC_DX12_GFX10 121
#define STREAMING_L1CACHEHIT_PUBLIC_DX12_GFX10 91
#define DISCRETE_L1CACHEREQUESTCOUNT_PUBLIC_DX12_GFX10 122
#define STREAMING_L1CACHEREQUESTCOUNT_PUBLIC_DX12_GFX10 92
#define DISCRETE_L1CACHEHITCOUNT_PUBLIC_DX12_GFX10 123
#define STREAMING_L1CACHEHITCOUNT_PUBLIC_DX12_GFX10 93
#define DISCRETE_L1CACHEMISSCOUNT_PUBLIC_DX12_GFX10 124
#define STREAMING_L1CACHEMISSCOUNT_PUBLIC_DX12_GFX10 94
#define DISCRETE_L2CACHEHIT_PUBLIC_DX12_GFX10 125
#define STREAMING_L2CACHEHIT_PUBLIC_DX12_GFX10 95
#define DISCRETE_L2CACHEMISS_PUBLIC_DX12_GFX10 126
#define STREAMING_L2CACHEMISS_PUBLIC_DX12_GFX10 96
#define DISCRETE_L2CACHEREQUESTCOUNT_PUBLIC_DX12_GFX10 127
#define STREAMING_L2CACHEREQUESTCOUNT_PUBLIC_DX12_GFX10 97
#define DISCRETE_L2CACHEHITCOUNT_PUBLIC_DX12_GFX10 128
#define STREAMING_L2CACHEHITCOUNT_PUBLIC_DX12_GFX10 98
#define DISCRETE_L2CACHEMISSCOUNT_PUBLIC_DX12_GFX10 129
#define STREAMING_L2CACHEMISSCOUNT_PUBLIC_DX12_GFX10 99
#define DISCRETE_L0TAGCONFLICTREADSTALLEDCYCLES_PUBLIC_DX12_GFX10 130
#define STREAMING_L0TAGCONFLICTREADSTALLEDCYCLES_PUBLIC_DX12_GFX10 100
#define DISCRETE_L0TAGCONFLICTWRITESTALLEDCYCLES_PUBLIC_DX12_GFX10 131
#define STREAMING_L0TAGCONFLICTWRITESTALLEDCYCLES_PUBLIC_DX12_GFX10 101
#define DISCRETE_L0TAGCONFLICTATOMICSTALLEDCYCLES_PUBLIC_DX12_GFX10 132
#define STREAMING_L0TAGCONFLICTATOMICSTALLEDCYCLES_PUBLIC_DX12_GFX10 102
#define DISCRETE_FETCHSIZE_PUBLIC_DX12_GFX10 133
#define STREAMING_FETCHSIZE_PUBLIC_DX12_GFX10 103
#define DISCRETE_WRITESIZE_PUBLIC_DX12_GFX10 134
#define STREAMING_WRITESIZE_PUBLIC_DX12_GFX10 104
#define DISCRETE_MEMUNITBUSY_PUBLIC_DX12_GFX10 135
#define STREAMING_MEMUNITBUSY_PUBLIC_DX12_GFX10 105
#define DISCRETE_MEMUNITBUSYCYCLES_PUBLIC_DX12_GFX10 136
#define STREAMING_MEMUNITBUSYCYCLES_PUBLIC_DX12_GFX10 106
#define DISCRETE_MEMUNITSTALLED_PUBLIC_DX12_GFX10 137
#define STREAMING_MEMUNITSTALLED_PUBLIC_DX12_GFX10 107
#define DISCRETE_MEMUNITSTALLEDCYCLES_PUBLIC_DX12_GFX10 138
#define STREAMING_MEMUNITSTALLEDCYCLES_PUBLIC_DX12_GFX10 108
#define DISCRETE_WRITEUNITSTALLED_PUBLIC_DX12_GFX10 139
#define STREAMING_WRITEUNITSTALLED_PUBLIC_DX12_GFX10 109
#define DISCRETE_WRITEUNITSTALLEDCYCLES_PUBLIC_DX12_GFX10 140
#define STREAMING_WRITEUNITSTALLEDCYCLES_PUBLIC_DX12_GFX10 110
#define DISCRETE_LOCALVIDMEMBYTES_PUBLIC_DX12_GFX10 141
#define DISCRETE_PCIEBYTES_PUBLIC_DX12_GFX10 142
#define STREAMING_WAVEOCCUPANCYPCT_PUBLIC_DX12_GFX10 111
#define STREAMING_LSHSLIMITEDBYVGPR_PUBLIC_DX12_GFX10 112
#define STREAMING_LSHSLIMITEDBYLDS_PUBLIC_DX12_GFX10 113
#define STREAMING_LSHSLIMITEDBYSCRATCH_PUBLIC_DX12_GFX10 114
#define STREAMING_HSLIMITEDBYBARRIERS_PUBLIC_DX12_GFX10 115
#define DISCRETE_ESGSLIMITEDBYVGPR_PUBLIC_DX12_GFX10 143
#define STREAMING_ESGSLIMITEDBYVGPR_PUBLIC_DX12_GFX10 116
#define STREAMING_ESGSLIMITEDBYLDS_PUBLIC_DX12_GFX10 117
#define STREAMING_ESGSLIMITEDBYSCRATCH_PUBLIC_DX12_GFX10 118
#define STREAMING_VSLIMITEDBYVGPR_PUBLIC_DX12_GFX10 119
#define STREAMING_VSLIMITEDBYSCRATCH_PUBLIC_DX12_GFX10 120
#define STREAMING_VSLIMITEDBYEXPORT_PUBLIC_DX12_GFX10 121
#define STREAMING_PSLIMITEDBYLDS_PUBLIC_DX12_GFX10 122
#define STREAMING_PSLIMITEDBYVGPR_PUBLIC_DX12_GFX10 123
#define STREAMING_PSLIMITEDBYSCRATCH_PUBLIC_DX12_GFX10 124
#define STREAMING_CSLIMITEDBYLDS_PUBLIC_DX12_GFX10 125
#define STREAMING_CSLIMITEDBYVGPR_PUBLIC_DX12_GFX10 126
#define STREAMING_CSLIMITEDBYSCRATCH_PUBLIC_DX12_GFX10 127
#define STREAMING_CSLIMITEDBYBARRIERS_PUBLIC_DX12_GFX10 128
#define STREAMING_CSLIMITEDBYTHREADGROUPLIMIT_PUBLIC_DX12_GFX10 129

/// Number of public counters for DX12 GFX10 
const size_t kDx12Gfx10PublicCounterCount = 163;

/// Array of public counters for DX12 GFX10 
extern const GpaCounterDesc kDx12Gfx10PublicCounters[kDx12Gfx10PublicCounterCount];

// clang-format on
#endif  // GPA_AUTO_GEN_UNIT_TESTS_COUNTERS_PUBLIC_DX12_GFX10
