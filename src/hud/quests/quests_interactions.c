/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void quests_interactions(v_var *a)
{
    if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeyE) && a->rpg->fight != 1
    && a->quests->quests_open == 0 && a->inv->inv_open == 0) {
        a->quests->quests_open = 1;
    }
    else if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeyE) && a->rpg->fight != 1
    && a->quests->quests_open == 1) {
        a->quests->quests_open = 0;
    }
}
