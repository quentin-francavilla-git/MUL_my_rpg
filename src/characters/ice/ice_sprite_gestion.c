/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void ice_reset_position(v_var *a)
{
    a->ice->ice_wich_attack = 0;
    a->ice->ice_position.x = 960;
    a->ice->ice_position.y = 685;
    a->ice->pos_ice_stand.x = 765;
    a->ice->pos_ice_stand.y = 650;
    sfSprite_setPosition(a->ice->s_ice_stand,
    a->ice->pos_ice_stand);
    sfSprite_setPosition(a->ice->s_ice_standing,
    a->ice->ice_position);
    sfSprite_setPosition(a->ice->s_ice_attack,
    a->ice->ice_position);
}

void ice_stand_gestion(v_var *a)
{
    if (a->ice->ice_wich_attack == 1) {
        a->ice->seconds = a->ice->time.microseconds / 1000000.0;
        a->ice->time = sfClock_getElapsedTime(a->ice->clock);
        if (a->ice->seconds > 0.01) {
            if (a->jo->jotaro_life > 17 - a->hud_fight->armor)
                a->jo->jotaro_life -= 17 - a->hud_fight->armor;
            else
                a->jo->jotaro_life = 0;
            move_rect_ice_stand(a);
            sfClock_restart(a->ice->clock);
        }
    }
}

void ice_sprite_gestion(v_var *a)
{
    ice_stand_gestion(a);
    a->ice->seconds2 = a->ice->time2.microseconds / 1000000.0;
    a->ice->time2 = sfClock_getElapsedTime(a->ice->clock2);
    if (a->ice->seconds2 > 0.1) {
        if (a->ice->ice_wich_attack == 2)
            move_rect_ice_attack(a);
        if (a->ice->ice_wich_attack == 0 || a->ice->ice_wich_attack == 1)
            move_rect_ice_standing(a);
        if (a->ice->ice_wich_attack == 42)
            move_rect_ice_ded(a);
        sfClock_restart(a->ice->clock2);
    }
}