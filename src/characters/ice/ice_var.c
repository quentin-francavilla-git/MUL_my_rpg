/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void variables_ice(v_var *a)
{
    a->ice->ice_interact = 0;
    a->ice->scale_ice.x = 1.5;
    a->ice->scale_ice.y = 1.5;
    a->ice->ice_wich_attack = 0;
    a->ice->stand_duration = 0;
    a->ice->attack_duration = 0;

    a->ice->ice_position.x = 960;
    a->ice->ice_position.y = 685;

    a->ice->pos_ice_stand.x = 765;
    a->ice->pos_ice_stand.y = 650;

    a->ice->pos_ice_hud.x = 1150;
    a->ice->pos_ice_hud.y = 100;
    a->ice->scale_ice_hud.x = 0.75;
    a->ice->scale_ice_hud.y = 0.75;

    a->ice->ice_ded = 0;
    a->ice->gain_exp = 0;
}