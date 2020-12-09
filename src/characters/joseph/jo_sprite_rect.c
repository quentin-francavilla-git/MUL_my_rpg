/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void move_rect_joseph_standing(v_var *a)
{
    if (a->joseph->rect_joseph_standing.left == 0) {
        a->joseph->rect_joseph_standing.left = 3860;
    }
    else {
        a->joseph->rect_joseph_standing.left -=
        a->joseph->rect_joseph_standing.width;
    }
}