//
// Created by asdcv on 2022-10-28.
//

#ifndef MAIN_C_TFT_H
#define MAIN_C_TFT_H
#include "tree.h"

typedef struct item{
    char* tem1;
    char* tem2;
    char* tem3;
}item;

typedef struct deck{
    struct champion *c;
    struct item *i;
}deck;

typedef struct champion{
    int cost;
    struct item *i;
}champion;

void declare_champ(champion *C,int c);
void find_deck(trnode*root, int key);





#endif //MAIN_C_TFT_H
