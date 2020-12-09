/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void move_rect_jotaro_attack(v_var *a)
{
    if (a->jo->rect_jotaro_attack.left == 3088) {
        a->jo->rect_jotaro_attack.left = 0;
        a->jo->attack_duration += 1;
    }
    else {
        a->jo->rect_jotaro_attack.left +=
        a->jo->rect_jotaro_attack.width;
    }
    if (a->jo->attack_duration == 1)
        jotaro_reset(a);
}

void move_rect_jotaro_ded(v_var *a)
{
    if (a->jo->rect_jotaro_ded.left == 5404) {
        a->jo->rect_jotaro_ded.left = 5404;
        a->jo->jo_ded = 1;
    }
    else {
        a->jo->rect_jotaro_ded.left +=
        a->jo->rect_jotaro_ded.width;
    }
}

void move_rect_jotaro_while(v_var *a)
{
    if (a->jo->rect_jotaro_while.left == 5404
    && a->jo->attack_duration < 5) {
        a->jo->rect_jotaro_while.left = 1158;
        a->jo->attack_duration += 1;
    }
    else {
        a->jo->rect_jotaro_while.left +=
        a->jo->rect_jotaro_while.width;
    }
    if (a->jo->attack_duration == 5)
        jotaro_reset_while(a);
}

void move_rect_jotaro_standing(v_var *a)
{
    if (a->jo->rect_jotaro_standing.left == 9264) {
        a->jo->rect_jotaro_standing.left = 0;
    }
    else {
        a->jo->rect_jotaro_standing.left +=
        a->jo->rect_jotaro_standing.width;
    }
}

void move_rect_jotaro_stand(v_var *a)
{
    if (a->jo->rect_jotaro_stand.left == 4444) {
        a->jo->rect_jotaro_stand.left = 0;
        a->jo->stand_duration += 1;
    }
    else {
        a->jo->rect_jotaro_stand.left +=
        a->jo->rect_jotaro_stand.width;
    }
    if (a->jo->stand_duration == 6)
        jotaro_reset(a);
}