/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void kan_reset_stand(v_var *a)
{
    a->kan->rect_kan_stand.left = 2316;
    a->kan->stand_duration = 0;
    a->kan->kan_wich_attack = 0;
}

void kan_reset_attack(v_var *a)
{
    a->kan->rect_kan_attack.left = 1930;
    a->kan->attack_duration = 0;
    a->kan->kan_wich_attack = 0;
}

void kan_reset(v_var *a)
{
    if (a->rpg->fight == 1) {
        kan_reset_position(a);
        a->rpg->turn = 0;
    }
    kan_reset_attack(a);
    kan_reset_stand(a);
}