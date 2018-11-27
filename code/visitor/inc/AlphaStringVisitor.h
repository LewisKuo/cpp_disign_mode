/*
 * AlphaStringVisitor.h
 *
 *  Created on: 2018年11月22日
 *      Author: lewis
 */

#ifndef CODE_VISITOR_INC_ALPHASTRINGVISITOR_H_
#define CODE_VISITOR_INC_ALPHASTRINGVISITOR_H_

#include "StringVisitor.h"
#include <string>

class AlphaStringVisitor : public StringVisitor
{
public:
    AlphaStringVisitor(std::string& str) : str(str){}
    void visit(SubString& sub) override;

private:
    std::string& str;
};

#endif /* CODE_VISITOR_INC_ALPHASTRINGVISITOR_H_ */
