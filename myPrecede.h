//
// Created by FanBig on 2023/3/15.
//

#ifndef EVALUATEEXPRESSION_MYPRECEDE_H
#define EVALUATEEXPRESSION_MYPRECEDE_H


#include <iostream>

/*
 * #define OPTR
 * const char pri[OPTR][OPTR] = {
 *      //   +   -   *   /   ^   !   (   )   \0
 *      +   '>','>','<','<','<','<','<','>','>',
 *      -   '>','>','<','<','<','<','<','>','>',
 *      *   '>','>','>','>','<','<','<','>','>',
 *      /   '>','>','>','>','<','<','<','>','>',
 *      ^   '>','>','>','>','>','<','<','>','>',
 *      !   '>','>','>','>','>','>',' ','>','>',
 *      (   '<','<','<','<','<','<','<','=',' ',
 *      )   ' ',' ',' ',' ',' ',' ',' ',' ',' ',
 *      \0   '<','<','<','<','<','<','<',' ','=',
 * */


class myPrecede {
public:
    int Precede(char ch);
};


#endif //EVALUATEEXPRESSION_MYPRECEDE_H
