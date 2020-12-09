/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void move_rect_hol_attack(v_var *a)
{
    if (a->hol->rect_hol_attack.left == 0) {
        a->hol->rect_hol_attack.left = 4246;
        a->hol->attack_duration += 1;
    }
    else {
        a->hol->rect_hol_attack.left -=
        a->hol->rect_hol_attack.width;
    }
    if (a->hol->attack_duration == 1) {
        hol_reset(a);
    }
}

void move_rect_hol_ded(v_var *a)
{
    if (a->hol->rect_hol_ded.left == 0) {
        a->hol->rect_hol_ded.left = 0;
        a->hol->hol_ded = 1;
    }
    else {
        a->hol->rect_hol_ded.left -=
        a->hol->rect_hol_ded.width;
    }
}

void move_rect_hol_standing(v_var *a)
{
    if (a->hol->rect_hol_standing.left == 0) {
        a->hol->rect_hol_standing.left = 6176;
    }
    else {
        a->hol->rect_hol_standing.left -=
        a->hol->rect_hol_standing.width;
    }
}

void move_rect_hol_stand(v_var *a)
{
    if (a->hol->rect_hol_stand.left == 0) {
        a->hol->rect_hol_stand.left = 1544;
        a->hol->stand_duration += 1;
    }
    else {
        a->hol->rect_hol_stand.left -=
        a->hol->rect_hol_stand.width;
    }
    if (a->hol->stand_duration == 7) {
        hol_reset(a);
    }
}