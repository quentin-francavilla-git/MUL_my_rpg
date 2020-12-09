/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void fight_display_heal_potions(v_var *a)
{
    if (a->inv->inv_heal_potion1 != 0) {
        a->inv->pos_inv_heal_potion1.x = 710;
        a->inv->pos_inv_heal_potion1.y = 500;
        sfSprite_setPosition(a->inv->s_inv_heal_potion1,
        a->inv->pos_inv_heal_potion1);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->inv->s_inv_heal_potion1, NULL);
    }
}

void fight_display_armor_potions(v_var *a)
{
    if (a->inv->inv_armor_potion != 0) {
        a->inv->pos_inv_armor_potion.x = 865;
        a->inv->pos_inv_armor_potion.y = 500;
        sfSprite_setPosition(a->inv->s_inv_armor_potion,
        a->inv->pos_inv_armor_potion);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->inv->s_inv_armor_potion, NULL);
    }
}

void fight_display_big_heal_potions(v_var *a)
{
    if (a->inv->inv_big_heal_potion != 0) {
        a->inv->pos_inv_big_heal_potion.x = 1010;
        a->inv->pos_inv_big_heal_potion.y = 500;
        sfSprite_setPosition(a->inv->s_inv_big_heal_potion,
        a->inv->pos_inv_big_heal_potion);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->inv->s_inv_big_heal_potion, NULL);
    }
}

void fight_display_back(v_var *a)
{
    sfRenderWindow_drawSprite(a->_ptr->window,
    a->inv->s_back, NULL);
}

void fight_display_items(v_var *a)
{
    if (a->hud_fight->fight_items == 1) {
        fight_display_heal_potions(a);
        fight_display_armor_potions(a);
        fight_display_big_heal_potions(a);
        fight_display_back(a);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->inv->s_inv_select, NULL);
    }
}