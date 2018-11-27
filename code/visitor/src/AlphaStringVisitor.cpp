/*
 * AlphaStringVisitor.cpp
 *
 *  Created on: 2018年11月22日
 *      Author: lewis
 */
#include "AlphaStringVisitor.h"
#include "SubString.h"

void AlphaStringVisitor::visit(SubString& sub)
{
    str += sub.str();
}
