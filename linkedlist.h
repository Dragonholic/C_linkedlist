//
// Created by yongluck on 2022-09-22.
//

#ifndef WEDPRO_LINKEDLIST_H
#define WEDPRO_LINKEDLIST_H

typedef struct node{
    int data;
    struct node *next;
    struct node *prev;
}node;

typedef struct {
    struct node *head;
    unsigned int len;
    struct node *tail;
}ll;

void add(ll *list, int pos, int data);

int get_size(ll *list);

int get_at(ll *list, int pos);

void set_at(ll *list, int pos, int data);

void concat(ll *list, ll*list2);

void rem(ll *list, int pos);

int contains(ll *list, int data);

void pri_list(ll *list);


#endif //WEDPRO_LINKEDLIST_H
