//
// Created by asdcv on 2022-10-13.
//
#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
#include "queue.h"

void preorder(trnode * t) {
    if (t == NULL) return;
    printf("[%s %d]", t->data,t->key);
    preorder(t->left);
    preorder(t->right);
}

void inorder(trnode*t){
    if (t == NULL) return;
    inorder(t->left);
    printf("[%s %d]", t->data,t->key);
    inorder(t->right);

}

void postorder(trnode*t){
    if (t == NULL) return;
    postorder(t->left);

    postorder(t->right);
    printf("[%s %d]", t->data,t->key);
}










int isExternal(trnode* w)
{
    return (w->left == NULL && w->right == NULL);
}




trnode* treeSearch(trnode* v, int k){
    if(isExternal(v))
        return -1;
    if(k == v->key)
        return v->data;
    else if(k < v->key)
        return treeSearch(v->left, k);
    else
        return treeSearch(v->right, k);
}

trnode* treetrue(trnode* v, int k){
    if(treeSearch(v,k) == -1){
        return -1;
    }
}


void expandExternal(trnode* w)
{
    trnode* l = (trnode*)malloc(sizeof(trnode));
    trnode* r = (trnode*)malloc(sizeof(trnode));

    l->left = NULL;
    l->right = NULL;
    l->parent = w;
    r->left = NULL;
    r->right = NULL;
    r->parent = w;
    w->left = l;
    w->right = r;
}



trnode* sibling(trnode* z)
{
    if(z->parent->left == z)
        return z->parent->right;
    else
        return z->parent->left;
}


