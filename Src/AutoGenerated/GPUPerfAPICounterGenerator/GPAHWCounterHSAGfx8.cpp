//==============================================================================
// Copyright (c) 2010-2019 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  HSA counter definitions for GFX8
//==============================================================================

#include "GPACounter.h"
#include "GPAHWCounterGfx8.h"
#include "GPAHWExposedCountersGfx8.h"
#include "GPAHWCounterHSAGfx8.h"

// This file is autogenerated by the ConvertHWEnums project

namespace CounterGfx8
{
    GPA_HardwareCounterDesc* HSACounterGroupArrayGfx8[] = {
        CPCcountersGfx8,
        CPFcountersGfx8,
        GDScountersGfx8,
        GRBMcountersGfx8,
        GRBMSE0countersGfx8,
        SPI0countersGfx8,
        SQ0countersGfx8,
        SQ_CS0countersGfx8,
        SRBMcountersGfx8,
        SX0countersGfx8,
        TA0countersGfx8,
        TA1countersGfx8,
        TA2countersGfx8,
        TA3countersGfx8,
        TA4countersGfx8,
        TA5countersGfx8,
        TA6countersGfx8,
        TA7countersGfx8,
        TA8countersGfx8,
        TA9countersGfx8,
        TA10countersGfx8,
        TA11countersGfx8,
        TA12countersGfx8,
        TA13countersGfx8,
        TA14countersGfx8,
        TA15countersGfx8,
        TCA0countersGfx8,
        TCA1countersGfx8,
        TCC0countersGfx8,
        TCC1countersGfx8,
        TCC2countersGfx8,
        TCC3countersGfx8,
        TCC4countersGfx8,
        TCC5countersGfx8,
        TCC6countersGfx8,
        TCC7countersGfx8,
        TCC8countersGfx8,
        TCC9countersGfx8,
        TCC10countersGfx8,
        TCC11countersGfx8,
        TCC12countersGfx8,
        TCC13countersGfx8,
        TCC14countersGfx8,
        TCC15countersGfx8,
        TCP0countersGfx8,
        TCP1countersGfx8,
        TCP2countersGfx8,
        TCP3countersGfx8,
        TCP4countersGfx8,
        TCP5countersGfx8,
        TCP6countersGfx8,
        TCP7countersGfx8,
        TCP8countersGfx8,
        TCP9countersGfx8,
        TCP10countersGfx8,
        TCP11countersGfx8,
        TCP12countersGfx8,
        TCP13countersGfx8,
        TCP14countersGfx8,
        TCP15countersGfx8,
        TD0countersGfx8,
        TD1countersGfx8,
        TD2countersGfx8,
        TD3countersGfx8,
        TD4countersGfx8,
        TD5countersGfx8,
        TD6countersGfx8,
        TD7countersGfx8,
        TD8countersGfx8,
        TD9countersGfx8,
        TD10countersGfx8,
        TD11countersGfx8,
        TD12countersGfx8,
        TD13countersGfx8,
        TD14countersGfx8,
        TD15countersGfx8,
        MC0countersGfx8,
    };

    GPA_HardwareCounterDesc* HSAExposedCountersGroupArrayGfx8[] = {
        GRBMExposedCountersGfx8,
        SPI0ExposedCountersGfx8,
        SQ0ExposedCountersGfx8,
        SQ_CS0ExposedCountersGfx8,
        SX0ExposedCountersGfx8,
        TA0ExposedCountersGfx8,
        TA1ExposedCountersGfx8,
        TA2ExposedCountersGfx8,
        TA3ExposedCountersGfx8,
        TA4ExposedCountersGfx8,
        TA5ExposedCountersGfx8,
        TA6ExposedCountersGfx8,
        TA7ExposedCountersGfx8,
        TA8ExposedCountersGfx8,
        TA9ExposedCountersGfx8,
        TA10ExposedCountersGfx8,
        TA11ExposedCountersGfx8,
        TA12ExposedCountersGfx8,
        TA13ExposedCountersGfx8,
        TA14ExposedCountersGfx8,
        TA15ExposedCountersGfx8,
        TCC0ExposedCountersGfx8,
        TCC1ExposedCountersGfx8,
        TCC2ExposedCountersGfx8,
        TCC3ExposedCountersGfx8,
        TCC4ExposedCountersGfx8,
        TCC5ExposedCountersGfx8,
        TCC6ExposedCountersGfx8,
        TCC7ExposedCountersGfx8,
        TCC8ExposedCountersGfx8,
        TCC9ExposedCountersGfx8,
        TCC10ExposedCountersGfx8,
        TCC11ExposedCountersGfx8,
        TCC12ExposedCountersGfx8,
        TCC13ExposedCountersGfx8,
        TCC14ExposedCountersGfx8,
        TCC15ExposedCountersGfx8,
        TCP0ExposedCountersGfx8,
        TCP1ExposedCountersGfx8,
        TCP2ExposedCountersGfx8,
        TCP3ExposedCountersGfx8,
        TCP4ExposedCountersGfx8,
        TCP5ExposedCountersGfx8,
        TCP6ExposedCountersGfx8,
        TCP7ExposedCountersGfx8,
        TCP8ExposedCountersGfx8,
        TCP9ExposedCountersGfx8,
        TCP10ExposedCountersGfx8,
        TCP11ExposedCountersGfx8,
        TCP12ExposedCountersGfx8,
        TCP13ExposedCountersGfx8,
        TCP14ExposedCountersGfx8,
        TCP15ExposedCountersGfx8,
    };

    GPA_CounterGroupDesc HWHSAGroupsGfx8[] = {
        {0, "CPC", 0, 24, 2, 4},
        {1, "CPF", 0, 19, 2, 4},
        {2, "GDS", 0, 121, 4, 4},
        {3, "GRBM", 0, 34, 2, 0},
        {4, "GRBMSE", 0, 15, 4, 0},
        {5, "SPI", 0, 197, 6, 16},
        {6, "SQ", 0, 299, 16, 16},
        {7, "SQ_CS", 0, 299, 16, 16},
        {8, "SRBM", 0, 27, 2, 0},
        {9, "SX", 0, 34, 4, 8},
        {10, "TA0", 0, 119, 2, 4},
        {11, "TA1", 1, 119, 2, 4},
        {12, "TA2", 2, 119, 2, 4},
        {13, "TA3", 3, 119, 2, 4},
        {14, "TA4", 4, 119, 2, 4},
        {15, "TA5", 5, 119, 2, 4},
        {16, "TA6", 6, 119, 2, 4},
        {17, "TA7", 7, 119, 2, 4},
        {18, "TA8", 8, 119, 2, 4},
        {19, "TA9", 9, 119, 2, 4},
        {20, "TA10", 10, 119, 2, 4},
        {21, "TA11", 11, 119, 2, 4},
        {22, "TA12", 12, 119, 2, 4},
        {23, "TA13", 13, 119, 2, 4},
        {24, "TA14", 14, 119, 2, 4},
        {25, "TA15", 15, 119, 2, 4},
        {26, "TCA0", 0, 35, 4, 8},
        {27, "TCA1", 1, 35, 4, 8},
        {28, "TCC0", 0, 192, 4, 8},
        {29, "TCC1", 1, 192, 4, 8},
        {30, "TCC2", 2, 192, 4, 8},
        {31, "TCC3", 3, 192, 4, 8},
        {32, "TCC4", 4, 192, 4, 8},
        {33, "TCC5", 5, 192, 4, 8},
        {34, "TCC6", 6, 192, 4, 8},
        {35, "TCC7", 7, 192, 4, 8},
        {36, "TCC8", 8, 192, 4, 8},
        {37, "TCC9", 9, 192, 4, 8},
        {38, "TCC10", 10, 192, 4, 8},
        {39, "TCC11", 11, 192, 4, 8},
        {40, "TCC12", 12, 192, 4, 8},
        {41, "TCC13", 13, 192, 4, 8},
        {42, "TCC14", 14, 192, 4, 8},
        {43, "TCC15", 15, 192, 4, 8},
        {44, "TCP0", 0, 180, 4, 6},
        {45, "TCP1", 1, 180, 4, 6},
        {46, "TCP2", 2, 180, 4, 6},
        {47, "TCP3", 3, 180, 4, 6},
        {48, "TCP4", 4, 180, 4, 6},
        {49, "TCP5", 5, 180, 4, 6},
        {50, "TCP6", 6, 180, 4, 6},
        {51, "TCP7", 7, 180, 4, 6},
        {52, "TCP8", 8, 180, 4, 6},
        {53, "TCP9", 9, 180, 4, 6},
        {54, "TCP10", 10, 180, 4, 6},
        {55, "TCP11", 11, 180, 4, 6},
        {56, "TCP12", 12, 180, 4, 6},
        {57, "TCP13", 13, 180, 4, 6},
        {58, "TCP14", 14, 180, 4, 6},
        {59, "TCP15", 15, 180, 4, 6},
        {60, "TD0", 0, 55, 2, 4},
        {61, "TD1", 1, 55, 2, 4},
        {62, "TD2", 2, 55, 2, 4},
        {63, "TD3", 3, 55, 2, 4},
        {64, "TD4", 4, 55, 2, 4},
        {65, "TD5", 5, 55, 2, 4},
        {66, "TD6", 6, 55, 2, 4},
        {67, "TD7", 7, 55, 2, 4},
        {68, "TD8", 8, 55, 2, 4},
        {69, "TD9", 9, 55, 2, 4},
        {70, "TD10", 10, 55, 2, 4},
        {71, "TD11", 11, 55, 2, 4},
        {72, "TD12", 12, 55, 2, 4},
        {73, "TD13", 13, 55, 2, 4},
        {74, "TD14", 14, 55, 2, 4},
        {75, "TD15", 15, 55, 2, 4},
        {76, "MC", 0, 33, 4, 0},
    };

    GPA_CounterGroupExposedCounterDesc HWHSAExposedCountersByGroupGfx8[] = {
        {3, 164, {0, 2}},
        {5, 213, {1, 10, 17, 20, 26, 32, 38, 44, 48, 54, 58, 59, 62, 64, 65, 68, 70, 75}},
        {6, 410, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 61, 81, 86, 89, 97}},
        {7, 709, {4, 14, 26, 27, 28, 30, 31, 32, 33, 34, 35, 61, 81, 86, 89, 97}},
        {9, 1035, {12, 14, 17, 19, 22, 24, 27, 29}},
        {10, 1069, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {11, 1188, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {12, 1307, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {13, 1426, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {14, 1545, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {15, 1664, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {16, 1783, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {17, 1902, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {18, 2021, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {19, 2140, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {20, 2259, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {21, 2378, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {22, 2497, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {23, 2616, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {24, 2735, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {25, 2854, {15, 68, 69, 70, 71, 89, 90, 91, 92, 93, 94, 95, 96, 97, 101, 102}},
        {28, 3043, {18, 19, 26, 28, 35}},
        {29, 3235, {18, 19, 26, 28, 35}},
        {30, 3427, {18, 19, 26, 28, 35}},
        {31, 3619, {18, 19, 26, 28, 35}},
        {32, 3811, {18, 19, 26, 28, 35}},
        {33, 4003, {18, 19, 26, 28, 35}},
        {34, 4195, {18, 19, 26, 28, 35}},
        {35, 4387, {18, 19, 26, 28, 35}},
        {36, 4579, {18, 19, 26, 28, 35}},
        {37, 4771, {18, 19, 26, 28, 35}},
        {38, 4963, {18, 19, 26, 28, 35}},
        {39, 5155, {18, 19, 26, 28, 35}},
        {40, 5347, {18, 19, 26, 28, 35}},
        {41, 5539, {18, 19, 26, 28, 35}},
        {42, 5731, {18, 19, 26, 28, 35}},
        {43, 5923, {18, 19, 26, 28, 35}},
        {44, 6115, {3}},
        {45, 6295, {3}},
        {46, 6475, {3}},
        {47, 6655, {3}},
        {48, 6835, {3}},
        {49, 7015, {3}},
        {50, 7195, {3}},
        {51, 7375, {3}},
        {52, 7555, {3}},
        {53, 7735, {3}},
        {54, 7915, {3}},
        {55, 8095, {3}},
        {56, 8275, {3}},
        {57, 8455, {3}},
        {58, 8635, {3}},
        {59, 8815, {3}},
    };

    GPA_PaddedCounterDesc HSAPaddedCounterByGroupGfx8[] = {
    {}
    };

    GPA_SQCounterGroupDesc HWHSASQGroupsGfx8[] = {
        {6, 0, SQ_ALL},
        {7, 0, SQ_CS},
    };


    unsigned int HWHSASQIsolatedGroupsGfx8[] = {
        10, // Ta
        11, // Ta
        12, // Ta
        13, // Ta
        14, // Ta
        15, // Ta
        16, // Ta
        17, // Ta
        18, // Ta
        19, // Ta
        20, // Ta
        21, // Ta
        22, // Ta
        23, // Ta
        24, // Ta
        25, // Ta
        26, // Tca
        27, // Tca
        28, // Tcc
        29, // Tcc
        30, // Tcc
        31, // Tcc
        32, // Tcc
        33, // Tcc
        34, // Tcc
        35, // Tcc
        36, // Tcc
        37, // Tcc
        38, // Tcc
        39, // Tcc
        40, // Tcc
        41, // Tcc
        42, // Tcc
        43, // Tcc
        44, // Tcp
        45, // Tcp
        46, // Tcp
        47, // Tcp
        48, // Tcp
        49, // Tcp
        50, // Tcp
        51, // Tcp
        52, // Tcp
        53, // Tcp
        54, // Tcp
        55, // Tcp
        56, // Tcp
        57, // Tcp
        58, // Tcp
        59, // Tcp
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
        73, // Td
        74, // Td
        75, // Td
    };

    const std::set<unsigned int> HWHSATimestampBlockIdsGfx8 =       {}; ///< Timestamp block id's for HSA for Gfx8 family
    const std::set<unsigned int> HWHSATimeCounterIndicesGfx8 =      {}; ///< Timestamp counter indices for HSA for Gfx8 family
    const unsigned int           HWHSAGroupCountGfx8                = sizeof(HWHSAGroupsGfx8) / sizeof(GPA_CounterGroupDesc);
    const unsigned int           HWHSAExposedCountersGroupCountGfx8 = 53;
    const unsigned int           HSAPaddedCounterGroupCountGfx8 = 0;
    const unsigned int           HWHSASQGroupCountGfx8              = sizeof(HWHSASQGroupsGfx8) / sizeof(GPA_SQCounterGroupDesc);
    const unsigned int           HWHSASQIsolatedGroupCountGfx8      = sizeof(HWHSASQIsolatedGroupsGfx8) / sizeof(unsigned int);
}; // namespace