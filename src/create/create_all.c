/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void kan_create(v_var *a)
{
    variables_kan(a);
    create_sprite_kan(a);
    rect_kan(a);
}

void characters_create(v_var *a)
{
    jotaro_create(a);
    dio_create(a);
    mid_create(a);
    joseph_create(a);
    pol_create(a);
    kakyo_create(a);
    mar_create(a);
    hol_create(a);
    cha_create(a);
    ice_create(a);
    kan_create(a);
}

void desert1_create(v_var *a)
{
    a->env->env = 1;
    create_sprite_env(a);
}

void env_create(v_var *a)
{
    desert1_create(a);
}

void create_all(v_var *a, char **av)
{
    malloc_struct(a);
    variables(a);
    menu_create(a);
    dial_var(a);
    dial_sprite_creation(a);
    inventory_create(a);
    quests_create(a);
    characters_create(a);
    items_create(a);
    env_create(a);
    hud_create(a);
    create_music(a);
    create_clock(a);
}