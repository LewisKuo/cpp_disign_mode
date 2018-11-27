/*
 * SubString.h
 *
 *  Created on: 2018年11月21日
 *      Author: lewis
 */

#ifndef CODE_VISITOR_INC_SUBSTRING_H_
#define CODE_VISITOR_INC_SUBSTRING_H_

#include <string>

using namespace std;

class SubString
{
public:
    typedef enum{ALPHA_STR, DIGIT_STR}T_STR;
    SubString(string str, T_STR type)
            : m_str(str), m_type(type){}
    ~SubString(){}

    string str(){ return m_str;}
    T_STR type(){ return m_type;}

private:
    string m_str;
    T_STR m_type;
};

#endif /* CODE_VISITOR_INC_SUBSTRING_H_ */
