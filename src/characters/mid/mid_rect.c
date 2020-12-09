/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void rect_mid(v_var *a)
{
    a->mid->rect_mid_standing.top = 0;
    a->mid->rect_mid_standing.left = 2316;
    a->mid->rect_mid_standing.width = 386;
    a->mid->rect_mid_standing.height = 226;

    a->mid->rect_mid_attack.top = 0;
    a->mid->rect_mid_attack.left = 3474;
    a->mid->rect_mid_attack.width = 386;
    a->mid->rect_mid_attack.height = 226;

    a->mid->rect_mid_ded.top = 0;
    a->mid->rect_mid_ded.left = 6176;
    a->mid->rect_mid_ded.width = 386;
    a->mid->rect_mid_ded.height = 226;

    a->mid->rect_mid_stand.top = 0;
    a->mid->rect_mid_stand.left = 3474;
    a->mid->rect_mid_stand.width = 386;
    a->mid->rect_mid_stand.height = 226;
}