//
// Created by FanBig on 2023/3/15.
//

#include "calcSuffix.h"

double calcSuffix::CalculateSuffix(const std::string &str, myCalculate mc) {
    std::stack<double> sta;

    for (char op: str) {
        switch (op) {
            case '+': {
                double num2 = sta.top();
                sta.pop();
                double num1 = sta.top();
                sta.pop();
                sta.push(mc.Calc(num1, op, num2));
                break;
            }
            case '-': {
                double num2 = sta.top();
                sta.pop();
                double num1 = sta.top();
                sta.pop();
                sta.push(mc.Calc(num1, op, num2));
                break;
            }
            case '*': {
                double num2 = sta.top();
                sta.pop();
                double num1 = sta.top();
                sta.pop();
                sta.push(mc.Calc(num1, op, num2));
                break;
            }
            case '/': {
                double num2 = sta.top();
                sta.pop();
                double num1 = sta.top();
                sta.pop();
                sta.push(mc.Calc(num1, op, num2));
                break;
            }
            case '^': {
                double num2 = sta.top();
                sta.pop();
                double num1 = sta.top();
                sta.pop();
                sta.push(mc.Calc(num1, op, num2));
                break;
            }
            case '!': {
                double num = sta.top();
                sta.pop();
                sta.push(mc.Calc(op, int(num)));
                break;
            }
            default:
                if (isdigit(op)) {
                    op -= 48;
                    sta.push(op);
                } else {
                    std::cout << " Illegal operator : [" << op << "]  " << std::endl;
                }
//                exit(0);
                break;
        }
    }
    double ret = sta.top();
    sta.pop();
    return ret;
}