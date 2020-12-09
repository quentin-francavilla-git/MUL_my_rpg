/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void create_sprite_hud_fight_texts2(v_var *a)
{
    a->jo->t_you_are_attacking =
    sfTexture_createFromFile("./img/hud/text/you_are_attacking.png", NULL);
    a->jo->s_you_are_attacking = sfSprite_create();
    sfSprite_setTexture(a->jo->s_you_are_attacking,
    a->jo->t_you_are_attacking, sfTrue);
    sfSprite_setPosition(a->jo->s_you_are_attacking,
    a->jo->pos_you_are_attacking);
    sfSprite_setScale(a->jo->s_you_are_attacking,
    a->hud_fight->scale_fight);

    a->jo->t_you_lost =
    sfTexture_createFromFile("./img/hud/text/you_lost.png", NULL);
    a->jo->s_you_lost = sfSprite_create();
    sfSprite_setTexture(a->jo->s_you_lost,
    a->jo->t_you_lost, sfTrue);
    sfSprite_setPosition(a->jo->s_you_lost,
    a->jo->pos_you_are_attacking);
    sfSprite_setScale(a->jo->s_you_lost,
    a->hud_fight->scale_fight);
}

void create_sprite_hud_fight_texts3(v_var *a)
{
    a->rpg->t_you_won =
    sfTexture_createFromFile("./img/hud/text/you_won.png", NULL);
    a->rpg->s_you_won = sfSprite_create();
    sfSprite_setTexture(a->rpg->s_you_won,
    a->rpg->t_you_won, sfTrue);
    sfSprite_setPosition(a->rpg->s_you_won,
    a->jo->pos_you_are_attacking);
    sfSprite_setScale(a->rpg->s_you_won,
    a->hud_fight->scale_fight);

    a->dio->t_dio_is_attacking =
    sfTexture_createFromFile("./img/hud/text/dio_is_attacking.png", NULL);
    a->dio->s_dio_is_attacking = sfSprite_create();
    sfSprite_setTexture(a->dio->s_dio_is_attacking,
    a->dio->t_dio_is_attacking, sfTrue);
    sfSprite_setPosition(a->dio->s_dio_is_attacking,
    a->jo->pos_you_are_attacking);
    sfSprite_setScale(a->dio->s_dio_is_attacking,
    a->hud_fight->scale_fight);
}

void create_sprite_hud_fight_texts4(v_var *a)
{
    a->mid->t_mid_is_attacking =
    sfTexture_createFromFile("./img/hud/text/mid_is_attacking.png", NULL);
    a->mid->s_mid_is_attacking = sfSprite_create();
    sfSprite_setTexture(a->mid->s_mid_is_attacking,
    a->mid->t_mid_is_attacking, sfTrue);
    sfSprite_setPosition(a->mid->s_mid_is_attacking,
    a->jo->pos_you_are_attacking);
    sfSprite_setScale(a->mid->s_mid_is_attacking,
    a->hud_fight->scale_fight);

    a->mar->t_mar_is_attacking =
    sfTexture_createFromFile("./img/hud/text/mar_is_attacking.png", NULL);
    a->mar->s_mar_is_attacking = sfSprite_create();
    sfSprite_setTexture(a->mar->s_mar_is_attacking,
    a->mar->t_mar_is_attacking, sfTrue);
    sfSprite_setPosition(a->mar->s_mar_is_attacking,
    a->jo->pos_you_are_attacking);
    sfSprite_setScale(a->mar->s_mar_is_attacking,
    a->hud_fight->scale_fight);
}

void create_sprite_hud_fight_texts5(v_var *a)
{
    a->hol->t_hol_is_attacking =
    sfTexture_createFromFile("./img/hud/text/hol_is_attacking.png", NULL);
    a->hol->s_hol_is_attacking = sfSprite_create();
    sfSprite_setTexture(a->hol->s_hol_is_attacking,
    a->hol->t_hol_is_attacking, sfTrue);
    sfSprite_setPosition(a->hol->s_hol_is_attacking,
    a->jo->pos_you_are_attacking);
    sfSprite_setScale(a->hol->s_hol_is_attacking,
    a->hud_fight->scale_fight);

    a->cha->t_cha_is_attacking =
    sfTexture_createFromFile("./img/hud/text/cha_is_attacking.png", NULL);
    a->cha->s_cha_is_attacking = sfSprite_create();
    sfSprite_setTexture(a->cha->s_cha_is_attacking,
    a->cha->t_cha_is_attacking, sfTrue);
    sfSprite_setPosition(a->cha->s_cha_is_attacking,
    a->jo->pos_you_are_attacking);
    sfSprite_setScale(a->cha->s_cha_is_attacking,
    a->hud_fight->scale_fight);
}

void create_sprite_hud_fight_texts(v_var *a)
{
    create_sprite_hud_fight_texts2(a);
    create_sprite_hud_fight_texts3(a);
    create_sprite_hud_fight_texts4(a);
    create_sprite_hud_fight_texts5(a);
    create_sprite_hud_fight_texts6(a);

    a->kan->t_kan_is_attacking =
    sfTexture_createFromFile("./img/hud/text/kan_is_attacking.png", NULL);
    a->kan->s_kan_is_attacking = sfSprite_create();
    sfSprite_setTexture(a->kan->s_kan_is_attacking,
    a->kan->t_kan_is_attacking, sfTrue);
    sfSprite_setPosition(a->kan->s_kan_is_attacking,
    a->jo->pos_you_are_attacking);
    sfSprite_setScale(a->kan->s_kan_is_attacking,
    a->hud_fight->scale_fight);
}