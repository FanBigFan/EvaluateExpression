//
// Created by FanBig on 2023/3/15.
//

#include "myPrecede.h"


int myPrecede::Precede(char ch) {
    switch (ch) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
        case '!':
        case '^':
            return 2;
        case '(':
            return 0;
        default:
            std::cout << " illegal operator ! " << std::endl;
            exit(0);
    }
}