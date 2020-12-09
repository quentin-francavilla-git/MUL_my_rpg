/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void interactions_heal_potions(v_var *a)
{
    if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeySpace)
    && a->items->heal_potion_interaction == 1) {
        a->items->heal_potion[a->env->env] = 0;
        a->inv->inv_heal_potion1 += 1;
    }
}

void interactions_armor_potions(v_var *a)
{
    if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeySpace)
    && a->items->armor_potion_interaction == 1) {
        a->items->armor_potion[a->env->env] = 0;
        a->inv->inv_armor_potion += 1;
    }
}

void interactions_big_heal_potions(v_var *a)
{
    if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeySpace)
    && a->items->big_heal_potion_interaction == 1) {
        a->items->big_heal_potion[a->env->env] = 0;
        a->inv->inv_big_heal_potion += 1;
    }
}

void items_interactions(v_var *a)
{
    interactions_heal_potions(a);
    interactions_armor_potions(a);
    interactions_big_heal_potions(a);
}