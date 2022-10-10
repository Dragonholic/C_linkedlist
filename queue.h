//
// Created by yongluck on 2022-10-08.
//

#ifndef WEDPRO_QUEUE_H
#define WEDPRO_QUEUE_H

#include "linkedlist.h"


typedef struct queue {
    int front;
    int rear;
    int len;
    int data[500000];
} queue;

void init_q(queue *q);

void enqueue(queue *q, int data);

int dequeue(queue *q);

void print_Q(queue *q);



#endif //WEDPRO_QUEUE_H
