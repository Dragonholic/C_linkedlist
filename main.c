#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "linkedlist.h"
#include "stack.h"
#include "queue.h"

int main() {
    queue Q;
    init_q(&Q);

    int n = 0;
    scanf("%d",&n);

    for (int i = 1; i <= n; ++i) {
        enqueue(&Q, i);
    }




    for (int i = 0; i < 5; ++i) {


        printf("%d\n", Q.data[i]);
    }

}