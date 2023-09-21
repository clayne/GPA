//==============================================================================
// Copyright (c) 2010-2023 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief CL counter definitions for GFX10.
//==============================================================================

#include "gpu_perf_api_counter_generator/gpa_counter.h"
#include "auto_generated/gpu_perf_api_counter_generator/gpa_hw_counter_gfx10.h"
#include "auto_generated/gpu_perf_api_counter_generator/gpa_hw_counter_cl_gfx10.h"

// This file is autogenerated by the ConvertHWEnums project

// clang-format off

namespace counter_cl_gfx10
{
    using namespace counter_gfx10;

    std::vector<std::vector<GpaHardwareCounterDesc>*> kClCounterGroupArrayGfx10 = {
        &kCb0CountersGfx10,
        &kCb1CountersGfx10,
        &kCb2CountersGfx10,
        &kCb3CountersGfx10,
        &kCpfCountersGfx10,
        &kDb0CountersGfx10,
        &kDb1CountersGfx10,
        &kDb2CountersGfx10,
        &kDb3CountersGfx10,
        &kGrbmCountersGfx10,
        &kPaSu0CountersGfx10,
        &kPaSc0CountersGfx10,
        &kPaSc1CountersGfx10,
        &kSpi0CountersGfx10,
        &kSq0CountersGfx10,
        &kSqEs0CountersGfx10,
        &kSqGs0CountersGfx10,
        &kSqVs0CountersGfx10,
        &kSqPs0CountersGfx10,
        &kSqLs0CountersGfx10,
        &kSqHs0CountersGfx10,
        &kSqCs0CountersGfx10,
        &kSx0CountersGfx10,
        &kTa0CountersGfx10,
        &kTa1CountersGfx10,
        &kTa2CountersGfx10,
        &kTa3CountersGfx10,
        &kTa4CountersGfx10,
        &kTa5CountersGfx10,
        &kTa6CountersGfx10,
        &kTa7CountersGfx10,
        &kTa8CountersGfx10,
        &kTa9CountersGfx10,
        &kTa10CountersGfx10,
        &kTa11CountersGfx10,
        &kTa12CountersGfx10,
        &kTa13CountersGfx10,
        &kTa14CountersGfx10,
        &kTa15CountersGfx10,
        &kTcp0CountersGfx10,
        &kTcp1CountersGfx10,
        &kTcp2CountersGfx10,
        &kTcp3CountersGfx10,
        &kTcp4CountersGfx10,
        &kTcp5CountersGfx10,
        &kTcp6CountersGfx10,
        &kTcp7CountersGfx10,
        &kTcp8CountersGfx10,
        &kTcp9CountersGfx10,
        &kTcp10CountersGfx10,
        &kTcp11CountersGfx10,
        &kTcp12CountersGfx10,
        &kTcp13CountersGfx10,
        &kTcp14CountersGfx10,
        &kTcp15CountersGfx10,
        &kGcea0CountersGfx10,
        &kGcea1CountersGfx10,
        &kGcea2CountersGfx10,
        &kGcea3CountersGfx10,
        &kGcea4CountersGfx10,
        &kGcea5CountersGfx10,
        &kGcea6CountersGfx10,
        &kGcea7CountersGfx10,
        &kGcea8CountersGfx10,
        &kGcea9CountersGfx10,
        &kGcea10CountersGfx10,
        &kGcea11CountersGfx10,
        &kGcea12CountersGfx10,
        &kGcea13CountersGfx10,
        &kGcea14CountersGfx10,
        &kGcea15CountersGfx10,
        &kGeCountersGfx10,
        &kGl1c0CountersGfx10,
        &kGl2c0CountersGfx10,
        &kGl2c1CountersGfx10,
        &kGl2c2CountersGfx10,
        &kGl2c3CountersGfx10,
        &kGl2c4CountersGfx10,
        &kGl2c5CountersGfx10,
        &kGl2c6CountersGfx10,
        &kGl2c7CountersGfx10,
        &kGl2c8CountersGfx10,
        &kGl2c9CountersGfx10,
        &kGl2c10CountersGfx10,
        &kGl2c11CountersGfx10,
        &kGl2c12CountersGfx10,
        &kGl2c13CountersGfx10,
        &kGl2c14CountersGfx10,
        &kGl2c15CountersGfx10,
        &kGl2c16CountersGfx10,
        &kGl2c17CountersGfx10,
        &kGl2c18CountersGfx10,
        &kGl2c19CountersGfx10,
        &kGl2c20CountersGfx10,
        &kGl2c21CountersGfx10,
        &kGl2c22CountersGfx10,
        &kGl2c23CountersGfx10,
    };


    std::vector<GpaCounterGroupDesc> kHwClGroupsGfx10 = {
        {0, "CB0", 0, 461, 4, 0},
        {1, "CB1", 1, 461, 4, 0},
        {2, "CB2", 2, 461, 4, 0},
        {3, "CB3", 3, 461, 4, 0},
        {4, "CPF", 0, 40, 2, 0},
        {5, "DB0", 0, 370, 4, 0},
        {6, "DB1", 1, 370, 4, 0},
        {7, "DB2", 2, 370, 4, 0},
        {8, "DB3", 3, 370, 4, 0},
        {9, "GRBM", 0, 47, 2, 0},
        {10, "GRBMSE", 0, 19, 4, 0},
        {11, "PA_SU", 0, 266, 4, 0},
        {12, "PA_SC0", 0, 552, 8, 0},
        {13, "PA_SC1", 1, 552, 8, 0},
        {14, "SPI", 0, 329, 6, 0},
        {15, "SQ", 0, 512, 16, 0},
        {16, "SQ_ES", 0, 512, 16, 0},
        {17, "SQ_GS", 0, 512, 16, 0},
        {18, "SQ_VS", 0, 512, 16, 0},
        {19, "SQ_PS", 0, 512, 16, 0},
        {20, "SQ_LS", 0, 512, 16, 0},
        {21, "SQ_HS", 0, 512, 16, 0},
        {22, "SQ_CS", 0, 512, 16, 0},
        {23, "SX", 0, 225, 4, 0},
        {24, "TA0", 0, 226, 2, 0},
        {25, "TA1", 1, 226, 2, 0},
        {26, "TA2", 2, 226, 2, 0},
        {27, "TA3", 3, 226, 2, 0},
        {28, "TA4", 4, 226, 2, 0},
        {29, "TA5", 5, 226, 2, 0},
        {30, "TA6", 6, 226, 2, 0},
        {31, "TA7", 7, 226, 2, 0},
        {32, "TA8", 8, 226, 2, 0},
        {33, "TA9", 9, 226, 2, 0},
        {34, "TA10", 10, 226, 2, 0},
        {35, "TA11", 11, 226, 2, 0},
        {36, "TA12", 12, 226, 2, 0},
        {37, "TA13", 13, 226, 2, 0},
        {38, "TA14", 14, 226, 2, 0},
        {39, "TA15", 15, 226, 2, 0},
        {40, "TD0", 0, 61, 2, 0},
        {41, "TD1", 1, 61, 2, 0},
        {42, "TD2", 2, 61, 2, 0},
        {43, "TD3", 3, 61, 2, 0},
        {44, "TD4", 4, 61, 2, 0},
        {45, "TD5", 5, 61, 2, 0},
        {46, "TD6", 6, 61, 2, 0},
        {47, "TD7", 7, 61, 2, 0},
        {48, "TD8", 8, 61, 2, 0},
        {49, "TD9", 9, 61, 2, 0},
        {50, "TD10", 10, 61, 2, 0},
        {51, "TD11", 11, 61, 2, 0},
        {52, "TD12", 12, 61, 2, 0},
        {53, "TD13", 13, 61, 2, 0},
        {54, "TD14", 14, 61, 2, 0},
        {55, "TD15", 15, 61, 2, 0},
        {56, "TCP0", 0, 77, 4, 0},
        {57, "TCP1", 1, 77, 4, 0},
        {58, "TCP2", 2, 77, 4, 0},
        {59, "TCP3", 3, 77, 4, 0},
        {60, "TCP4", 4, 77, 4, 0},
        {61, "TCP5", 5, 77, 4, 0},
        {62, "TCP6", 6, 77, 4, 0},
        {63, "TCP7", 7, 77, 4, 0},
        {64, "TCP8", 8, 77, 4, 0},
        {65, "TCP9", 9, 77, 4, 0},
        {66, "TCP10", 10, 77, 4, 0},
        {67, "TCP11", 11, 77, 4, 0},
        {68, "TCP12", 12, 77, 4, 0},
        {69, "TCP13", 13, 77, 4, 0},
        {70, "TCP14", 14, 77, 4, 0},
        {71, "TCP15", 15, 77, 4, 0},
        {72, "GDS", 0, 123, 4, 0},
        {73, "CPG", 0, 82, 2, 0},
        {74, "CPC", 0, 47, 2, 0},
        {75, "ATC", 0, 24, 4, 0},
        {76, "ATCL2", 0, 12, 2, 0},
        {77, "MCVML2", 0, 21, 8, 0},
        {78, "GCEA0", 0, 89, 2, 0},
        {79, "GCEA1", 1, 89, 2, 0},
        {80, "GCEA2", 2, 89, 2, 0},
        {81, "GCEA3", 3, 89, 2, 0},
        {82, "GCEA4", 4, 89, 2, 0},
        {83, "GCEA5", 5, 89, 2, 0},
        {84, "GCEA6", 6, 89, 2, 0},
        {85, "GCEA7", 7, 89, 2, 0},
        {86, "GCEA8", 8, 89, 2, 0},
        {87, "GCEA9", 9, 89, 2, 0},
        {88, "GCEA10", 10, 89, 2, 0},
        {89, "GCEA11", 11, 89, 2, 0},
        {90, "GCEA12", 12, 89, 2, 0},
        {91, "GCEA13", 13, 89, 2, 0},
        {92, "GCEA14", 14, 89, 2, 0},
        {93, "GCEA15", 15, 89, 2, 0},
        {94, "RPB", 0, 63, 4, 0},
        {95, "RMI0", 0, 258, 4, 0},
        {96, "RMI1", 1, 258, 4, 0},
        {97, "GE", 0, 315, 12, 0},
        {98, "GL1A", 0, 36, 4, 0},
        {99, "GL1C", 0, 64, 4, 0},
        {100, "GL1CG0", 0, 38, 4, 0},
        {101, "GL1CG1", 1, 38, 4, 0},
        {102, "GL1CG2", 2, 38, 4, 0},
        {103, "GL1CG3", 3, 38, 4, 0},
        {104, "GL2A0", 0, 91, 4, 0},
        {105, "GL2A1", 1, 91, 4, 0},
        {106, "GL2A2", 2, 91, 4, 0},
        {107, "GL2A3", 3, 91, 4, 0},
        {108, "GL2C0", 0, 235, 4, 0},
        {109, "GL2C1", 1, 235, 4, 0},
        {110, "GL2C2", 2, 235, 4, 0},
        {111, "GL2C3", 3, 235, 4, 0},
        {112, "GL2C4", 4, 235, 4, 0},
        {113, "GL2C5", 5, 235, 4, 0},
        {114, "GL2C6", 6, 235, 4, 0},
        {115, "GL2C7", 7, 235, 4, 0},
        {116, "GL2C8", 8, 235, 4, 0},
        {117, "GL2C9", 9, 235, 4, 0},
        {118, "GL2C10", 10, 235, 4, 0},
        {119, "GL2C11", 11, 235, 4, 0},
        {120, "GL2C12", 12, 235, 4, 0},
        {121, "GL2C13", 13, 235, 4, 0},
        {122, "GL2C14", 14, 235, 4, 0},
        {123, "GL2C15", 15, 235, 4, 0},
        {124, "GL2C16", 16, 235, 4, 0},
        {125, "GL2C17", 17, 235, 4, 0},
        {126, "GL2C18", 18, 235, 4, 0},
        {127, "GL2C19", 19, 235, 4, 0},
        {128, "GL2C20", 20, 235, 4, 0},
        {129, "GL2C21", 21, 235, 4, 0},
        {130, "GL2C22", 22, 235, 4, 0},
        {131, "GL2C23", 23, 235, 4, 0},
        {132, "CHA", 0, 45, 4, 0},
        {133, "CHC", 0, 35, 4, 0},
        {134, "CHCG", 0, 35, 4, 0},
        {135, "GUS", 0, 176, 2, 0},
        {136, "GCR", 0, 94, 2, 0},
        {137, "PA_PH", 0, 960, 8, 0},
        {138, "UTCL1", 0, 15, 2, 0},
    };

    GpaCounterGroupExposedCounterDesc kHwClExposedCountersByGroupGfx10[] = {
        {0, 0, {7, 116, 117, 118, 126, 127, 128, 162, 257, 259}},
        {1, 461, {7, 116, 117, 118, 126, 127, 128, 162, 257, 259}},
        {2, 922, {7, 116, 117, 118, 126, 127, 128, 162, 257, 259}},
        {3, 1383, {7, 116, 117, 118, 126, 127, 128, 162, 257, 259}},
        {4, 1844, {0, 24}},
        {5, 1884, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {6, 2254, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {7, 2624, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {8, 2994, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {9, 3364, {0, 2}},
        {11, 3430, {8, 14, 21, 54, 55, 56, 57, 61, 62, 73, 74, 105, 109}},
        {12, 3696, {159, 160, 161, 162, 235, 236, 237, 238, 259}},
        {13, 4248, {159, 160, 161, 162, 235, 236, 237, 238, 259}},
        {14, 4800, {1, 9, 18, 21, 34, 41, 45, 46, 49, 51, 52, 55, 60, 61, 62, 63, 80, 81, 82, 83, 308, 314, 320, 326}},
        {15, 5129, {4, 5, 8, 31, 55, 57, 59, 60, 61, 64, 69, 70, 82, 117, 285, 299, 300, 301, 302, 334, 335, 336, 337}},
        {16, 5641, {4, 5, 8, 31, 55, 57, 59, 60, 61, 64, 69, 70, 82, 117, 285, 299, 300, 301, 302, 334, 335, 336, 337}},
        {17, 6153, {4, 5, 8, 31, 55, 57, 59, 60, 61, 64, 69, 70, 82, 117, 285, 299, 300, 301, 302, 334, 335, 336, 337}},
        {18, 6665, {4, 5, 8, 31, 55, 57, 59, 60, 61, 64, 69, 70, 82, 117, 285, 299, 300, 301, 302, 334, 335, 336, 337}},
        {19, 7177, {4, 5, 8, 31, 55, 57, 59, 60, 61, 64, 69, 70, 82, 117, 285, 299, 300, 301, 302, 334, 335, 336, 337}},
        {20, 7689, {4, 5, 8, 31, 55, 57, 59, 60, 61, 64, 69, 70, 82, 117, 285, 299, 300, 301, 302, 334, 335, 336, 337}},
        {21, 8201, {4, 5, 8, 31, 55, 57, 59, 60, 61, 64, 69, 70, 82, 117, 285, 299, 300, 301, 302, 334, 335, 336, 337}},
        {22, 8713, {4, 5, 8, 31, 55, 57, 59, 60, 61, 64, 69, 70, 82, 117, 285, 299, 300, 301, 302, 334, 335, 336, 337}},
        {23, 9225, {12, 14, 17, 19, 22, 24, 27, 29}},
        {24, 9450, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {25, 9676, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {26, 9902, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {27, 10128, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {28, 10354, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {29, 10580, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {30, 10806, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {31, 11032, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {32, 11258, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {33, 11484, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {34, 11710, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {35, 11936, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {36, 12162, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {37, 12388, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {38, 12614, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {39, 12840, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {56, 14042, {9, 18, 36, 44, 45, 46}},
        {57, 14119, {9, 18, 36, 44, 45, 46}},
        {58, 14196, {9, 18, 36, 44, 45, 46}},
        {59, 14273, {9, 18, 36, 44, 45, 46}},
        {60, 14350, {9, 18, 36, 44, 45, 46}},
        {61, 14427, {9, 18, 36, 44, 45, 46}},
        {62, 14504, {9, 18, 36, 44, 45, 46}},
        {63, 14581, {9, 18, 36, 44, 45, 46}},
        {64, 14658, {9, 18, 36, 44, 45, 46}},
        {65, 14735, {9, 18, 36, 44, 45, 46}},
        {66, 14812, {9, 18, 36, 44, 45, 46}},
        {67, 14889, {9, 18, 36, 44, 45, 46}},
        {68, 14966, {9, 18, 36, 44, 45, 46}},
        {69, 15043, {9, 18, 36, 44, 45, 46}},
        {70, 15120, {9, 18, 36, 44, 45, 46}},
        {71, 15197, {9, 18, 36, 44, 45, 46}},
        {78, 15583, {55, 57}},
        {79, 15672, {55, 57}},
        {80, 15761, {55, 57}},
        {81, 15850, {55, 57}},
        {82, 15939, {55, 57}},
        {83, 16028, {55, 57}},
        {84, 16117, {55, 57}},
        {85, 16206, {55, 57}},
        {86, 16295, {55, 57}},
        {87, 16384, {55, 57}},
        {88, 16473, {55, 57}},
        {89, 16562, {55, 57}},
        {90, 16651, {55, 57}},
        {91, 16740, {55, 57}},
        {92, 16829, {55, 57}},
        {93, 16918, {55, 57}},
        {97, 17586, {211, 221, 227, 247, 275}},
        {99, 17937, {14, 18}},
        {108, 18517, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {109, 18752, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {110, 18987, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {111, 19222, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {112, 19457, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {113, 19692, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {114, 19927, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {115, 20162, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {116, 20397, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {117, 20632, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {118, 20867, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {119, 21102, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {120, 21337, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {121, 21572, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {122, 21807, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {123, 22042, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {124, 22277, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {125, 22512, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {126, 22747, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {127, 22982, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {128, 23217, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {129, 23452, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {130, 23687, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
        {131, 23922, {3, 35, 75, 76, 79, 89, 90, 91, 92}},
    };

    GpaPaddedCounterDesc kClPaddedCounterByGroupGfx10[] = {
    {}
    };

    GpaSqCounterGroupDesc kHwClSqGroupsGfx10[] = {
        {15, 0, kSqAll},
        {16, 0, kSqEs},
        {17, 0, kSqGs},
        {18, 0, kSqVs},
        {19, 0, kSqPs},
        {20, 0, kSqLs},
        {21, 0, kSqHs},
        {22, 0, kSqCs},
    };


    unsigned int kHwClSqIsolatedGroupsGfx10[] = {
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
        39, // Ta
        40, // Td
        41, // Td
        42, // Td
        43, // Td
        44, // Td
        45, // Td
        46, // Td
        47, // Td
        48, // Td
        49, // Td
        50, // Td
        51, // Td
        52, // Td
        53, // Td
        54, // Td
        55, // Td
        56, // Tcp
        57, // Tcp
        58, // Tcp
        59, // Tcp
        60, // Tcp
        61, // Tcp
        62, // Tcp
        63, // Tcp
        64, // Tcp
        65, // Tcp
        66, // Tcp
        67, // Tcp
        68, // Tcp
        69, // Tcp
        70, // Tcp
        71, // Tcp
    };

    const std::set<unsigned int> kHwClTimestampBlockIdsGfx10 =       {}; ///< Timestamp block id's for CL for gfx10 family
    const std::set<unsigned int> kHwClTimeCounterIndicesGfx10 =      {}; ///< Timestamp counter indices for CL for gfx10 family
    const unsigned int           kHwClGroupCountGfx10                = static_cast<unsigned int>(kHwClGroupsGfx10.size());
    const unsigned int           kHwClExposedCountersGroupCountGfx10 = 97;
    const unsigned int           kClPaddedCounterGroupCountGfx10 = 0;
    const unsigned int           kHwClSqGroupCountGfx10              = sizeof(kHwClSqGroupsGfx10) / sizeof(GpaSqCounterGroupDesc);
    const unsigned int           kHwClSqIsolatedGroupCountGfx10      = sizeof(kHwClSqIsolatedGroupsGfx10) / sizeof(unsigned int);
} //  namespace counter_cl_gfx10

// clang-format on
