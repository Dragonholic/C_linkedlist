//
// Created by yongluck on 2022-10-03.
//

#ifndef WEDPRO_STACK_H
#define WEDPRO_STACK_H


#include "linkedlist.h"

typedef ll stack;

void push(stack *s, int data);
int pop(stack* s);
int peek(stack *s);
int isEmpty(stack *s);
void create();

#endif //WEDPRO_STACK_H
