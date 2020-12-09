/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void kakyo_sprite_gestion(v_var *a)
{
    a->kakyo->seconds2 = a->kakyo->time2.microseconds / 1000000.0;
    a->kakyo->time2 = sfClock_getElapsedTime(a->kakyo->clock2);
    if (a->kakyo->seconds2 > 0.06) {
        if (a->kakyo->kakyo_wich_attack == 0)
            move_rect_kakyo_standing(a);
        sfClock_restart(a->kakyo->clock2);
    }
}