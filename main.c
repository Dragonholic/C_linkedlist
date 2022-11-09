#include <stdio.h>
#include <stdlib.h>
#include "main.h"



#include "tree.h"
#include "TFT.h"
#include "Bsc.h"



int main() {

//    champion
//    *Ao_Shin, *Aphelios, *Aurelion_Sol, *Bard, *Braum, *Daeja,
//    *Diana, *Ezreal, *Gnar, *Graves, *hecarim, *Idea, *Jax, *Jayce,
//    *Kaisa, *Karma, *Lee_sin, *Leona, *Shivan, *Terra, *Sejuani, *Twich,
//    *Yasuo, *Zippy, *Malphit, *Nasus, *Zac, *Volibea, *Yone, *Olaf, *Varus,
//    *Xayah, *Rakan, *Pantheon, *Shi_oh, *Sv_fan, *Sylas, *Soraka, *Lilla,
//    *Nilah, *Qiyana
//    = malloc(sizeof(champion));
//
//    declare_champ(&Ao_Shin,8);
//    declare_champ(&Rakan,3);

    trnode * root = NULL;

    root = insert(root,117, "테라 쉬바나 아오신");
    root = insert(root,90, "길드 분노날개 자야");
    root = insert(root,72, "민첩사수 요네");
    root = insert(root,78, "그브 세라핀");
    root = insert(root,93, "시오유 사이펜");
    root = insert(root,60, "어둠강림 릴리아");
    root = insert(root,87, "비늘혐오 올라프");
    root = insert(root,51, "리롤 길드 이즈");



    int g;
    printf("원하는 코스트의 추천 덱을 입력하시오: ");
    scanf("%d", &g);

    if(treetrue(root, g) != -1){
        printf("%s 덱", treeSearch(root, g));






    }else{
        printf("추천덱이 없습니다.");
    }




    printf("\n");












    return 0;
}