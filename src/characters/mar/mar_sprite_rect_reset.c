/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void mar_reset_stand(v_var *a)
{
    a->mar->rect_mar_stand.left = 7334;
    a->mar->stand_duration = 0;
    a->mar->mar_wich_attack = 0;
}

void mar_reset_attack(v_var *a)
{
    a->mar->rect_mar_attack.left = 2316;
    a->mar->attack_duration = 0;
    a->mar->mar_wich_attack = 0;
}

void mar_reset(v_var *a)
{
    if (a->rpg->fight == 1) {
        mar_reset_position(a);
        a->rpg->turn = 0;
    }
    mar_reset_attack(a);
    mar_reset_stand(a);
}