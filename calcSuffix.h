//
// Created by FanBig on 2023/3/15.
//

#ifndef EVALUATEEXPRESSION_CALCSUFFIX_H
#define EVALUATEEXPRESSION_CALCSUFFIX_H

#include <string>
#include <stack>
#include <iostream>

#include "myCalculate.h"
#include "readNum.h"

class calcSuffix {
public:
    double CalculateSuffix(const std::string &str, myCalculate mc);
};


#endif //EVALUATEEXPRESSION_CALCSUFFIX_H
