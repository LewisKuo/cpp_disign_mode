/*
 * Triangles.cpp
 *
 *  Created on: 2018年11月18日
 *      Author: lewis
 */
#include "Triangles.h"

const std::string oneTriangle =
R"(
                         a
                         |\
                         | \
                         |  \
                         |   \
                       1 |    \ 2
                         |     \
                         |      \
                         |_______\
                         b   3    c
)";

const std::vector<std::vector<int>> pointsVecWhenOneTriangle =
{
        {1, 2}        // a
       ,{1, 3}        // b
       ,{2, 3}        // c
};

const std::string twoTriangles =
R"(
                         a
                         |\
                         | \
                         |  \
                        1|   \2
                        d|____\e
                         |  4  \
                         |      \
                         |_______\
                        b    3    c
)";

const std::vector<std::vector<int>> pointsVecWhenTwoTriangles =
{
        {1, 2}        // a
       ,{1, 3}        // b
       ,{2, 3}        // c
       ,{1, 4}        // d
       ,{2, 4}        // e
};

const std::string threeTriangles =
R"(
                         a
                        /|\
                       / | \
                      /  |  \
                     /   |   \
                   1/    |    \2
                   /    4|     \
                  /      |      \
                 /_______|_______\
                b     3   d       c
)";

const std::vector<std::vector<int>> pointsVecWhenThreeTriangles =
{
        {1, 2, 4}     // a
       ,{1, 3}        // b
       ,{2, 3}        // c
       ,{3, 4}        // d
};

const std::string sixTriangles =
R"(
                         a
                        /|\
                       / | \
                     1/  |  \
                     /  4|   \2
                   d/____|____\f
                   /    e|  5  \
                  /      |      \
                 /_______|_______\
                b     3   g       c
)";

const std::vector<std::vector<int>> pointsVecWhenSixTriangles =
{
        {1, 2, 4}     // a
       ,{1, 3}        // b
       ,{2, 3}        // c
       ,{1, 5}        // d
       ,{4, 5}        // e
       ,{2, 5}        // f
       ,{3, 4}        // g
};

const std::string eightTriangles =
R"(
                    a ________ b
                     |\   1  /|
                     | \    / |
                     |  \  /  |
                    2|   \/e  |4
                     |   /\   |
                     |  /  \6 |
                     | /5   \ |
                     |/______\|
                    c     3   d
)";

const std::vector<std::vector<int>> pointsVecWhenEightTriangles =
{
        {1, 2, 6}     // a
       ,{1, 4, 5}     // b
       ,{2, 3, 5}     // c
       ,{3, 4, 6}     // d
       ,{5, 6}        // e
};

const std::string sixteenTriangles =
R"(
                   a ______1__ c
                    |\  b|   /|
                    | \  |  / |
                   2|  5 | 6  |4
                    |___\|/_8_|
                   d|  e/|\   |f
                    |  / | \  |
                    | /  7  \ |
                    |/___|___\|
                   g   3  h    i
)";

const std::vector<std::vector<int>> pointsVecWhenSixteenTriangles =
{
        {1, 2, 5}     // a
       ,{1, 7}        // b
       ,{1, 4, 6}     // c
       ,{2, 8}        // d
       ,{5, 6, 7, 8}  // e
       ,{4, 8}        // f
       ,{2, 3, 6}     // g
       ,{3, 7}        // h
       ,{3, 4, 5}     // i
};

const std::string twentyFourTriangles =
R"(
                   a ______1__ c
                    |\  b|   /|
                    | \  |  / |
                   2|  5 | 6  |4
                    |___\|/_8_|
                   d|  e/|\   |f
                    |  / | \  |
                    | /  7  \ |
                    |/___|___\|
                   g   3  h    i
)";

const std::vector<std::vector<int>> pointsVecWhenTwentyFourTriangles =
{
        {1, 2, 3, 4}               // a
       ,{1, 5}        // b
       ,{2, 5}               // c
       ,{3, 5}               // d
       ,{4, 5, 6}            // e
       ,{3, 6}        // f
       ,{2, 6}           // g
       ,{1, 6, 7}           // h
       ,{2, 7}               // i
       ,{3, 7}               // j
       ,{4, 7}           // k
};

const std::string thirtyEightTriangles =
R"(
                        a
                        /\
                       /  \
                      /    \
                     /      \
                    /        \
                   /          \
                  /            \
                b/_______7______\e
                /|\   |c   |d  /|\
               / | 10 |    | 11 | \
              /  |  \ |    | /  |  \
             /  f|___\|_8__|/___|   \
           1/    |   g|\  /|h   |i   \6
           /    2|    | \/ |    |     \
          /      |    |t/\ |4   |5     \
         /      j|_9__|/__\|____|       \
        /        |   /|k  l|\   |m       \
       /         |  / |    | \  |         \
      /          | /  |3   |  \ |          \
     /___________|/___|____|___\|___________\
    n     12      o    p    q    r            s
)";

const std::vector<std::vector<int>> pointsVecWhenThirtyEightTriangles =
{
        {1, 6}               // a
       ,{1, 2, 7, 10}        // b
       ,{3, 7}               // c
       ,{4, 7}               // d
       ,{5, 6, 7, 11}        // e
       ,{2, 8}               // f
       ,{3, 8, 10}           // g
       ,{4, 8, 11}           // h
       ,{5, 8}               // i
       ,{2, 9}               // j
       ,{3, 9, 11}           // k
       ,{4, 9, 10}           // l
       ,{5, 9}               // m
       ,{1, 12}              // n
       ,{2, 11, 12}          // o
       ,{3, 12}              // p
       ,{4, 12}              // q
       ,{5, 10, 12}          // r
       ,{6, 12}              // s
       ,{10, 11}             // t
};
