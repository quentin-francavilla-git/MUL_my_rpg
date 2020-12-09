/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void create_sprite_cha2(v_var *a)
{
    a->cha->t_cha_standing =
    sfTexture_createFromFile("./img/char/cha/cha_standing.png", NULL);
    a->cha->s_cha_standing = sfSprite_create();
    sfSprite_setTexture(a->cha->s_cha_standing,
    a->cha->t_cha_standing, sfTrue);
    sfSprite_setPosition(a->cha->s_cha_standing,
    a->cha->cha_position);
    sfSprite_setScale(a->cha->s_cha_standing, a->cha->scale_cha);

    a->cha->t_cha_stand =
    sfTexture_createFromFile("./img/char/cha/cha_stand.png", NULL);
    a->cha->s_cha_stand = sfSprite_create();
    sfSprite_setTexture(a->cha->s_cha_stand,
    a->cha->t_cha_stand, sfTrue);
    sfSprite_setPosition(a->cha->s_cha_stand,
    a->cha->pos_cha_stand);
    sfSprite_setScale(a->cha->s_cha_stand, a->cha->scale_cha);
}

void create_sprite_cha3(v_var *a)
{
    a->cha->t_cha_attack =
    sfTexture_createFromFile("./img/char/cha/cha_attack.png", NULL);
    a->cha->s_cha_attack = sfSprite_create();
    sfSprite_setTexture(a->cha->s_cha_attack,
    a->cha->t_cha_attack, sfTrue);
    sfSprite_setPosition(a->cha->s_cha_attack,
    a->cha->cha_position);
    sfSprite_setScale(a->cha->s_cha_attack, a->cha->scale_cha);

    a->cha->t_cha_ded =
    sfTexture_createFromFile("./img/char/cha/cha_death.png", NULL);
    a->cha->s_cha_ded = sfSprite_create();
    sfSprite_setTexture(a->cha->s_cha_ded,
    a->cha->t_cha_ded, sfTrue);
    sfSprite_setPosition(a->cha->s_cha_ded,
    a->cha->cha_position);
    sfSprite_setScale(a->cha->s_cha_ded, a->cha->scale_cha);
}

void create_sprite_cha(v_var *a)
{
    create_sprite_cha2(a);
    create_sprite_cha3(a);

    a->cha->t_cha_hud =
    sfTexture_createFromFile("./img/char/cha/cha_hud.png", NULL);
    a->cha->s_cha_hud = sfSprite_create();
    sfSprite_setTexture(a->cha->s_cha_hud,
    a->cha->t_cha_hud, sfTrue);
    sfSprite_setPosition(a->cha->s_cha_hud,
    a->cha->pos_cha_hud);
    sfSprite_setScale(a->cha->s_cha_hud, a->cha->scale_cha_hud);
}