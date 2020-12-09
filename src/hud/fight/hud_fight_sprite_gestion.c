/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void hud_fight_sprite_gestion(v_var *a)
{
    if (a->hud_fight->arrow == 1)
        a->hud_fight->pos_arrow.y = 410;
    if (a->hud_fight->arrow == 2)
        a->hud_fight->pos_arrow.y = 470;
    if (a->hud_fight->arrow == 3)
        a->hud_fight->pos_arrow.y = 545;
    if (a->hud_fight->arrow == 4)
        a->hud_fight->pos_arrow.y = 615;

    sfSprite_setPosition(a->hud_fight->s_arrow, a->hud_fight->pos_arrow);
}