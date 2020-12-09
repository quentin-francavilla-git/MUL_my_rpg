/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void hol_reset_position(v_var *a)
{
    a->hol->hol_wich_attack = 0;
    a->hol->hol_position.x = 960;
    a->hol->hol_position.y = 685;
    a->hol->pos_hol_stand.x = 710;
    a->hol->pos_hol_stand.y = 635;
    sfSprite_setPosition(a->hol->s_hol_stand,
    a->hol->pos_hol_stand);
    sfSprite_setPosition(a->hol->s_hol_standing,
    a->hol->hol_position);
    sfSprite_setPosition(a->hol->s_hol_attack,
    a->hol->hol_position);
}

void hol_stand_gestion(v_var *a)
{
    if (a->hol->hol_wich_attack == 1) {
        a->hol->seconds = a->hol->time.microseconds / 1000000.0;
        a->hol->time = sfClock_getElapsedTime(a->hol->clock);
        if (a->hol->seconds > 0.06) {
            if (a->jo->jotaro_life > 200 - a->hud_fight->armor)
                a->jo->jotaro_life -= 200 - a->hud_fight->armor;
            else
                a->jo->jotaro_life = 0;
            move_rect_hol_stand(a);
            sfClock_restart(a->hol->clock);
        }
    }
}

void hol_sprite_gestion(v_var *a)
{
    hol_stand_gestion(a);
    a->hol->seconds2 = a->hol->time2.microseconds / 1000000.0;
    a->hol->time2 = sfClock_getElapsedTime(a->hol->clock2);
    if (a->hol->seconds2 > 0.06) {
        if (a->hol->hol_wich_attack == 2)
            move_rect_hol_attack(a);
        if (a->hol->hol_wich_attack == 0 || a->hol->hol_wich_attack == 1)
            move_rect_hol_standing(a);
        if (a->hol->hol_wich_attack == 42)
            move_rect_hol_ded(a);
        sfClock_restart(a->hol->clock2);
    }
}