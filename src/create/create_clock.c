/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void create_clock1(v_var *a)
{
    a->_ptr->clock = sfClock_create();
    a->_ptr->clock2 = sfClock_create();
    a->_ptr->clock3 = sfClock_create();
    a->_ptr->clock4 = sfClock_create();
    a->hud_fight->clock = sfClock_create();
    a->jo->clock = sfClock_create();
    a->jo->clock2 = sfClock_create();
    a->jo->clock3 = sfClock_create();
    a->jo->clock4 = sfClock_create();
    a->hud_fight->clock2 = sfClock_create();
    a->rpg->clock = sfClock_create();
    a->menu->clock = sfClock_create();

    a->dio->clock = sfClock_create();
    a->dio->clock2 = sfClock_create();

    a->al->clock = sfClock_create();
    a->al->clock2 = sfClock_create();
}

void create_clock2(v_var *a)
{
    a->mid->clock = sfClock_create();
    a->mid->clock2 = sfClock_create();

    a->joseph->clock = sfClock_create();
    a->joseph->clock2 = sfClock_create();

    a->pol->clock = sfClock_create();
    a->pol->clock2 = sfClock_create();

    a->kakyo->clock = sfClock_create();
    a->kakyo->clock2 = sfClock_create();

    a->mar->clock = sfClock_create();
    a->mar->clock2 = sfClock_create();
}

void create_clock(v_var *a)
{
    create_clock1(a);
    create_clock2(a);

    a->hol->clock = sfClock_create();
    a->hol->clock2 = sfClock_create();

    a->cha->clock = sfClock_create();
    a->cha->clock2 = sfClock_create();

    a->ice->clock = sfClock_create();
    a->ice->clock2 = sfClock_create();

    a->kan->clock = sfClock_create();
    a->kan->clock2 = sfClock_create();
}