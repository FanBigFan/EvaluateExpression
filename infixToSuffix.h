//
// Created by FanBig on 2023/3/15.
//

#ifndef EVALUATEEXPRESSION_INFIXTOSUFFIX_H
#define EVALUATEEXPRESSION_INFIXTOSUFFIX_H

#include <string>
#include <stack>

#include "myPrecede.h"


class infixToSuffix {
public:
    std::string toSuffix(const std::string &expression, myPrecede mp);
};


#endif //EVALUATEEXPRESSION_INFIXTOSUFFIX_H
