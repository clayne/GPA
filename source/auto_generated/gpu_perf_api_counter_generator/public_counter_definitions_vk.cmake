## Copyright (c) 2025 Advanced Micro Devices, Inc. All rights reserved.
cmake_minimum_required(VERSION 3.10)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(PUBLIC_COUNTER_DEF_HEADERS_VK
${CMAKE_CURRENT_LIST_DIR}/public_counter_definitions_vk_gfx10.h
${CMAKE_CURRENT_LIST_DIR}/public_counter_definitions_vk_gfx103.h
${CMAKE_CURRENT_LIST_DIR}/public_counter_definitions_vk_gfx103_asics.h
${CMAKE_CURRENT_LIST_DIR}/public_counter_definitions_vk_gfx103_gfx1031_gfx1032.h
${CMAKE_CURRENT_LIST_DIR}/public_counter_definitions_vk_gfx103_gfx1033.h
${CMAKE_CURRENT_LIST_DIR}/public_counter_definitions_vk_gfx10_asics.h
${CMAKE_CURRENT_LIST_DIR}/public_counter_definitions_vk_gfx11.h
${CMAKE_CURRENT_LIST_DIR}/public_counter_definitions_vk_gfx11_asics.h
${CMAKE_CURRENT_LIST_DIR}/public_counter_definitions_vk_gfx11_gfx1103.h
${CMAKE_CURRENT_LIST_DIR}/public_counter_definitions_vk_gfx11_gfx1150.h
${CMAKE_CURRENT_LIST_DIR}/public_counter_definitions_vk_gfx12.h
${CMAKE_CURRENT_LIST_DIR}/public_counter_definitions_vk_gfx12_asics.h)

set(PUBLIC_COUNTER_DEF_SRC_VK
${CMAKE_CURRENT_LIST_DIR}/public_counter_definitions_vk_gfx10.cc
${CMAKE_CURRENT_LIST_DIR}/public_counter_definitions_vk_gfx103.cc
${CMAKE_CURRENT_LIST_DIR}/public_counter_definitions_vk_gfx103_gfx1031_gfx1032.cc
${CMAKE_CURRENT_LIST_DIR}/public_counter_definitions_vk_gfx103_gfx1033.cc
${CMAKE_CURRENT_LIST_DIR}/public_counter_definitions_vk_gfx11.cc
${CMAKE_CURRENT_LIST_DIR}/public_counter_definitions_vk_gfx11_gfx1103.cc
${CMAKE_CURRENT_LIST_DIR}/public_counter_definitions_vk_gfx11_gfx1150.cc
${CMAKE_CURRENT_LIST_DIR}/public_counter_definitions_vk_gfx12.cc)

