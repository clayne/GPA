//==============================================================================
// Copyright (c) 2010-2023 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief CL counter definitions for GFX9.
//==============================================================================

#include "gpu_perf_api_counter_generator/gpa_counter.h"
#include "auto_generated/gpu_perf_api_counter_generator/gpa_hw_counter_gfx9.h"
#include "auto_generated/gpu_perf_api_counter_generator/gpa_hw_counter_cl_gfx9.h"

// This file is autogenerated by the ConvertHWEnums project

// clang-format off

namespace counter_cl_gfx9
{
    using namespace counter_gfx9;

    std::vector<std::vector<GpaHardwareCounterDesc>*> kClCounterGroupArrayGfx9 = {
        &kCb0CountersGfx9,
        &kCb1CountersGfx9,
        &kCb2CountersGfx9,
        &kCb3CountersGfx9,
        &kCpfCountersGfx9,
        &kDb0CountersGfx9,
        &kDb1CountersGfx9,
        &kDb2CountersGfx9,
        &kDb3CountersGfx9,
        &kGrbmCountersGfx9,
        &kPaSu0CountersGfx9,
        &kPaSc0CountersGfx9,
        &kSpi0CountersGfx9,
        &kSq0CountersGfx9,
        &kSqEs0CountersGfx9,
        &kSqGs0CountersGfx9,
        &kSqVs0CountersGfx9,
        &kSqPs0CountersGfx9,
        &kSqLs0CountersGfx9,
        &kSqHs0CountersGfx9,
        &kSqCs0CountersGfx9,
        &kSx0CountersGfx9,
        &kTa0CountersGfx9,
        &kTa1CountersGfx9,
        &kTa2CountersGfx9,
        &kTa3CountersGfx9,
        &kTa4CountersGfx9,
        &kTa5CountersGfx9,
        &kTa6CountersGfx9,
        &kTa7CountersGfx9,
        &kTa8CountersGfx9,
        &kTa9CountersGfx9,
        &kTa10CountersGfx9,
        &kTa11CountersGfx9,
        &kTa12CountersGfx9,
        &kTa13CountersGfx9,
        &kTa14CountersGfx9,
        &kTa15CountersGfx9,
        &kTcc0CountersGfx9,
        &kTcc1CountersGfx9,
        &kTcc2CountersGfx9,
        &kTcc3CountersGfx9,
        &kTcc4CountersGfx9,
        &kTcc5CountersGfx9,
        &kTcc6CountersGfx9,
        &kTcc7CountersGfx9,
        &kTcc8CountersGfx9,
        &kTcc9CountersGfx9,
        &kTcc10CountersGfx9,
        &kTcc11CountersGfx9,
        &kTcc12CountersGfx9,
        &kTcc13CountersGfx9,
        &kTcc14CountersGfx9,
        &kTcc15CountersGfx9,
        &kTcp0CountersGfx9,
        &kTcp1CountersGfx9,
        &kTcp2CountersGfx9,
        &kTcp3CountersGfx9,
        &kTcp4CountersGfx9,
        &kTcp5CountersGfx9,
        &kTcp6CountersGfx9,
        &kTcp7CountersGfx9,
        &kTcp8CountersGfx9,
        &kTcp9CountersGfx9,
        &kTcp10CountersGfx9,
        &kTcp11CountersGfx9,
        &kTcp12CountersGfx9,
        &kTcp13CountersGfx9,
        &kTcp14CountersGfx9,
        &kTcp15CountersGfx9,
        &kVgt0CountersGfx9,
        &kGcea0CountersGfx9,
        &kGcea1CountersGfx9,
        &kGcea2CountersGfx9,
        &kGcea3CountersGfx9,
        &kGcea4CountersGfx9,
        &kGcea5CountersGfx9,
        &kGcea6CountersGfx9,
        &kGcea7CountersGfx9,
        &kGcea8CountersGfx9,
        &kGcea9CountersGfx9,
        &kGcea10CountersGfx9,
        &kGcea11CountersGfx9,
        &kGcea12CountersGfx9,
        &kGcea13CountersGfx9,
        &kGcea14CountersGfx9,
        &kGcea15CountersGfx9,
        &kGcea16CountersGfx9,
        &kGcea17CountersGfx9,
        &kGcea18CountersGfx9,
        &kGcea19CountersGfx9,
        &kGcea20CountersGfx9,
        &kGcea21CountersGfx9,
        &kGcea22CountersGfx9,
        &kGcea23CountersGfx9,
        &kGcea24CountersGfx9,
        &kGcea25CountersGfx9,
        &kGcea26CountersGfx9,
        &kGcea27CountersGfx9,
        &kGcea28CountersGfx9,
        &kGcea29CountersGfx9,
        &kGcea30CountersGfx9,
        &kGcea31CountersGfx9,
    };


    std::vector<GpaCounterGroupDesc> kHwClGroupsGfx9 = {
        {0, "CB0", 0, 444, 4, 0},
        {1, "CB1", 1, 444, 4, 0},
        {2, "CB2", 2, 444, 4, 0},
        {3, "CB3", 3, 444, 4, 0},
        {4, "CPF", 0, 32, 2, 0},
        {5, "DB0", 0, 328, 4, 0},
        {6, "DB1", 1, 328, 4, 0},
        {7, "DB2", 2, 328, 4, 0},
        {8, "DB3", 3, 328, 4, 0},
        {9, "GRBM", 0, 38, 2, 0},
        {10, "GRBMSE", 0, 16, 4, 0},
        {11, "PA_SU", 0, 351, 4, 0},
        {12, "PA_SC", 0, 492, 8, 0},
        {13, "SPI", 0, 196, 6, 0},
        {14, "SQ", 0, 374, 16, 0},
        {15, "SQ_ES", 0, 374, 16, 0},
        {16, "SQ_GS", 0, 374, 16, 0},
        {17, "SQ_VS", 0, 374, 16, 0},
        {18, "SQ_PS", 0, 374, 16, 0},
        {19, "SQ_LS", 0, 374, 16, 0},
        {20, "SQ_HS", 0, 374, 16, 0},
        {21, "SQ_CS", 0, 374, 16, 0},
        {22, "SX", 0, 208, 4, 0},
        {23, "TA0", 0, 119, 2, 0},
        {24, "TA1", 1, 119, 2, 0},
        {25, "TA2", 2, 119, 2, 0},
        {26, "TA3", 3, 119, 2, 0},
        {27, "TA4", 4, 119, 2, 0},
        {28, "TA5", 5, 119, 2, 0},
        {29, "TA6", 6, 119, 2, 0},
        {30, "TA7", 7, 119, 2, 0},
        {31, "TA8", 8, 119, 2, 0},
        {32, "TA9", 9, 119, 2, 0},
        {33, "TA10", 10, 119, 2, 0},
        {34, "TA11", 11, 119, 2, 0},
        {35, "TA12", 12, 119, 2, 0},
        {36, "TA13", 13, 119, 2, 0},
        {37, "TA14", 14, 119, 2, 0},
        {38, "TA15", 15, 119, 2, 0},
        {39, "TCA0", 0, 35, 4, 0},
        {40, "TCA1", 1, 35, 4, 0},
        {41, "TCC0", 0, 282, 4, 0},
        {42, "TCC1", 1, 282, 4, 0},
        {43, "TCC2", 2, 282, 4, 0},
        {44, "TCC3", 3, 282, 4, 0},
        {45, "TCC4", 4, 282, 4, 0},
        {46, "TCC5", 5, 282, 4, 0},
        {47, "TCC6", 6, 282, 4, 0},
        {48, "TCC7", 7, 282, 4, 0},
        {49, "TCC8", 8, 282, 4, 0},
        {50, "TCC9", 9, 282, 4, 0},
        {51, "TCC10", 10, 282, 4, 0},
        {52, "TCC11", 11, 282, 4, 0},
        {53, "TCC12", 12, 282, 4, 0},
        {54, "TCC13", 13, 282, 4, 0},
        {55, "TCC14", 14, 282, 4, 0},
        {56, "TCC15", 15, 282, 4, 0},
        {57, "TD0", 0, 57, 2, 0},
        {58, "TD1", 1, 57, 2, 0},
        {59, "TD2", 2, 57, 2, 0},
        {60, "TD3", 3, 57, 2, 0},
        {61, "TD4", 4, 57, 2, 0},
        {62, "TD5", 5, 57, 2, 0},
        {63, "TD6", 6, 57, 2, 0},
        {64, "TD7", 7, 57, 2, 0},
        {65, "TD8", 8, 57, 2, 0},
        {66, "TD9", 9, 57, 2, 0},
        {67, "TD10", 10, 57, 2, 0},
        {68, "TD11", 11, 57, 2, 0},
        {69, "TD12", 12, 57, 2, 0},
        {70, "TD13", 13, 57, 2, 0},
        {71, "TD14", 14, 57, 2, 0},
        {72, "TD15", 15, 57, 2, 0},
        {73, "TCP0", 0, 85, 4, 0},
        {74, "TCP1", 1, 85, 4, 0},
        {75, "TCP2", 2, 85, 4, 0},
        {76, "TCP3", 3, 85, 4, 0},
        {77, "TCP4", 4, 85, 4, 0},
        {78, "TCP5", 5, 85, 4, 0},
        {79, "TCP6", 6, 85, 4, 0},
        {80, "TCP7", 7, 85, 4, 0},
        {81, "TCP8", 8, 85, 4, 0},
        {82, "TCP9", 9, 85, 4, 0},
        {83, "TCP10", 10, 85, 4, 0},
        {84, "TCP11", 11, 85, 4, 0},
        {85, "TCP12", 12, 85, 4, 0},
        {86, "TCP13", 13, 85, 4, 0},
        {87, "TCP14", 14, 85, 4, 0},
        {88, "TCP15", 15, 85, 4, 0},
        {89, "GDS", 0, 121, 4, 0},
        {90, "VGT", 0, 148, 4, 0},
        {91, "IA", 0, 32, 4, 0},
        {92, "WD", 0, 58, 4, 0},
        {93, "CPG", 0, 60, 2, 0},
        {94, "CPC", 0, 35, 2, 0},
        {95, "ATC", 0, 24, 4, 0},
        {96, "ATCL2", 0, 8, 2, 0},
        {97, "MCVML2", 0, 21, 8, 0},
        {98, "GCEA0", 0, 83, 2, 0},
        {99, "GCEA1", 1, 83, 2, 0},
        {100, "GCEA2", 2, 83, 2, 0},
        {101, "GCEA3", 3, 83, 2, 0},
        {102, "GCEA4", 4, 83, 2, 0},
        {103, "GCEA5", 5, 83, 2, 0},
        {104, "GCEA6", 6, 83, 2, 0},
        {105, "GCEA7", 7, 83, 2, 0},
        {106, "GCEA8", 8, 83, 2, 0},
        {107, "GCEA9", 9, 83, 2, 0},
        {108, "GCEA10", 10, 83, 2, 0},
        {109, "GCEA11", 11, 83, 2, 0},
        {110, "GCEA12", 12, 83, 2, 0},
        {111, "GCEA13", 13, 83, 2, 0},
        {112, "GCEA14", 14, 83, 2, 0},
        {113, "GCEA15", 15, 83, 2, 0},
        {114, "GCEA16", 16, 83, 2, 0},
        {115, "GCEA17", 17, 83, 2, 0},
        {116, "GCEA18", 18, 83, 2, 0},
        {117, "GCEA19", 19, 83, 2, 0},
        {118, "GCEA20", 20, 83, 2, 0},
        {119, "GCEA21", 21, 83, 2, 0},
        {120, "GCEA22", 22, 83, 2, 0},
        {121, "GCEA23", 23, 83, 2, 0},
        {122, "GCEA24", 24, 83, 2, 0},
        {123, "GCEA25", 25, 83, 2, 0},
        {124, "GCEA26", 26, 83, 2, 0},
        {125, "GCEA27", 27, 83, 2, 0},
        {126, "GCEA28", 28, 83, 2, 0},
        {127, "GCEA29", 29, 83, 2, 0},
        {128, "GCEA30", 30, 83, 2, 0},
        {129, "GCEA31", 31, 83, 2, 0},
        {130, "RPB", 0, 95, 4, 0},
        {131, "RMI0", 0, 257, 4, 0},
        {132, "RMI1", 1, 257, 4, 0},
        {133, "RMI2", 2, 257, 4, 0},
        {134, "RMI3", 3, 257, 4, 0},
        {135, "RMI4", 4, 257, 4, 0},
        {136, "RMI5", 5, 257, 4, 0},
        {137, "RMI6", 6, 257, 4, 0},
        {138, "RMI7", 7, 257, 4, 0},
    };

    GpaCounterGroupExposedCounterDesc kHwClExposedCountersByGroupGfx9[] = {
        {0, 0, {7, 116, 117, 118, 126, 127, 128, 162, 257, 259}},
        {1, 444, {7, 116, 117, 118, 126, 127, 128, 162, 257, 259}},
        {2, 888, {7, 116, 117, 118, 126, 127, 128, 162, 257, 259}},
        {3, 1332, {7, 116, 117, 118, 126, 127, 128, 162, 257, 259}},
        {4, 1776, {0, 23}},
        {5, 1808, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {6, 2136, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {7, 2464, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {8, 2792, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {9, 3120, {0, 2}},
        {11, 3174, {8, 14, 21, 54, 55, 56, 57, 61, 62, 73, 74, 105, 109}},
        {12, 3525, {159, 160, 161, 162, 235, 236, 237, 238, 259}},
        {13, 4017, {1, 10, 20, 23, 32, 38, 42, 43, 46, 48, 49, 52, 54, 59}},
        {14, 4213, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 63, 71, 84, 85, 93}},
        {15, 4587, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 63, 71, 84, 85, 93}},
        {16, 4961, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 63, 71, 84, 85, 93}},
        {17, 5335, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 63, 71, 84, 85, 93}},
        {18, 5709, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 63, 71, 84, 85, 93}},
        {19, 6083, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 63, 71, 84, 85, 93}},
        {20, 6457, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 63, 71, 84, 85, 93}},
        {21, 6831, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 63, 71, 84, 85, 93}},
        {22, 7205, {12, 14, 17, 19, 22, 24, 27, 29}},
        {23, 7413, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {24, 7532, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {25, 7651, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {26, 7770, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {27, 7889, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {28, 8008, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {29, 8127, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {30, 8246, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {31, 8365, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {32, 8484, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {33, 8603, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {34, 8722, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {35, 8841, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {36, 8960, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {37, 9079, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {38, 9198, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {41, 9387, {20, 22, 29, 30, 33, 41, 42}},
        {42, 9669, {20, 22, 29, 30, 33, 41, 42}},
        {43, 9951, {20, 22, 29, 30, 33, 41, 42}},
        {44, 10233, {20, 22, 29, 30, 33, 41, 42}},
        {45, 10515, {20, 22, 29, 30, 33, 41, 42}},
        {46, 10797, {20, 22, 29, 30, 33, 41, 42}},
        {47, 11079, {20, 22, 29, 30, 33, 41, 42}},
        {48, 11361, {20, 22, 29, 30, 33, 41, 42}},
        {49, 11643, {20, 22, 29, 30, 33, 41, 42}},
        {50, 11925, {20, 22, 29, 30, 33, 41, 42}},
        {51, 12207, {20, 22, 29, 30, 33, 41, 42}},
        {52, 12489, {20, 22, 29, 30, 33, 41, 42}},
        {53, 12771, {20, 22, 29, 30, 33, 41, 42}},
        {54, 13053, {20, 22, 29, 30, 33, 41, 42}},
        {55, 13335, {20, 22, 29, 30, 33, 41, 42}},
        {56, 13617, {20, 22, 29, 30, 33, 41, 42}},
        {73, 14811, {6, 11, 12, 13, 60, 69, 70, 71, 72}},
        {74, 14896, {6, 11, 12, 13, 60, 69, 70, 71, 72}},
        {75, 14981, {6, 11, 12, 13, 60, 69, 70, 71, 72}},
        {76, 15066, {6, 11, 12, 13, 60, 69, 70, 71, 72}},
        {77, 15151, {6, 11, 12, 13, 60, 69, 70, 71, 72}},
        {78, 15236, {6, 11, 12, 13, 60, 69, 70, 71, 72}},
        {79, 15321, {6, 11, 12, 13, 60, 69, 70, 71, 72}},
        {80, 15406, {6, 11, 12, 13, 60, 69, 70, 71, 72}},
        {81, 15491, {6, 11, 12, 13, 60, 69, 70, 71, 72}},
        {82, 15576, {6, 11, 12, 13, 60, 69, 70, 71, 72}},
        {83, 15661, {6, 11, 12, 13, 60, 69, 70, 71, 72}},
        {84, 15746, {6, 11, 12, 13, 60, 69, 70, 71, 72}},
        {85, 15831, {6, 11, 12, 13, 60, 69, 70, 71, 72}},
        {86, 15916, {6, 11, 12, 13, 60, 69, 70, 71, 72}},
        {87, 16001, {6, 11, 12, 13, 60, 69, 70, 71, 72}},
        {88, 16086, {6, 11, 12, 13, 60, 69, 70, 71, 72}},
        {90, 16292, {1, 9, 105, 114, 125, 146}},
        {98, 16678, {55, 57}},
        {99, 16761, {55, 57}},
        {100, 16844, {55, 57}},
        {101, 16927, {55, 57}},
        {102, 17010, {55, 57}},
        {103, 17093, {55, 57}},
        {104, 17176, {55, 57}},
        {105, 17259, {55, 57}},
        {106, 17342, {55, 57}},
        {107, 17425, {55, 57}},
        {108, 17508, {55, 57}},
        {109, 17591, {55, 57}},
        {110, 17674, {55, 57}},
        {111, 17757, {55, 57}},
        {112, 17840, {55, 57}},
        {113, 17923, {55, 57}},
        {114, 18006, {55, 57}},
        {115, 18089, {55, 57}},
        {116, 18172, {55, 57}},
        {117, 18255, {55, 57}},
        {118, 18338, {55, 57}},
        {119, 18421, {55, 57}},
        {120, 18504, {55, 57}},
        {121, 18587, {55, 57}},
        {122, 18670, {55, 57}},
        {123, 18753, {55, 57}},
        {124, 18836, {55, 57}},
        {125, 18919, {55, 57}},
        {126, 19002, {55, 57}},
        {127, 19085, {55, 57}},
        {128, 19168, {55, 57}},
        {129, 19251, {55, 57}},
    };

    GpaPaddedCounterDesc kClPaddedCounterByGroupGfx9[] = {
        {0, 0, {438, 439, 440, 441, 442, 443}},
        {1, 444, {438, 439, 440, 441, 442, 443}},
        {2, 888, {438, 439, 440, 441, 442, 443}},
        {3, 1332, {438, 439, 440, 441, 442, 443}},
        {11, 3174, {292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350}},
        {12, 3525, {491}},
        {41, 9387, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {42, 9669, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {43, 9951, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {44, 10233, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {45, 10515, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {46, 10797, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {47, 11079, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {48, 11361, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {49, 11643, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {50, 11925, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {51, 12207, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {52, 12489, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {53, 12771, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {54, 13053, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {55, 13335, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {56, 13617, {256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281}},
        {98, 16678, {77, 78, 79, 80, 81, 82}},
        {99, 16761, {77, 78, 79, 80, 81, 82}},
        {100, 16844, {77, 78, 79, 80, 81, 82}},
        {101, 16927, {77, 78, 79, 80, 81, 82}},
        {102, 17010, {77, 78, 79, 80, 81, 82}},
        {103, 17093, {77, 78, 79, 80, 81, 82}},
        {104, 17176, {77, 78, 79, 80, 81, 82}},
        {105, 17259, {77, 78, 79, 80, 81, 82}},
        {106, 17342, {77, 78, 79, 80, 81, 82}},
        {107, 17425, {77, 78, 79, 80, 81, 82}},
        {108, 17508, {77, 78, 79, 80, 81, 82}},
        {109, 17591, {77, 78, 79, 80, 81, 82}},
        {110, 17674, {77, 78, 79, 80, 81, 82}},
        {111, 17757, {77, 78, 79, 80, 81, 82}},
        {112, 17840, {77, 78, 79, 80, 81, 82}},
        {113, 17923, {77, 78, 79, 80, 81, 82}},
        {114, 18006, {77, 78, 79, 80, 81, 82}},
        {115, 18089, {77, 78, 79, 80, 81, 82}},
        {116, 18172, {77, 78, 79, 80, 81, 82}},
        {117, 18255, {77, 78, 79, 80, 81, 82}},
        {118, 18338, {77, 78, 79, 80, 81, 82}},
        {119, 18421, {77, 78, 79, 80, 81, 82}},
        {120, 18504, {77, 78, 79, 80, 81, 82}},
        {121, 18587, {77, 78, 79, 80, 81, 82}},
        {122, 18670, {77, 78, 79, 80, 81, 82}},
        {123, 18753, {77, 78, 79, 80, 81, 82}},
        {124, 18836, {77, 78, 79, 80, 81, 82}},
        {125, 18919, {77, 78, 79, 80, 81, 82}},
        {126, 19002, {77, 78, 79, 80, 81, 82}},
        {127, 19085, {77, 78, 79, 80, 81, 82}},
        {128, 19168, {77, 78, 79, 80, 81, 82}},
        {129, 19251, {77, 78, 79, 80, 81, 82}},
        {130, 19334, {63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94}},
    };

    GpaSqCounterGroupDesc kHwClSqGroupsGfx9[] = {
        {14, 0, kSqAll},
        {15, 0, kSqEs},
        {16, 0, kSqGs},
        {17, 0, kSqVs},
        {18, 0, kSqPs},
        {19, 0, kSqLs},
        {20, 0, kSqHs},
        {21, 0, kSqCs},
    };


    unsigned int kHwClSqIsolatedGroupsGfx9[] = {
        23, // Ta
        24, // Ta
        25, // Ta
        26, // Ta
        27, // Ta
        28, // Ta
        29, // Ta
        30, // Ta
        31, // Ta
        32, // Ta
        33, // Ta
        34, // Ta
        35, // Ta
        36, // Ta
        37, // Ta
        38, // Ta
        39, // Tca
        40, // Tca
        41, // Tcc
        42, // Tcc
        43, // Tcc
        44, // Tcc
        45, // Tcc
        46, // Tcc
        47, // Tcc
        48, // Tcc
        49, // Tcc
        50, // Tcc
        51, // Tcc
        52, // Tcc
        53, // Tcc
        54, // Tcc
        55, // Tcc
        56, // Tcc
        57, // Td
        58, // Td
        59, // Td
        60, // Td
        61, // Td
        62, // Td
        63, // Td
        64, // Td
        65, // Td
        66, // Td
        67, // Td
        68, // Td
        69, // Td
        70, // Td
        71, // Td
        72, // Td
        73, // Tcp
        74, // Tcp
        75, // Tcp
        76, // Tcp
        77, // Tcp
        78, // Tcp
        79, // Tcp
        80, // Tcp
        81, // Tcp
        82, // Tcp
        83, // Tcp
        84, // Tcp
        85, // Tcp
        86, // Tcp
        87, // Tcp
        88, // Tcp
    };

    const std::set<unsigned int> kHwClTimestampBlockIdsGfx9 =       {}; ///< Timestamp block id's for CL for gfx9 family
    const std::set<unsigned int> kHwClTimeCounterIndicesGfx9 =      {}; ///< Timestamp counter indices for CL for gfx9 family
    const unsigned int           kHwClGroupCountGfx9                = static_cast<unsigned int>(kHwClGroupsGfx9.size());
    const unsigned int           kHwClExposedCountersGroupCountGfx9 = 103;
    const unsigned int           kClPaddedCounterGroupCountGfx9 = 55;
    const unsigned int           kHwClSqGroupCountGfx9              = sizeof(kHwClSqGroupsGfx9) / sizeof(GpaSqCounterGroupDesc);
    const unsigned int           kHwClSqIsolatedGroupCountGfx9      = sizeof(kHwClSqIsolatedGroupsGfx9) / sizeof(unsigned int);
} //  namespace counter_cl_gfx9

// clang-format on
