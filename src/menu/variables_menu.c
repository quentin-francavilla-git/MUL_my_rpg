/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void variables_menu2(v_var *a)
{
    a->menu->settings_click = 0;
    a->menu->sound_on = 1;
    a->menu->pos_settings.x = 1550;
    a->menu->pos_settings.y = 0;
    a->menu->scale_settings.x = 1;
    a->menu->scale_settings.y = 1;
    a->menu->pos_settings2.x = 1550;
    a->menu->pos_settings2.y = 0;
    a->menu->scale_settings2.x = 1;
    a->menu->scale_settings2.y = 1;
    a->menu->pos_sound.x = 1630;
    a->menu->pos_sound.y = 120;
    a->menu->scale_sound.x = 0.9;
    a->menu->scale_sound.y = 0.9;
    a->menu->pos_cross.x = 1750;
    a->menu->pos_cross.y = 20;
    a->menu->scale_cross.x = 1;
    a->menu->scale_cross.y = 1;
    a->menu->pos_play.x = 1100;
    a->menu->pos_play.y = 740;
}

void variables_menu3(v_var *a)
{
    a->menu->scale_play.x = 2.4;
    a->menu->scale_play.y = 2.4;
    a->menu->pos_help.x = 1450;
    a->menu->pos_help.y = 740;
    a->menu->scale_help.x = 2.4;
    a->menu->scale_help.y = 2.4;
    a->menu->pos_quit.x = 60;
    a->menu->pos_quit.y = 950;
    a->menu->scale_quit.x = 2.4;
    a->menu->scale_quit.y = 2.4;
    a->menu->pos_resume.x = 830;
    a->menu->pos_resume.y = 380;
    a->menu->pos_title.x = 830;
    a->menu->pos_title.y = 540;
    a->menu->help_tips = 0;
    a->menu->rect_settings.width = 0;
    a->menu->rect_settings.height = 0;
    a->menu->rect_sound.top = 0;
    a->menu->rect_sound.left = 0;
}

void variables_menu4(v_var *a)
{
    a->menu->rect_sound.width = 0;
    a->menu->rect_sound.height = 0;
    a->menu->cross_rect.top = 0;
    a->menu->cross_rect.left = 0;
    a->menu->cross_rect.width = 0;
    a->menu->cross_rect.height = 0;
    a->menu->play_rect.top = 0;
    a->menu->play_rect.left = 0;
    a->menu->play_rect.width = 0;
    a->menu->play_rect.height = 0;
    a->menu->help_rect.top = 0;
    a->menu->help_rect.left = 0;
    a->menu->help_rect.width = 0;
    a->menu->help_rect.height = 0;
    a->menu->quit_rect.top = 0;
    a->menu->quit_rect.left = 0;
    a->menu->quit_rect.width = 0;
    a->menu->quit_rect.height = 0;
    a->menu->rect_resume.top = 0;
}

void variables_menu5(v_var *a)
{
    a->menu->rect_resume.left = 0;
    a->menu->rect_resume.width = 0;
    a->menu->rect_resume.height = 0;
    a->menu->rect_title.top = 0;
    a->menu->rect_title.left = 0;
    a->menu->rect_title.width = 0;
    a->menu->rect_title.height = 0;
    a->menu->rect_settings.top = 0;
    a->menu->rect_settings.left = 0;
}

void variables_menu(v_var *a)
{
    variables_menu2(a);
    variables_menu3(a);
    variables_menu4(a);
    variables_menu5(a);

    a->menu->i = 0;
    a->menu->scale_bust.x = 1.05;
    a->menu->scale_bust.y = 1.05;
    a->menu->pos_bust.x = -500;
    a->menu->pos_bust.y = 0;

    a->menu->scale_logo.x = 0.9;
    a->menu->scale_logo.y = 0.9;
    a->menu->pos_logo.x = 180;
    a->menu->pos_logo.y = 50;
}