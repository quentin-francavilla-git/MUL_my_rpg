/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void variables_dio(v_var *a)
{
    a->dio->dio_interact = 0;
    a->dio->scale_dio.x = 1.5;
    a->dio->scale_dio.y = 1.5;
    a->dio->dio_wich_attack = 0;
    a->dio->stand_duration = 0;
    a->dio->attack_duration = 0;

    a->dio->dio_position.x = 1000;
    a->dio->dio_position.y = 730;

    a->dio->pos_dio_stand.x = 825;
    a->dio->pos_dio_stand.y = 665;

    a->dio->pos_dio_hud.x = 1150;
    a->dio->pos_dio_hud.y = 100;
    a->dio->scale_dio_hud.x = 0.75;
    a->dio->scale_dio_hud.y = 0.75;

    a->dio->dio_ded = 0;
    a->dio->gain_exp = 0;
}