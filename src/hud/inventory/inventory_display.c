/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void display_items_in_inv(v_var *a)
{
    if (a->inv->inv_heal_potion1 != 0)
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->inv->s_inv_heal_potion1, NULL);

    if (a->inv->inv_armor_potion != 0)
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->inv->s_inv_armor_potion, NULL);

    if (a->inv->inv_big_heal_potion != 0)
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->inv->s_inv_big_heal_potion, NULL);

    if (a->inv->inv_key_1 != 0)
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->inv->s_key_1, NULL);

    if (a->inv->inv_key_2 != 0)
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->inv->s_key_2, NULL);
}

void display_infos_keys(v_var *a)
{
    if (a->inv->inv_key_1 != 0 && a->inv->case_inv == 4) {
        sfSprite_setTexture(a->inv->s_info,
        a->inv->t_info_key_1, sfTrue);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->inv->s_info, NULL);
    }
    if (a->inv->inv_key_2 != 0 && a->inv->case_inv == 5) {
        sfSprite_setTexture(a->inv->s_info,
        a->inv->t_info_key_2, sfTrue);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->inv->s_info, NULL);
    }
}

void display_infos(v_var *a)
{
    if (a->inv->inv_heal_potion1 != 0 && a->inv->case_inv == 1) {
        sfSprite_setTexture(a->inv->s_info,
        a->inv->t_info_heal_potion, sfTrue);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->inv->s_info, NULL);
    }
    if (a->inv->inv_armor_potion != 0 && a->inv->case_inv == 2) {
        sfSprite_setTexture(a->inv->s_info,
        a->inv->t_info_armor_potion, sfTrue);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->inv->s_info, NULL);
    }
    if (a->inv->inv_big_heal_potion != 0 && a->inv->case_inv == 3) {
        sfSprite_setTexture(a->inv->s_info,
        a->inv->t_info_big_heal_potion, sfTrue);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->inv->s_info, NULL);
    }
    display_infos_keys(a);
}

void inventory_display(v_var *a)
{
    if (a->inv->inv_open == 1) {
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->inv->s_inv, NULL);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->inv->s_inv_select, NULL);
        display_infos(a);
    }
}