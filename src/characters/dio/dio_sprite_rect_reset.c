/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void dio_reset_stand(v_var *a)
{
    a->dio->rect_dio_stand.left = 10036;
    a->dio->stand_duration = 0;
    a->dio->dio_wich_attack = 0;
}

void dio_reset_attack(v_var *a)
{
    a->dio->rect_dio_attack.left = 6154;
    a->dio->attack_duration = 0;
    a->dio->dio_wich_attack = 0;
}

void dio_reset(v_var *a)
{
    if (a->rpg->fight == 1) {
        dio_reset_position(a);
        a->rpg->turn = 0;
    }
    dio_reset_attack(a);
    dio_reset_stand(a);
}