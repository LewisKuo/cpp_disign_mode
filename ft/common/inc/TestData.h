/*
 * TestData.h
 *
 *  Created on: 2018年11月18日
 *      Author: lewis
 */

#ifndef FT_COMMON_INC_TESTDATA_H_
#define FT_COMMON_INC_TESTDATA_H_

#include <string>
#include <vector>

typedef struct TriangleData
{
    const std::string& image;
    const std::vector<std::vector<int>>& points;
    const unsigned int maxTriangeNum;
}TriangleData;

extern TriangleData oneTriangleData;
extern TriangleData twoTrianglesData;
extern TriangleData threeTrianglesData;
extern TriangleData sixTrianglesData;
extern TriangleData eightTrianglesData;
extern TriangleData sixteenTrianglesData;
extern TriangleData twentyFourTrianglesData;
extern TriangleData thirtyEightTrianglesData;

#endif /* FT_COMMON_INC_TESTDATA_H_ */
