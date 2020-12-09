/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void variables_hol(v_var *a)
{
    a->hol->hol_interact = 0;
    a->hol->scale_hol.x = 1.5;
    a->hol->scale_hol.y = 1.5;
    a->hol->hol_wich_attack = 0;
    a->hol->stand_duration = 0;
    a->hol->attack_duration = 0;

    a->hol->hol_position.x = 960;
    a->hol->hol_position.y = 685;

    a->hol->pos_hol_stand.x = 650;
    a->hol->pos_hol_stand.y = 640;

    a->hol->pos_hol_hud.x = 1150;
    a->hol->pos_hol_hud.y = 100;
    a->hol->scale_hol_hud.x = 0.75;
    a->hol->scale_hol_hud.y = 0.75;

    a->hol->hol_ded = 0;
    a->hol->gain_exp = 0;
}