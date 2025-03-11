//==============================================================================
// Copyright (c) 2010-2025 Advanced Micro Devices, Inc. All rights reserved.
/// @author AMD Developer Tools Team
/// @file
/// @brief DX12 counter definitions for GFX10.
//==============================================================================

#include "gpu_perf_api_counter_generator/gpa_counter.h"
#include "auto_generated/gpu_perf_api_counter_generator/gpa_hw_counter_gfx10.h"
#include "auto_generated/gpu_perf_api_counter_generator/gpa_hw_counter_dx12_gfx10.h"

// This file is autogenerated by the ConvertHWEnums project

// clang-format off

namespace counter_dx12_gfx10
{
    using namespace counter_gfx10;

    std::vector<std::vector<GpaHardwareCounterDesc>*> kDx12CounterGroupArrayGfx10 = {
        &kCpfCountersGfx10,
        &kPaSu0CountersGfx10,
        &kPaSu1CountersGfx10,
        &kPaSu2CountersGfx10,
        &kPaSu3CountersGfx10,
        &kPaSc0CountersGfx10,
        &kPaSc1CountersGfx10,
        &kPaSc2CountersGfx10,
        &kPaSc3CountersGfx10,
        &kPaSc4CountersGfx10,
        &kPaSc5CountersGfx10,
        &kPaSc6CountersGfx10,
        &kPaSc7CountersGfx10,
        &kSpi0CountersGfx10,
        &kSpi1CountersGfx10,
        &kSq0CountersGfx10,
        &kSq1CountersGfx10,
        &kSqEs0CountersGfx10,
        &kSqEs1CountersGfx10,
        &kSqGs0CountersGfx10,
        &kSqGs1CountersGfx10,
        &kSqVs0CountersGfx10,
        &kSqVs1CountersGfx10,
        &kSqPs0CountersGfx10,
        &kSqPs1CountersGfx10,
        &kSqLs0CountersGfx10,
        &kSqLs1CountersGfx10,
        &kSqHs0CountersGfx10,
        &kSqHs1CountersGfx10,
        &kSqCs0CountersGfx10,
        &kSqCs1CountersGfx10,
        &kSx0CountersGfx10,
        &kSx1CountersGfx10,
        &kSx2CountersGfx10,
        &kSx3CountersGfx10,
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
        &kTa16CountersGfx10,
        &kTa17CountersGfx10,
        &kTa18CountersGfx10,
        &kTa19CountersGfx10,
        &kTa20CountersGfx10,
        &kTa21CountersGfx10,
        &kTa22CountersGfx10,
        &kTa23CountersGfx10,
        &kTa24CountersGfx10,
        &kTa25CountersGfx10,
        &kTa26CountersGfx10,
        &kTa27CountersGfx10,
        &kTa28CountersGfx10,
        &kTa29CountersGfx10,
        &kTa30CountersGfx10,
        &kTa31CountersGfx10,
        &kTa32CountersGfx10,
        &kTa33CountersGfx10,
        &kTa34CountersGfx10,
        &kTa35CountersGfx10,
        &kTa36CountersGfx10,
        &kTa37CountersGfx10,
        &kTa38CountersGfx10,
        &kTa39CountersGfx10,
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
        &kTcp16CountersGfx10,
        &kTcp17CountersGfx10,
        &kTcp18CountersGfx10,
        &kTcp19CountersGfx10,
        &kTcp20CountersGfx10,
        &kTcp21CountersGfx10,
        &kTcp22CountersGfx10,
        &kTcp23CountersGfx10,
        &kTcp24CountersGfx10,
        &kTcp25CountersGfx10,
        &kTcp26CountersGfx10,
        &kTcp27CountersGfx10,
        &kTcp28CountersGfx10,
        &kTcp29CountersGfx10,
        &kTcp30CountersGfx10,
        &kTcp31CountersGfx10,
        &kTcp32CountersGfx10,
        &kTcp33CountersGfx10,
        &kTcp34CountersGfx10,
        &kTcp35CountersGfx10,
        &kTcp36CountersGfx10,
        &kTcp37CountersGfx10,
        &kTcp38CountersGfx10,
        &kTcp39CountersGfx10,
        &kDb0CountersGfx10,
        &kDb1CountersGfx10,
        &kDb2CountersGfx10,
        &kDb3CountersGfx10,
        &kDb4CountersGfx10,
        &kDb5CountersGfx10,
        &kDb6CountersGfx10,
        &kDb7CountersGfx10,
        &kDb8CountersGfx10,
        &kDb9CountersGfx10,
        &kDb10CountersGfx10,
        &kDb11CountersGfx10,
        &kDb12CountersGfx10,
        &kDb13CountersGfx10,
        &kDb14CountersGfx10,
        &kDb15CountersGfx10,
        &kCb0CountersGfx10,
        &kCb1CountersGfx10,
        &kCb2CountersGfx10,
        &kCb3CountersGfx10,
        &kCb4CountersGfx10,
        &kCb5CountersGfx10,
        &kCb6CountersGfx10,
        &kCb7CountersGfx10,
        &kCb8CountersGfx10,
        &kCb9CountersGfx10,
        &kCb10CountersGfx10,
        &kCb11CountersGfx10,
        &kCb12CountersGfx10,
        &kCb13CountersGfx10,
        &kCb14CountersGfx10,
        &kCb15CountersGfx10,
        &kGrbmCountersGfx10,
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
        &kGl1c1CountersGfx10,
        &kGl1c2CountersGfx10,
        &kGl1c3CountersGfx10,
        &kGl1c4CountersGfx10,
        &kGl1c5CountersGfx10,
        &kGl1c6CountersGfx10,
        &kGl1c7CountersGfx10,
        &kGl1c8CountersGfx10,
        &kGl1c9CountersGfx10,
        &kGl1c10CountersGfx10,
        &kGl1c11CountersGfx10,
        &kGl1c12CountersGfx10,
        &kGl1c13CountersGfx10,
        &kGl1c14CountersGfx10,
        &kGl1c15CountersGfx10,
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
        &kGpuTimeCountersGfx10,
    };


    std::vector<GpaCounterGroupDesc> kHwDx12GroupsGfx10 = {
        {0, "CPF", 0, 40, 2, 4},
        {1, "PA_SU0", 0, 266, 4, 16},
        {2, "PA_SU1", 1, 266, 4, 16},
        {3, "PA_SU2", 2, 266, 4, 16},
        {4, "PA_SU3", 3, 266, 4, 16},
        {5, "PA_SC0", 0, 552, 8, 4},
        {6, "PA_SC1", 1, 552, 8, 4},
        {7, "PA_SC2", 2, 552, 8, 4},
        {8, "PA_SC3", 3, 552, 8, 4},
        {9, "PA_SC4", 4, 552, 8, 4},
        {10, "PA_SC5", 5, 552, 8, 4},
        {11, "PA_SC6", 6, 552, 8, 4},
        {12, "PA_SC7", 7, 552, 8, 4},
        {13, "SPI0", 0, 329, 6, 16},
        {14, "SPI1", 1, 329, 6, 16},
        {15, "SQ0", 0, 512, 16, 16},
        {16, "SQ1", 1, 512, 16, 16},
        {17, "SQ_ES0", 0, 512, 16, 16},
        {18, "SQ_ES1", 1, 512, 16, 16},
        {19, "SQ_GS0", 0, 512, 16, 16},
        {20, "SQ_GS1", 1, 512, 16, 16},
        {21, "SQ_VS0", 0, 512, 16, 16},
        {22, "SQ_VS1", 1, 512, 16, 16},
        {23, "SQ_PS0", 0, 512, 16, 16},
        {24, "SQ_PS1", 1, 512, 16, 16},
        {25, "SQ_LS0", 0, 512, 16, 16},
        {26, "SQ_LS1", 1, 512, 16, 16},
        {27, "SQ_HS0", 0, 512, 16, 16},
        {28, "SQ_HS1", 1, 512, 16, 16},
        {29, "SQ_CS0", 0, 512, 16, 16},
        {30, "SQ_CS1", 1, 512, 16, 16},
        {31, "SX0", 0, 225, 4, 8},
        {32, "SX1", 1, 225, 4, 8},
        {33, "SX2", 2, 225, 4, 8},
        {34, "SX3", 3, 225, 4, 8},
        {35, "TA0", 0, 226, 2, 4},
        {36, "TA1", 1, 226, 2, 4},
        {37, "TA2", 2, 226, 2, 4},
        {38, "TA3", 3, 226, 2, 4},
        {39, "TA4", 4, 226, 2, 4},
        {40, "TA5", 5, 226, 2, 4},
        {41, "TA6", 6, 226, 2, 4},
        {42, "TA7", 7, 226, 2, 4},
        {43, "TA8", 8, 226, 2, 4},
        {44, "TA9", 9, 226, 2, 4},
        {45, "TA10", 10, 226, 2, 4},
        {46, "TA11", 11, 226, 2, 4},
        {47, "TA12", 12, 226, 2, 4},
        {48, "TA13", 13, 226, 2, 4},
        {49, "TA14", 14, 226, 2, 4},
        {50, "TA15", 15, 226, 2, 4},
        {51, "TA16", 16, 226, 2, 4},
        {52, "TA17", 17, 226, 2, 4},
        {53, "TA18", 18, 226, 2, 4},
        {54, "TA19", 19, 226, 2, 4},
        {55, "TA20", 20, 226, 2, 4},
        {56, "TA21", 21, 226, 2, 4},
        {57, "TA22", 22, 226, 2, 4},
        {58, "TA23", 23, 226, 2, 4},
        {59, "TA24", 24, 226, 2, 4},
        {60, "TA25", 25, 226, 2, 4},
        {61, "TA26", 26, 226, 2, 4},
        {62, "TA27", 27, 226, 2, 4},
        {63, "TA28", 28, 226, 2, 4},
        {64, "TA29", 29, 226, 2, 4},
        {65, "TA30", 30, 226, 2, 4},
        {66, "TA31", 31, 226, 2, 4},
        {67, "TA32", 32, 226, 2, 4},
        {68, "TA33", 33, 226, 2, 4},
        {69, "TA34", 34, 226, 2, 4},
        {70, "TA35", 35, 226, 2, 4},
        {71, "TA36", 36, 226, 2, 4},
        {72, "TA37", 37, 226, 2, 4},
        {73, "TA38", 38, 226, 2, 4},
        {74, "TA39", 39, 226, 2, 4},
        {75, "TD0", 0, 61, 2, 4},
        {76, "TD1", 1, 61, 2, 4},
        {77, "TD2", 2, 61, 2, 4},
        {78, "TD3", 3, 61, 2, 4},
        {79, "TD4", 4, 61, 2, 4},
        {80, "TD5", 5, 61, 2, 4},
        {81, "TD6", 6, 61, 2, 4},
        {82, "TD7", 7, 61, 2, 4},
        {83, "TD8", 8, 61, 2, 4},
        {84, "TD9", 9, 61, 2, 4},
        {85, "TD10", 10, 61, 2, 4},
        {86, "TD11", 11, 61, 2, 4},
        {87, "TD12", 12, 61, 2, 4},
        {88, "TD13", 13, 61, 2, 4},
        {89, "TD14", 14, 61, 2, 4},
        {90, "TD15", 15, 61, 2, 4},
        {91, "TD16", 16, 61, 2, 4},
        {92, "TD17", 17, 61, 2, 4},
        {93, "TD18", 18, 61, 2, 4},
        {94, "TD19", 19, 61, 2, 4},
        {95, "TD20", 20, 61, 2, 4},
        {96, "TD21", 21, 61, 2, 4},
        {97, "TD22", 22, 61, 2, 4},
        {98, "TD23", 23, 61, 2, 4},
        {99, "TD24", 24, 61, 2, 4},
        {100, "TD25", 25, 61, 2, 4},
        {101, "TD26", 26, 61, 2, 4},
        {102, "TD27", 27, 61, 2, 4},
        {103, "TD28", 28, 61, 2, 4},
        {104, "TD29", 29, 61, 2, 4},
        {105, "TD30", 30, 61, 2, 4},
        {106, "TD31", 31, 61, 2, 4},
        {107, "TD32", 32, 61, 2, 4},
        {108, "TD33", 33, 61, 2, 4},
        {109, "TD34", 34, 61, 2, 4},
        {110, "TD35", 35, 61, 2, 4},
        {111, "TD36", 36, 61, 2, 4},
        {112, "TD37", 37, 61, 2, 4},
        {113, "TD38", 38, 61, 2, 4},
        {114, "TD39", 39, 61, 2, 4},
        {115, "TCP0", 0, 77, 4, 8},
        {116, "TCP1", 1, 77, 4, 8},
        {117, "TCP2", 2, 77, 4, 8},
        {118, "TCP3", 3, 77, 4, 8},
        {119, "TCP4", 4, 77, 4, 8},
        {120, "TCP5", 5, 77, 4, 8},
        {121, "TCP6", 6, 77, 4, 8},
        {122, "TCP7", 7, 77, 4, 8},
        {123, "TCP8", 8, 77, 4, 8},
        {124, "TCP9", 9, 77, 4, 8},
        {125, "TCP10", 10, 77, 4, 8},
        {126, "TCP11", 11, 77, 4, 8},
        {127, "TCP12", 12, 77, 4, 8},
        {128, "TCP13", 13, 77, 4, 8},
        {129, "TCP14", 14, 77, 4, 8},
        {130, "TCP15", 15, 77, 4, 8},
        {131, "TCP16", 16, 77, 4, 8},
        {132, "TCP17", 17, 77, 4, 8},
        {133, "TCP18", 18, 77, 4, 8},
        {134, "TCP19", 19, 77, 4, 8},
        {135, "TCP20", 20, 77, 4, 8},
        {136, "TCP21", 21, 77, 4, 8},
        {137, "TCP22", 22, 77, 4, 8},
        {138, "TCP23", 23, 77, 4, 8},
        {139, "TCP24", 24, 77, 4, 8},
        {140, "TCP25", 25, 77, 4, 8},
        {141, "TCP26", 26, 77, 4, 8},
        {142, "TCP27", 27, 77, 4, 8},
        {143, "TCP28", 28, 77, 4, 8},
        {144, "TCP29", 29, 77, 4, 8},
        {145, "TCP30", 30, 77, 4, 8},
        {146, "TCP31", 31, 77, 4, 8},
        {147, "TCP32", 32, 77, 4, 8},
        {148, "TCP33", 33, 77, 4, 8},
        {149, "TCP34", 34, 77, 4, 8},
        {150, "TCP35", 35, 77, 4, 8},
        {151, "TCP36", 36, 77, 4, 8},
        {152, "TCP37", 37, 77, 4, 8},
        {153, "TCP38", 38, 77, 4, 8},
        {154, "TCP39", 39, 77, 4, 8},
        {155, "DB0", 0, 370, 4, 8},
        {156, "DB1", 1, 370, 4, 8},
        {157, "DB2", 2, 370, 4, 8},
        {158, "DB3", 3, 370, 4, 8},
        {159, "DB4", 4, 370, 4, 8},
        {160, "DB5", 5, 370, 4, 8},
        {161, "DB6", 6, 370, 4, 8},
        {162, "DB7", 7, 370, 4, 8},
        {163, "DB8", 8, 370, 4, 8},
        {164, "DB9", 9, 370, 4, 8},
        {165, "DB10", 10, 370, 4, 8},
        {166, "DB11", 11, 370, 4, 8},
        {167, "DB12", 12, 370, 4, 8},
        {168, "DB13", 13, 370, 4, 8},
        {169, "DB14", 14, 370, 4, 8},
        {170, "DB15", 15, 370, 4, 8},
        {171, "CB0", 0, 461, 4, 4},
        {172, "CB1", 1, 461, 4, 4},
        {173, "CB2", 2, 461, 4, 4},
        {174, "CB3", 3, 461, 4, 4},
        {175, "CB4", 4, 461, 4, 4},
        {176, "CB5", 5, 461, 4, 4},
        {177, "CB6", 6, 461, 4, 4},
        {178, "CB7", 7, 461, 4, 4},
        {179, "CB8", 8, 461, 4, 4},
        {180, "CB9", 9, 461, 4, 4},
        {181, "CB10", 10, 461, 4, 4},
        {182, "CB11", 11, 461, 4, 4},
        {183, "CB12", 12, 461, 4, 4},
        {184, "CB13", 13, 461, 4, 4},
        {185, "CB14", 14, 461, 4, 4},
        {186, "CB15", 15, 461, 4, 4},
        {187, "GDS", 0, 123, 4, 4},
        {188, "GRBM", 0, 47, 2, 0},
        {189, "GRBMSE0", 0, 19, 4, 0},
        {190, "GRBMSE1", 1, 19, 4, 0},
        {191, "RLC", 0, 7, 2, 0},
        {192, "SDMA0", 0, 101, 2, 8},
        {193, "SDMA1", 1, 101, 2, 8},
        {194, "CPG", 0, 82, 2, 4},
        {195, "CPC", 0, 47, 2, 4},
        {196, "ATC", 0, 24, 4, 0},
        {197, "ATCL2", 0, 12, 2, 4},
        {198, "MCVML2", 0, 21, 8, 0},
        {199, "GCEA0", 0, 89, 2, 4},
        {200, "GCEA1", 1, 89, 2, 4},
        {201, "GCEA2", 2, 89, 2, 4},
        {202, "GCEA3", 3, 89, 2, 4},
        {203, "GCEA4", 4, 89, 2, 4},
        {204, "GCEA5", 5, 89, 2, 4},
        {205, "GCEA6", 6, 89, 2, 4},
        {206, "GCEA7", 7, 89, 2, 4},
        {207, "GCEA8", 8, 89, 2, 4},
        {208, "GCEA9", 9, 89, 2, 4},
        {209, "GCEA10", 10, 89, 2, 4},
        {210, "GCEA11", 11, 89, 2, 4},
        {211, "GCEA12", 12, 89, 2, 4},
        {212, "GCEA13", 13, 89, 2, 4},
        {213, "GCEA14", 14, 89, 2, 4},
        {214, "GCEA15", 15, 89, 2, 4},
        {215, "RPB", 0, 63, 4, 0},
        {216, "RMI0", 0, 258, 4, 4},
        {217, "RMI1", 1, 258, 4, 4},
        {218, "RMI2", 2, 258, 4, 4},
        {219, "RMI3", 3, 258, 4, 4},
        {220, "RMI4", 4, 258, 4, 4},
        {221, "RMI5", 5, 258, 4, 4},
        {222, "RMI6", 6, 258, 4, 4},
        {223, "RMI7", 7, 258, 4, 4},
        {224, "RMI8", 8, 258, 4, 4},
        {225, "RMI9", 9, 258, 4, 4},
        {226, "RMI10", 10, 258, 4, 4},
        {227, "RMI11", 11, 258, 4, 4},
        {228, "RMI12", 12, 258, 4, 4},
        {229, "RMI13", 13, 258, 4, 4},
        {230, "RMI14", 14, 258, 4, 4},
        {231, "RMI15", 15, 258, 4, 4},
        {232, "UMC0", 0, 40, 5, 0},
        {233, "UMC1", 1, 40, 5, 0},
        {234, "UMC2", 2, 40, 5, 0},
        {235, "UMC3", 3, 40, 5, 0},
        {236, "UMC4", 4, 40, 5, 0},
        {237, "UMC5", 5, 40, 5, 0},
        {238, "UMC6", 6, 40, 5, 0},
        {239, "UMC7", 7, 40, 5, 0},
        {240, "UMC8", 8, 40, 5, 0},
        {241, "UMC9", 9, 40, 5, 0},
        {242, "UMC10", 10, 40, 5, 0},
        {243, "UMC11", 11, 40, 5, 0},
        {244, "UMC12", 12, 40, 5, 0},
        {245, "UMC13", 13, 40, 5, 0},
        {246, "UMC14", 14, 40, 5, 0},
        {247, "UMC15", 15, 40, 5, 0},
        {248, "UMC16", 16, 40, 5, 0},
        {249, "UMC17", 17, 40, 5, 0},
        {250, "UMC18", 18, 40, 5, 0},
        {251, "UMC19", 19, 40, 5, 0},
        {252, "GE", 0, 315, 12, 16},
        {253, "GL1A0", 0, 36, 4, 4},
        {254, "GL1A1", 1, 36, 4, 4},
        {255, "GL1A2", 2, 36, 4, 4},
        {256, "GL1A3", 3, 36, 4, 4},
        {257, "GL1A4", 4, 36, 4, 4},
        {258, "GL1A5", 5, 36, 4, 4},
        {259, "GL1A6", 6, 36, 4, 4},
        {260, "GL1A7", 7, 36, 4, 4},
        {261, "GL1C0", 0, 64, 4, 4},
        {262, "GL1C1", 1, 64, 4, 4},
        {263, "GL1C2", 2, 64, 4, 4},
        {264, "GL1C3", 3, 64, 4, 4},
        {265, "GL1C4", 4, 64, 4, 4},
        {266, "GL1C5", 5, 64, 4, 4},
        {267, "GL1C6", 6, 64, 4, 4},
        {268, "GL1C7", 7, 64, 4, 4},
        {269, "GL1C8", 8, 64, 4, 4},
        {270, "GL1C9", 9, 64, 4, 4},
        {271, "GL1C10", 10, 64, 4, 4},
        {272, "GL1C11", 11, 64, 4, 4},
        {273, "GL1C12", 12, 64, 4, 4},
        {274, "GL1C13", 13, 64, 4, 4},
        {275, "GL1C14", 14, 64, 4, 4},
        {276, "GL1C15", 15, 64, 4, 4},
        {277, "GL1CG0", 0, 38, 4, 0},
        {278, "GL1CG1", 1, 38, 4, 0},
        {279, "GL1CG2", 2, 38, 4, 0},
        {280, "GL1CG3", 3, 38, 4, 0},
        {281, "GL1CG4", 4, 38, 4, 0},
        {282, "GL1CG5", 5, 38, 4, 0},
        {283, "GL1CG6", 6, 38, 4, 0},
        {284, "GL1CG7", 7, 38, 4, 0},
        {285, "GL1CG8", 8, 38, 4, 0},
        {286, "GL1CG9", 9, 38, 4, 0},
        {287, "GL1CG10", 10, 38, 4, 0},
        {288, "GL1CG11", 11, 38, 4, 0},
        {289, "GL1CG12", 12, 38, 4, 0},
        {290, "GL1CG13", 13, 38, 4, 0},
        {291, "GL1CG14", 14, 38, 4, 0},
        {292, "GL1CG15", 15, 38, 4, 0},
        {293, "GL2A0", 0, 91, 4, 8},
        {294, "GL2A1", 1, 91, 4, 8},
        {295, "GL2A2", 2, 91, 4, 8},
        {296, "GL2A3", 3, 91, 4, 8},
        {297, "GL2C0", 0, 235, 4, 8},
        {298, "GL2C1", 1, 235, 4, 8},
        {299, "GL2C2", 2, 235, 4, 8},
        {300, "GL2C3", 3, 235, 4, 8},
        {301, "GL2C4", 4, 235, 4, 8},
        {302, "GL2C5", 5, 235, 4, 8},
        {303, "GL2C6", 6, 235, 4, 8},
        {304, "GL2C7", 7, 235, 4, 8},
        {305, "GL2C8", 8, 235, 4, 8},
        {306, "GL2C9", 9, 235, 4, 8},
        {307, "GL2C10", 10, 235, 4, 8},
        {308, "GL2C11", 11, 235, 4, 8},
        {309, "GL2C12", 12, 235, 4, 8},
        {310, "GL2C13", 13, 235, 4, 8},
        {311, "GL2C14", 14, 235, 4, 8},
        {312, "GL2C15", 15, 235, 4, 8},
        {313, "GL2C16", 16, 235, 4, 8},
        {314, "GL2C17", 17, 235, 4, 8},
        {315, "GL2C18", 18, 235, 4, 8},
        {316, "GL2C19", 19, 235, 4, 8},
        {317, "GL2C20", 20, 235, 4, 8},
        {318, "GL2C21", 21, 235, 4, 8},
        {319, "GL2C22", 22, 235, 4, 8},
        {320, "GL2C23", 23, 235, 4, 8},
        {321, "CHA", 0, 45, 4, 4},
        {322, "CHC0", 0, 35, 4, 4},
        {323, "CHC1", 1, 35, 4, 4},
        {324, "CHC2", 2, 35, 4, 4},
        {325, "CHC3", 3, 35, 4, 4},
        {326, "CHCG", 0, 35, 4, 4},
        {327, "GUS", 0, 176, 2, 4},
        {328, "GCR", 0, 94, 2, 4},
        {329, "PA_PH", 0, 960, 8, 16},
        {330, "UTCL10", 0, 15, 2, 0},
        {331, "UTCL11", 1, 15, 2, 0},
        {332, "UTCL12", 2, 15, 2, 0},
        {333, "UTCL13", 3, 15, 2, 0},
        {334, "GPUTime", 0, 6, 3, 0},
    };

    GpaCounterGroupExposedCounterDesc kHwDx12ExposedCountersByGroupGfx10[] = {
        {0, 0},
        {1, 40},
        {2, 306},
        {3, 572},
        {4, 838},
        {5, 1104},
        {6, 1656},
        {7, 2208},
        {8, 2760},
        {9, 3312},
        {10, 3864},
        {11, 4416},
        {12, 4968},
        {13, 5520},
        {14, 5849},
        {15, 6178},
        {16, 6690},
        {17, 7202},
        {18, 7714},
        {19, 8226},
        {20, 8738},
        {21, 9250},
        {22, 9762},
        {23, 10274},
        {24, 10786},
        {25, 11298},
        {26, 11810},
        {27, 12322},
        {28, 12834},
        {29, 13346},
        {30, 13858},
        {31, 14370},
        {32, 14595},
        {33, 14820},
        {34, 15045},
        {35, 15270},
        {36, 15496},
        {37, 15722},
        {38, 15948},
        {39, 16174},
        {40, 16400},
        {41, 16626},
        {42, 16852},
        {43, 17078},
        {44, 17304},
        {45, 17530},
        {46, 17756},
        {47, 17982},
        {48, 18208},
        {49, 18434},
        {50, 18660},
        {51, 18886},
        {52, 19112},
        {53, 19338},
        {54, 19564},
        {55, 19790},
        {56, 20016},
        {57, 20242},
        {58, 20468},
        {59, 20694},
        {60, 20920},
        {61, 21146},
        {62, 21372},
        {63, 21598},
        {64, 21824},
        {65, 22050},
        {66, 22276},
        {67, 22502},
        {68, 22728},
        {69, 22954},
        {70, 23180},
        {71, 23406},
        {72, 23632},
        {73, 23858},
        {74, 24084},
        {115, 26750},
        {116, 26827},
        {117, 26904},
        {118, 26981},
        {119, 27058},
        {120, 27135},
        {121, 27212},
        {122, 27289},
        {123, 27366},
        {124, 27443},
        {125, 27520},
        {126, 27597},
        {127, 27674},
        {128, 27751},
        {129, 27828},
        {130, 27905},
        {131, 27982},
        {132, 28059},
        {133, 28136},
        {134, 28213},
        {135, 28290},
        {136, 28367},
        {137, 28444},
        {138, 28521},
        {139, 28598},
        {140, 28675},
        {141, 28752},
        {142, 28829},
        {143, 28906},
        {144, 28983},
        {145, 29060},
        {146, 29137},
        {147, 29214},
        {148, 29291},
        {149, 29368},
        {150, 29445},
        {151, 29522},
        {152, 29599},
        {153, 29676},
        {154, 29753},
        {155, 29830},
        {156, 30200},
        {157, 30570},
        {158, 30940},
        {159, 31310},
        {160, 31680},
        {161, 32050},
        {162, 32420},
        {163, 32790},
        {164, 33160},
        {165, 33530},
        {166, 33900},
        {167, 34270},
        {168, 34640},
        {169, 35010},
        {170, 35380},
        {171, 35750},
        {172, 36211},
        {173, 36672},
        {174, 37133},
        {175, 37594},
        {176, 38055},
        {177, 38516},
        {178, 38977},
        {179, 39438},
        {180, 39899},
        {181, 40360},
        {182, 40821},
        {183, 41282},
        {184, 41743},
        {185, 42204},
        {186, 42665},
        {188, 43249},
        {199, 43729},
        {200, 43818},
        {201, 43907},
        {202, 43996},
        {203, 44085},
        {204, 44174},
        {205, 44263},
        {206, 44352},
        {207, 44441},
        {208, 44530},
        {209, 44619},
        {210, 44708},
        {211, 44797},
        {212, 44886},
        {213, 44975},
        {214, 45064},
        {252, 50144},
        {261, 50747},
        {262, 50811},
        {263, 50875},
        {264, 50939},
        {265, 51003},
        {266, 51067},
        {267, 51131},
        {268, 51195},
        {269, 51259},
        {270, 51323},
        {271, 51387},
        {272, 51451},
        {273, 51515},
        {274, 51579},
        {275, 51643},
        {276, 51707},
        {297, 52743},
        {298, 52978},
        {299, 53213},
        {300, 53448},
        {301, 53683},
        {302, 53918},
        {303, 54153},
        {304, 54388},
        {305, 54623},
        {306, 54858},
        {307, 55093},
        {308, 55328},
        {309, 55563},
        {310, 55798},
        {311, 56033},
        {312, 56268},
        {313, 56503},
        {314, 56738},
        {315, 56973},
        {316, 57208},
        {317, 57443},
        {318, 57678},
        {319, 57913},
        {320, 58148},
        {334, 59893},
    };

    GpaPaddedCounterDesc kDx12PaddedCounterByGroupGfx10[] = {
    {}
    };

    GpaSqCounterGroupDesc kHwDx12SqGroupsGfx10[] = {
        {15, 0, kSqAll},
        {16, 1, kSqAll},
        {17, 0, kSqEs},
        {18, 1, kSqEs},
        {19, 0, kSqGs},
        {20, 1, kSqGs},
        {21, 0, kSqVs},
        {22, 1, kSqVs},
        {23, 0, kSqPs},
        {24, 1, kSqPs},
        {25, 0, kSqLs},
        {26, 1, kSqLs},
        {27, 0, kSqHs},
        {28, 1, kSqHs},
        {29, 0, kSqCs},
        {30, 1, kSqCs},
    };


    unsigned int kHwDx12SqIsolatedGroupsGfx10[] = {
        35, // Ta
        36, // Ta
        37, // Ta
        38, // Ta
        39, // Ta
        40, // Ta
        41, // Ta
        42, // Ta
        43, // Ta
        44, // Ta
        45, // Ta
        46, // Ta
        47, // Ta
        48, // Ta
        49, // Ta
        50, // Ta
        51, // Ta
        52, // Ta
        53, // Ta
        54, // Ta
        55, // Ta
        56, // Ta
        57, // Ta
        58, // Ta
        59, // Ta
        60, // Ta
        61, // Ta
        62, // Ta
        63, // Ta
        64, // Ta
        65, // Ta
        66, // Ta
        67, // Ta
        68, // Ta
        69, // Ta
        70, // Ta
        71, // Ta
        72, // Ta
        73, // Ta
        74, // Ta
        75, // Td
        76, // Td
        77, // Td
        78, // Td
        79, // Td
        80, // Td
        81, // Td
        82, // Td
        83, // Td
        84, // Td
        85, // Td
        86, // Td
        87, // Td
        88, // Td
        89, // Td
        90, // Td
        91, // Td
        92, // Td
        93, // Td
        94, // Td
        95, // Td
        96, // Td
        97, // Td
        98, // Td
        99, // Td
        100, // Td
        101, // Td
        102, // Td
        103, // Td
        104, // Td
        105, // Td
        106, // Td
        107, // Td
        108, // Td
        109, // Td
        110, // Td
        111, // Td
        112, // Td
        113, // Td
        114, // Td
        115, // Tcp
        116, // Tcp
        117, // Tcp
        118, // Tcp
        119, // Tcp
        120, // Tcp
        121, // Tcp
        122, // Tcp
        123, // Tcp
        124, // Tcp
        125, // Tcp
        126, // Tcp
        127, // Tcp
        128, // Tcp
        129, // Tcp
        130, // Tcp
        131, // Tcp
        132, // Tcp
        133, // Tcp
        134, // Tcp
        135, // Tcp
        136, // Tcp
        137, // Tcp
        138, // Tcp
        139, // Tcp
        140, // Tcp
        141, // Tcp
        142, // Tcp
        143, // Tcp
        144, // Tcp
        145, // Tcp
        146, // Tcp
        147, // Tcp
        148, // Tcp
        149, // Tcp
        150, // Tcp
        151, // Tcp
        152, // Tcp
        153, // Tcp
        154, // Tcp
    };

    AmdExtGpuBlock kHwDx12DriverEnumGfx10[] = {
    AmdExtGpuBlock::Cpf,
    AmdExtGpuBlock::Pa,
    AmdExtGpuBlock::Pa,
    AmdExtGpuBlock::Pa,
    AmdExtGpuBlock::Pa,
    AmdExtGpuBlock::Sc,
    AmdExtGpuBlock::Sc,
    AmdExtGpuBlock::Sc,
    AmdExtGpuBlock::Sc,
    AmdExtGpuBlock::Sc,
    AmdExtGpuBlock::Sc,
    AmdExtGpuBlock::Sc,
    AmdExtGpuBlock::Sc,
    AmdExtGpuBlock::Spi,
    AmdExtGpuBlock::Spi,
    AmdExtGpuBlock::Sq,
    AmdExtGpuBlock::Sq,
    AmdExtGpuBlock::Sq,
    AmdExtGpuBlock::Sq,
    AmdExtGpuBlock::Sq,
    AmdExtGpuBlock::Sq,
    AmdExtGpuBlock::Sq,
    AmdExtGpuBlock::Sq,
    AmdExtGpuBlock::Sq,
    AmdExtGpuBlock::Sq,
    AmdExtGpuBlock::Sq,
    AmdExtGpuBlock::Sq,
    AmdExtGpuBlock::Sq,
    AmdExtGpuBlock::Sq,
    AmdExtGpuBlock::Sq,
    AmdExtGpuBlock::Sq,
    AmdExtGpuBlock::Sx,
    AmdExtGpuBlock::Sx,
    AmdExtGpuBlock::Sx,
    AmdExtGpuBlock::Sx,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Ta,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Td,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Tcp,
    AmdExtGpuBlock::Db,
    AmdExtGpuBlock::Db,
    AmdExtGpuBlock::Db,
    AmdExtGpuBlock::Db,
    AmdExtGpuBlock::Db,
    AmdExtGpuBlock::Db,
    AmdExtGpuBlock::Db,
    AmdExtGpuBlock::Db,
    AmdExtGpuBlock::Db,
    AmdExtGpuBlock::Db,
    AmdExtGpuBlock::Db,
    AmdExtGpuBlock::Db,
    AmdExtGpuBlock::Db,
    AmdExtGpuBlock::Db,
    AmdExtGpuBlock::Db,
    AmdExtGpuBlock::Db,
    AmdExtGpuBlock::Cb,
    AmdExtGpuBlock::Cb,
    AmdExtGpuBlock::Cb,
    AmdExtGpuBlock::Cb,
    AmdExtGpuBlock::Cb,
    AmdExtGpuBlock::Cb,
    AmdExtGpuBlock::Cb,
    AmdExtGpuBlock::Cb,
    AmdExtGpuBlock::Cb,
    AmdExtGpuBlock::Cb,
    AmdExtGpuBlock::Cb,
    AmdExtGpuBlock::Cb,
    AmdExtGpuBlock::Cb,
    AmdExtGpuBlock::Cb,
    AmdExtGpuBlock::Cb,
    AmdExtGpuBlock::Cb,
    AmdExtGpuBlock::Gds,
    AmdExtGpuBlock::Grbm,
    AmdExtGpuBlock::GrbmSe,
    AmdExtGpuBlock::GrbmSe,
    AmdExtGpuBlock::Rlc,
    AmdExtGpuBlock::Dma,
    AmdExtGpuBlock::Dma,
    AmdExtGpuBlock::Cpg,
    AmdExtGpuBlock::Cpc,
    AmdExtGpuBlock::Atc,
    AmdExtGpuBlock::AtcL2,
    AmdExtGpuBlock::McVmL2,
    AmdExtGpuBlock::Ea,
    AmdExtGpuBlock::Ea,
    AmdExtGpuBlock::Ea,
    AmdExtGpuBlock::Ea,
    AmdExtGpuBlock::Ea,
    AmdExtGpuBlock::Ea,
    AmdExtGpuBlock::Ea,
    AmdExtGpuBlock::Ea,
    AmdExtGpuBlock::Ea,
    AmdExtGpuBlock::Ea,
    AmdExtGpuBlock::Ea,
    AmdExtGpuBlock::Ea,
    AmdExtGpuBlock::Ea,
    AmdExtGpuBlock::Ea,
    AmdExtGpuBlock::Ea,
    AmdExtGpuBlock::Ea,
    AmdExtGpuBlock::Rpb,
    AmdExtGpuBlock::Rmi,
    AmdExtGpuBlock::Rmi,
    AmdExtGpuBlock::Rmi,
    AmdExtGpuBlock::Rmi,
    AmdExtGpuBlock::Rmi,
    AmdExtGpuBlock::Rmi,
    AmdExtGpuBlock::Rmi,
    AmdExtGpuBlock::Rmi,
    AmdExtGpuBlock::Rmi,
    AmdExtGpuBlock::Rmi,
    AmdExtGpuBlock::Rmi,
    AmdExtGpuBlock::Rmi,
    AmdExtGpuBlock::Rmi,
    AmdExtGpuBlock::Rmi,
    AmdExtGpuBlock::Rmi,
    AmdExtGpuBlock::Rmi,
    AmdExtGpuBlock::Umcch,
    AmdExtGpuBlock::Umcch,
    AmdExtGpuBlock::Umcch,
    AmdExtGpuBlock::Umcch,
    AmdExtGpuBlock::Umcch,
    AmdExtGpuBlock::Umcch,
    AmdExtGpuBlock::Umcch,
    AmdExtGpuBlock::Umcch,
    AmdExtGpuBlock::Umcch,
    AmdExtGpuBlock::Umcch,
    AmdExtGpuBlock::Umcch,
    AmdExtGpuBlock::Umcch,
    AmdExtGpuBlock::Umcch,
    AmdExtGpuBlock::Umcch,
    AmdExtGpuBlock::Umcch,
    AmdExtGpuBlock::Umcch,
    AmdExtGpuBlock::Umcch,
    AmdExtGpuBlock::Umcch,
    AmdExtGpuBlock::Umcch,
    AmdExtGpuBlock::Umcch,
    AmdExtGpuBlock::Ge,
    AmdExtGpuBlock::Gl1a,
    AmdExtGpuBlock::Gl1a,
    AmdExtGpuBlock::Gl1a,
    AmdExtGpuBlock::Gl1a,
    AmdExtGpuBlock::Gl1a,
    AmdExtGpuBlock::Gl1a,
    AmdExtGpuBlock::Gl1a,
    AmdExtGpuBlock::Gl1a,
    AmdExtGpuBlock::Gl1c,
    AmdExtGpuBlock::Gl1c,
    AmdExtGpuBlock::Gl1c,
    AmdExtGpuBlock::Gl1c,
    AmdExtGpuBlock::Gl1c,
    AmdExtGpuBlock::Gl1c,
    AmdExtGpuBlock::Gl1c,
    AmdExtGpuBlock::Gl1c,
    AmdExtGpuBlock::Gl1c,
    AmdExtGpuBlock::Gl1c,
    AmdExtGpuBlock::Gl1c,
    AmdExtGpuBlock::Gl1c,
    AmdExtGpuBlock::Gl1c,
    AmdExtGpuBlock::Gl1c,
    AmdExtGpuBlock::Gl1c,
    AmdExtGpuBlock::Gl1c,
    AmdExtGpuBlock::Gl1cg,
    AmdExtGpuBlock::Gl1cg,
    AmdExtGpuBlock::Gl1cg,
    AmdExtGpuBlock::Gl1cg,
    AmdExtGpuBlock::Gl1cg,
    AmdExtGpuBlock::Gl1cg,
    AmdExtGpuBlock::Gl1cg,
    AmdExtGpuBlock::Gl1cg,
    AmdExtGpuBlock::Gl1cg,
    AmdExtGpuBlock::Gl1cg,
    AmdExtGpuBlock::Gl1cg,
    AmdExtGpuBlock::Gl1cg,
    AmdExtGpuBlock::Gl1cg,
    AmdExtGpuBlock::Gl1cg,
    AmdExtGpuBlock::Gl1cg,
    AmdExtGpuBlock::Gl1cg,
    AmdExtGpuBlock::Gl2a,
    AmdExtGpuBlock::Gl2a,
    AmdExtGpuBlock::Gl2a,
    AmdExtGpuBlock::Gl2a,
    AmdExtGpuBlock::Gl2c,
    AmdExtGpuBlock::Gl2c,
    AmdExtGpuBlock::Gl2c,
    AmdExtGpuBlock::Gl2c,
    AmdExtGpuBlock::Gl2c,
    AmdExtGpuBlock::Gl2c,
    AmdExtGpuBlock::Gl2c,
    AmdExtGpuBlock::Gl2c,
    AmdExtGpuBlock::Gl2c,
    AmdExtGpuBlock::Gl2c,
    AmdExtGpuBlock::Gl2c,
    AmdExtGpuBlock::Gl2c,
    AmdExtGpuBlock::Gl2c,
    AmdExtGpuBlock::Gl2c,
    AmdExtGpuBlock::Gl2c,
    AmdExtGpuBlock::Gl2c,
    AmdExtGpuBlock::Gl2c,
    AmdExtGpuBlock::Gl2c,
    AmdExtGpuBlock::Gl2c,
    AmdExtGpuBlock::Gl2c,
    AmdExtGpuBlock::Gl2c,
    AmdExtGpuBlock::Gl2c,
    AmdExtGpuBlock::Gl2c,
    AmdExtGpuBlock::Gl2c,
    AmdExtGpuBlock::Cha,
    AmdExtGpuBlock::Chc,
    AmdExtGpuBlock::Chc,
    AmdExtGpuBlock::Chc,
    AmdExtGpuBlock::Chc,
    AmdExtGpuBlock::Chcg,
    AmdExtGpuBlock::Gus,
    AmdExtGpuBlock::Gcr,
    AmdExtGpuBlock::Ph,
    AmdExtGpuBlock::UtcL1,
    AmdExtGpuBlock::UtcL1,
    AmdExtGpuBlock::UtcL1,
    AmdExtGpuBlock::UtcL1,
    AmdExtGpuBlock::Count,
    };

    const unsigned int kHwDx12GpuTimeBottomToBottomDurationIndexGfx10 = 59893; ///< Index of delta between the previous command reaching bottom of pipe and the current command reaching bottom of pipe, will not include latency of first data to travel through pipeline, best for large data sets. for Dx12 for Gfx10 family
    const unsigned int kHwDx12GpuTimeBottomToBottomStartIndexGfx10 = 59894; ///< Index of time of the previous command reaching bottom of pipe for Dx12 for Gfx10 family
    const unsigned int kHwDx12GpuTimeBottomToBottomEndIndexGfx10 = 59895; ///< Index of time of the current command reaching bottom of pipe for Dx12 for Gfx10 family
    const unsigned int kHwDx12GpuTimeTopToBottomDurationIndexGfx10 = 59896; ///< Index of execution duration of the current command from top of pipe to bottom of pipe, may include overhead of time in queue for Dx12 for Gfx10 family
    const unsigned int kHwDx12GpuTimeTopToBottomStartIndexGfx10 = 59897; ///< Index of time that the current command reaches the top of pipe for Dx12 for Gfx10 family
    const unsigned int kHwDx12GpuTimeTopToBottomEndIndexGfx10 = 59898; ///< Index of time that the current command reaches the bottom of pipe for Dx12 for Gfx10 family
    const std::set<unsigned int> kHwDx12TimestampBlockIdsGfx10 =       {334}; ///< Timestamp block id's for DX12 for gfx10 family
    const std::set<unsigned int> kHwDx12TimeCounterIndicesGfx10 =      {59893, 59894, 59895, 59896, 59897, 59898}; ///< Timestamp counter indices for DX12 for gfx10 family
    const unsigned int           kHwDx12GroupCountGfx10                = static_cast<unsigned int>(kHwDx12GroupsGfx10.size());
    const unsigned int           kDx12PaddedCounterGroupCountGfx10 = 0;
    const unsigned int           kHwDx12SqGroupCountGfx10              = sizeof(kHwDx12SqGroupsGfx10) / sizeof(GpaSqCounterGroupDesc);
    const unsigned int           kHwDx12SqIsolatedGroupCountGfx10      = sizeof(kHwDx12SqIsolatedGroupsGfx10) / sizeof(unsigned int);
    const std::set<unsigned int> kHwDx12LevelWavesCountersGfx10 = {6185, 6697};
} //  namespace counter_dx12_gfx10

// clang-format on
