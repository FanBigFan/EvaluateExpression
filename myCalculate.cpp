//
// Created by FanBig on 2023/3/15.
//

#include "myCalculate.h"

int myCalculate::Calc(char op, int num) {
    if (op == '!') {
        int sum = 1;
        for (int i = 1; i <= num; ++i) {
            sum *= num;
            num--;
        }
        return sum;
    } else {
        return 0;
    }
}


double myCalculate::Calc(double num1, char op, double num2) {
    if (op == '+') {
        return num1 + num2;
    } else if (op == '-') {
        return num1 - num2;
    } else if (op == '*') {
        return num1 * num2;
    } else if (op == '/') {
        return num1 / num2;
    } else if (op == '^') {
        double sum = 1;
        for (int i = 0; i < num2; i++) {
            sum *= num1;
        }
        return sum;
    } else {
        return 0;
    }
}