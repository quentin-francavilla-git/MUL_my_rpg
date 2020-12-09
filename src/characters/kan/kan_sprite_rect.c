/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void move_rect_kan_attack(v_var *a)
{
    if (a->kan->rect_kan_attack.left == 0) {
        a->kan->rect_kan_attack.left = 1930;
        a->kan->attack_duration += 1;
    }
    else {
        a->kan->rect_kan_attack.left -=
        a->kan->rect_kan_attack.width;
    }
    if (a->kan->attack_duration == 1) {
        kan_reset(a);
    }
}

void move_rect_kan_ded(v_var *a)
{
    if (a->kan->rect_kan_ded.left == 0) {
        a->kan->rect_kan_ded.left = 0;
        a->kan->kan_ded = 1;
    }
    else {
        a->kan->rect_kan_ded.left -=
        a->kan->rect_kan_ded.width;
    }
}

void move_rect_kan_standing(v_var *a)
{
    if (a->kan->rect_kan_standing.left == 0) {
        a->kan->rect_kan_standing.left = 5404;
    }
    else {
        a->kan->rect_kan_standing.left -=
        a->kan->rect_kan_standing.width;
    }
}

void move_rect_kan_stand(v_var *a)
{
    if (a->kan->rect_kan_stand.left == 0) {
        a->kan->rect_kan_stand.left = 2316;
        a->kan->stand_duration += 1;
    }
    else {
        a->kan->rect_kan_stand.left -=
        a->kan->rect_kan_stand.width;
    }
    if (a->kan->stand_duration == 3) {
        kan_reset(a);
    }
}