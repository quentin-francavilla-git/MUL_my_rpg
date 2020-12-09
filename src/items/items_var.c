/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void items_var(v_var *a)
{
    a->hud_fight->fight_items = 0;

    a->items->heal_potion = malloc(sizeof(int) * 200);
    a->items->heal_potion_interaction = 0;

    a->items->scale_heal_potion1.x = 1.2;
    a->items->scale_heal_potion1.y = 1.2;

    a->items->armor_potion = malloc(sizeof(int) * 200);
    a->items->armor_potion_interaction = 0;

    a->items->big_heal_potion = malloc(sizeof(int) * 200);
    a->items->big_heal_potion_interaction = 0;
}