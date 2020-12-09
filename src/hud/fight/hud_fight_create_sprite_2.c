/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void create_sprite_hud_fight_menu2(v_var *a)
{
    a->hud_fight->t_attack =
    sfTexture_createFromFile("./img/hud/text/attack.png", NULL);
    a->hud_fight->s_attack = sfSprite_create();
    sfSprite_setTexture(a->hud_fight->s_attack,
    a->hud_fight->t_attack, sfTrue);
    sfSprite_setPosition(a->hud_fight->s_attack,
    a->hud_fight->pos_attack);
    sfSprite_setScale(a->hud_fight->s_attack, a->hud_fight->scale_hud_menu);

    a->hud_fight->t_items =
    sfTexture_createFromFile("./img/hud/text/items.png", NULL);
    a->hud_fight->s_items = sfSprite_create();
    sfSprite_setTexture(a->hud_fight->s_items,
    a->hud_fight->t_items, sfTrue);
    sfSprite_setPosition(a->hud_fight->s_items,
    a->hud_fight->pos_items);
    sfSprite_setScale(a->hud_fight->s_items, a->hud_fight->scale_hud_menu);
}

void create_sprite_hud_fight_menu3(v_var *a)
{
    a->hud_fight->t_spe =
    sfTexture_createFromFile("./img/hud/text/spe.png", NULL);
    a->hud_fight->s_spe = sfSprite_create();
    sfSprite_setTexture(a->hud_fight->s_spe,
    a->hud_fight->t_spe, sfTrue);
    sfSprite_setPosition(a->hud_fight->s_spe,
    a->hud_fight->pos_spe);
    sfSprite_setScale(a->hud_fight->s_spe, a->hud_fight->scale_hud_menu);

    a->hud_fight->t_block =
    sfTexture_createFromFile("./img/hud/text/block.png", NULL);
    a->hud_fight->s_block = sfSprite_create();
    sfSprite_setTexture(a->hud_fight->s_block,
    a->hud_fight->t_block, sfTrue);
    sfSprite_setPosition(a->hud_fight->s_block,
    a->hud_fight->pos_block);
    sfSprite_setScale(a->hud_fight->s_block, a->hud_fight->scale_hud_menu);
}

void create_sprite_hud_fight_menu(v_var *a)
{
    create_sprite_hud_fight_menu2(a);
    create_sprite_hud_fight_menu3(a);

    a->hud_fight->t_arrow =
    sfTexture_createFromFile("./img/hud/text/arrow.png", NULL);
    a->hud_fight->s_arrow = sfSprite_create();
    sfSprite_setTexture(a->hud_fight->s_arrow,
    a->hud_fight->t_arrow, sfTrue);
    sfSprite_setPosition(a->hud_fight->s_arrow,
    a->hud_fight->pos_arrow);
    sfSprite_setScale(a->hud_fight->s_arrow, a->hud_fight->scale_hud_menu);
}

void create_sprite_hud_fight_qte2(v_var *a)
{
    a->hud_fight->t_bspe =
    sfTexture_createFromFile("./img/hud/bspe.png", NULL);
    a->hud_fight->s_bspe = sfSprite_create();
    sfSprite_setTexture(a->hud_fight->s_bspe,
    a->hud_fight->t_bspe, sfTrue);
    sfSprite_setPosition(a->hud_fight->s_bspe,
    a->hud_fight->pos_bb);
    sfSprite_setScale(a->hud_fight->s_bspe, a->hud_fight->scale_bb);

    a->hud_fight->t_bblock =
    sfTexture_createFromFile("./img/hud/bblock.png", NULL);
    a->hud_fight->s_bblock = sfSprite_create();
    sfSprite_setTexture(a->hud_fight->s_bblock,
    a->hud_fight->t_bblock, sfTrue);
    sfSprite_setPosition(a->hud_fight->s_bblock,
    a->hud_fight->pos_bb);
    sfSprite_setScale(a->hud_fight->s_bblock, a->hud_fight->scale_bb);
}

void create_sprite_hud_fight_qte(v_var *a)
{
    create_sprite_hud_fight_qte2(a);

    a->hud_fight->t_star =
    sfTexture_createFromFile("./img/hud/star.png", NULL);
    a->hud_fight->s_star = sfSprite_create();
    sfSprite_setTexture(a->hud_fight->s_star,
    a->hud_fight->t_star, sfTrue);
    sfSprite_setPosition(a->hud_fight->s_star,
    a->hud_fight->pos_star);
    sfSprite_setScale(a->hud_fight->s_star, a->hud_fight->scale_star);

    a->hud_fight->t_explo =
    sfTexture_createFromFile("./img/hud/explo.png", NULL);
    a->hud_fight->s_explo = sfSprite_create();
    sfSprite_setTexture(a->hud_fight->s_explo,
    a->hud_fight->t_explo, sfTrue);
    sfSprite_setPosition(a->hud_fight->s_explo,
    a->hud_fight->pos_explo);
    sfSprite_setScale(a->hud_fight->s_explo, a->hud_fight->scale_explo);
}