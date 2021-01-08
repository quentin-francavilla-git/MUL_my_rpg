/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void destroy(v_var *a)
{
    sfRenderWindow_destroy(a->_ptr->window);
    // sfMusic_destroy(a->music->hit);
    // sfMusic_destroy(a->music->fight);
    // sfMusic_destroy(a->music->ora);
    // sfMusic_destroy(a->music->stand_proud);
    // sfMusic_destroy(a->music->desert);
    // sfMusic_destroy(a->music->last_zone);
    // sfMusic_destroy(a->music->boss);
    // sfMusic_destroy(a->music->gg);
}