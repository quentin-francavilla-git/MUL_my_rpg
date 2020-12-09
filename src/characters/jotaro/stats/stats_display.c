/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../../include/my_rpg.h"
#include "../../../../lib/my/lib.h"

void inf_level_5(v_var *a)
{
    if (a->stats->level < 5) {
        a->stats->str_xp_inv = my_itoa(a->stats->xp_need);
        sfText_setString(a->stats->text_xp_inv, a->stats->str_xp_inv);
        sfRenderWindow_drawText(a->_ptr->window, a->stats->text_xp_inv,
        NULL);
    }
}

void put_levels(v_var *a)
{
    if (a->stats->level == 1)
        sfSprite_setTexture(a->stats->s_level, a->stats->t_level_1,
        sfTrue);
    if (a->stats->level == 2)
        sfSprite_setTexture(a->stats->s_level, a->stats->t_level_2,
        sfTrue);
    if (a->stats->level == 3)
        sfSprite_setTexture(a->stats->s_level, a->stats->t_level_3,
        sfTrue);
    if (a->stats->level == 4)
        sfSprite_setTexture(a->stats->s_level, a->stats->t_level_4,
        sfTrue);
    if (a->stats->level == 5)
        sfSprite_setTexture(a->stats->s_level, a->stats->t_level_5,
        sfTrue);
}

void stats_inv(v_var *a)
{
    if (a->inv->inv_open == 1) {
        a->stats->str_level_inv = my_itoa(a->stats->level);
        sfText_setString(a->stats->text_level_inv, a->stats->str_level_inv);
        sfRenderWindow_drawText(a->_ptr->window, a->stats->text_level_inv,
        NULL);
        a->stats->str_hp_inv = my_itoa(a->stats->hp_max);
        sfText_setString(a->stats->text_hp_inv, a->stats->str_hp_inv);
        sfRenderWindow_drawText(a->_ptr->window, a->stats->text_hp_inv,
        NULL);
        a->stats->str_strength_inv = my_itoa(a->stats->strength);
        sfText_setString(a->stats->text_strength_inv,
        a->stats->str_strength_inv);
        sfRenderWindow_drawText(a->_ptr->window, a->stats->text_strength_inv,
        NULL);
    }
}

void stats_display(v_var *a)
{
    if (a->rpg->fight != 1) {
        put_levels(a);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->stats->s_level, NULL);
        inf_level_5(a);
    }
    stats_inv(a);
}