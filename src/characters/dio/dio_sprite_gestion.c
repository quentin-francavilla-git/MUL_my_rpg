/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void dio_reset_position(v_var *a)
{
    a->dio->dio_wich_attack = 0;
    a->dio->dio_position.x = 1000;
    a->dio->dio_position.y = 730;
    a->dio->pos_dio_stand.x = 825;
    a->dio->pos_dio_stand.y = 665;
    sfSprite_setPosition(a->dio->s_dio_stand,
    a->dio->pos_dio_stand);
    sfSprite_setPosition(a->dio->s_dio_standing,
    a->dio->dio_position);
    sfSprite_setPosition(a->dio->s_dio_attack,
    a->dio->dio_position);
}

void dio_stand_gestion(v_var *a)
{
    if (a->dio->dio_wich_attack == 1) {
        a->dio->seconds = a->dio->time.microseconds / 1000000.0;
        a->dio->time = sfClock_getElapsedTime(a->dio->clock);
        if (a->dio->seconds > 0.01) {
            if (a->jo->jotaro_life > 25 - a->hud_fight->armor)
                a->jo->jotaro_life -= 25 - a->hud_fight->armor;
            else
                a->jo->jotaro_life = 0;
            move_rect_dio_stand(a);
            sfClock_restart(a->dio->clock);
        }
    }
}

void dio_sprite_gestion(v_var *a)
{
    dio_stand_gestion(a);
    a->dio->seconds2 = a->dio->time2.microseconds / 1000000.0;
    a->dio->time2 = sfClock_getElapsedTime(a->dio->clock2);
    if (a->dio->seconds2 > 0.06) {
        if (a->dio->dio_wich_attack == 2)
            move_rect_dio_attack(a);
        if (a->dio->dio_wich_attack == 0 || a->dio->dio_wich_attack == 1)
            move_rect_dio_standing(a);
        if (a->dio->dio_wich_attack == 42)
            move_rect_dio_ded(a);
        sfClock_restart(a->dio->clock2);
    }
}