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
    trnode * ptr =NULL;
    root = insert(root,117, "�׶� ���ٳ� �ƿ���");
    root = insert(root,90, "��� �г� �ھ�");
    root = insert(root,72, "��ø��� ���");
    root = insert(root,78, "�׺� ������");
    root = insert(root,93, "�ÿ��� ������");
    root = insert(root,60, "��Ұ��� ������");
    root = insert(root,87, "������� �ö���");
    root = insert(root,51, "��� ����");

    inorder(root);
    printf("\n");












    return 0;
}