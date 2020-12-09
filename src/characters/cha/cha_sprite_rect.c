/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void move_rect_cha_attack(v_var *a)
{
    if (a->cha->rect_cha_attack.left == 0) {
        a->cha->rect_cha_attack.left = 2316;
        a->cha->attack_duration += 1;
    }
    else {
        a->cha->rect_cha_attack.left -=
        a->cha->rect_cha_attack.width;
    }
    if (a->cha->attack_duration == 1) {
        cha_reset(a);
    }
}

void move_rect_cha_ded(v_var *a)
{
    if (a->cha->rect_cha_ded.left == 0) {
        a->cha->rect_cha_ded.left = 0;
        a->cha->cha_ded = 1;
    }
    else {
        a->cha->rect_cha_ded.left -=
        a->cha->rect_cha_ded.width;
    }
}

void move_rect_cha_standing(v_var *a)
{
    if (a->cha->rect_cha_standing.left == 0) {
        a->cha->rect_cha_standing.left = 3474;
    }
    else {
        a->cha->rect_cha_standing.left -=
        a->cha->rect_cha_standing.width;
    }
}

void move_rect_cha_stand(v_var *a)
{
    if (a->cha->rect_cha_stand.left == 0) {
        a->cha->rect_cha_stand.left = 5790;
        a->cha->stand_duration += 1;
    }
    else {
        a->cha->rect_cha_stand.left -=
        a->cha->rect_cha_stand.width;
    }
    if (a->cha->stand_duration == 2) {
        cha_reset(a);
    }
}