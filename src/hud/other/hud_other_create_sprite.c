/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void create_sprite_hud_other2(v_var *a)
{
    a->hud_other->t_press_f =
    sfTexture_createFromFile("./img/hud/text/press_f.png", NULL);
    a->hud_other->s_press_f = sfSprite_create();
    sfSprite_setTexture(a->hud_other->s_press_f,
    a->hud_other->t_press_f, sfTrue);
    sfSprite_setPosition(a->hud_other->s_press_f,
    a->hud_other->pos_press_f);
    sfSprite_setScale(a->hud_other->s_press_f, a->hud_other->scale_press_f);

    a->hud_other->t_press_continue =
    sfTexture_createFromFile("./img/hud/text/press_space_continue.png", NULL);
    a->hud_other->s_press_continue = sfSprite_create();
    sfSprite_setTexture(a->hud_other->s_press_continue,
    a->hud_other->t_press_continue, sfTrue);
    sfSprite_setPosition(a->hud_other->s_press_continue,
    a->hud_other->pos_press_f);
    sfSprite_setScale(a->hud_other->s_press_continue,
    a->hud_other->scale_press_f);
}

void create_sprite_hud_other(v_var *a)
{
    create_sprite_hud_other2(a);

    a->hud_other->t_gg =
    sfTexture_createFromFile("./img/hud/gg.png", NULL);
    a->hud_other->s_gg = sfSprite_create();
    sfSprite_setTexture(a->hud_other->s_gg,
    a->hud_other->t_gg, sfTrue);
}