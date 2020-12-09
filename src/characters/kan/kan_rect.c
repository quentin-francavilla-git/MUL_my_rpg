/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void rect_kan(v_var *a)
{
    a->kan->rect_kan_standing.top = 0;
    a->kan->rect_kan_standing.left = 5790;
    a->kan->rect_kan_standing.width = 386;
    a->kan->rect_kan_standing.height = 226;

    a->kan->rect_kan_attack.top = 0;
    a->kan->rect_kan_attack.left = 2316;
    a->kan->rect_kan_attack.width = 386;
    a->kan->rect_kan_attack.height = 226;

    a->kan->rect_kan_ded.top = 0;
    a->kan->rect_kan_ded.left = 4632;
    a->kan->rect_kan_ded.width = 386;
    a->kan->rect_kan_ded.height = 226;

    a->kan->rect_kan_stand.top = 0;
    a->kan->rect_kan_stand.left = 2702;
    a->kan->rect_kan_stand.width = 386;
    a->kan->rect_kan_stand.height = 226;
}