/*
 * StringMerge.cpp
 *
 *  Created on: 2018年11月21日
 *      Author: lewis
 */
#include "StringMerge.h"
#include "AlphaStringVisitor.h"
#include "DigitStringVisitor.h"
#include "StringSplit.h"

StringMerge StringMerge::operator +(StringMerge str)
{
    const StringSplit l(this->str);
    const StringSplit r(str);

    std::string ret =
            mergeAlphaString(getAlphaString(l), getAlphaString(r))
            + mergeDigitString(getDigitString(l), getDigitString(r));


}

std::string StringMerge::mergeAlphaString(const std::string& lhs, const std::string& rhs)
{
    return (lhs < rhs) ? (lhs + rhs) : (rhs + lhs);
}

std::string StringMerge::mergeDigitString(const std::string& lhs, const std::string& rhs)
{
    std::string ret;
    if(lhs.size() == rhs.size())
    {
        ret = (lhs < rhs) ? (lhs + rhs) : (rhs + lhs);
    }
    else
    {
        ret = (lhs.size() < rhs.size()) ? (lhs + rhs) : (rhs + lhs);
    }

    unsigned int index = 0;
    for(; index < ret.size() - 1; index++)
    {
        if(ret.at(index) != '0')
        {
            break;
        }
    }

    return ret.substr(index);
}

std::string StringMerge::getAlphaString(const StringSplit& split)
{
    std::string str;

    AlphaStringVisitor v(str);
    split.accept(v);

    return str;
}

std::string StringMerge::getDigitString(const StringSplit& split)
{
    std::string str;

    DigitStringVisitor v(str);
    split.accept(v);

    return str;
}
