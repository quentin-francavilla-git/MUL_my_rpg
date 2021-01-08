/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../../include/my_rpg.h"
#include "../../../../lib/my/lib.h"

void variables_stats2(v_var *a)
{
    a->stats->xp = 0;
    a->stats->xp_need = 500;
    a->stats->level = 1;
    a->stats->strength_bonus = 0;
    a->stats->hp_bonus = 0;
    a->stats->strength = 1;
    a->stats->hp_max = 2000;

    a->stats->scale_level.x = 0.7;
    a->stats->scale_level.y = 0.7;

    a->stats->pos_level.x = 50;
    a->stats->pos_level.y = 50;

    a->stats->pos_text_level_inv.x = 745;
    a->stats->pos_text_level_inv.y = 360;
}

void variables_stats(v_var *a)
{
    variables_stats2(a);

    a->stats->pos_hp_level_inv.x = 660;
    a->stats->pos_hp_level_inv.y = 420;

    a->stats->pos_text_strength_inv.x = 745;
    a->stats->pos_text_strength_inv.y = 478;

    a->stats->pos_text_xp_inv.x = 135;
    a->stats->pos_text_xp_inv.y = 65;

    a->stats->l1 = 0;
}