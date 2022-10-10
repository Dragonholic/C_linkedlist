#include <stdio.h>
#include "queue.h"

// ADT of Queue
//void enqueue(queue *q, int data) {
//    printf("enqueue <- %d\n", data);
//    add_last(q, data);
//}
//
//int dequeue(queue *q) {
//    node x = rem(q, 0);
//    printf("%d <- dequeue\n", x.data);
//    return x.data;
//}

void init_q(queue *q) {
    q->front = q->rear = 0;
    q->len = 0;
}

void enqueue(queue *q, int data) {
    if ((q->rear + 1) %500000  == q->front) {
        printf("not allowed(enq)\n");
        return;
    }
    q->rear++;
    q->data[q->rear % 500000] = data;

    q->len++;

}

int dequeue(queue *q) {
    if((q->rear + 1) %500000  == q->front ){
        printf("not allowed(deq)\n");
    } else{

    q->len--;

        return q->data[++q->front % 500000];
    }
}


void print_Q(queue *q){

    for (int i = 0; i <= q->rear; ++i) {


        printf("%d\n", q->data[i]);
    }
    printf("front: %d\n", q->front);
    printf("rear: %d\n", q->rear);
    printf("len: %d\n", q->len);

}