/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void dialogues(v_var *a)
{
    if (a->rpg->dialogue == 1) {
        dial_dio(a);
        dial_joseph(a);
        dial_kakyo(a);
        dial_kan(a);
        dial_hol(a);
        dial_cha(a);
        dial_mar(a);
        dial_mid(a);
        if (a->pol->pol_interact != 0)
            dial_pol(a);
        if (a->rpg->door_interact != 0)
            dial_door(a);
        if (a->ice->ice_interact != 0)
            dial_ice(a);
        if (a->rpg->door_interact2 != 0)
            dial_door2(a);
    }
}