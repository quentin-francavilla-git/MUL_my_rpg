/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void display_heal_potions(v_var *a)
{
    if (a->jo->jotaro_position.x >=
    a->items->pos_heal_potion1[a->env->env].x - 500
    && a->jo->jotaro_position.x <=
    a->items->pos_heal_potion1[a->env->env].x
    && a->items->heal_potion[a->env->env] == 1) {
        a->hud_other->pos_press_f.x =
        a->items->pos_heal_potion1[a->env->env].x - 150;
        a->hud_other->pos_press_f.y = 900;
        a->items->heal_potion_interaction = 1;
        sfSprite_setPosition(a->hud_other->s_press_f,
        a->hud_other->pos_press_f);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_other->s_press_f, NULL);
    }
    else
        a->items->heal_potion_interaction = 0;

    if (a->items->heal_potion[a->env->env] == 1)
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->items->s_heal_potion1[a->env->env], NULL);
}

void display_armor_potions(v_var *a)
{
    if (a->jo->jotaro_position.x >=
    a->items->pos_armor_potion[a->env->env].x - 500
    && a->jo->jotaro_position.x <=
    a->items->pos_armor_potion[a->env->env].x
    && a->items->armor_potion[a->env->env] == 1) {
        a->hud_other->pos_press_f.x =
        a->items->pos_armor_potion[a->env->env].x - 150;
        a->hud_other->pos_press_f.y = 900;
        a->items->armor_potion_interaction = 1;
        sfSprite_setPosition(a->hud_other->s_press_f,
        a->hud_other->pos_press_f);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_other->s_press_f, NULL);
    }
    else
        a->items->armor_potion_interaction = 0;

    if (a->items->armor_potion[a->env->env] == 1)
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->items->s_armor_potion[a->env->env], NULL);
}

void display_big_heal_potions(v_var *a)
{
    if (a->jo->jotaro_position.x >=
    a->items->pos_big_heal_potion[a->env->env].x - 500
    && a->jo->jotaro_position.x <=
    a->items->pos_big_heal_potion[a->env->env].x
    && a->items->big_heal_potion[a->env->env] == 1) {
        a->hud_other->pos_press_f.x =
        a->items->pos_big_heal_potion[a->env->env].x - 150;
        a->hud_other->pos_press_f.y = 900;
        a->items->big_heal_potion_interaction = 1;
        sfSprite_setPosition(a->hud_other->s_press_f,
        a->hud_other->pos_press_f);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_other->s_press_f, NULL);
    }
    else
        a->items->big_heal_potion_interaction = 0;

    if (a->items->big_heal_potion[a->env->env] == 1)
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->items->s_big_heal_potion[a->env->env], NULL);
}

void display_items(v_var *a)
{
    if (a->inv->inv_open == 1)
        display_items_in_inv(a);
    if (a->rpg->fight != 1) {
        display_heal_potions(a);
        display_armor_potions(a);
        display_big_heal_potions(a);
    }
}