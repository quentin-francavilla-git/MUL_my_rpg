/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void create_sprite_kakyo(v_var *a)
{
    a->kakyo->t_kakyo_standing =
    sfTexture_createFromFile("./img/char/kakyo/kakyo_standing.png", NULL);
    a->kakyo->s_kakyo_standing = sfSprite_create();
    sfSprite_setTexture(a->kakyo->s_kakyo_standing,
    a->kakyo->t_kakyo_standing, sfTrue);
    sfSprite_setPosition(a->kakyo->s_kakyo_standing,
    a->kakyo->kakyo_position);
    sfSprite_setScale(a->kakyo->s_kakyo_standing, a->kakyo->scale_kakyo);
}