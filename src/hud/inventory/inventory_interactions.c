/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void up_down_cases_inv(v_var *a)
{
    if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeyS) && a->inv->case_inv < 9) {
        a->inv->case_inv += 4;
        a->inv->pos_inv_select.y += 129;
    }
    if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeyZ)) {
        if (a->inv->case_inv >= 5 && a->inv->case_inv <= 8) {
            a->inv->case_inv -= 4;
            a->inv->pos_inv_select.y -= 129;
        }
        if (a->inv->case_inv >= 9 && a->inv->case_inv <= 12) {
            a->inv->case_inv -= 4;
            a->inv->pos_inv_select.y -= 129;
        }
    }
}

void right_cases_inv(v_var *a)
{
    if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeyD)) {
        if (a->inv->case_inv >= 1 && a->inv->case_inv < 4) {
            a->inv->case_inv += 1;
            a->inv->pos_inv_select.x += 123;
        }
        if (a->inv->case_inv >= 5 && a->inv->case_inv < 8) {
            a->inv->case_inv += 1;
            a->inv->pos_inv_select.x += 123;
        }
        if (a->inv->case_inv >= 9 && a->inv->case_inv < 12) {
            a->inv->case_inv += 1;
            a->inv->pos_inv_select.x += 123;
        }
    }
}

void left_cases_inv(v_var *a)
{
    if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeyQ)) {
        if (a->inv->case_inv > 1 && a->inv->case_inv <= 4) {
            a->inv->case_inv -= 1;
            a->inv->pos_inv_select.x -= 123;
        }
        if (a->inv->case_inv > 5 && a->inv->case_inv <= 8) {
            a->inv->case_inv -= 1;
            a->inv->pos_inv_select.x -= 123;
        }
        if (a->inv->case_inv > 9 && a->inv->case_inv <= 12) {
            a->inv->case_inv -= 1;
            a->inv->pos_inv_select.x -= 123;
        }
    }
}

void move_cases_inv(v_var *a)
{
    up_down_cases_inv(a);
    right_cases_inv(a);
    left_cases_inv(a);
    sfSprite_setPosition(a->inv->s_inv_select, a->inv->pos_inv_select);
}

void inventory_interactions(v_var *a)
{
    if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeyTab) && a->rpg->fight != 1
    && a->inv->inv_open == 0 && a->quests->quests_open == 0) {
        a->inv->inv_open = 1;
    }
    else if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeyTab) && a->rpg->fight != 1
    && a->inv->inv_open == 1) {
        a->inv->inv_open = 0;
    }
    if (a->inv->inv_open == 1)
        move_cases_inv(a);
}
