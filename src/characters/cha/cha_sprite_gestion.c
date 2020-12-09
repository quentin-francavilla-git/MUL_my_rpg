/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void cha_reset_position(v_var *a)
{
    a->cha->cha_wich_attack = 0;
    a->cha->cha_position.x = 960;
    a->cha->cha_position.y = 685;
    a->cha->pos_cha_stand.x = 765;
    a->cha->pos_cha_stand.y = 685;
    sfSprite_setPosition(a->cha->s_cha_stand,
    a->cha->pos_cha_stand);
    sfSprite_setPosition(a->cha->s_cha_standing,
    a->cha->cha_position);
    sfSprite_setPosition(a->cha->s_cha_attack,
    a->cha->cha_position);
}

void cha_stand_gestion(v_var *a)
{
    if (a->cha->cha_wich_attack == 1) {
        a->cha->seconds = a->cha->time.microseconds / 1000000.0;
        a->cha->time = sfClock_getElapsedTime(a->cha->clock);
        if (a->cha->seconds > 0.06) {
            if (a->jo->jotaro_life > 17 - a->hud_fight->armor)
                a->jo->jotaro_life -= 17 - a->hud_fight->armor;
            else
                a->jo->jotaro_life = 0;
            move_rect_cha_stand(a);
            sfClock_restart(a->cha->clock);
        }
    }
}

void cha_sprite_gestion(v_var *a)
{
    cha_stand_gestion(a);
    a->cha->seconds2 = a->cha->time2.microseconds / 1000000.0;
    a->cha->time2 = sfClock_getElapsedTime(a->cha->clock2);
    if (a->cha->seconds2 > 0.06) {
        if (a->cha->cha_wich_attack == 2)
            move_rect_cha_attack(a);
        if (a->cha->cha_wich_attack == 0 || a->cha->cha_wich_attack == 1)
            move_rect_cha_standing(a);
        if (a->cha->cha_wich_attack == 42)
            move_rect_cha_ded(a);
        sfClock_restart(a->cha->clock2);
    }
}