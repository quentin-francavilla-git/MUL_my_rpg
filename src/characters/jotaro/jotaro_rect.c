/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void rect_jotaro1(v_var *a)
{
    a->jo->rect_jotaro_standing.top = 0;
    a->jo->rect_jotaro_standing.left = 0;
    a->jo->rect_jotaro_standing.width = 386;
    a->jo->rect_jotaro_standing.height = 226;

    a->jo->rect_jotaro_while.top = 0;
    a->jo->rect_jotaro_while.left = 0;
    a->jo->rect_jotaro_while.width = 386;
    a->jo->rect_jotaro_while.height = 226;

    a->jo->rect_jotaro_attack.top = 0;
    a->jo->rect_jotaro_attack.left = 0;
    a->jo->rect_jotaro_attack.width = 386;
    a->jo->rect_jotaro_attack.height = 226;

    a->jo->rect_jotaro_walking.top = 0;
    a->jo->rect_jotaro_walking.left = 0;
    a->jo->rect_jotaro_walking.width = 386;
    a->jo->rect_jotaro_walking.height = 226;
}

void rect_jotaro(v_var *a)
{
    rect_jotaro1(a);

    a->jo->rect_jotaro_walking2.top = 0;
    a->jo->rect_jotaro_walking2.left = 5404;
    a->jo->rect_jotaro_walking2.width = 386;
    a->jo->rect_jotaro_walking2.height = 226;

    a->jo->rect_jotaro_ded.top = 0;
    a->jo->rect_jotaro_ded.left = 0;
    a->jo->rect_jotaro_ded.width = 386;
    a->jo->rect_jotaro_ded.height = 226;

    a->jo->rect_jotaro_stand.top = 0;
    a->jo->rect_jotaro_stand.left = 0;
    a->jo->rect_jotaro_stand.width = 202;
    a->jo->rect_jotaro_stand.height = 182;
}