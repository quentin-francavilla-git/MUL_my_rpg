/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void kan_reset_position(v_var *a)
{
    a->kan->kan_wich_attack = 0;
    a->kan->kan_position.x = 950;
    a->kan->kan_position.y = 685;
    a->kan->pos_kan_stand.x = 825;
    a->kan->pos_kan_stand.y = 685;
    sfSprite_setPosition(a->kan->s_kan_stand,
    a->kan->pos_kan_stand);
    sfSprite_setPosition(a->kan->s_kan_standing,
    a->kan->kan_position);
    sfSprite_setPosition(a->kan->s_kan_attack,
    a->kan->kan_position);
}

void kan_sprite_gestion(v_var *a)
{
    a->kan->seconds2 = a->kan->time2.microseconds / 1000000.0;
    a->kan->time2 = sfClock_getElapsedTime(a->kan->clock2);
    if (a->kan->seconds2 > 0.06) {
        if (a->kan->kan_wich_attack == 1) {
            if (a->jo->jotaro_life > 15 - a->hud_fight->armor)
                a->jo->jotaro_life -= 15 - a->hud_fight->armor;
            else
                a->jo->jotaro_life = 0;
            move_rect_kan_stand(a);
        }
        if (a->kan->kan_wich_attack == 2)
            move_rect_kan_attack(a);
        if (a->kan->kan_wich_attack == 0 || a->kan->kan_wich_attack == 1)
            move_rect_kan_standing(a);
        if (a->kan->kan_wich_attack == 42)
            move_rect_kan_ded(a);
        sfClock_restart(a->kan->clock2);
    }
}