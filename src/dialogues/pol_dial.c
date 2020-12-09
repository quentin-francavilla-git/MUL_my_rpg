/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void dial_door(v_var *a)
{
    if (a->env->env == 5 && a->inv->inv_key_1 == 0) {
        if (a->_ptr->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeySpace)) {
            a->rpg->nb_dialogue += 1;
        }
        if (a->rpg->nb_dialogue >= 2) {
            a->rpg->dialogue = 0;
            a->rpg->nb_dialogue = 0;
            fight_quit(a);
        }
    }
    if (a->env->env == 5 && a->inv->inv_key_1 != 0) {
        fight_quit(a);
        a->jo->jotaro_position.x = -150;
        a->env->env = 14;
    }
}

void pol_normal_dialogue(v_var *a)
{
    if (a->env->env == 5 && a->pol->already_speak == 0) {
        a->quests->q_retrouver = 0;
        if (a->_ptr->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeySpace)) {
            a->rpg->nb_dialogue += 1;
        }
        if (a->rpg->nb_dialogue >= 14) {
            a->pol->already_speak = 1;
            a->rpg->dialogue = 0;
            a->rpg->nb_dialogue = 0;
            fight_quit(a);
        }
    }
}

void pol_already_dialogue(v_var *a)
{
    if (a->env->env == 5 && a->pol->already_speak == 1
    && (a->hol->hol_ded == 0 || a->quests->q_hol == 0)) {
        if (a->_ptr->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeySpace)) {
            a->pol->one_already += 1;
        }
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->pol->t_pol_d_12, sfTrue);
        if (a->pol->one_already >= 3) {
            a->pol->one_already = 1;
            a->rpg->dialogue = 0;
            a->rpg->nb_dialogue = 0;
            fight_quit(a);
        }
    }
}

void pol_hol_horse_dialogue(v_var *a)
{
    if (a->env->env == 5 && a->pol->already_speak == 1
    && a->hol->hol_ded == 1 && a->quests->q_hol == 1) {
        if (a->_ptr->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeySpace)) {
            a->pol->one_already += 1;
        }
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->pol->t_pol_d_hol, sfTrue);
        if (a->pol->one_already >= 3) {
            a->quests->q_hol = 0;
            a->inv->inv_big_heal_potion += 1;
            a->pol->one_already = 1;
            a->rpg->dialogue = 0;
            a->rpg->nb_dialogue = 0;
            fight_quit(a);
        }
    }
}

void dial_pol(v_var *a)
{
    pol_normal_dialogue(a);
    pol_already_dialogue(a);
    pol_hol_horse_dialogue(a);
}