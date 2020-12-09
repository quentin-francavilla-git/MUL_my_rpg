/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void variables_kakyo(v_var *a)
{
    a->kakyo->kakyo_interact = 0;
    a->kakyo->scale_kakyo.x = 1.5;
    a->kakyo->scale_kakyo.y = 1.5;
    a->kakyo->kakyo_wich_attack = 0;

    a->kakyo->kakyo_position.x = 800;
    a->kakyo->kakyo_position.y = 685;

}