/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void create_sprite_kan2(v_var *a)
{
    a->kan->t_kan_standing =
    sfTexture_createFromFile("./img/char/kan/kan_standing.png", NULL);
    a->kan->s_kan_standing = sfSprite_create();
    sfSprite_setTexture(a->kan->s_kan_standing,
    a->kan->t_kan_standing, sfTrue);
    sfSprite_setPosition(a->kan->s_kan_standing,
    a->kan->kan_position);
    sfSprite_setScale(a->kan->s_kan_standing, a->kan->scale_kan);

    a->kan->t_kan_stand =
    sfTexture_createFromFile("./img/char/kan/kan_stand.png", NULL);
    a->kan->s_kan_stand = sfSprite_create();
    sfSprite_setTexture(a->kan->s_kan_stand,
    a->kan->t_kan_stand, sfTrue);
    sfSprite_setPosition(a->kan->s_kan_stand,
    a->kan->pos_kan_stand);
    sfSprite_setScale(a->kan->s_kan_stand, a->kan->scale_kan);
}

void create_sprite_kan3(v_var *a)
{
    a->kan->t_kan_attack =
    sfTexture_createFromFile("./img/char/kan/kan_attack.png", NULL);
    a->kan->s_kan_attack = sfSprite_create();
    sfSprite_setTexture(a->kan->s_kan_attack,
    a->kan->t_kan_attack, sfTrue);
    sfSprite_setPosition(a->kan->s_kan_attack,
    a->kan->kan_position);
    sfSprite_setScale(a->kan->s_kan_attack, a->kan->scale_kan);

    a->kan->t_kan_ded =
    sfTexture_createFromFile("./img/char/kan/kan_death.png", NULL);
    a->kan->s_kan_ded = sfSprite_create();
    sfSprite_setTexture(a->kan->s_kan_ded,
    a->kan->t_kan_ded, sfTrue);
    sfSprite_setPosition(a->kan->s_kan_ded,
    a->kan->kan_position);
    sfSprite_setScale(a->kan->s_kan_ded, a->kan->scale_kan);
}

void create_sprite_kan(v_var *a)
{
    create_sprite_kan2(a);
    create_sprite_kan3(a);

    a->kan->t_kan_hud =
    sfTexture_createFromFile("./img/char/kan/kan_hud.png", NULL);
    a->kan->s_kan_hud = sfSprite_create();
    sfSprite_setTexture(a->kan->s_kan_hud,
    a->kan->t_kan_hud, sfTrue);
    sfSprite_setPosition(a->kan->s_kan_hud,
    a->kan->pos_kan_hud);
    sfSprite_setScale(a->kan->s_kan_hud, a->kan->scale_kan_hud);
}