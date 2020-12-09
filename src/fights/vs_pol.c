/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void vs_pol_interact(v_var *a)
{
    if (a->jo->jotaro_position.x >=
    a->pol->pol_position.x - 200
    && a->jo->jotaro_position.x <=
    a->pol->pol_position.x + 200
    && a->env->env == 5) {
        a->pol->pol_interact = 1;
        a->hud_other->pos_press_f.x = a->pol->pol_position.x + 110;
        a->hud_other->pos_press_f.y = 770;
        sfSprite_setPosition(a->hud_other->s_press_f,
        a->hud_other->pos_press_f);
    }
    else if (a->rpg->fight != 1)
        a->pol->pol_interact = 0;
}

void vs_door(v_var *a)
{
    if (a->jo->jotaro_position.x >= 420
    && a->jo->jotaro_position.x <= 750
    && a->env->env == 5) {
        a->rpg->door_interact = 1;
        a->hud_other->pos_press_f.x = 650;
        a->hud_other->pos_press_f.y = 770;
        sfSprite_setPosition(a->hud_other->s_press_f,
        a->hud_other->pos_press_f);
    }
    else if (a->rpg->fight != 1)
        a->rpg->door_interact = 0;
}

void vs_pol(v_var *a)
{
    vs_door(a);
    vs_pol_interact(a);
}