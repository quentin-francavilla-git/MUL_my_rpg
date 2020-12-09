/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void create_sprite_hol2(v_var *a)
{
    a->hol->t_hol_standing =
    sfTexture_createFromFile("./img/char/hol/hol_standing.png", NULL);
    a->hol->s_hol_standing = sfSprite_create();
    sfSprite_setTexture(a->hol->s_hol_standing,
    a->hol->t_hol_standing, sfTrue);
    sfSprite_setPosition(a->hol->s_hol_standing,
    a->hol->hol_position);
    sfSprite_setScale(a->hol->s_hol_standing, a->hol->scale_hol);

    a->hol->t_hol_stand =
    sfTexture_createFromFile("./img/char/hol/hol_stand.png", NULL);
    a->hol->s_hol_stand = sfSprite_create();
    sfSprite_setTexture(a->hol->s_hol_stand,
    a->hol->t_hol_stand, sfTrue);
    sfSprite_setPosition(a->hol->s_hol_stand,
    a->hol->pos_hol_stand);
    sfSprite_setScale(a->hol->s_hol_stand, a->hol->scale_hol);
}

void create_sprite_hol3(v_var *a)
{
    a->hol->t_hol_attack =
    sfTexture_createFromFile("./img/char/hol/hol_attack.png", NULL);
    a->hol->s_hol_attack = sfSprite_create();
    sfSprite_setTexture(a->hol->s_hol_attack,
    a->hol->t_hol_attack, sfTrue);
    sfSprite_setPosition(a->hol->s_hol_attack,
    a->hol->hol_position);
    sfSprite_setScale(a->hol->s_hol_attack, a->hol->scale_hol);

    a->hol->t_hol_ded =
    sfTexture_createFromFile("./img/char/hol/hol_death.png", NULL);
    a->hol->s_hol_ded = sfSprite_create();
    sfSprite_setTexture(a->hol->s_hol_ded,
    a->hol->t_hol_ded, sfTrue);
    sfSprite_setPosition(a->hol->s_hol_ded,
    a->hol->hol_position);
    sfSprite_setScale(a->hol->s_hol_ded, a->hol->scale_hol);
}

void create_sprite_hol(v_var *a)
{
    create_sprite_hol2(a);
    create_sprite_hol3(a);

    a->hol->t_hol_hud =
    sfTexture_createFromFile("./img/char/hol/hol_hud.png", NULL);
    a->hol->s_hol_hud = sfSprite_create();
    sfSprite_setTexture(a->hol->s_hol_hud,
    a->hol->t_hol_hud, sfTrue);
    sfSprite_setPosition(a->hol->s_hol_hud,
    a->hol->pos_hol_hud);
    sfSprite_setScale(a->hol->s_hol_hud, a->hol->scale_hol_hud);

    a->hol->t_key_2 =
    sfTexture_createFromFile("./img/char/hol/key_2_d.png", NULL);
}