/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void joseph_sprite_gestion(v_var *a)
{
    a->joseph->seconds2 = a->joseph->time2.microseconds / 1000000.0;
    a->joseph->time2 = sfClock_getElapsedTime(a->joseph->clock2);
    if (a->joseph->seconds2 > 0.06) {
        if (a->joseph->joseph_wich_attack == 0)
            move_rect_joseph_standing(a);
        sfClock_restart(a->joseph->clock2);
    }
}