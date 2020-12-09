/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void create_sprite_hud_fight_texts6(v_var *a)
{
    a->ice->t_ice_is_attacking =
    sfTexture_createFromFile("./img/hud/text/ice_is_attacking.png", NULL);
    a->ice->s_ice_is_attacking = sfSprite_create();
    sfSprite_setTexture(a->ice->s_ice_is_attacking,
    a->ice->t_ice_is_attacking, sfTrue);
    sfSprite_setPosition(a->ice->s_ice_is_attacking,
    a->jo->pos_you_are_attacking);
    sfSprite_setScale(a->ice->s_ice_is_attacking,
    a->hud_fight->scale_fight);

    a->al->t_al_is_attacking =
    sfTexture_createFromFile("./img/hud/text/al_is_attacking.png", NULL);
    a->al->s_al_is_attacking = sfSprite_create();
    sfSprite_setTexture(a->al->s_al_is_attacking,
    a->al->t_al_is_attacking, sfTrue);
    sfSprite_setPosition(a->al->s_al_is_attacking,
    a->jo->pos_you_are_attacking);
    sfSprite_setScale(a->al->s_al_is_attacking,
    a->hud_fight->scale_fight);
}