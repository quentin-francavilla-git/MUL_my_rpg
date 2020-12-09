/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void inventory_var2(v_var *a)
{
    a->inv->inv_open = 0;
    a->inv->scale_inv.x = 0.75;
    a->inv->scale_inv.y = 0.75;

    a->inv->pos_inv.x = 500;
    a->inv->pos_inv.y = 256;

    a->inv->pos_inv_select.x = 868;
    a->inv->pos_inv_select.y = 379;
    a->inv->case_inv = 1;

    a->inv->inv_heal_potion1 = 0;
    a->inv->pos_inv_heal_potion1.x = 888;
    a->inv->pos_inv_heal_potion1.y = 393;
    a->inv->scale_inv_heal_potion1.x = 2;
    a->inv->scale_inv_heal_potion1.y = 2;

    a->inv->inv_armor_potion = 0;
    a->inv->pos_inv_armor_potion.x = 1015;
    a->inv->pos_inv_armor_potion.y = 393;
}

void inventory_var3(v_var *a)
{
    a->inv->inv_big_heal_potion = 0;
    a->inv->pos_inv_big_heal_potion.x = 1132;
    a->inv->pos_inv_big_heal_potion.y = 393;
    a->inv->scale_inv_heal_potion2.x = 1.5;
    a->inv->scale_inv_heal_potion2.y = 1.5;

    a->inv->inv_key_1 = 1;
    a->inv->pos_key_1.x = 1265;
    a->inv->pos_key_1.y = 395;
    a->inv->scale_key_1.x = 0.6;
    a->inv->scale_key_1.y = 0.6;

    a->inv->inv_key_2 = 1;
    a->inv->pos_key_2.x = 900;
    a->inv->pos_key_2.y = 523;
    a->inv->scale_key_2.x = 0.6;
    a->inv->scale_key_2.y = 0.6;
}

void inventory_var(v_var *a)
{
    inventory_var2(a);
    inventory_var3(a);

    a->inv->pos_back.x = 1165;
    a->inv->pos_back.y = 515;
    a->inv->scale_back.x = 0.02;
    a->inv->scale_back.y = 0.02;

    a->inv->scale_info.x = 0.75;
    a->inv->scale_info.y = 0.75;
    a->inv->pos_info.x = 520;
    a->inv->pos_info.y = 675;
}