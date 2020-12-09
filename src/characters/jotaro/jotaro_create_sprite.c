/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void create_sprite_jotaro2(v_var *a)
{
    a->jo->t_jotaro_standing =
    sfTexture_createFromFile("./img/char/jotaro/jotaro_standing.png", NULL);
    a->jo->s_jotaro_standing = sfSprite_create();
    sfSprite_setTexture(a->jo->s_jotaro_standing,
    a->jo->t_jotaro_standing, sfTrue);
    sfSprite_setPosition(a->jo->s_jotaro_standing,
    a->jo->jotaro_position);
    sfSprite_setScale(a->jo->s_jotaro_standing, a->jo->scale_jotaro);

    a->jo->t_jotaro_stand =
    sfTexture_createFromFile("./img/char/jotaro/jotaro_stand.png", NULL);
    a->jo->s_jotaro_stand = sfSprite_create();
    sfSprite_setTexture(a->jo->s_jotaro_stand,
    a->jo->t_jotaro_stand, sfTrue);
    sfSprite_setPosition(a->jo->s_jotaro_stand,
    a->jo->pos_jotaro_stand);
    sfSprite_setScale(a->jo->s_jotaro_stand, a->jo->scale_jotaro);
}

void create_sprite_jotaro3(v_var *a)
{
    a->jo->t_jotaro_attack =
    sfTexture_createFromFile("./img/char/jotaro/jotaro_attack.png", NULL);
    a->jo->s_jotaro_attack = sfSprite_create();
    sfSprite_setTexture(a->jo->s_jotaro_attack,
    a->jo->t_jotaro_attack, sfTrue);
    sfSprite_setPosition(a->jo->s_jotaro_attack,
    a->jo->jotaro_position);
    sfSprite_setScale(a->jo->s_jotaro_attack, a->jo->scale_jotaro);

    a->jo->t_jotaro_walking =
    sfTexture_createFromFile("./img/char/jotaro/jotaro_walking.png", NULL);
    a->jo->s_jotaro_walking = sfSprite_create();
    sfSprite_setTexture(a->jo->s_jotaro_walking,
    a->jo->t_jotaro_walking, sfTrue);
    sfSprite_setPosition(a->jo->s_jotaro_walking,
    a->jo->jotaro_position);
    sfSprite_setScale(a->jo->s_jotaro_walking, a->jo->scale_jotaro);
}

void create_sprite_jotaro4(v_var *a)
{
    a->jo->t_jotaro_walking2 =
    sfTexture_createFromFile("./img/char/jotaro/jotaro_walking2.png", NULL);
    a->jo->s_jotaro_walking2 = sfSprite_create();
    sfSprite_setTexture(a->jo->s_jotaro_walking2,
    a->jo->t_jotaro_walking2, sfTrue);
    sfSprite_setPosition(a->jo->s_jotaro_walking2,
    a->jo->jotaro_position);
    sfSprite_setScale(a->jo->s_jotaro_walking2, a->jo->scale_jotaro);

    a->jo->t_jotaro_hud =
    sfTexture_createFromFile("./img/char/jotaro/jotaro_hud.png", NULL);
    a->jo->s_jotaro_hud = sfSprite_create();
    sfSprite_setTexture(a->jo->s_jotaro_hud,
    a->jo->t_jotaro_hud, sfTrue);
    sfSprite_setPosition(a->jo->s_jotaro_hud,
    a->jo->pos_jotaro_hud);
    sfSprite_setScale(a->jo->s_jotaro_hud, a->jo->scale_jotaro_hud);
}

void create_sprite_jotaro(v_var *a)
{
    create_sprite_jotaro2(a);
    create_sprite_jotaro3(a);
    create_sprite_jotaro4(a);

    a->jo->t_jotaro_while =
    sfTexture_createFromFile("./img/char/jotaro/jotaro_while_stand.png",
    NULL);
    a->jo->s_jotaro_while = sfSprite_create();
    sfSprite_setTexture(a->jo->s_jotaro_while,
    a->jo->t_jotaro_while, sfTrue);
    sfSprite_setPosition(a->jo->s_jotaro_while,
    a->jo->jotaro_position);
    sfSprite_setScale(a->jo->s_jotaro_while, a->jo->scale_jotaro);

    a->jo->t_jotaro_ded =
    sfTexture_createFromFile("./img/char/jotaro/jotaro_ded.png", NULL);
    a->jo->s_jotaro_ded = sfSprite_create();
    sfSprite_setTexture(a->jo->s_jotaro_ded,
    a->jo->t_jotaro_ded, sfTrue);
    sfSprite_setPosition(a->jo->s_jotaro_ded, a->jo->jotaro_position);
    sfSprite_setScale(a->jo->s_jotaro_ded, a->jo->scale_jotaro);
}