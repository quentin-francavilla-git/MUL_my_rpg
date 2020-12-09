/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void create_sprite_hud_fight2(v_var *a)
{
    a->hud_fight->t_fight =
    sfTexture_createFromFile("./img/hud/text/fight.png", NULL);
    a->hud_fight->t_boss =
    sfTexture_createFromFile("./img/hud/text/boss.png", NULL);
    a->hud_fight->s_fight = sfSprite_create();
    sfSprite_setTexture(a->hud_fight->s_fight,
    a->hud_fight->t_fight, sfTrue);
    sfSprite_setPosition(a->hud_fight->s_fight,
    a->hud_fight->pos_fight);
    sfSprite_setScale(a->hud_fight->s_fight, a->hud_fight->scale_fight);

    a->hud_fight->t_bb =
    sfTexture_createFromFile("./img/hud/bb.png", NULL);
    a->hud_fight->s_bb = sfSprite_create();
    sfSprite_setTexture(a->hud_fight->s_bb,
    a->hud_fight->t_bb, sfTrue);
    sfSprite_setPosition(a->hud_fight->s_bb,
    a->hud_fight->pos_bb);
    sfSprite_setScale(a->hud_fight->s_bb, a->hud_fight->scale_bb);
}

void create_sprite_hud_fight3(v_var *a)
{
    a->hud_fight->t_v_bar1 =
    sfTexture_createFromFile("./img/hud/vitality_bar1.png", NULL);
    a->hud_fight->s_v_bar1 = sfSprite_create();
    sfSprite_setTexture(a->hud_fight->s_v_bar1,
    a->hud_fight->t_v_bar1, sfTrue);
    sfSprite_setPosition(a->hud_fight->s_v_bar1,
    a->hud_fight->pos_v_bar1);
    sfSprite_setScale(a->hud_fight->s_v_bar1, a->jo->scale_jotaro_hud);

    a->hud_fight->t_v_bar2 =
    sfTexture_createFromFile("./img/hud/vitality_bar1.png", NULL);
    a->hud_fight->s_v_bar2 = sfSprite_create();
    sfSprite_setTexture(a->hud_fight->s_v_bar2,
    a->hud_fight->t_v_bar2, sfTrue);
    sfSprite_setPosition(a->hud_fight->s_v_bar2,
    a->hud_fight->pos_v_bar2);
    sfSprite_setScale(a->hud_fight->s_v_bar2, a->jo->scale_jotaro_hud2);
}

void create_sprite_hud_fight(v_var *a)
{
    create_sprite_hud_fight_menu(a);
    create_sprite_hud_fight_qte(a);
    create_sprite_hud_fight_texts(a);
    create_sprite_hud_fight2(a);
    create_sprite_hud_fight3(a);

    a->hud_fight->s_msg = sfSprite_create();
    sfSprite_setPosition(a->hud_fight->s_msg,
    a->rpg->pos_dialogue);
    sfSprite_setScale(a->hud_fight->s_msg, a->rpg->scale_dialogue);
}