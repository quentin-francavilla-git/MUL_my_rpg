/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void create_sprite_ice2(v_var *a)
{
    a->ice->t_ice_standing =
    sfTexture_createFromFile("./img/char/ice/ice_standing.png", NULL);
    a->ice->s_ice_standing = sfSprite_create();
    sfSprite_setTexture(a->ice->s_ice_standing,
    a->ice->t_ice_standing, sfTrue);
    sfSprite_setPosition(a->ice->s_ice_standing,
    a->ice->ice_position);
    sfSprite_setScale(a->ice->s_ice_standing, a->ice->scale_ice);

    a->ice->t_ice_stand =
    sfTexture_createFromFile("./img/char/ice/ice_stand.png", NULL);
    a->ice->s_ice_stand = sfSprite_create();
    sfSprite_setTexture(a->ice->s_ice_stand,
    a->ice->t_ice_stand, sfTrue);
    sfSprite_setPosition(a->ice->s_ice_stand,
    a->ice->pos_ice_stand);
    sfSprite_setScale(a->ice->s_ice_stand, a->ice->scale_ice);
}

void create_sprite_ice3(v_var *a)
{
    a->ice->t_ice_attack =
    sfTexture_createFromFile("./img/char/ice/ice_attack.png", NULL);
    a->ice->s_ice_attack = sfSprite_create();
    sfSprite_setTexture(a->ice->s_ice_attack,
    a->ice->t_ice_attack, sfTrue);
    sfSprite_setPosition(a->ice->s_ice_attack,
    a->ice->ice_position);
    sfSprite_setScale(a->ice->s_ice_attack, a->ice->scale_ice);

    a->ice->t_ice_ded =
    sfTexture_createFromFile("./img/char/ice/ice_death.png", NULL);
    a->ice->s_ice_ded = sfSprite_create();
    sfSprite_setTexture(a->ice->s_ice_ded,
    a->ice->t_ice_ded, sfTrue);
    sfSprite_setPosition(a->ice->s_ice_ded,
    a->ice->ice_position);
    sfSprite_setScale(a->ice->s_ice_ded, a->ice->scale_ice);
}

void create_sprite_ice(v_var *a)
{
    create_sprite_ice2(a);
    create_sprite_ice3(a);

    a->ice->t_ice_hud =
    sfTexture_createFromFile("./img/char/ice/ice_hud.png", NULL);
    a->ice->s_ice_hud = sfSprite_create();
    sfSprite_setTexture(a->ice->s_ice_hud,
    a->ice->t_ice_hud, sfTrue);
    sfSprite_setPosition(a->ice->s_ice_hud,
    a->ice->pos_ice_hud);
    sfSprite_setScale(a->ice->s_ice_hud, a->ice->scale_ice_hud);

    a->ice->t_key_1 =
    sfTexture_createFromFile("./img/char/ice/key_1_d.png", NULL);
}