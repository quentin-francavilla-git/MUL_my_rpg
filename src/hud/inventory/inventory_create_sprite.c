/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void create_sprite_info(v_var *a)
{
    a->inv->s_info = sfSprite_create();
    a->inv->t_info_heal_potion =
    sfTexture_createFromFile("./img/items/infos/info_heal_pot.png", NULL);
    a->inv->t_info_armor_potion =
    sfTexture_createFromFile("./img/items/infos/info_armor_pot.png", NULL);
    a->inv->t_info_big_heal_potion =
    sfTexture_createFromFile("./img/items/infos/info_big_heal_pot.png", NULL);
    a->inv->t_info_key_1 =
    sfTexture_createFromFile("./img/items/infos/info_key_1.png", NULL);
    a->inv->t_info_key_2 =
    sfTexture_createFromFile("./img/items/infos/info_key_2.png", NULL);
    sfSprite_setTexture(a->inv->s_info,
    a->inv->t_info_heal_potion, sfTrue);
    sfSprite_setPosition(a->inv->s_info,
    a->inv->pos_info);
    sfSprite_setScale(a->inv->s_info, a->inv->scale_info);
}

void create_sprite_inventory2(v_var *a)
{
    create_sprite_info(a);
    a->inv->t_inv =
    sfTexture_createFromFile("./img/hud/b_inventory.png", NULL);
    a->inv->s_inv = sfSprite_create();
    sfSprite_setTexture(a->inv->s_inv,
    a->inv->t_inv, sfTrue);
    sfSprite_setPosition(a->inv->s_inv,
    a->inv->pos_inv);
    sfSprite_setScale(a->inv->s_inv, a->inv->scale_inv);

    a->inv->t_inv_select =
    sfTexture_createFromFile("./img/hud/inventory_select.png", NULL);
    a->inv->s_inv_select = sfSprite_create();
    sfSprite_setTexture(a->inv->s_inv_select,
    a->inv->t_inv_select, sfTrue);
    sfSprite_setPosition(a->inv->s_inv_select,
    a->inv->pos_inv_select);
    sfSprite_setScale(a->inv->s_inv_select, a->inv->scale_inv);
}

void create_sprite_inventory3(v_var *a)
{
    a->inv->t_inv_heal_potion1 =
    sfTexture_createFromFile("./img/items/heal_potion1.png", NULL);
    a->inv->s_inv_heal_potion1 = sfSprite_create();
    sfSprite_setTexture(a->inv->s_inv_heal_potion1,
    a->inv->t_inv_heal_potion1, sfTrue);
    sfSprite_setPosition(a->inv->s_inv_heal_potion1,
    a->inv->pos_inv_heal_potion1);
    sfSprite_setScale(a->inv->s_inv_heal_potion1,
    a->inv->scale_inv_heal_potion1);

    a->inv->t_inv_armor_potion =
    sfTexture_createFromFile("./img/items/end_potion.png", NULL);
    a->inv->s_inv_armor_potion = sfSprite_create();
    sfSprite_setTexture(a->inv->s_inv_armor_potion,
    a->inv->t_inv_armor_potion, sfTrue);
    sfSprite_setPosition(a->inv->s_inv_armor_potion,
    a->inv->pos_inv_armor_potion);
    sfSprite_setScale(a->inv->s_inv_armor_potion,
    a->inv->scale_inv_heal_potion1);
}

void create_sprite_inventory4(v_var *a)
{
    a->inv->t_inv_big_heal_potion =
    sfTexture_createFromFile("./img/items/heal_potion2.png", NULL);
    a->inv->s_inv_big_heal_potion = sfSprite_create();
    sfSprite_setTexture(a->inv->s_inv_big_heal_potion,
    a->inv->t_inv_big_heal_potion, sfTrue);
    sfSprite_setPosition(a->inv->s_inv_big_heal_potion,
    a->inv->pos_inv_big_heal_potion);
    sfSprite_setScale(a->inv->s_inv_big_heal_potion,
    a->inv->scale_inv_heal_potion2);

    a->inv->t_key_1 =
    sfTexture_createFromFile("./img/items/key_1.png", NULL);
    a->inv->s_key_1 = sfSprite_create();
    sfSprite_setTexture(a->inv->s_key_1,
    a->inv->t_key_1, sfTrue);
    sfSprite_setPosition(a->inv->s_key_1,
    a->inv->pos_key_1);
    sfSprite_setScale(a->inv->s_key_1,
    a->inv->scale_key_1);
}

void create_sprite_inventory(v_var *a)
{
    create_sprite_inventory2(a);
    create_sprite_inventory3(a);
    create_sprite_inventory4(a);
    a->inv->t_key_2 =
    sfTexture_createFromFile("./img/items/key_2.png", NULL);
    a->inv->s_key_2 = sfSprite_create();
    sfSprite_setTexture(a->inv->s_key_2,
    a->inv->t_key_2, sfTrue);
    sfSprite_setPosition(a->inv->s_key_2,
    a->inv->pos_key_2);
    sfSprite_setScale(a->inv->s_key_2,
    a->inv->scale_key_2);
    a->inv->t_back =
    sfTexture_createFromFile("./img/hud/back.png", NULL);
    a->inv->s_back = sfSprite_create();
    sfSprite_setTexture(a->inv->s_back,
    a->inv->t_back, sfTrue);
    sfSprite_setPosition(a->inv->s_back,
    a->inv->pos_back);
    sfSprite_setScale(a->inv->s_back, a->inv->scale_back);
}