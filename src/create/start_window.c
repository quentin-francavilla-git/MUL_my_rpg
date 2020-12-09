/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void start_window(v_var *a)
{
    a->_ptr->icon = sfImage_createFromFile("./img/icon.png");
    sfVideoMode video_mode = {1920, 1080, 32};
    a->_ptr->window = sfRenderWindow_create(video_mode, "The RPJoJo",
    sfFullscreen, NULL);
    sfWindowStyle(sfFullscreen);
    sfRenderWindow_setFramerateLimit(a->_ptr->window, 59);
    sfRenderWindow_setPosition(a->_ptr->window, a->_base->window_pos);
    sfRenderWindow_setIcon(a->_ptr->window, 100, 100,
    sfImage_getPixelsPtr(a->_ptr->icon));
    //sfMusic_play(a->music->stand_proud);
    //sfMusic_setLoop(a->music->stand_proud, sfTrue);
}