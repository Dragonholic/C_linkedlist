//
// Created by asdcv on 2022-10-13.
//
#include <stdio.h>
#include "tree.h"
#include "queue.h"

void preorder(trnode * t) {
    if (t == NULL) return;
    printf("%d ", t->data);

    preorder(t->left);
    preorder(t->right);
}

void inorder(trnode*t){
    if (t == NULL) return;
    inorder(t->left);
    printf("%d", t->data);
    inorder(t->right);

}

void postorder(trnode*t){
    if (t == NULL) return;
    postorder(t->left);

    postorder(t->right);
    printf("%d", t->data);

}

void levelorder(trnode*t){

}



