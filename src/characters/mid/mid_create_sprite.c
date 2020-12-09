/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void create_sprite_mid2(v_var *a)
{
    a->mid->t_mid_standing =
    sfTexture_createFromFile("./img/char/mid/mid_standing.png", NULL);
    a->mid->s_mid_standing = sfSprite_create();
    sfSprite_setTexture(a->mid->s_mid_standing,
    a->mid->t_mid_standing, sfTrue);
    sfSprite_setPosition(a->mid->s_mid_standing,
    a->mid->mid_position);
    sfSprite_setScale(a->mid->s_mid_standing, a->mid->scale_mid);

    a->mid->t_mid_stand =
    sfTexture_createFromFile("./img/char/mid/mid_stand.png", NULL);
    a->mid->s_mid_stand = sfSprite_create();
    sfSprite_setTexture(a->mid->s_mid_stand,
    a->mid->t_mid_stand, sfTrue);
    sfSprite_setPosition(a->mid->s_mid_stand,
    a->mid->pos_mid_stand);
    sfSprite_setScale(a->mid->s_mid_stand, a->mid->scale_mid);
}

void create_sprite_mid3(v_var *a)
{
    a->mid->t_mid_attack =
    sfTexture_createFromFile("./img/char/mid/mid_attack.png", NULL);
    a->mid->s_mid_attack = sfSprite_create();
    sfSprite_setTexture(a->mid->s_mid_attack,
    a->mid->t_mid_attack, sfTrue);
    sfSprite_setPosition(a->mid->s_mid_attack,
    a->mid->mid_position);
    sfSprite_setScale(a->mid->s_mid_attack, a->mid->scale_mid);

    a->mid->t_mid_ded =
    sfTexture_createFromFile("./img/char/mid/mid_death.png", NULL);
    a->mid->s_mid_ded = sfSprite_create();
    sfSprite_setTexture(a->mid->s_mid_ded,
    a->mid->t_mid_ded, sfTrue);
    sfSprite_setPosition(a->mid->s_mid_ded,
    a->mid->mid_position);
    sfSprite_setScale(a->mid->s_mid_ded, a->mid->scale_mid);
}

void create_sprite_mid(v_var *a)
{
    create_sprite_mid2(a);
    create_sprite_mid3(a);

    a->mid->t_mid_hud =
    sfTexture_createFromFile("./img/char/mid/mid_hud.png", NULL);
    a->mid->s_mid_hud = sfSprite_create();
    sfSprite_setTexture(a->mid->s_mid_hud,
    a->mid->t_mid_hud, sfTrue);
    sfSprite_setPosition(a->mid->s_mid_hud,
    a->mid->pos_mid_hud);
    sfSprite_setScale(a->mid->s_mid_hud, a->mid->scale_mid_hud);
}