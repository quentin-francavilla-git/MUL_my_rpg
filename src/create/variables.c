/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void variables(v_var *a)
{
    srand(time(NULL));
    a->_ptr->status = 1;
    a->rpg->fight = 0;
    a->rpg->turn = 0;
    a->rpg->wait_fight = 0;
    a->rpg->enemy_ded_sprite = 0;
    a->rpg->wait_key = 0;
    a->env->enemy_ded = 1;
    a->rpg->door_interact = 0;
    a->hud_other->gg = 0;
}