/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void joseph_display_fight(v_var *a)
{
    if (a->joseph->joseph_interact == 1 && a->rpg->fight != 1
    && a->rpg->dialogue == 0) {
        a->rpg->fight = 2;
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_other->s_press_f, NULL);
    }
    else if (a->rpg->fight != 1)
        a->rpg->fight = 0;
}

void joseph_display(v_var *a)
{
    joseph_display_fight(a);
    if (a->joseph->joseph_wich_attack == 0) {
        sfSprite_setTextureRect(a->joseph->s_joseph_standing,
        a->joseph->rect_joseph_standing);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->joseph->s_joseph_standing, NULL);
    }
}