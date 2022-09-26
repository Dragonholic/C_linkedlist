#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "linkedlist.h"


int main() {
    ll list = {NULL, 0, NULL};
    add(&list, 0, 1);
    add(&list, 0, 2);
    add(&list, 0, 3);
    add(&list, 1, 4);
    add(&list, 4, 5);
    add(&list, 5, 10);
    rem(&list, 5);

    ll list2 = {NULL, 0, NULL};
    add(&list2, 0, 10);
    add(&list2, 1, 20);

    node *tmp = list.head;
    for(int i=0; i<list.len; i++) {
        printf("%d\t", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
    printf("size=%d\n", get_size(&list)); // 성공
    printf("(4) = %d\n", get_at(&list, 4)); // 성공
    set_at(&list, 4, 100); // 성공
    printf("(4) = %d\n", get_at(&list, 4)); // 성공
    printf("\n");


    tmp = list2.head;
    for(int i=0; i<list2.len; i++) {
        printf("%d\t", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");

    concat(&list, &list2);
    tmp = list.head;
    for(int i=0; i<list.len; i++) {
        printf("%d\t", tmp->data);
        tmp = tmp->next;
    }
//    printf("\n");
//
//    printf("contains=%d\n", contains(&list, 22));

}