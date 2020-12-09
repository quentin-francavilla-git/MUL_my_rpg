/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../../include/my_rpg.h"
#include "../../../../lib/my/lib.h"

void stats_create_text1(v_var *a)
{
    a->_ptr->font = sfFont_createFromFile("./fonts/Mario-Kart-DS.ttf");
    a->stats->str_level_inv = malloc(sizeof(char) * 100);
    my_memset(a->stats->str_level_inv, 0, 99);
    a->stats->text_level_inv = sfText_create();
    sfText_setFont(a->stats->text_level_inv, a->_ptr->font);
    sfText_setCharacterSize(a->stats->text_level_inv, 45);
    sfText_setPosition(a->stats->text_level_inv,
    a->stats->pos_text_level_inv);

    a->stats->str_hp_inv = malloc(sizeof(char) * 100);
    my_memset(a->stats->str_hp_inv, 0, 99);
    a->stats->text_hp_inv = sfText_create();
    sfText_setFont(a->stats->text_hp_inv, a->_ptr->font);
    sfText_setCharacterSize(a->stats->text_hp_inv, 45);
    sfText_setPosition(a->stats->text_hp_inv,
    a->stats->pos_hp_level_inv);
    sfText_setColor(a->stats->text_hp_inv, sfGreen);
}

void stats_create_text(v_var *a)
{
    stats_create_text1(a);

    a->stats->str_xp_inv = malloc(sizeof(char) * 100);
    my_memset(a->stats->str_xp_inv, 0, 99);
    a->stats->text_xp_inv = sfText_create();
    sfText_setFont(a->stats->text_xp_inv, a->_ptr->font);
    sfText_setCharacterSize(a->stats->text_xp_inv, 35);
    sfText_setPosition(a->stats->text_xp_inv,
    a->stats->pos_text_xp_inv);

    a->stats->str_strength_inv = malloc(sizeof(char) * 100);
    my_memset(a->stats->str_strength_inv, 0, 99);
    a->stats->text_strength_inv = sfText_create();
    sfText_setFont(a->stats->text_strength_inv, a->_ptr->font);
    sfText_setCharacterSize(a->stats->text_strength_inv, 45);
    sfText_setPosition(a->stats->text_strength_inv,
    a->stats->pos_text_strength_inv);
    sfText_setColor(a->stats->text_strength_inv, sfRed);
}