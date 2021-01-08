/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void resume(v_var *a)
{
    if (a->_base->mouse.x > a->menu->rect_resume.left &&
    a->_base->mouse.x < a->menu->rect_resume.left + 271
    && a->_base->mouse.y > a->menu->rect_resume.top &&
    a->_base->mouse.y < a->menu->rect_resume.top + 98) {
        a->_ptr->status = 0;
    }
}

void title_reset(v_var *a)
{
    sfRenderWindow_setMouseCursorVisible(a->_ptr->window, sfTrue);
    // sfMusic_stop(a->music->desert);
    // sfMusic_play(a->music->stand_proud);
    // sfMusic_setLoop(a->music->stand_proud, sfTrue);
}

void title(v_var *a)
{
    int tmp_score = 0;
    int tmp_score_h = 0;

    if (a->_base->mouse.x > a->menu->rect_title.left &&
    a->_base->mouse.x < a->menu->rect_title.left + 271
    && a->_base->mouse.y > a->menu->rect_title.top &&
    a->_base->mouse.y < a->menu->rect_title.top + 98) {
        title_reset(a);
        a->_ptr->status = 1;
    }
}

void pause_display(v_var *a)
{
    a->menu->rect_resume = sfSprite_getGlobalBounds(a->menu->s_resume);
    a->menu->rect_title = sfSprite_getGlobalBounds(a->menu->s_title);
    a->menu->quit_rect = sfSprite_getGlobalBounds(a->menu->s_quit);
    sfRenderWindow_drawSprite(a->_ptr->window, a->menu->s_pause, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window, a->menu->s_resume, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window, a->menu->s_title, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window, a->menu->s_quit, NULL);
    sfRenderWindow_display(a->_ptr->window);
}

void pause_game(v_var *a)
{
    sfRenderWindow_setMouseCursorVisible(a->_ptr->window, sfTrue);
    pause_display(a);
    while (sfRenderWindow_pollEvent(a->_ptr->window, &a->_ptr->event)) {
        if (a->_ptr->event.type == sfEvtClosed)
            sfRenderWindow_close(a->_ptr->window);
        if (a->_ptr->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeyP)) {
            sfRenderWindow_setMouseCursorVisible(a->_ptr->window, sfFalse);
            a->_ptr->status = 0;
        }
        over_buttons(a);
        if (a->_ptr->event.type == sfEvtMouseButtonPressed)
            pressed(a);
        if (a->_ptr->event.type == sfEvtMouseButtonReleased) {
            do_close(a);
            resume(a);
            title(a);
        }
    }
}