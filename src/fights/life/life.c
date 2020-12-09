/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void life_char(v_var *a)
{
    if (a->jo->jotaro_life <= 0)
        a->jo->jotaro_wich_attack = 42;
    if (a->rpg->enemy_life <= 0)
        a->rpg->enemy_ded_sprite = 1;
}

void life_gestion(v_var *a)
{
    a->hud_fight->rect_v_var2.width = a->rpg->enemy_life *
    a->rpg->enemy_life_multiple;
    a->hud_fight->rect_v_var1.width = a->jo->jotaro_life *
    (633 / a->stats->hp_max);
    life_char(a);
}