/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void kakyo_dial_display2(v_var *a)
{
    if (a->rpg->nb_dialogue == 4 && a->kakyo->already_speak == 0) {
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->kakyo->t_kakyo_d_4, sfTrue);
        a->quests->q_retrouver = 1;
    }
    if (a->rpg->nb_dialogue == 5 && a->kakyo->already_speak == 0) {
        a->inv->inv_heal_potion1 = 1;
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->kakyo->t_kakyo_d_5, sfTrue);
    }
    if (a->rpg->nb_dialogue == 6 && a->kakyo->already_speak == 0)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->kakyo->t_kakyo_d_6, sfTrue);
    if (a->rpg->nb_dialogue == 7 && a->kakyo->already_speak == 0)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->kakyo->t_kakyo_d_7, sfTrue);
}

void kakyo_dial_display(v_var *a)
{
    if (a->rpg->nb_dialogue == 1 && a->kakyo->already_speak == 0)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->kakyo->t_kakyo_d_1, sfTrue);
    if (a->rpg->nb_dialogue == 2 && a->kakyo->already_speak == 0)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->kakyo->t_kakyo_d_2, sfTrue);
    if (a->rpg->nb_dialogue == 3)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->kakyo->t_kakyo_d_3, sfTrue);
    kakyo_dial_display2(a);
}

void dial_kakyo_already(v_var *a)
{
    a->rpg->nb_dialogue = 3;
    if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeySpace)) {
        a->kakyo->one_already += 1;
    }
    if (a->kakyo->one_already >= 2) {
        a->kakyo->one_already = 0;
        a->rpg->dialogue = 0;
        a->rpg->nb_dialogue = 0;
        fight_quit(a);
    }
}

void dial_kakyo(v_var *a)
{
    if (a->env->env == 1 && a->kakyo->already_speak == 0) {
        if (a->_ptr->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeySpace)) {
            a->rpg->nb_dialogue += 1;
        }
        if (a->rpg->nb_dialogue >= 8) {
            a->kakyo->already_speak = 1;
            a->rpg->dialogue = 0;
            a->rpg->nb_dialogue = 0;
            fight_quit(a);
        }
    }
    else if (a->env->env == 1 && a->kakyo->already_speak == 1) {
        dial_kakyo_already(a);
    }
}