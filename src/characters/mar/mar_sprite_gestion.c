/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void mar_reset_position(v_var *a)
{
    a->mar->mar_wich_attack = 0;
    a->mar->mar_position.x = 960;
    a->mar->mar_position.y = 685;
    a->mar->pos_mar_stand.x = 765;
    a->mar->pos_mar_stand.y = 685;
    sfSprite_setPosition(a->mar->s_mar_stand,
    a->mar->pos_mar_stand);
    sfSprite_setPosition(a->mar->s_mar_standing,
    a->mar->mar_position);
    sfSprite_setPosition(a->mar->s_mar_attack,
    a->mar->mar_position);
}

void mar_stand_gestion(v_var *a)
{
    if (a->mar->mar_wich_attack == 1) {
        a->mar->seconds = a->mar->time.microseconds / 1000000.0;
        a->mar->time = sfClock_getElapsedTime(a->mar->clock);
        if (a->mar->seconds > 0.02) {
            if (a->jo->jotaro_life > 50 - a->hud_fight->armor)
                a->jo->jotaro_life -= 50 - a->hud_fight->armor;
            else
                a->jo->jotaro_life = 0;
            move_rect_mar_stand(a);
            sfClock_restart(a->mar->clock);
        }
    }
}

void mar_sprite_gestion(v_var *a)
{
    mar_stand_gestion(a);
    a->mar->seconds2 = a->mar->time2.microseconds / 1000000.0;
    a->mar->time2 = sfClock_getElapsedTime(a->mar->clock2);
    if (a->mar->seconds2 > 0.06) {
        if (a->mar->mar_wich_attack == 2)
            move_rect_mar_attack(a);
        if (a->mar->mar_wich_attack == 0 || a->mar->mar_wich_attack == 1)
            move_rect_mar_standing(a);
        if (a->mar->mar_wich_attack == 42)
            move_rect_mar_ded(a);
        sfClock_restart(a->mar->clock2);
    }
}