/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../../include/my_rpg.h"
#include "../../../../lib/my/lib.h"

void strength(v_var *a)
{
    if (a->stats->level == 1)
        a->stats->strength = 1 + a->stats->strength_bonus;
    if (a->stats->level == 2)
        a->stats->strength = 2 + a->stats->strength_bonus;
    if (a->stats->level == 3)
        a->stats->strength = 3 + a->stats->strength_bonus;
    if (a->stats->level == 4)
        a->stats->strength = 4 + a->stats->strength_bonus;
    if (a->stats->level == 5)
        a->stats->strength = 5 + a->stats->strength_bonus;
}

void hp(v_var *a)
{
    if (a->stats->level == 1)
        a->stats->hp_max = 2000 + a->stats->hp_bonus;

    if (a->stats->level == 2)
        a->stats->hp_max = 2500 + a->stats->hp_bonus;

    if (a->stats->level == 3)
        a->stats->hp_max = 4000 + a->stats->hp_bonus;

    if (a->stats->level == 4)
        a->stats->hp_max = 5500 + a->stats->hp_bonus;

    if (a->stats->level == 5)
        a->stats->hp_max = 7500 + a->stats->hp_bonus;

    if (a->rpg->fight != 1)
        a->jo->jotaro_life = a->stats->hp_max;
}

void xp(v_var *a)
{
    if (a->stats->level == 1)
        a->stats->xp_need = 1000 - a->stats->xp;
    if (a->stats->level == 2)
        a->stats->xp_need = 1000 - a->stats->xp;
    if (a->stats->level == 3)
        a->stats->xp_need = 1000 - a->stats->xp;
    if (a->stats->level == 4)
        a->stats->xp_need = 1000 - a->stats->xp;
    if (a->stats->xp_need <= 0 && a->stats->level < 5) {
        a->stats->level += 1;
        a->stats->xp = a->stats->xp_need * (- 1);
    }
}

void stats_gestion(v_var *a)
{
    xp(a);
    strength(a);
    hp(a);
}