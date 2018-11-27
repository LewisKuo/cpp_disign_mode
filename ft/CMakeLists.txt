cmake_minimum_required (VERSION 3.0)

project (ftest)

set (CMAKE_BUILD_TYPE "Debug")
set (CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -std=c++11 -O0 -g -ggdb -Wall -Wextra -pthread")

set (cur_dir                      ${CMAKE_CURRENT_SOURCE_DIR})

include_directories (
    "${cur_dir}/tools/include/"
    "${cur_dir}/tools/include/gtest/"
    "${cur_dir}/../code/visitor/inc/"
    "${cur_dir}/common/inc/"
    "${cur_dir}/test/"
)

file (GLOB_RECURSE DIR_SRCS
    ${cur_dir}/../code/visitor/src/*.cpp
    ${cur_dir}/common/src/*.cpp
    ${cur_dir}/test/*.cpp
)

link_libraries (
    ${cur_dir}/tools/lib/libgtest.a
)

#add_subdirectory ("${cur_dir}/tools" gtest)

add_executable (ftest ${DIR_SRCS})

#target_link_libraries (ftest gtest)
