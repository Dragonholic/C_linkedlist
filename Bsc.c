//
// Created by asdcv on 2022-10-27.
//
#include <stdio.h>
#include <malloc.h>
#include "Bsc.h"

void insert(trnode *root, int key, int data){
    trnode *new = (trnode *)malloc(sizeof (trnode));

    if(root == NULL){
        root->data = data;
        root->key = key;

    }else if(root->key < key){
        if(root->right == NULL){
            new->key = key;
            new->data = data;
            new-> parent = root;
        }
        insert(root->right, key, data);
    }else
        insert(root->left, key, data);
}

int delete(trnode *root, int key){
    if(root == NULL){
        printf("트리에 값이 없습니다.");
        return -1;
    }else{

        if(root->key == key){
            if(root->left ==NULL || root->right ==NULL){

            }else

        }else if(root->key > key){
            delete(root->left, key);
        }else {
            delete(root->right, key);
        }



    }
}