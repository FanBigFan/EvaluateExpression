cmake_minimum_required(VERSION 3.24)
project(EvaluateExpression)

set(CMAKE_CXX_STANDARD 17)

add_executable(
        EvaluateExpression
        main.cpp
        myPrecede.cpp
        myPrecede.h
        myCalculate.cpp
        myCalculate.h
        infixToSuffix.cpp
        infixToSuffix.h
        strTest.cpp
        strTest.h
        calcSuffix.cpp
        calcSuffix.h
        readNum.cpp readNum.h)
