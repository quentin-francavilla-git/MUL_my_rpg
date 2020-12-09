/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void variables_mar(v_var *a)
{
    a->mar->mar_interact = 0;
    a->mar->scale_mar.x = 1.5;
    a->mar->scale_mar.y = 1.5;
    a->mar->mar_wich_attack = 0;
    a->mar->stand_duration = 0;
    a->mar->attack_duration = 0;

    a->mar->mar_position.x = 960;
    a->mar->mar_position.y = 685;

    a->mar->pos_mar_stand.x = 765;
    a->mar->pos_mar_stand.y = 685;

    a->mar->pos_mar_hud.x = 1150;
    a->mar->pos_mar_hud.y = 100;
    a->mar->scale_mar_hud.x = 0.75;
    a->mar->scale_mar_hud.y = 0.75;

    a->mar->mar_ded = 0;
    a->mar->gain_exp = 0;
}