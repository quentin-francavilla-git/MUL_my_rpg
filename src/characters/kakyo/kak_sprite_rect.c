/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void move_rect_kakyo_standing(v_var *a)
{
    if (a->kakyo->rect_kakyo_standing.left == 0) {
        a->kakyo->rect_kakyo_standing.left = 7334;
    }
    else {
        a->kakyo->rect_kakyo_standing.left -=
        a->kakyo->rect_kakyo_standing.width;
    }
}