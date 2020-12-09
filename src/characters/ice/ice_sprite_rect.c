/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void move_rect_ice_attack(v_var *a)
{
    if (a->ice->rect_ice_attack.left == 0) {
        a->ice->rect_ice_attack.left = 3474;
        a->ice->attack_duration += 1;
    }
    else {
        a->ice->rect_ice_attack.left -=
        a->ice->rect_ice_attack.width;
    }
    if (a->ice->attack_duration == 1) {
        ice_reset(a);
    }
}

void move_rect_ice_ded(v_var *a)
{
    if (a->ice->rect_ice_ded.left == 0) {
        a->ice->rect_ice_ded.left = 0;
        a->ice->ice_ded = 1;
    }
    else {
        a->ice->rect_ice_ded.left -=
        a->ice->rect_ice_ded.width;
    }
}

void move_rect_ice_standing(v_var *a)
{
    if (a->ice->rect_ice_standing.left == 0) {
        a->ice->rect_ice_standing.left = 11966;
    }
    else {
        a->ice->rect_ice_standing.left -=
        a->ice->rect_ice_standing.width;
    }
}

void move_rect_ice_stand(v_var *a)
{
    if (a->ice->rect_ice_stand.left == 0) {
        a->ice->rect_ice_stand.left = 3088;
        a->ice->stand_duration += 1;
    }
    else {
        a->ice->rect_ice_stand.left -=
        a->ice->rect_ice_stand.width;
    }
    if (a->ice->stand_duration == 10) {
        ice_reset(a);
    }
}