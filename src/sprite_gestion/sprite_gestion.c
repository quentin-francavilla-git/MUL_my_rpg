/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void sprite_gestion2(v_var *a)
{
    if (a->env->env == 13)
        dio_sprite_gestion(a);
    if (a->env->env == 7)
        mid_sprite_gestion(a);
    if (a->env->env == 2)
        kan_sprite_gestion(a);
    if (a->env->env == 9)
        ice_sprite_gestion(a);
    if (a->env->env == 4)
        cha_sprite_gestion(a);
}

void sprite_gestion(v_var *a)
{
    hud_fight_sprite_gestion(a);
    explo_sprite_gestion(a);
    jotaro_sprite_gestion(a);
    sprite_gestion2(a);

    if (a->env->env == 15)
        hol_sprite_gestion(a);
    if (a->env->env == 11)
        mar_sprite_gestion(a);
    if (a->env->env == 12)
        joseph_sprite_gestion(a);
    if (a->env->env == 1)
        kakyo_sprite_gestion(a);
    if (a->env->env == 5)
        pol_sprite_gestion(a);
}