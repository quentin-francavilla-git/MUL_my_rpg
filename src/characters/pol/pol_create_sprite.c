/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void create_sprite_pol(v_var *a)
{
    a->pol->t_pol_standing =
    sfTexture_createFromFile("./img/char/pol/pol_standing.png", NULL);
    a->pol->s_pol_standing = sfSprite_create();
    sfSprite_setTexture(a->pol->s_pol_standing,
    a->pol->t_pol_standing, sfTrue);
    sfSprite_setPosition(a->pol->s_pol_standing,
    a->pol->pol_position);
    sfSprite_setScale(a->pol->s_pol_standing, a->pol->scale_pol);
}