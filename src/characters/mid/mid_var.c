/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void variables_mid(v_var *a)
{
    a->mid->mid_interact = 0;
    a->mid->scale_mid.x = 1.5;
    a->mid->scale_mid.y = 1.5;
    a->mid->mid_wich_attack = 0;
    a->mid->stand_duration = 0;
    a->mid->attack_duration = 0;

    a->mid->mid_position.x = 960;
    a->mid->mid_position.y = 685;

    a->mid->pos_mid_stand.x = 765;
    a->mid->pos_mid_stand.y = 620;

    a->mid->pos_mid_hud.x = 1150;
    a->mid->pos_mid_hud.y = 100;
    a->mid->scale_mid_hud.x = 0.75;
    a->mid->scale_mid_hud.y = 0.75;

    a->mid->mid_ded = 0;
    a->mid->gain_exp = 0;
}