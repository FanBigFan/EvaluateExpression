//
// Created by FanBig on 2023/3/15.
//

#include "infixToSuffix.h"

std::string infixToSuffix::toSuffix(const std::string &expression, myPrecede mp) {
    std::stack<char> sta;
    std::string str;
    for (char ch: expression) {
        switch (ch) {
            case '!':
            case '^':
            case '+':
            case '-':
            case '*':
            case '/': {
                if (sta.empty()) {
                    sta.push(ch);
                } else {
                    if (mp.Precede(ch) > mp.Precede(sta.top())) {
                        sta.push(ch);
                    } else {
                        while (!sta.empty() && mp.Precede(sta.top()) >= mp.Precede(ch)) {
                            str += sta.top();
                            sta.pop();
                        }
                        sta.push(ch);
                    }
                }
                break;
            }
            case '(':
                sta.push(ch);
                break;
            case ')': {
                while (!sta.empty() && sta.top() != '(') {
                    str += sta.top();
                    sta.pop();
                }
                sta.pop();
                break;
            }
            default:
                str += ch;
                break;
        }
    }
    while (!sta.empty()) {
        str += sta.top();
        sta.pop();
    }
    return str;
}