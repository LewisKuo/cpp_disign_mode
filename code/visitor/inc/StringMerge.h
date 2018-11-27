/*
 * StringMerge.h
 *
 *  Created on: 2018年11月21日
 *      Author: lewis
 */

#ifndef CODE_VISITOR_INC_STRINGMERGE_H_
#define CODE_VISITOR_INC_STRINGMERGE_H_

#include "SubString.h"
#include <vector>

class StringSplit;

class StringMerge
{
public:
    StringMerge(const std::string& str) : str(str){}
    ~StringMerge(){}
    StringMerge operator +(StringMerge str);
    const char* c_str(){return str.c_str();}

private:
    std::string mergeAlphaString(const std::string& lhs, const std::string& rhs);
    std::string mergeDigitString(const std::string& lhs, const std::string& rhs);
    std::string getAlphaString(const StringSplit& split);
    std::string getDigitString(const StringSplit& split);

private:
    const std::string& str;
};

#endif /* CODE_VISITOR_INC_STRINGMERGE_H_ */
