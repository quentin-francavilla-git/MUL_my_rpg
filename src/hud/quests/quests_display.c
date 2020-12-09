/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void quests_text_display(v_var *a)
{
    if (a->quests->q_retrouver == 1)
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->quests->s_q_retrouver, NULL);
    if (a->quests->q_hol == 1)
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->quests->s_q_hol, NULL);
    if (a->quests->q_dio == 1)
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->quests->s_q_dio, NULL);
}

void quests_display(v_var *a)
{
    if (a->quests->quests_open == 1) {
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->quests->s_quests, NULL);
        quests_text_display(a);
    }
}