/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void qte_y_1(v_var *a)
{
    if (a->hud_fight->random_y == 1
    && !sfKeyboard_isKeyPressed(sfKeySpace)
    && !sfKeyboard_isKeyPressed(sfKeyE)) {
        if (a->_ptr->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeyA)
        && a->hud_fight->pos_star.x <= 795) {
            a->hud_fight->explo = 1;
            reset_position_star(a);
            a->hud_fight->qte_good += 1;
        }
    }
}

void qte_y_2(v_var *a)
{
    if (a->hud_fight->random_y == 2
    && !sfKeyboard_isKeyPressed(sfKeySpace)
    && !sfKeyboard_isKeyPressed(sfKeyA)) {
        if (a->_ptr->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeyE)
        && a->hud_fight->pos_star.x <= 795) {
            a->hud_fight->explo = 2;
            reset_position_star(a);
            a->hud_fight->qte_good += 1;
        }
    }
}

void qte_y_3(v_var *a)
{
    if (a->hud_fight->random_y == 3
    && !sfKeyboard_isKeyPressed(sfKeyA)
    && !sfKeyboard_isKeyPressed(sfKeyE)) {
        if (a->_ptr->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeySpace)
        && a->hud_fight->pos_star.x <= 795) {
            a->hud_fight->explo = 3;
            reset_position_star(a);
            a->hud_fight->qte_good += 1;
        }
    }
}

void qte_actions(v_var *a)
{
    if (a->_ptr->event.type == sfEvtKeyPressed
    && (sfKeyboard_isKeyPressed(sfKeyA) || sfKeyboard_isKeyPressed(sfKeyE)
    || sfKeyboard_isKeyPressed(sfKeySpace))
    && a->hud_fight->pos_star.x > 795 && a->hud_fight->pos_star.x < 1000) {
        fail_qte(a);
    }
    qte_y_1(a);
    qte_y_2(a);
    qte_y_3(a);
}

void reset_position_star(v_var *a)
{
    explo_position(a);
    a->hud_fight->random_y = rand() % (3 + 1 - 1) + 1;
    pos_star(a);
    sfSprite_setPosition(a->hud_fight->s_star, a->hud_fight->pos_star);
}