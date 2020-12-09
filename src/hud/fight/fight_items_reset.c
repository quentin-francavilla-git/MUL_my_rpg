/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void reset_postions_selec(v_var *a)
{
    a->inv->pos_inv_select.x = 690;
    a->inv->pos_inv_select.y = 487;
    sfSprite_setPosition(a->inv->s_inv_select,
    a->inv->pos_inv_select);
}