/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void create_sprite_joseph(v_var *a)
{
    a->joseph->t_joseph_standing =
    sfTexture_createFromFile("./img/char/joseph/joseph_standing.png", NULL);
    a->joseph->s_joseph_standing = sfSprite_create();
    sfSprite_setTexture(a->joseph->s_joseph_standing,
    a->joseph->t_joseph_standing, sfTrue);
    sfSprite_setPosition(a->joseph->s_joseph_standing,
    a->joseph->joseph_position);
    sfSprite_setScale(a->joseph->s_joseph_standing, a->joseph->scale_joseph);
}