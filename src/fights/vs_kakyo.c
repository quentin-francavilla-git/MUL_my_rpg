/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void vs_kakyo_interact(v_var *a)
{
    if (a->jo->jotaro_position.x >=
    a->kakyo->kakyo_position.x - 200
    && a->jo->jotaro_position.x <=
    a->kakyo->kakyo_position.x + 200
    && a->env->env == 1) {
        a->kakyo->kakyo_interact = 1;
        a->hud_other->pos_press_f.x = a->kakyo->kakyo_position.x + 110;
        a->hud_other->pos_press_f.y = 770;
        sfSprite_setPosition(a->hud_other->s_press_f,
        a->hud_other->pos_press_f);
    }
    else if (a->rpg->fight != 1)
        a->kakyo->kakyo_interact = 0;
}

void vs_kakyo(v_var *a)
{
    vs_kakyo_interact(a);
}