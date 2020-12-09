/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void variables_cha(v_var *a)
{
    a->cha->cha_interact = 0;
    a->cha->scale_cha.x = 1.5;
    a->cha->scale_cha.y = 1.5;
    a->cha->cha_wich_attack = 0;
    a->cha->stand_duration = 0;
    a->cha->attack_duration = 0;

    a->cha->cha_position.x = 960;
    a->cha->cha_position.y = 685;

    a->cha->pos_cha_stand.x = 765;
    a->cha->pos_cha_stand.y = 685;

    a->cha->pos_cha_hud.x = 1150;
    a->cha->pos_cha_hud.y = 100;
    a->cha->scale_cha_hud.x = 0.75;
    a->cha->scale_cha_hud.y = 0.75;

    a->cha->cha_ded = 0;
    a->cha->gain_exp = 0;
}