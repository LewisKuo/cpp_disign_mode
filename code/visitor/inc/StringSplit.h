/*
 * StringSplit.h
 *
 *  Created on: 2018年11月24日
 *      Author: lewis
 */

#ifndef CODE_VISITOR_INC_STRINGSPLIT_H_
#define CODE_VISITOR_INC_STRINGSPLIT_H_

#include <string>
#include <vector>

class SubString;
class StringVisitor;

class StringSplit
{
public:
    StringSplit(const std::string& str);
    ~StringSplit(){}

    void accept(StringVisitor& visitor) const;

private:
    std::vector split(const std::string& str);

private:
    std::vector<SubString> vec;
};

#endif /* CODE_VISITOR_INC_STRINGSPLIT_H_ */
