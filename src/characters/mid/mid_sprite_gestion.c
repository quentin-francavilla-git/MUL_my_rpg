/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void mid_reset_position(v_var *a)
{
    a->mid->mid_wich_attack = 0;
    a->mid->mid_position.x = 960;
    a->mid->mid_position.y = 685;
    a->mid->pos_mid_stand.x = 765;
    a->mid->pos_mid_stand.y = 620;
    sfSprite_setPosition(a->mid->s_mid_stand,
    a->mid->pos_mid_stand);
    sfSprite_setPosition(a->mid->s_mid_standing,
    a->mid->mid_position);
    sfSprite_setPosition(a->mid->s_mid_attack,
    a->mid->mid_position);
}

void mid_stand_gestion(v_var *a)
{
    if (a->mid->mid_wich_attack == 1) {
        a->mid->seconds = a->mid->time.microseconds / 1000000.0;
        a->mid->time = sfClock_getElapsedTime(a->mid->clock);
        if (a->mid->seconds > 0.02) {
            if (a->jo->jotaro_life > 12 - a->hud_fight->armor)
                a->jo->jotaro_life -= 12 - a->hud_fight->armor;
            else
                a->jo->jotaro_life = 0;
            move_rect_mid_stand(a);
            sfClock_restart(a->mid->clock);
        }
    }
}

void mid_sprite_gestion(v_var *a)
{
    mid_stand_gestion(a);
    a->mid->seconds2 = a->mid->time2.microseconds / 1000000.0;
    a->mid->time2 = sfClock_getElapsedTime(a->mid->clock2);
    if (a->mid->seconds2 > 0.06) {
        if (a->mid->mid_wich_attack == 2)
            move_rect_mid_attack(a);
        if (a->mid->mid_wich_attack == 0 || a->mid->mid_wich_attack == 1)
            move_rect_mid_standing(a);
        if (a->mid->mid_wich_attack == 42)
            move_rect_mid_ded(a);
        sfClock_restart(a->mid->clock2);
    }
}