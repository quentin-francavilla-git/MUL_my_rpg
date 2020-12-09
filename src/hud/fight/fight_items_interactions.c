/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void take_heal_potion(v_var *a)
{
    if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeySpace) && a->hud_fight->arrow == 1
    && a->hud_fight->case_items == 1 && a->inv->inv_heal_potion1 != 0
    && a->hud_fight->fight_items == 1) {
        a->jo->jotaro_life += 250;
        if (a->jo->jotaro_life > a->stats->hp_max)
            a->jo->jotaro_life = a->stats->hp_max;
        a->hud_fight->case_items = 1;
        a->hud_fight->fight_items = 0;
        a->inv->inv_heal_potion1 -= 1;
    }
}

void take_armor_potion(v_var *a)
{
    if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeySpace) && a->hud_fight->arrow == 1
    && a->hud_fight->case_items == 2 && a->inv->inv_armor_potion != 0
    && a->hud_fight->fight_items == 1) {
        a->hud_fight->armor = 6;
        if (a->jo->jotaro_life > a->stats->hp_max)
            a->jo->jotaro_life = a->stats->hp_max;
        a->hud_fight->case_items = 1;
        a->hud_fight->fight_items = 0;
        a->inv->inv_armor_potion -= 1;
    }
}

void take_big_heal_potion(v_var *a)
{
    if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeySpace) && a->hud_fight->arrow == 1
    && a->hud_fight->case_items == 3 && a->inv->inv_big_heal_potion != 0
    && a->hud_fight->fight_items == 1) {
        a->jo->jotaro_life += 500;
        if (a->jo->jotaro_life > a->stats->hp_max)
            a->jo->jotaro_life = a->stats->hp_max;
        a->hud_fight->case_items = 1;
        a->hud_fight->fight_items = 0;
        a->inv->inv_big_heal_potion -= 1;
    }
}

void item_back(v_var *a)
{
    if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeySpace) && a->hud_fight->arrow == 1
    && a->hud_fight->case_items == 4 && a->hud_fight->fight_items == 1) {
        a->hud_fight->fight_items = 0;
        a->hud_fight->case_items = 1;
    }
}

void fight_items_interactions(v_var *a)
{
    if (a->hud_fight->fight_items == 1) {
        if (a->_ptr->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeyD) && a->hud_fight->case_items < 4
        && a->hud_fight->fight_items == 1) {
            a->hud_fight->case_items += 1;
            a->inv->pos_inv_select.x += 150;
        }
        else if (a->_ptr->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeyQ) && a->hud_fight->case_items > 1
        && a->hud_fight->fight_items == 1) {
            a->hud_fight->case_items -= 1;
            a->inv->pos_inv_select.x -= 150;
        }
        item_back(a);
        take_heal_potion(a);
        take_armor_potion(a);
        take_big_heal_potion(a);
        sfSprite_setPosition(a->inv->s_inv_select, a->inv->pos_inv_select);
        a->hud_fight->arrow = 1;
    }
}