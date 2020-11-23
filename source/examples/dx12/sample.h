//==============================================================================
// Copyright (c) 2019 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  Sample implementation
//==============================================================================

#ifndef _SAMPLE_H_
#define _SAMPLE_H_

/// Struct to hold values of command line arguments.
struct CommandLineArgs
{
    /// Flag indicating if GPU should be used to collect performance counters
    bool m_useGPA = true;

    /// Number of frames to execute -- zero indicates that the app should run until the user closes it
    unsigned int m_numberOfFrames = 0;

    /// Flag indicating if the bundles created by the application should be profiled
    /// Starting with the Adrenaline 19.1.1 driver, profiling bundles is no longer supported
    bool m_profileBundles = false;

    /// Flag indicating if some counter values should be verified (experimental)
    bool m_verifyCounters = false;

    /// Flag indicating whether or not to include hardware counters in non-internal builds
    bool m_includeHwCounters = false;

    /// Flag indicating whether the counter file is given or not
    bool counter_provided = false;

    /// Counter file name
    std::string counter_file_name;
};

extern CommandLineArgs args;

#endif _SAMPLE_H_
