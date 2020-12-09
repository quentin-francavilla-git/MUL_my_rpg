/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void create_heal_potions(v_var *a)
{
    int y = 0;
    a->items->pos_heal_potion1 = malloc(sizeof(sfVector2f) * 400);
    a->items->s_heal_potion1 = malloc(sizeof(sfSprite *) * 100);
    while (y < 100) {
        a->items->pos_heal_potion1[y].y = 960;
        if (y == 6)
            a->items->pos_heal_potion1[y].x = 1400;
        a->items->heal_potion[y] = 0;
        a->items->s_heal_potion1[y] = sfSprite_create();
        if (y == 6) {
            sfSprite_setTexture(a->items->s_heal_potion1[y],
            a->inv->t_inv_heal_potion1, sfTrue);
            a->items->heal_potion[y] = 1;
        }
        sfSprite_setScale(a->items->s_heal_potion1[y],
        a->items->scale_heal_potion1);
        sfSprite_setPosition(a->items->s_heal_potion1[y],
        a->items->pos_heal_potion1[y]);
        y++;
    }
}

void create_armor_potions(v_var *a)
{
    int y = 0;
    a->items->pos_armor_potion = malloc(sizeof(sfVector2f) * 400);
    a->items->s_armor_potion = malloc(sizeof(sfSprite *) * 100);
    while (y < 100) {
        a->items->pos_armor_potion[y].y = 960;
        if (y == 3 || y == 14)
            a->items->pos_armor_potion[y].x = 750;
        a->items->armor_potion[y] = 0;
        a->items->s_armor_potion[y] = sfSprite_create();
        if (y == 3 || y == 14) {
            sfSprite_setTexture(a->items->s_armor_potion[y],
            a->inv->t_inv_armor_potion, sfTrue);
            a->items->armor_potion[y] = 1;
        }
        sfSprite_setScale(a->items->s_armor_potion[y],
        a->items->scale_heal_potion1);
        sfSprite_setPosition(a->items->s_armor_potion[y],
        a->items->pos_armor_potion[y]);
        y++;
    }
}

void create_big_heal_potions(v_var *a)
{
    int y = 0;
    a->items->pos_big_heal_potion = malloc(sizeof(sfVector2f) * 400);
    a->items->s_big_heal_potion = malloc(sizeof(sfSprite *) * 100);
    while (y < 100) {
        a->items->pos_big_heal_potion[y].y = 960;
        if (y == 10)
            a->items->pos_big_heal_potion[y].x = 900;
        a->items->big_heal_potion[y] = 0;
        a->items->s_big_heal_potion[y] = sfSprite_create();
        if (y == 10) {
            sfSprite_setTexture(a->items->s_big_heal_potion[y],
            a->inv->t_inv_big_heal_potion, sfTrue);
            a->items->big_heal_potion[y] = 1;
        }
        sfSprite_setScale(a->items->s_big_heal_potion[y],
        a->items->scale_heal_potion1);
        sfSprite_setPosition(a->items->s_big_heal_potion[y],
        a->items->pos_big_heal_potion[y]);
        y++;
    }
}

void items_create_sprite(v_var *a)
{
    create_heal_potions(a);
    create_armor_potions(a);
    create_big_heal_potions(a);
}