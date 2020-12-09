/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void rect_hol(v_var *a)
{
    a->hol->rect_hol_standing.top = 0;
    a->hol->rect_hol_standing.left = 6562;
    a->hol->rect_hol_standing.width = 386;
    a->hol->rect_hol_standing.height = 226;

    a->hol->rect_hol_attack.top = 0;
    a->hol->rect_hol_attack.left = 4632;
    a->hol->rect_hol_attack.width = 386;
    a->hol->rect_hol_attack.height = 226;

    a->hol->rect_hol_ded.top = 0;
    a->hol->rect_hol_ded.left = 3088;
    a->hol->rect_hol_ded.width = 386;
    a->hol->rect_hol_ded.height = 226;

    a->hol->rect_hol_stand.top = 0;
    a->hol->rect_hol_stand.left = 1930;
    a->hol->rect_hol_stand.width = 386;
    a->hol->rect_hol_stand.height = 226;
}