/*
 * DigitStringVisitor.h
 *
 *  Created on: 2018年11月22日
 *      Author: lewis
 */

#ifndef CODE_VISITOR_INC_DIGITSTRINGVISITOR_H_
#define CODE_VISITOR_INC_DIGITSTRINGVISITOR_H_

#include "StringVisitor.h"
#include <string>

class DigitStringVisitor : public StringVisitor
{
public:
    DigitStringVisitor(std::string& str) : str(str){}
    void visit(SubString& sub) override;

private:
    std::string& str;
};

#endif /* CODE_VISITOR_INC_DIGITSTRINGVISITOR_H_ */
