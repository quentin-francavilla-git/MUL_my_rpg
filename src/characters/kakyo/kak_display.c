/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void kakyo_display_fight(v_var *a)
{
    if (a->kakyo->kakyo_interact == 1 && a->rpg->fight != 1
    && a->rpg->dialogue == 0) {
        a->rpg->fight = 2;
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_other->s_press_f, NULL);
    }
    else if (a->rpg->fight != 1)
        a->rpg->fight = 0;
}

void kakyo_display(v_var *a)
{
    kakyo_display_fight(a);
    if (a->kakyo->kakyo_wich_attack == 0) {
        sfSprite_setTextureRect(a->kakyo->s_kakyo_standing,
        a->kakyo->rect_kakyo_standing);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->kakyo->s_kakyo_standing, NULL);
    }
}