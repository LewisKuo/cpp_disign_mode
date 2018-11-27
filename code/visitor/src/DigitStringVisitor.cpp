/*
 * DigitStringVisitor.cpp
 *
 *  Created on: 2018年11月22日
 *      Author: lewis
 */
#include "DigitStringVisitor.h"
#include "SubString.h"

void DigitStringVisitor::visit(SubString& sub)
{
    std::string& subStr = sub.str();
    unsigned int index = 0;
    for(; index < subStr.size() - 1; index++)
    {
        if(subStr.at(index) != '0')
        {
            break;
        }
    }

    str += subStr.substr(index);
}
