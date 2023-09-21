//==============================================================================
// Copyright (c) 2010-2023 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief CL counter definitions for GFX103.
//==============================================================================

#include "gpu_perf_api_counter_generator/gpa_counter.h"
#include "auto_generated/gpu_perf_api_counter_generator/gpa_hw_counter_gfx103.h"
#include "auto_generated/gpu_perf_api_counter_generator/gpa_hw_counter_cl_gfx103.h"

// This file is autogenerated by the ConvertHWEnums project

// clang-format off

namespace counter_cl_gfx103
{
    using namespace counter_gfx103;

    std::vector<std::vector<GpaHardwareCounterDesc>*> kClCounterGroupArrayGfx103 = {
        &kCb0CountersGfx103,
        &kCb1CountersGfx103,
        &kCb2CountersGfx103,
        &kCb3CountersGfx103,
        &kCpfCountersGfx103,
        &kDb0CountersGfx103,
        &kDb1CountersGfx103,
        &kDb2CountersGfx103,
        &kDb3CountersGfx103,
        &kGrbmCountersGfx103,
        &kPaSu0CountersGfx103,
        &kPaSc0CountersGfx103,
        &kPaSc1CountersGfx103,
        &kSpi0CountersGfx103,
        &kSq0CountersGfx103,
        &kSqEs0CountersGfx103,
        &kSqGs0CountersGfx103,
        &kSqVs0CountersGfx103,
        &kSqPs0CountersGfx103,
        &kSqLs0CountersGfx103,
        &kSqHs0CountersGfx103,
        &kSqCs0CountersGfx103,
        &kSx0CountersGfx103,
        &kTa0CountersGfx103,
        &kTa1CountersGfx103,
        &kTa2CountersGfx103,
        &kTa3CountersGfx103,
        &kTa4CountersGfx103,
        &kTa5CountersGfx103,
        &kTa6CountersGfx103,
        &kTa7CountersGfx103,
        &kTa8CountersGfx103,
        &kTa9CountersGfx103,
        &kTa10CountersGfx103,
        &kTa11CountersGfx103,
        &kTa12CountersGfx103,
        &kTa13CountersGfx103,
        &kTa14CountersGfx103,
        &kTa15CountersGfx103,
        &kTd0CountersGfx103,
        &kTd1CountersGfx103,
        &kTd2CountersGfx103,
        &kTd3CountersGfx103,
        &kTd4CountersGfx103,
        &kTd5CountersGfx103,
        &kTd6CountersGfx103,
        &kTd7CountersGfx103,
        &kTd8CountersGfx103,
        &kTd9CountersGfx103,
        &kTd10CountersGfx103,
        &kTd11CountersGfx103,
        &kTd12CountersGfx103,
        &kTd13CountersGfx103,
        &kTd14CountersGfx103,
        &kTd15CountersGfx103,
        &kTcp0CountersGfx103,
        &kTcp1CountersGfx103,
        &kTcp2CountersGfx103,
        &kTcp3CountersGfx103,
        &kTcp4CountersGfx103,
        &kTcp5CountersGfx103,
        &kTcp6CountersGfx103,
        &kTcp7CountersGfx103,
        &kTcp8CountersGfx103,
        &kTcp9CountersGfx103,
        &kTcp10CountersGfx103,
        &kTcp11CountersGfx103,
        &kTcp12CountersGfx103,
        &kTcp13CountersGfx103,
        &kTcp14CountersGfx103,
        &kTcp15CountersGfx103,
        &kGcea0CountersGfx103,
        &kGcea1CountersGfx103,
        &kGcea2CountersGfx103,
        &kGcea3CountersGfx103,
        &kGcea4CountersGfx103,
        &kGcea5CountersGfx103,
        &kGcea6CountersGfx103,
        &kGcea7CountersGfx103,
        &kGcea8CountersGfx103,
        &kGcea9CountersGfx103,
        &kGcea10CountersGfx103,
        &kGcea11CountersGfx103,
        &kGcea12CountersGfx103,
        &kGcea13CountersGfx103,
        &kGcea14CountersGfx103,
        &kGcea15CountersGfx103,
        &kGl1c0CountersGfx103,
        &kGl2c0CountersGfx103,
        &kGl2c1CountersGfx103,
        &kGl2c2CountersGfx103,
        &kGl2c3CountersGfx103,
        &kGl2c4CountersGfx103,
        &kGl2c5CountersGfx103,
        &kGl2c6CountersGfx103,
        &kGl2c7CountersGfx103,
        &kGl2c8CountersGfx103,
        &kGl2c9CountersGfx103,
        &kGl2c10CountersGfx103,
        &kGl2c11CountersGfx103,
        &kGl2c12CountersGfx103,
        &kGl2c13CountersGfx103,
        &kGl2c14CountersGfx103,
        &kGl2c15CountersGfx103,
        &kGl2c16CountersGfx103,
        &kGl2c17CountersGfx103,
        &kGl2c18CountersGfx103,
        &kGl2c19CountersGfx103,
        &kGl2c20CountersGfx103,
        &kGl2c21CountersGfx103,
        &kGl2c22CountersGfx103,
        &kGl2c23CountersGfx103,
    };


    std::vector<GpaCounterGroupDesc> kHwClGroupsGfx103 = {
        {0, "CB0", 0, 453, 4, 0},
        {1, "CB1", 1, 453, 4, 0},
        {2, "CB2", 2, 453, 4, 0},
        {3, "CB3", 3, 453, 4, 0},
        {4, "CPF", 0, 40, 2, 0},
        {5, "DB0", 0, 391, 4, 0},
        {6, "DB1", 1, 391, 4, 0},
        {7, "DB2", 2, 391, 4, 0},
        {8, "DB3", 3, 391, 4, 0},
        {9, "GRBM", 0, 47, 2, 0},
        {10, "GRBMSE", 0, 19, 1, 0},
        {11, "PA_SU", 0, 276, 4, 0},
        {12, "PA_SC0", 0, 578, 8, 0},
        {13, "PA_SC1", 1, 578, 8, 0},
        {14, "SPI", 0, 332, 6, 0},
        {15, "SQ", 0, 512, 16, 0},
        {16, "SQ_ES", 0, 512, 16, 0},
        {17, "SQ_GS", 0, 512, 16, 0},
        {18, "SQ_VS", 0, 512, 16, 0},
        {19, "SQ_PS", 0, 512, 16, 0},
        {20, "SQ_LS", 0, 512, 16, 0},
        {21, "SQ_HS", 0, 512, 16, 0},
        {22, "SQ_CS", 0, 512, 16, 0},
        {23, "SX", 0, 225, 4, 0},
        {24, "TA0", 0, 236, 2, 0},
        {25, "TA1", 1, 236, 2, 0},
        {26, "TA2", 2, 236, 2, 0},
        {27, "TA3", 3, 236, 2, 0},
        {28, "TA4", 4, 236, 2, 0},
        {29, "TA5", 5, 236, 2, 0},
        {30, "TA6", 6, 236, 2, 0},
        {31, "TA7", 7, 236, 2, 0},
        {32, "TA8", 8, 236, 2, 0},
        {33, "TA9", 9, 236, 2, 0},
        {34, "TA10", 10, 236, 2, 0},
        {35, "TA11", 11, 236, 2, 0},
        {36, "TA12", 12, 236, 2, 0},
        {37, "TA13", 13, 236, 2, 0},
        {38, "TA14", 14, 236, 2, 0},
        {39, "TA15", 15, 236, 2, 0},
        {40, "TD0", 0, 192, 2, 0},
        {41, "TD1", 1, 192, 2, 0},
        {42, "TD2", 2, 192, 2, 0},
        {43, "TD3", 3, 192, 2, 0},
        {44, "TD4", 4, 192, 2, 0},
        {45, "TD5", 5, 192, 2, 0},
        {46, "TD6", 6, 192, 2, 0},
        {47, "TD7", 7, 192, 2, 0},
        {48, "TD8", 8, 192, 2, 0},
        {49, "TD9", 9, 192, 2, 0},
        {50, "TD10", 10, 192, 2, 0},
        {51, "TD11", 11, 192, 2, 0},
        {52, "TD12", 12, 192, 2, 0},
        {53, "TD13", 13, 192, 2, 0},
        {54, "TD14", 14, 192, 2, 0},
        {55, "TD15", 15, 192, 2, 0},
        {56, "TCP0", 0, 61, 4, 0},
        {57, "TCP1", 1, 61, 4, 0},
        {58, "TCP2", 2, 61, 4, 0},
        {59, "TCP3", 3, 61, 4, 0},
        {60, "TCP4", 4, 61, 4, 0},
        {61, "TCP5", 5, 61, 4, 0},
        {62, "TCP6", 6, 61, 4, 0},
        {63, "TCP7", 7, 61, 4, 0},
        {64, "TCP8", 8, 61, 4, 0},
        {65, "TCP9", 9, 61, 4, 0},
        {66, "TCP10", 10, 61, 4, 0},
        {67, "TCP11", 11, 61, 4, 0},
        {68, "TCP12", 12, 61, 4, 0},
        {69, "TCP13", 13, 61, 4, 0},
        {70, "TCP14", 14, 61, 4, 0},
        {71, "TCP15", 15, 61, 4, 0},
        {72, "GDS", 0, 121, 4, 0},
        {73, "CPG", 0, 82, 2, 0},
        {74, "CPC", 0, 47, 2, 0},
        {75, "ATC", 0, 24, 4, 0},
        {76, "ATCL2", 0, 12, 2, 0},
        {77, "MCVML2", 0, 91, 8, 0},
        {78, "GCEA0", 0, 90, 2, 0},
        {79, "GCEA1", 1, 90, 2, 0},
        {80, "GCEA2", 2, 90, 2, 0},
        {81, "GCEA3", 3, 90, 2, 0},
        {82, "GCEA4", 4, 90, 2, 0},
        {83, "GCEA5", 5, 90, 2, 0},
        {84, "GCEA6", 6, 90, 2, 0},
        {85, "GCEA7", 7, 90, 2, 0},
        {86, "GCEA8", 8, 90, 2, 0},
        {87, "GCEA9", 9, 90, 2, 0},
        {88, "GCEA10", 10, 90, 2, 0},
        {89, "GCEA11", 11, 90, 2, 0},
        {90, "GCEA12", 12, 90, 2, 0},
        {91, "GCEA13", 13, 90, 2, 0},
        {92, "GCEA14", 14, 90, 2, 0},
        {93, "GCEA15", 15, 90, 2, 0},
        {94, "RPB", 0, 64, 4, 0},
        {95, "RMI0", 0, 258, 2, 0},
        {96, "RMI1", 1, 258, 2, 0},
        {97, "GE", 0, 40, 4, 0},
        {98, "GL1A", 0, 24, 4, 0},
        {99, "GL1C", 0, 83, 4, 0},
        {100, "GL1CG0", 0, 38, 4, 0},
        {101, "GL1CG1", 1, 38, 4, 0},
        {102, "GL1CG2", 2, 38, 4, 0},
        {103, "GL1CG3", 3, 38, 4, 0},
        {104, "GL2A0", 0, 91, 4, 0},
        {105, "GL2A1", 1, 91, 4, 0},
        {106, "GL2A2", 2, 91, 4, 0},
        {107, "GL2A3", 3, 91, 4, 0},
        {108, "GL2C0", 0, 254, 4, 0},
        {109, "GL2C1", 1, 254, 4, 0},
        {110, "GL2C2", 2, 254, 4, 0},
        {111, "GL2C3", 3, 254, 4, 0},
        {112, "GL2C4", 4, 254, 4, 0},
        {113, "GL2C5", 5, 254, 4, 0},
        {114, "GL2C6", 6, 254, 4, 0},
        {115, "GL2C7", 7, 254, 4, 0},
        {116, "GL2C8", 8, 254, 4, 0},
        {117, "GL2C9", 9, 254, 4, 0},
        {118, "GL2C10", 10, 254, 4, 0},
        {119, "GL2C11", 11, 254, 4, 0},
        {120, "GL2C12", 12, 254, 4, 0},
        {121, "GL2C13", 13, 254, 4, 0},
        {122, "GL2C14", 14, 254, 4, 0},
        {123, "GL2C15", 15, 254, 4, 0},
        {124, "GL2C16", 16, 254, 4, 0},
        {125, "GL2C17", 17, 254, 4, 0},
        {126, "GL2C18", 18, 254, 4, 0},
        {127, "GL2C19", 19, 254, 4, 0},
        {128, "GL2C20", 20, 254, 4, 0},
        {129, "GL2C21", 21, 254, 4, 0},
        {130, "GL2C22", 22, 254, 4, 0},
        {131, "GL2C23", 23, 254, 4, 0},
        {132, "CHA", 0, 40, 4, 0},
        {133, "CHC", 0, 40, 4, 0},
        {134, "CHCG", 0, 40, 4, 0},
        {135, "GUS", 0, 176, 2, 0},
        {136, "GCR", 0, 142, 2, 0},
        {137, "PA_PH", 0, 992, 8, 0},
        {138, "UTCL1", 0, 21, 2, 0},
    };

    GpaCounterGroupExposedCounterDesc kHwClExposedCountersByGroupGfx103[] = {
        {0, 0, {7, 116, 117, 118, 126, 127, 128, 162, 257, 259}},
        {1, 453, {7, 116, 117, 118, 126, 127, 128, 162, 257, 259}},
        {2, 906, {7, 116, 117, 118, 126, 127, 128, 162, 257, 259}},
        {3, 1359, {7, 116, 117, 118, 126, 127, 128, 162, 257, 259}},
        {4, 1812, {0, 24}},
        {5, 1852, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {6, 2243, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {7, 2634, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {8, 3025, {4, 15, 28, 46, 48, 55, 60, 63, 144, 174, 175, 176, 177, 178, 179}},
        {9, 3416, {0, 2}},
        {11, 3482, {8, 14, 21, 54, 55, 56, 57, 61, 62, 73, 74, 105, 109}},
        {12, 3758, {159, 160, 161, 162, 235, 236, 237, 238, 259}},
        {13, 4336, {159, 160, 161, 162, 235, 236, 237, 238, 259}},
        {14, 4914, {1, 9, 18, 21, 34, 41, 45, 46, 49, 51, 52, 55, 60, 61, 62, 63, 80, 81, 82, 83, 308, 314, 320, 326}},
        {15, 5246, {4, 5, 8, 31, 55, 57, 59, 60, 61, 64, 69, 70, 82, 117, 285, 299, 300, 301, 302, 334, 335, 336, 337}},
        {16, 5758, {4, 5, 8, 31, 55, 57, 59, 60, 61, 64, 69, 70, 82, 117, 285, 299, 300, 301, 302, 334, 335, 336, 337}},
        {17, 6270, {4, 5, 8, 31, 55, 57, 59, 60, 61, 64, 69, 70, 82, 117, 285, 299, 300, 301, 302, 334, 335, 336, 337}},
        {18, 6782, {4, 5, 8, 31, 55, 57, 59, 60, 61, 64, 69, 70, 82, 117, 285, 299, 300, 301, 302, 334, 335, 336, 337}},
        {19, 7294, {4, 5, 8, 31, 55, 57, 59, 60, 61, 64, 69, 70, 82, 117, 285, 299, 300, 301, 302, 334, 335, 336, 337}},
        {20, 7806, {4, 5, 8, 31, 55, 57, 59, 60, 61, 64, 69, 70, 82, 117, 285, 299, 300, 301, 302, 334, 335, 336, 337}},
        {21, 8318, {4, 5, 8, 31, 55, 57, 59, 60, 61, 64, 69, 70, 82, 117, 285, 299, 300, 301, 302, 334, 335, 336, 337}},
        {22, 8830, {4, 5, 8, 31, 55, 57, 59, 60, 61, 64, 69, 70, 82, 117, 285, 299, 300, 301, 302, 334, 335, 336, 337}},
        {23, 9342, {12, 14, 17, 19, 22, 24, 27, 29}},
        {24, 9567, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {25, 9803, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {26, 10039, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {27, 10275, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {28, 10511, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {29, 10747, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {30, 10983, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {31, 11219, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {32, 11455, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {33, 11691, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {34, 11927, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {35, 12163, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {36, 12399, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {37, 12635, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {38, 12871, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {39, 13107, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97}},
        {40, 13343, {82, 116, 117, 118}},
        {41, 13535, {82, 116, 117, 118}},
        {42, 13727, {82, 116, 117, 118}},
        {43, 13919, {82, 116, 117, 118}},
        {44, 14111, {82, 116, 117, 118}},
        {45, 14303, {82, 116, 117, 118}},
        {46, 14495, {82, 116, 117, 118}},
        {47, 14687, {82, 116, 117, 118}},
        {48, 14879, {82, 116, 117, 118}},
        {49, 15071, {82, 116, 117, 118}},
        {50, 15263, {82, 116, 117, 118}},
        {51, 15455, {82, 116, 117, 118}},
        {52, 15647, {82, 116, 117, 118}},
        {53, 15839, {82, 116, 117, 118}},
        {54, 16031, {82, 116, 117, 118}},
        {55, 16223, {82, 116, 117, 118}},
        {56, 16415, {9, 18, 36, 43, 44, 45}},
        {57, 16476, {9, 18, 36, 43, 44, 45}},
        {58, 16537, {9, 18, 36, 43, 44, 45}},
        {59, 16598, {9, 18, 36, 43, 44, 45}},
        {60, 16659, {9, 18, 36, 43, 44, 45}},
        {61, 16720, {9, 18, 36, 43, 44, 45}},
        {62, 16781, {9, 18, 36, 43, 44, 45}},
        {63, 16842, {9, 18, 36, 43, 44, 45}},
        {64, 16903, {9, 18, 36, 43, 44, 45}},
        {65, 16964, {9, 18, 36, 43, 44, 45}},
        {66, 17025, {9, 18, 36, 43, 44, 45}},
        {67, 17086, {9, 18, 36, 43, 44, 45}},
        {68, 17147, {9, 18, 36, 43, 44, 45}},
        {69, 17208, {9, 18, 36, 43, 44, 45}},
        {70, 17269, {9, 18, 36, 43, 44, 45}},
        {71, 17330, {9, 18, 36, 43, 44, 45}},
        {78, 17768, {55, 57}},
        {79, 17858, {55, 57}},
        {80, 17948, {55, 57}},
        {81, 18038, {55, 57}},
        {82, 18128, {55, 57}},
        {83, 18218, {55, 57}},
        {84, 18308, {55, 57}},
        {85, 18398, {55, 57}},
        {86, 18488, {55, 57}},
        {87, 18578, {55, 57}},
        {88, 18668, {55, 57}},
        {89, 18758, {55, 57}},
        {90, 18848, {55, 57}},
        {91, 18938, {55, 57}},
        {92, 19028, {55, 57}},
        {93, 19118, {55, 57}},
        {99, 19852, {14, 18}},
        {108, 20451, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {109, 20705, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {110, 20959, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {111, 21213, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {112, 21467, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {113, 21721, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {114, 21975, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {115, 22229, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {116, 22483, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {117, 22737, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {118, 22991, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {119, 23245, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {120, 23499, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {121, 23753, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {122, 24007, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {123, 24261, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {124, 24515, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {125, 24769, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {126, 25023, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {127, 25277, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {128, 25531, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {129, 25785, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {130, 26039, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
        {131, 26293, {3, 43, 83, 85, 88, 99, 100, 101, 102}},
    };

    GpaPaddedCounterDesc kClPaddedCounterByGroupGfx103[] = {
    {}
    };

    GpaSqCounterGroupDesc kHwClSqGroupsGfx103[] = {
        {15, 0, kSqAll},
        {16, 0, kSqEs},
        {17, 0, kSqGs},
        {18, 0, kSqVs},
        {19, 0, kSqPs},
        {20, 0, kSqLs},
        {21, 0, kSqHs},
        {22, 0, kSqCs},
    };


    unsigned int kHwClSqIsolatedGroupsGfx103[] = {
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

    const std::set<unsigned int> kHwClTimestampBlockIdsGfx103 =       {}; ///< Timestamp block id's for CL for gfx103 family
    const std::set<unsigned int> kHwClTimeCounterIndicesGfx103 =      {}; ///< Timestamp counter indices for CL for gfx103 family
    const unsigned int           kHwClGroupCountGfx103                = static_cast<unsigned int>(kHwClGroupsGfx103.size());
    const unsigned int           kHwClExposedCountersGroupCountGfx103 = 112;
    const unsigned int           kClPaddedCounterGroupCountGfx103 = 0;
    const unsigned int           kHwClSqGroupCountGfx103              = sizeof(kHwClSqGroupsGfx103) / sizeof(GpaSqCounterGroupDesc);
    const unsigned int           kHwClSqIsolatedGroupCountGfx103      = sizeof(kHwClSqIsolatedGroupsGfx103) / sizeof(unsigned int);
} //  namespace counter_cl_gfx103

// clang-format on
