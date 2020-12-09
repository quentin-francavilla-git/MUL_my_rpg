/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void dialogues_doors(v_var *a)
{
    if (a->env->env == 5 && a->rpg->door_interact != 0
    && a->inv->inv_key_1 == 0) {
        door_dial_display(a);
    }
    else if (a->env->env == 5 && a->pol->pol_interact != 0)
        pol_dial_display(a);

    if (a->env->env == 9 && a->rpg->door_interact2 != 0
    && a->inv->inv_key_2 == 0) {
        door2_dial_display(a);
    }
    else if (a->env->env == 9 && a->ice->ice_interact != 0)
        ice_dial_display(a);
}

void dialogues_display(v_var *a)
{
    if (a->env->env == 13)
        dio_dial_display(a);
    if (a->env->env == 12)
        joseph_dial_display(a);
    if (a->env->env == 1)
        kakyo_dial_display(a);
    if (a->env->env == 2)
        kan_dial_display(a);
    if (a->env->env == 4)
        cha_dial_display(a);
    if (a->env->env == 7)
        mid_dial_display(a);
    if (a->env->env == 11)
        mar_dial_display(a);
    if (a->env->env == 15)
        hol_dial_display(a);

    dialogues_doors(a);

    sfRenderWindow_drawSprite(a->_ptr->window,
    a->rpg->s_dialogue, NULL);
}