/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void kakyo_create(v_var *a)
{
    variables_kakyo(a);
    create_sprite_kakyo(a);
    rect_kakyo(a);
}

void mar_create(v_var *a)
{
    variables_mar(a);
    create_sprite_mar(a);
    rect_mar(a);
}

void hol_create(v_var *a)
{
    variables_hol(a);
    create_sprite_hol(a);
    rect_hol(a);
}

void cha_create(v_var *a)
{
    variables_cha(a);
    create_sprite_cha(a);
    rect_cha(a);
}

void ice_create(v_var *a)
{
    variables_ice(a);
    create_sprite_ice(a);
    rect_ice(a);
}
