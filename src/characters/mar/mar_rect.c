/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void rect_mar(v_var *a)
{
    a->mar->rect_mar_standing.top = 0;
    a->mar->rect_mar_standing.left = 1930;
    a->mar->rect_mar_standing.width = 386;
    a->mar->rect_mar_standing.height = 226;

    a->mar->rect_mar_attack.top = 0;
    a->mar->rect_mar_attack.left = 2702;
    a->mar->rect_mar_attack.width = 386;
    a->mar->rect_mar_attack.height = 226;

    a->mar->rect_mar_ded.top = 0;
    a->mar->rect_mar_ded.left = 4632;
    a->mar->rect_mar_ded.width = 386;
    a->mar->rect_mar_ded.height = 226;

    a->mar->rect_mar_stand.top = 0;
    a->mar->rect_mar_stand.left = 7720;
    a->mar->rect_mar_stand.width = 386;
    a->mar->rect_mar_stand.height = 226;
}