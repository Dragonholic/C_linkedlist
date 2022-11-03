//
// Created by asdcv on 2022-10-27.
//
#include <stdio.h>
#include <malloc.h>
#include "Bsc.h"

trnode * new_node(int nkey, char* data){
    trnode * tmp = (trnode *) malloc(sizeof (trnode));
    tmp->key = nkey;
    tmp->data = data;
    tmp->left =tmp->right = NULL;
    return tmp;
}

trnode * insert(trnode *root, int key, char* data){

    if(root == NULL){
        return new_node(key,data);

    }else if(root->key < key){
        root->right = insert(root->right, key, data);
    }else{
        root->left = insert(root->left, key, data);}

    return  root;
}

int find_close_number(trnode * root){
    trnode * current = root;

    while (current->left != NULL){
        current = current->left;
    }
    return current;
}


int delete(trnode *root, int key){
    trnode *tmp = (trnode *)malloc(sizeof (trnode));
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
                tmp = find_close_number(root->right);
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

void print_tree(trnode * root){
    if(root == NULL){
        return;
    }

    print_tree(root->left);
    printf("[%d] ", root->key);
    print_tree(root->right);
}