/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void quests_var(v_var *a)
{
    a->quests->quests_open = 0;
    a->quests->scale_quests.x = 0.75;
    a->quests->scale_quests.y = 0.75;

    a->quests->pos_quests.x = 660;
    a->quests->pos_quests.y = 256;

    a->quests->q_hol = 0;
    a->quests->q_dio = 0;
    a->quests->q_retrouver = 0;

    a->quests->pos_q_dio.x = 706;
    a->quests->pos_q_dio.y = 400;

    a->quests->pos_q_retrouver.x = 706;
    a->quests->pos_q_retrouver.y = 400;

    a->quests->pos_q_hol.x = 706;
    a->quests->pos_q_hol.y = 450;
}