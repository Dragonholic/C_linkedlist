//
// Created by asdcv on 2022-10-13.
//

#ifndef MAIN_C_TREE_H
#define MAIN_C_TREE_H

typedef struct trnode {
    int key;
    char* data;
    struct trnode * left;
    struct trnode * right;
    struct trnode * parent;

}trnode;

typedef struct
{
    trnode* root;
};



void preorder(trnode * t);
void inorder(trnode*t);
void postorder(trnode*t);
void levelorder(trnode*t);

int isExternal(trnode* w);
void expandExternal(trnode* w);
trnode* sibling(trnode* z);
trnode* treeSearch(trnode* v, int k);
trnode* treetrue(trnode* v, int k);



#endif //MAIN_C_TREE_H