/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void menu_display(v_var *a)
{
    menu_get_bounds(a);
    sfRenderWindow_clear(a->_ptr->window, sfBlack);
    sfRenderWindow_drawSprite(a->_ptr->window, a->menu->s_back_menu, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window, a->menu->s_logo, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window, a->menu->s_bust, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window, a->menu->s_play, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window, a->menu->s_help, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window, a->menu->s_quit, NULL);
    if (a->menu->settings_click == 0)
        sfRenderWindow_drawSprite(a->_ptr->window, a->menu->s_settings, NULL);
    else {
        sfRenderWindow_drawSprite(a->_ptr->window, a->menu->s_settings2,
        NULL);
        sfRenderWindow_drawSprite(a->_ptr->window, a->menu->s_sound, NULL);
    }
    if (a->menu->help_tips == 1) {
        sfRenderWindow_drawSprite(a->_ptr->window, a->menu->s_help_tips,
        NULL);
    }
    sfRenderWindow_display(a->_ptr->window);
}