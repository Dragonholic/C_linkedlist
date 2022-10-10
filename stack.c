//
// Created by yongluck on 2022-10-03.
//

#include "stack.h"
#include "linkedlist.h"

void push(stack *s, int data) {
    add_last(s, data);
}

int pop(stack *s) {
    return rem_last(s).data;
}

int peek(stack* s) {
    return get_at(s, s->len-1);
}

void create(){
    ll stack = {stack.tail, 0, stack.head};

}


int isEmpty(stack *s){
    if(get_size(s) == 0)
        return 1;
    else
        return 0;
}