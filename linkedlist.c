//
// Created by yongluck on 2022-09-22.
//

#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>
#include "main.h"


void add(ll *list, int pos, int data){ // 리스트 추가 함수


    if(pos> list->len){
        printf("not allowed\n");
        return;
    }

    node *new = malloc(sizeof(node)); // 노드 뉴생성
    new->data =data; // 노드 뉴 data에 data 넣기


    if(pos==0) {
        new->next = list->head; // 노드 new의 next에 리스트의 head 넣기
        new->prev = NULL; // 노드 prev를 NULL로
        list->head = new; // 리스트  해드를 new로 바꿔치기

    }
    else if(pos == list->len){
        new->next = NULL; // next를 NULL
        new->prev = list->tail; // new의 prev를 tail로
        list->tail = new; // tail에 new를
    }

    else{
        node *tmp = list->head; // 노트 tmp생성 tmp에 해드 넣음

        for(int i=0; i<pos-2; i++){
            tmp = tmp->next; // next를 타고 pos-2자리까지 이동
        }
        new->prev = tmp->prev; //prev 값 대입
        tmp = tmp->next;    // next타고 한칸 더이동
        new->next = tmp->next; // new next에 tmp next 값 넣기
        tmp->next = new; // 뉴를 next에 넣기 가리키게
    }

    list->len = list->len+1;

};


int get_size(ll *list) {
    return list->len;
};


int get_at(ll *list, int pos){

    if(pos > get_size(list)){
        printf("not allowed\n");
    }
    else{
    node *tmp = list->head;
    for (int i=0; i<pos; i++) tmp = tmp->next;
    return tmp->data;
        
    }

};

void set_at(ll *list, int pos, int data) {
    node *tmp = list->head;
    for (int i = 0; i < pos; i++) {
        tmp = tmp->next;
    }
    tmp->data = data;
}


void concat(ll *list1, ll *list2) {
    node *tmp = list1->tail;
    tmp->next = list2->head;
    tmp = list2->head;
    tmp->prev = list1->tail;
    list1->len += list2->len;
}


int contains(ll *list, int data) {
    int pos = 0;
    node *tmp = list->head;
    while(tmp != NULL) {
        if (tmp->data == data) {
            return pos;
        }
        tmp = tmp->next;
        pos += 1;
    }
    return -1;
}


void rem(ll *list, int pos) {
    if(pos < 0 || pos > list->len -1) {
        printf("not allowed\n");
        return;
    }

    if (pos == 0) {
        list->head = list->head->next;
    }
    else if(pos == list ->len){
        list->tail = list->tail->prev;
    }



    else {
        node *tmp = list->head;
        for(int i=0; i<pos-1; i++) tmp = tmp->next;
        tmp->next = tmp->next->next;
    }

    list->len = list->len - 1;
}








