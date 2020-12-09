/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void hud_create(v_var *a)
{
    variables_hud_fight(a);
    variables_hud_other(a);
    create_sprite_hud_fight(a);
    create_sprite_hud_other(a);
}

void inventory_create(v_var *a)
{
    inventory_var(a);
    create_sprite_inventory(a);
}

void quests_create(v_var *a)
{
    quests_var(a);
    create_sprite_quests(a);
}

void items_create(v_var *a)
{
    items_var(a);
    items_create_sprite(a);
}

void menu_create(v_var *a)
{
    variables_menu(a);
    create_sprite_menu(a);
}