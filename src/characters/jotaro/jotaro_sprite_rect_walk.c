/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void move_rect_jotaro_walking(v_var *a)
{
    if (a->jo->rect_jotaro_walking.left == 5404) {
        a->jo->rect_jotaro_walking.left = 0;
    }
    else {
        a->jo->rect_jotaro_walking.left +=
        a->jo->rect_jotaro_walking.width;
    }
}

void move_rect_jotaro_walking2(v_var *a)
{
    if (a->jo->rect_jotaro_walking2.left == 0) {
        a->jo->rect_jotaro_walking2.left = 5404;
    }
    else {
        a->jo->rect_jotaro_walking2.left -=
        a->jo->rect_jotaro_walking2.width;
    }
}