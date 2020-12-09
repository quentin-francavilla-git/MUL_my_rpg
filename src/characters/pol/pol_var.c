/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void variables_pol(v_var *a)
{
    a->pol->pol_interact = 0;
    a->pol->scale_pol.x = 1.5;
    a->pol->scale_pol.y = 1.5;
    a->pol->pol_wich_attack = 0;

    a->pol->pol_position.x = 1050;
    a->pol->pol_position.y = 685;
}