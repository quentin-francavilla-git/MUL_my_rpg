/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void move_rect_explo(v_var *a)
{
    if (a->hud_fight->rect_explo.left == 8058) {
        a->hud_fight->rect_explo.left = 0;
        a->hud_fight->explo_duration += 1;
    }
    else {
        a->hud_fight->rect_explo.left +=
        a->hud_fight->rect_explo.width;
    }
    if (a->hud_fight->explo_duration == 1) {
        a->hud_fight->rect_explo.left = 0;
        a->hud_fight->explo_duration = 0;
        a->hud_fight->explo = 0;
    }
}

void explo_position(v_var *a)
{
    if (a->hud_fight->random_y == 1)
        a->hud_fight->pos_explo.y = 438;
    if (a->hud_fight->random_y == 2)
        a->hud_fight->pos_explo.y = 510;
    if (a->hud_fight->random_y == 3)
        a->hud_fight->pos_explo.y = 582;
    sfSprite_setPosition(a->hud_fight->s_explo, a->hud_fight->pos_explo);
}

void explo_sprite_gestion(v_var *a)
{
    a->hud_fight->seconds2 = a->hud_fight->time2.microseconds / 1000000.0;
    a->hud_fight->time2 = sfClock_getElapsedTime(a->hud_fight->clock2);
    if (a->hud_fight->seconds2 > 0.01) {
        if (a->hud_fight->explo != 0)
            move_rect_explo(a);
        sfClock_restart(a->hud_fight->clock2);
    }
}