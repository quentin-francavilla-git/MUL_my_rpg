/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void joseph_dial_display(v_var *a)
{
    if (a->rpg->nb_dialogue == 1 && a->joseph->already_speak == 0)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->joseph->t_joseph_d_1, sfTrue);
    if (a->rpg->nb_dialogue == 2 && a->joseph->already_speak == 0)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->joseph->t_joseph_d_2, sfTrue);
    if (a->rpg->nb_dialogue == 3)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->joseph->t_joseph_d_3, sfTrue);
    if (a->rpg->nb_dialogue == 4 && a->joseph->already_speak == 0) {
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->joseph->t_joseph_d_4, sfTrue);
    }
    if (a->rpg->nb_dialogue == 5 && a->joseph->already_speak == 0) {
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->joseph->t_joseph_d_5, sfTrue);
    }
}

void dial_joseph_already(v_var *a)
{
    a->rpg->nb_dialogue = 5;
    if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeySpace)) {
        a->joseph->one_already += 1;
    }
    if (a->joseph->one_already >= 2) {
        a->joseph->one_already = 0;
        a->rpg->dialogue = 0;
        a->rpg->nb_dialogue = 0;
        fight_quit(a);
    }
}

void dial_joseph(v_var *a)
{
    if (a->env->env == 12 && a->joseph->already_speak == 0) {
        if (a->_ptr->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeySpace)) {
            a->rpg->nb_dialogue += 1;
        }
        if (a->rpg->nb_dialogue >= 6) {
            a->joseph->already_speak = 1;
            a->rpg->dialogue = 0;
            a->rpg->nb_dialogue = 0;
            fight_quit(a);
        }
    }
    else if (a->env->env == 12 && a->joseph->already_speak == 1) {
        dial_joseph_already(a);
    }
}