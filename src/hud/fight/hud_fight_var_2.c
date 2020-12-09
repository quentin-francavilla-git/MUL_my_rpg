/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void variables_hud_fight4(v_var *a)
{
    a->hud_fight->block_dmg = 0;
    a->hud_fight->case_items = 1;

    a->hud_fight->armor = 0;

    a->hud_fight->scale_boss.x = 0.60;
    a->hud_fight->scale_boss.y = 0.60;

    a->rpg->pos_dialogue.x = 596;
    a->rpg->pos_dialogue.y = 730;
}