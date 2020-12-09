/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void create_sprite_mar2(v_var *a)
{
    a->mar->t_mar_standing =
    sfTexture_createFromFile("./img/char/mar/mar_standing.png", NULL);
    a->mar->s_mar_standing = sfSprite_create();
    sfSprite_setTexture(a->mar->s_mar_standing,
    a->mar->t_mar_standing, sfTrue);
    sfSprite_setPosition(a->mar->s_mar_standing,
    a->mar->mar_position);
    sfSprite_setScale(a->mar->s_mar_standing, a->mar->scale_mar);

    a->mar->t_mar_stand =
    sfTexture_createFromFile("./img/char/mar/mar_stand.png", NULL);
    a->mar->s_mar_stand = sfSprite_create();
    sfSprite_setTexture(a->mar->s_mar_stand,
    a->mar->t_mar_stand, sfTrue);
    sfSprite_setPosition(a->mar->s_mar_stand,
    a->mar->pos_mar_stand);
    sfSprite_setScale(a->mar->s_mar_stand, a->mar->scale_mar);
}

void create_sprite_mar3(v_var *a)
{
    a->mar->t_mar_attack =
    sfTexture_createFromFile("./img/char/mar/mar_attack.png", NULL);
    a->mar->s_mar_attack = sfSprite_create();
    sfSprite_setTexture(a->mar->s_mar_attack,
    a->mar->t_mar_attack, sfTrue);
    sfSprite_setPosition(a->mar->s_mar_attack,
    a->mar->mar_position);
    sfSprite_setScale(a->mar->s_mar_attack, a->mar->scale_mar);

    a->mar->t_mar_ded =
    sfTexture_createFromFile("./img/char/mar/mar_death.png", NULL);
    a->mar->s_mar_ded = sfSprite_create();
    sfSprite_setTexture(a->mar->s_mar_ded,
    a->mar->t_mar_ded, sfTrue);
    sfSprite_setPosition(a->mar->s_mar_ded,
    a->mar->mar_position);
    sfSprite_setScale(a->mar->s_mar_ded, a->mar->scale_mar);
}

void create_sprite_mar(v_var *a)
{
    create_sprite_mar2(a);
    create_sprite_mar3(a);

    a->mar->t_mar_hud =
    sfTexture_createFromFile("./img/char/mar/mar_hud.png", NULL);
    a->mar->s_mar_hud = sfSprite_create();
    sfSprite_setTexture(a->mar->s_mar_hud,
    a->mar->t_mar_hud, sfTrue);
    sfSprite_setPosition(a->mar->s_mar_hud,
    a->mar->pos_mar_hud);
    sfSprite_setScale(a->mar->s_mar_hud, a->mar->scale_mar_hud);
}