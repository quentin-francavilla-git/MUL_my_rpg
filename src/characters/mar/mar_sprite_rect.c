/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void move_rect_mar_attack(v_var *a)
{
    if (a->mar->rect_mar_attack.left == 0) {
        a->mar->rect_mar_attack.left = 2316;
        a->mar->attack_duration += 1;
    }
    else {
        a->mar->rect_mar_attack.left -=
        a->mar->rect_mar_attack.width;
    }
    if (a->mar->attack_duration == 1) {
        mar_reset(a);
    }
}

void move_rect_mar_ded(v_var *a)
{
    if (a->mar->rect_mar_ded.left == 0) {
        a->mar->rect_mar_ded.left = 0;
        a->mar->mar_ded = 1;
    }
    else {
        a->mar->rect_mar_ded.left -=
        a->mar->rect_mar_ded.width;
    }
}

void move_rect_mar_standing(v_var *a)
{
    if (a->mar->rect_mar_standing.left == 0) {
        a->mar->rect_mar_standing.left = 1544;
    }
    else {
        a->mar->rect_mar_standing.left -=
        a->mar->rect_mar_standing.width;
    }
}

void move_rect_mar_stand(v_var *a)
{
    if (a->mar->rect_mar_stand.left == 0) {
        a->mar->rect_mar_stand.left = 7334;
        a->mar->stand_duration += 1;
    }
    else {
        a->mar->rect_mar_stand.left -=
        a->mar->rect_mar_stand.width;
    }
    if (a->mar->stand_duration == 2) {
        mar_reset(a);
    }
}