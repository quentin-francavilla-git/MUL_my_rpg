/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void ice_reset_stand(v_var *a)
{
    a->ice->rect_ice_stand.left = 3088;
    a->ice->stand_duration = 0;
    a->ice->ice_wich_attack = 0;
}

void ice_reset_attack(v_var *a)
{
    a->ice->rect_ice_attack.left = 3474;
    a->ice->attack_duration = 0;
    a->ice->ice_wich_attack = 0;
}

void ice_reset(v_var *a)
{
    if (a->rpg->fight == 1) {
        ice_reset_position(a);
        a->rpg->turn = 0;
    }
    ice_reset_attack(a);
    ice_reset_stand(a);
}