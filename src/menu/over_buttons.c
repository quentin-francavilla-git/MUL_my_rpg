/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void over_play(v_var *a)
{
    if (a->_base->mouse.x > a->menu->play_rect.left &&
    a->_base->mouse.x < a->menu->play_rect.left + 271
    && a->_base->mouse.y > a->menu->play_rect.top &&
    a->_base->mouse.y < a->menu->play_rect.top + 98) {
        sfSprite_setTexture(a->menu->s_play, a->menu->t_play_o, sfTrue);
    }
    else {
        sfSprite_setTexture(a->menu->s_play, a->menu->t_play, sfTrue);
    }
}

void over_help(v_var *a)
{
    if (a->_base->mouse.x > a->menu->help_rect.left &&
    a->_base->mouse.x < a->menu->help_rect.left + 271
    && a->_base->mouse.y > a->menu->help_rect.top &&
    a->_base->mouse.y < a->menu->help_rect.top + 98) {
        sfSprite_setTexture(a->menu->s_help, a->menu->t_help_o, sfTrue);
    }
    else {
        sfSprite_setTexture(a->menu->s_help, a->menu->t_help, sfTrue);
    }
}

void over_exit(v_var *a)
{
    if (a->_base->mouse.x > a->menu->quit_rect.left &&
    a->_base->mouse.x < a->menu->quit_rect.left + 271
    && a->_base->mouse.y > a->menu->quit_rect.top &&
    a->_base->mouse.y < a->menu->quit_rect.top + 98) {
        sfSprite_setTexture(a->menu->s_quit, a->menu->t_quit_o, sfTrue);
    }
    else {
        sfSprite_setTexture(a->menu->s_quit, a->menu->t_quit, sfTrue);
    }
}

void over_resume(v_var *a)
{
    if (a->_base->mouse.x > a->menu->rect_resume.left &&
    a->_base->mouse.x < a->menu->rect_resume.left + 271
    && a->_base->mouse.y > a->menu->rect_resume.top &&
    a->_base->mouse.y < a->menu->rect_resume.top + 98) {
        sfSprite_setTexture(a->menu->s_resume, a->menu->t_resume_o, sfTrue);
    }
    else {
        sfSprite_setTexture(a->menu->s_resume, a->menu->t_resume, sfTrue);
    }
}

void over_title(v_var *a)
{
    if (a->_base->mouse.x > a->menu->rect_title.left &&
    a->_base->mouse.x < a->menu->rect_title.left + 271
    && a->_base->mouse.y > a->menu->rect_title.top &&
    a->_base->mouse.y < a->menu->rect_title.top + 98) {
        sfSprite_setTexture(a->menu->s_title, a->menu->t_title_o, sfTrue);
    }
    else {
        sfSprite_setTexture(a->menu->s_title, a->menu->t_title, sfTrue);
    }
}