cmake_minimum_required(VERSION 3.0)

project (gtest)

set (CMAKE_BUILD_TYPE "Debug")
set (CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -std=c++11 -O0 -g -ggdb -Wall -Wextra -pthread")

set(gtest_dir        ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(
    "${gtest_dir}/"
    "${gtest_dir}/include/"
    "${gtest_dir}/src/"
    "${gtest_dir}/include/gtest/"
    "${gtest_dir}/include/gtest/internal/"
)

#aux_source_directory (. DIR_LIB_SRCS)
file(GLOB_RECURSE DIR_LIB_SRCS
    ${gtest_dir}/src/*.cc
)

add_library(gtest STATIC ${DIR_LIB_SRCS})
