//
// Created by asdcv on 2022-10-27.
//

#ifndef MAIN_C_BSC_H
#define MAIN_C_BSC_H
#include "tree.h"

trnode * insert(trnode *root, int key, char* data);
int delete(trnode *root, int key);
int search(trnode *root, int key);
int find_close_number(trnode * root);

void print_tree(trnode * root);



#endif //MAIN_C_BSC_H
