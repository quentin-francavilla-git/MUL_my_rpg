/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void variables_jotaro(v_var *a)
{
    a->jo->scale_jotaro.x = 1.5;
    a->jo->scale_jotaro.y = 1.5;
    a->jo->jotaro_wich_attack = 0;
    a->jo->stand_duration = 0;
    a->jo->attack_duration = 0;

    a->jo->jotaro_position.x = -150;
    a->jo->jotaro_position.y = 690;

    a->jo->pos_jotaro_stand.x = 30;
    a->jo->pos_jotaro_stand.y = 730;

    a->jo->pos_jotaro_hud.x = 180;
    a->jo->pos_jotaro_hud.y = 100;
    a->jo->scale_jotaro_hud.x = 0.75;
    a->jo->scale_jotaro_hud.y = 0.75;
    a->jo->scale_jotaro_hud2.x = -0.75;
    a->jo->scale_jotaro_hud2.y = -0.75;

    a->jo->jotaro_life = 2000;
    a->jo->jo_ded = 0;
}