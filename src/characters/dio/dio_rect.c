/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void rect_dio(v_var *a)
{
    a->dio->rect_dio_standing.top = 0;
    a->dio->rect_dio_standing.left = 8326;
    a->dio->rect_dio_standing.width = 362;
    a->dio->rect_dio_standing.height = 242;

    a->dio->rect_dio_attack.top = 0;
    a->dio->rect_dio_attack.left = 6516;
    a->dio->rect_dio_attack.width = 362;
    a->dio->rect_dio_attack.height = 242;

    a->dio->rect_dio_ded.top = 0;
    a->dio->rect_dio_ded.left = 4632;
    a->dio->rect_dio_ded.width = 386;
    a->dio->rect_dio_ded.height = 242;

    a->dio->rect_dio_stand.top = 0;
    a->dio->rect_dio_stand.left = 10036;
    a->dio->rect_dio_stand.width = 386;
    a->dio->rect_dio_stand.height = 226;
}