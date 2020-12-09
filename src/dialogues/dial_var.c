/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void dial_var2(v_var *a)
{
    a->rpg->dialogue = 0;
    a->rpg->nb_dialogue = 0;

    a->rpg->scale_dialogue.x = 0.8;
    a->rpg->scale_dialogue.y = 0.8;
    a->rpg->pos_dialogue.x = 596;
    a->rpg->pos_dialogue.y = 550;

    a->kakyo->already_speak = 0;
    a->kakyo->one_already = 0;

    a->joseph->already_speak = 0;
    a->joseph->one_already = 0;

    a->pol->already_speak = 0;
    a->pol->one_already = 0;

    a->kan->already_speak = 0;
    a->kan->one_already = 0;
}

void dial_var(v_var *a)
{
    dial_var2(a);

    a->dio->already_speak = 0;
    a->dio->one_already = 0;

    a->ice->already_speak = 0;
    a->ice->one_already = 0;

    a->mar->already_speak = 0;
    a->mar->one_already = 0;

    a->mid->already_speak = 0;
    a->mid->one_already = 0;
}