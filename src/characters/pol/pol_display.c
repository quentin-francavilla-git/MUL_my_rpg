/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void pol_display_fight(v_var *a)
{
    if (a->pol->pol_interact == 1 && a->rpg->fight != 1
    && a->rpg->dialogue == 0) {
        a->rpg->fight = 2;
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_other->s_press_f, NULL);
    }
    else if (a->rpg->fight != 1)
        a->rpg->fight = 0;
}

void door_display(v_var *a)
{
    if (a->rpg->door_interact == 1 && a->rpg->fight != 1
    && a->rpg->dialogue == 0) {
        a->rpg->fight = 2;
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_other->s_press_f, NULL);
    }
    else if (a->rpg->fight != 1)
        a->rpg->fight = 0;
}

void pol_display(v_var *a)
{
    if (a->rpg->door_interact == 1)
        door_display(a);
    else
        pol_display_fight(a);
    if (a->pol->pol_wich_attack == 0) {
        sfSprite_setTextureRect(a->pol->s_pol_standing,
        a->pol->rect_pol_standing);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->pol->s_pol_standing, NULL);
    }
}