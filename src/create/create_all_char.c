/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void jotaro_create(v_var *a)
{
    variables_jotaro(a);
    create_sprite_jotaro(a);
    rect_jotaro(a);
    variables_stats(a);
    stats_create_text(a);
    create_sprite_stats(a);
}

void dio_create(v_var *a)
{
    variables_dio(a);
    create_sprite_dio(a);
    rect_dio(a);
}

void mid_create(v_var *a)
{
    variables_mid(a);
    create_sprite_mid(a);
    rect_mid(a);
}

void joseph_create(v_var *a)
{
    variables_joseph(a);
    create_sprite_joseph(a);
    rect_joseph(a);
}

void pol_create(v_var *a)
{
    variables_pol(a);
    create_sprite_pol(a);
    rect_pol(a);
}