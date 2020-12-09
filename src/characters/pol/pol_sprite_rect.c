/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void move_rect_pol_standing(v_var *a)
{
    if (a->pol->rect_pol_standing.left == 0) {
        a->pol->rect_pol_standing.left = 1544;
    }
    else {
        a->pol->rect_pol_standing.left -=
        a->pol->rect_pol_standing.width;
    }
}