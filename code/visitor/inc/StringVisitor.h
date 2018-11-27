/*
 * StringVisitor.h
 *
 *  Created on: 2018年11月22日
 *      Author: lewis
 */

#ifndef CODE_VISITOR_INC_STRINGVISITOR_H_
#define CODE_VISITOR_INC_STRINGVISITOR_H_

class SubString;

class StringVisitor
{
    virtual void visit(SubString& sub) = 0;
    virtual ~StringVisitor(){}
};

#endif /* CODE_VISITOR_INC_STRINGVISITOR_H_ */
