/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void create_sprite_dio2(v_var *a)
{
    a->dio->t_dio_standing =
    sfTexture_createFromFile("./img/char/dio/dio_standing.png", NULL);
    a->dio->s_dio_standing = sfSprite_create();
    sfSprite_setTexture(a->dio->s_dio_standing,
    a->dio->t_dio_standing, sfTrue);
    sfSprite_setPosition(a->dio->s_dio_standing,
    a->dio->dio_position);
    sfSprite_setScale(a->dio->s_dio_standing, a->dio->scale_dio);

    a->dio->t_dio_stand =
    sfTexture_createFromFile("./img/char/dio/dio_stand.png", NULL);
    a->dio->s_dio_stand = sfSprite_create();
    sfSprite_setTexture(a->dio->s_dio_stand,
    a->dio->t_dio_stand, sfTrue);
    sfSprite_setPosition(a->dio->s_dio_stand,
    a->dio->pos_dio_stand);
    sfSprite_setScale(a->dio->s_dio_stand, a->dio->scale_dio);
}

void create_sprite_dio3(v_var *a)
{
    a->dio->t_dio_attack =
    sfTexture_createFromFile("./img/char/dio/dio_attack.png", NULL);
    a->dio->s_dio_attack = sfSprite_create();
    sfSprite_setTexture(a->dio->s_dio_attack,
    a->dio->t_dio_attack, sfTrue);
    sfSprite_setPosition(a->dio->s_dio_attack,
    a->dio->dio_position);
    sfSprite_setScale(a->dio->s_dio_attack, a->dio->scale_dio);

    a->dio->t_dio_ded =
    sfTexture_createFromFile("./img/char/dio/dio_death.png", NULL);
    a->dio->s_dio_ded = sfSprite_create();
    sfSprite_setTexture(a->dio->s_dio_ded,
    a->dio->t_dio_ded, sfTrue);
    sfSprite_setPosition(a->dio->s_dio_ded,
    a->dio->dio_position);
    sfSprite_setScale(a->dio->s_dio_ded, a->dio->scale_dio);
}

void create_sprite_dio(v_var *a)
{
    create_sprite_dio2(a);
    create_sprite_dio3(a);

    a->dio->t_dio_hud =
    sfTexture_createFromFile("./img/char/dio/dio_hud.png", NULL);
    a->dio->s_dio_hud = sfSprite_create();
    sfSprite_setTexture(a->dio->s_dio_hud,
    a->dio->t_dio_hud, sfTrue);
    sfSprite_setPosition(a->dio->s_dio_hud,
    a->dio->pos_dio_hud);
    sfSprite_setScale(a->dio->s_dio_hud, a->dio->scale_dio_hud);
}