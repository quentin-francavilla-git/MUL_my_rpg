/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void variables_hud_other(v_var *a)
{
    a->hud_other->scale_press_f.x = 0.5;
    a->hud_other->scale_press_f.y = 0.5;

    a->hud_other->pos_press_f.x = 1100;
    a->hud_other->pos_press_f.y = 770;
}