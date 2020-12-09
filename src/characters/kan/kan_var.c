/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void variables_kan(v_var *a)
{
    a->kan->kan_interact = 0;
    a->kan->scale_kan.x = 1.5;
    a->kan->scale_kan.y = 1.5;
    a->kan->kan_wich_attack = 0;
    a->kan->stand_duration = 0;
    a->kan->attack_duration = 0;

    a->kan->kan_position.x = 950;
    a->kan->kan_position.y = 685;

    a->kan->pos_kan_stand.x = 825;
    a->kan->pos_kan_stand.y = 685;

    a->kan->pos_kan_hud.x = 1150;
    a->kan->pos_kan_hud.y = 100;
    a->kan->scale_kan_hud.x = 0.75;
    a->kan->scale_kan_hud.y = 0.75;

    a->kan->kan_ded = 0;
    a->kan->gain_exp = 0;
}