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
    }else{
        if(root->left == NULL){
            new->key = key;
            new->data = data;
            new-> parent = root;
        }
        insert(root->left, key, data);}
}

int find_close_number(trnode * root){
    trnode * current = root;

    while (current->left != NULL){
        current = current->left;
    }
    return current;
}


int delete(trnode *root, int key){
    if(root == NULL){
        printf("트리에 값이 없습니다.");
        return -1;
    }else{

        if(root->key == key){
            if(root->left ==NULL || root->right ==NULL){
                free(root);
            }else if(root->left == NULL || root->right != NULL){
                root->parent->right = root->right;
                root->right->parent = root->parent;
                free(root);

            }else if(root->left != NULL || root->right == NULL){
                root->parent->left = root->left;
                root->left->parent = root->parent;
                free(root);
            }else {
                trnode * tmp = find_close_number(root->right);
                root->key = tmp->key;
                root->right = delete(root->right,tmp->key);
            }

        }else if(root->key > key){
            delete(root->left, key);
        }else {
            delete(root->right, key);
        }

    }
}

int search(trnode *root, int key){

}