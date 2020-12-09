/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void rect_ice(v_var *a)
{
    a->ice->rect_ice_standing.top = 0;
    a->ice->rect_ice_standing.left = 12352;
    a->ice->rect_ice_standing.width = 386;
    a->ice->rect_ice_standing.height = 226;

    a->ice->rect_ice_attack.top = 0;
    a->ice->rect_ice_attack.left = 3860;
    a->ice->rect_ice_attack.width = 386;
    a->ice->rect_ice_attack.height = 226;

    a->ice->rect_ice_ded.top = 0;
    a->ice->rect_ice_ded.left = 5404;
    a->ice->rect_ice_ded.width = 386;
    a->ice->rect_ice_ded.height = 226;

    a->ice->rect_ice_stand.top = 0;
    a->ice->rect_ice_stand.left = 3474;
    a->ice->rect_ice_stand.width = 386;
    a->ice->rect_ice_stand.height = 226;
}