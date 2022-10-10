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
    if ((q->rear + 1) % 5 == q->front) {
        printf("not allowed\n");
        return;
    }
    q->data[++q->rear % 5] = data;
    q->len++;
}

int dequeue(queue *q) {
    q->len--;
    return q->data[++q->front % 5];
}
