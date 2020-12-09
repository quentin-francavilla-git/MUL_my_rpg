/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void pol_sprite_gestion(v_var *a)
{
    a->pol->seconds2 = a->pol->time2.microseconds / 1000000.0;
    a->pol->time2 = sfClock_getElapsedTime(a->pol->clock2);
    if (a->pol->seconds2 > 0.06) {
        if (a->pol->pol_wich_attack == 0)
            move_rect_pol_standing(a);
        sfClock_restart(a->pol->clock2);
    }
}