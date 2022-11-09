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
        if(root == NULL){
            return NULL;
        }
        if(root->key > key){
            root->left = delete(root->left, key);

        }else if(root->key < key){
            root->right = delete(root->left, key);
        }else {
            trnode *temp = find_close_number(root->right);
            root->key = temp-> key;
            root->right = delete(root->right, key);
        }
    return root;
    }








void print_tree(trnode * root){
    if(root == NULL){
        return;
    }

    print_tree(root->left);
    printf("[%d] ", root->key);
    print_tree(root->right);        
}







