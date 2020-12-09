/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void mid_reset_stand(v_var *a)
{
    a->mid->rect_mid_stand.left = 3088;
    a->mid->stand_duration = 0;
    a->mid->mid_wich_attack = 0;
}

void mid_reset_attack(v_var *a)
{
    a->mid->rect_mid_attack.left = 3088;
    a->mid->attack_duration = 0;
    a->mid->mid_wich_attack = 0;
}

void mid_reset(v_var *a)
{
    if (a->rpg->fight == 1) {
        mid_reset_position(a);
        a->rpg->turn = 0;
    }
    mid_reset_attack(a);
    mid_reset_stand(a);
}