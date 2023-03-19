#pragma once

#include <iostream>
#include <string>

#include "myCalculate.h"
#include "myPrecede.h"
#include "infixToSuffix.h"
#include "strTest.h"
#include "calcSuffix.h"

int main() {

    myCalculate mc;
    myPrecede mp;
    infixToSuffix its;
    calcSuffix cs;
    strTest test;

//    std::string expression;
//    std::cout << "Input expression : ";
//    std::cin >> expression;

    std::string expression = test.testStr();
    std::cout << " Infix :   " << expression << std::endl;

    std::string str = its.toSuffix(expression, mp);
    std::cout << " Suffix:   " << str << std::endl;

    double ret = cs.CalculateSuffix(str, mc);
    std::cout << " Result:   " << ret << std::endl;

    return 0;
}
