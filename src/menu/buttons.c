/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void pressed(v_var *a)
{
    play_press(a);
    help_press(a);
    exit_press(a);
    resume_press(a);
    title_press(a);
}

void over_buttons(v_var *a)
{
    over_play(a);
    over_help(a);
    over_exit(a);
    over_resume(a);
    over_title(a);
}

void do_close(v_var *a)
{
    if (a->_base->mouse.x > a->menu->quit_rect.left &&
    a->_base->mouse.x < a->menu->quit_rect.left + 271
    && a->_base->mouse.y > a->menu->quit_rect.top &&
    a->_base->mouse.y < a->menu->quit_rect.top + 98
    && a->menu->help_tips == 0) {
        sfRenderWindow_close(a->_ptr->window);
    }
}

void play(v_var *a)
{
    if (a->_base->mouse.x > a->menu->play_rect.left &&
    a->_base->mouse.x < a->menu->play_rect.left + 271
    && a->_base->mouse.y > a->menu->play_rect.top &&
    a->_base->mouse.y < a->menu->play_rect.top + 98
    && a->menu->help_tips == 0) {
        // sfMusic_play(a->music->desert);
        // sfMusic_setLoop(a->music->desert, sfTrue);
        // sfMusic_stop(a->music->stand_proud);
        a->_ptr->status = 0;
    }
}

void help(v_var *a)
{
    if (a->_base->mouse.x > a->menu->help_rect.left &&
    a->_base->mouse.x < a->menu->help_rect.left + 271
    && a->_base->mouse.y > a->menu->help_rect.top &&
    a->_base->mouse.y < a->menu->help_rect.top + 98
    && a->menu->help_tips == 0) {
        a->menu->help_tips = 1;
    }
    else if (a->_base->mouse.x > a->menu->help_rect.left + 120 &&
    a->_base->mouse.x < a->menu->help_rect.left + 300
    && a->_base->mouse.y > a->menu->help_rect.top - 600 &&
    a->_base->mouse.y < a->menu->help_rect.top - 405
    && a->menu->help_tips == 1) {
        a->menu->help_tips = 0;
    }
}