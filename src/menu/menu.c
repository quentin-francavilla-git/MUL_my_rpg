/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void settings_b(v_var *a)
{
    if (a->_base->mouse.x > a->menu->rect_settings.left &&
    a->_base->mouse.x < a->menu->rect_settings.left + 293
    && a->_base->mouse.y > a->menu->rect_settings.top &&
    a->_base->mouse.y < a->menu->rect_settings.top + 105
    && a->menu->settings_click == 0) {
        a->menu->settings_click = 1;
    }
    else if (a->_base->mouse.x > a->menu->rect_settings.left &&
    a->_base->mouse.x < a->menu->rect_settings.left + 293
    && a->_base->mouse.y > a->menu->rect_settings.top &&
    a->_base->mouse.y < a->menu->rect_settings.top + 105
    && a->menu->settings_click == 1) {
        a->menu->settings_click = 0;
    }
}

void sound_on_off(v_var *a)
{
    if (a->_base->mouse.x > a->menu->rect_sound.left &&
    a->_base->mouse.x < a->menu->rect_sound.left + 155
    && a->_base->mouse.y > a->menu->rect_sound.top &&
    a->_base->mouse.y < a->menu->rect_sound.top + 150
    && a->menu->settings_click == 1 && a->menu->sound_on == 1) {
        a->menu->sound_on = 0;
        //sfMusic_stop(a->music->stand_proud);
        sfSprite_setTexture(a->menu->s_sound, a->menu->t_sound_off, sfTrue);
    }
    else if (a->_base->mouse.x > a->menu->rect_sound.left &&
    a->_base->mouse.x < a->menu->rect_sound.left + 155
    && a->_base->mouse.y > a->menu->rect_sound.top &&
    a->_base->mouse.y < a->menu->rect_sound.top + 150
    && a->menu->settings_click == 1 && a->menu->sound_on == 0) {
        a->menu->sound_on = 1;
        // sfMusic_play(a->music->stand_proud);
        // sfMusic_setLoop(a->music->stand_proud, sfTrue);
        sfSprite_setTexture(a->menu->s_sound, a->menu->t_sound_on, sfTrue);
    }
}

void menu_get_bounds(v_var *a)
{
    a->menu->quit_rect = sfSprite_getGlobalBounds(a->menu->s_quit);
    a->menu->play_rect = sfSprite_getGlobalBounds(a->menu->s_play);
    a->menu->help_rect = sfSprite_getGlobalBounds(a->menu->s_help);
    a->menu->rect_sound = sfSprite_getGlobalBounds(a->menu->s_sound);
    a->menu->rect_settings = sfSprite_getGlobalBounds(a->menu->s_settings);
}

void move_bust(v_var *a)
{
    a->menu->seconds = a->menu->time.microseconds / 1000000.0;
    a->menu->time = sfClock_getElapsedTime(a->menu->clock);
    if (a->menu->seconds > 0.25) {
        a->menu->i += 1;
        sfClock_restart(a->menu->clock);
    }
    if (a->menu->pos_bust.y == 0 && a->menu->i >= 3) {
        a->menu->pos_bust.y = 6;
        a->menu->i = 0;
    }
    if (a->menu->pos_bust.y == 6 && a->menu->i >= 3) {
        a->menu->pos_bust.y = 0;
        a->menu->i = 0;
    }
    sfSprite_setPosition(a->menu->s_bust, a->menu->pos_bust);
}

void menu(v_var *a)
{
    menu_display(a);
    move_bust(a);
    while (sfRenderWindow_pollEvent(a->_ptr->window, &a->_ptr->event)) {
        if (a->_ptr->event.type == sfEvtClosed)
            sfRenderWindow_close(a->_ptr->window);
        if (a->_ptr->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeyEscape)) {
            sfRenderWindow_close(a->_ptr->window);
        }
        over_buttons(a);
        if (a->_ptr->event.type == sfEvtMouseButtonPressed)
            pressed(a);
        if (a->_ptr->event.type == sfEvtMouseButtonReleased) {
            do_close(a);
            play(a);
            help(a);
            settings_b(a);
            sound_on_off(a);
        }
    }
}