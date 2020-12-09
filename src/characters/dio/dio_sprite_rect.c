/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void move_rect_dio_attack(v_var *a)
{
    if (a->dio->rect_dio_attack.left == 0) {
        a->dio->rect_dio_attack.left = 6154;
        a->dio->attack_duration += 1;
    }
    else {
        a->dio->rect_dio_attack.left -=
        a->dio->rect_dio_attack.width;
    }
    if (a->dio->attack_duration == 1) {
        dio_reset(a);
    }
}

void move_rect_dio_ded(v_var *a)
{
    if (a->dio->rect_dio_ded.left == 0) {
        a->dio->rect_dio_ded.left = 0;
        a->dio->dio_ded = 1;
    }
    else {
        a->dio->rect_dio_ded.left -=
        a->dio->rect_dio_ded.width;
    }
}

void move_rect_dio_standing(v_var *a)
{
    if (a->dio->rect_dio_standing.left == 0) {
        a->dio->rect_dio_standing.left = 7964;
    }
    else {
        a->dio->rect_dio_standing.left -=
        a->dio->rect_dio_standing.width;
    }
}

void move_rect_dio_stand(v_var *a)
{
    if (a->dio->rect_dio_stand.left == 0) {
        a->dio->rect_dio_stand.left = 10036;
        a->dio->stand_duration += 1;
    }
    else {
        a->dio->rect_dio_stand.left -=
        a->dio->rect_dio_stand.width;
    }
    if (a->dio->stand_duration == 3) {
        dio_reset(a);
    }
}