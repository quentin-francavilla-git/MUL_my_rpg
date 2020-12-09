/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void move_rect_mid_attack(v_var *a)
{
    if (a->mid->rect_mid_attack.left == 0) {
        a->mid->rect_mid_attack.left = 3088;
        a->mid->attack_duration += 1;
    }
    else {
        a->mid->rect_mid_attack.left -=
        a->mid->rect_mid_attack.width;
    }
    if (a->mid->attack_duration == 1) {
        mid_reset(a);
    }
}

void move_rect_mid_ded(v_var *a)
{
    if (a->mid->rect_mid_ded.left == 0) {
        a->mid->rect_mid_ded.left = 0;
        a->mid->mid_ded = 1;
    }
    else {
        a->mid->rect_mid_ded.left -=
        a->mid->rect_mid_ded.width;
    }
}

void move_rect_mid_standing(v_var *a)
{
    if (a->mid->rect_mid_standing.left == 0) {
        a->mid->rect_mid_standing.left = 1930;
    }
    else {
        a->mid->rect_mid_standing.left -=
        a->mid->rect_mid_standing.width;
    }
}

void move_rect_mid_stand(v_var *a)
{
    if (a->mid->rect_mid_stand.left == 0) {
        a->mid->rect_mid_stand.left = 3088;
        a->mid->stand_duration += 1;
    }
    else {
        a->mid->rect_mid_stand.left -=
        a->mid->rect_mid_stand.width;
    }
    if (a->mid->stand_duration == 7) {
        mid_reset(a);
    }
}