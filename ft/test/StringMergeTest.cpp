/*
 * StringMergeTest.cpp
 *
 *  Created on: 2018年11月25日
 *      Author: lewis
 */
#include "gtest/gtest.h"
#include "TestData.h"
#include <vector>
#include <iostream>
#include "StringMerge.h"


TEST(TriangleTest, one_triangle)
{
    StringMerge l("abc123abd");
    StringMerge r("cdf234");

    auto str = l + r;
    ASSERT_TRUE(str.c_str() == std::string("abcabdcdf123234"));
}
