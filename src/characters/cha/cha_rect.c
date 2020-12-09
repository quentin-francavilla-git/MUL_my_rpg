/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void rect_cha(v_var *a)
{
    a->cha->rect_cha_standing.top = 0;
    a->cha->rect_cha_standing.left = 3860;
    a->cha->rect_cha_standing.width = 386;
    a->cha->rect_cha_standing.height = 226;

    a->cha->rect_cha_attack.top = 0;
    a->cha->rect_cha_attack.left = 2702;
    a->cha->rect_cha_attack.width = 386;
    a->cha->rect_cha_attack.height = 226;

    a->cha->rect_cha_ded.top = 0;
    a->cha->rect_cha_ded.left = 5790;
    a->cha->rect_cha_ded.width = 386;
    a->cha->rect_cha_ded.height = 226;

    a->cha->rect_cha_stand.top = 0;
    a->cha->rect_cha_stand.left = 6176;
    a->cha->rect_cha_stand.width = 386;
    a->cha->rect_cha_stand.height = 226;
}