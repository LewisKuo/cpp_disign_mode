/*
 * StringSplit.cpp
 *
 *  Created on: 2018年11月24日
 *      Author: lewis
 */
#include "StringSplit.h"
#include "SubString.h"
#include "StringVisitor.h"

namespace
{
    #define IS_DIGIT(c)       ((c) >= 0 && (c) <= 9)
}

StringSplit::StringSplit(const std::string& str)
{
    vec = split(str);
}

std::vector StringSplit::split(const std::string& str)
{
    vector<SubString> ret;

    if(str.empty())
    {
        return ret;
    }

    const char* ptr = str.c_str();
    for(unsigned int i = 0, j = 0; i < str.size() - 1; i++)
    {
        if(IS_DIGIT(ptr[i]))
        {
            if(!IS_DIGIT(ptr[i + 1]))
            {
                ret.push_back(SubString(SubString::DIGIT_STR
                        , string(str, j, i + 1 - j)));
                j = i + 1;
            }
        }
        else
        {
            if(IS_DIGIT(ptr[i + 1]))
            {
                ret.push_back(SubString(SubString::ALPHA_STR
                        , string(str, j, i + 1 - j)));
                j = i + 1;
            }
        }
    }

    return ret;
}

void StringSplit::accept(StringVisitor& visitor) const
{
    for(auto it : vec)
    {
        visitor.visit(it);
    }
}
