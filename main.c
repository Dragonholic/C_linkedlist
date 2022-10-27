#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "linkedlist.h"
#include "stack.h"
#include "queue.h"
#include "tree.h"============

void traversal(void (*x)(trnode*t), trnode*t) {
    x(t);
}


int main() {


    traversal(inorder, &t1);
    void (*x)(trnode*t) = inorder;
    x=preorder;
    x= postorder;
    return 0;
}