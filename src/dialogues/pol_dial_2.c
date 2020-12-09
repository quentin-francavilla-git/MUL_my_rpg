/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void pol_dial_display2(v_var *a)
{
    if (a->rpg->nb_dialogue == 1 && a->pol->already_speak == 0)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->pol->t_pol_d_1, sfTrue);
    if (a->rpg->nb_dialogue == 2 && a->pol->already_speak == 0)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->pol->t_pol_d_2, sfTrue);
    if (a->rpg->nb_dialogue == 3)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->pol->t_pol_d_3, sfTrue);
    if (a->rpg->nb_dialogue == 4 && a->pol->already_speak == 0)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->pol->t_pol_d_4, sfTrue);
    if (a->rpg->nb_dialogue == 5 && a->pol->already_speak == 0) {
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->pol->t_pol_d_5, sfTrue);
    }
    if (a->rpg->nb_dialogue == 6 && a->pol->already_speak == 0)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->pol->t_pol_d_6, sfTrue);
}

void pol_dial_display3(v_var *a)
{
    if (a->rpg->nb_dialogue == 7 && a->pol->already_speak == 0)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->pol->t_pol_d_7, sfTrue);
    if (a->rpg->nb_dialogue == 8 && a->pol->already_speak == 0) {
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->pol->t_pol_d_8, sfTrue);
        a->quests->q_dio = 1;
    }
    if (a->rpg->nb_dialogue == 9 && a->pol->already_speak == 0)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->pol->t_pol_d_9, sfTrue);
    if (a->rpg->nb_dialogue == 10 && a->pol->already_speak == 0)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->pol->t_pol_d_10, sfTrue);
    if (a->rpg->nb_dialogue == 11 && a->pol->already_speak == 0)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->pol->t_pol_d_11, sfTrue);
}

void pol_dial_display(v_var *a)
{
    pol_dial_display2(a);
    pol_dial_display3(a);
    if (a->rpg->nb_dialogue == 12 && a->pol->already_speak == 0) {
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->pol->t_pol_d_8, sfTrue);
        a->quests->q_hol = 1;
    }
    if (a->rpg->nb_dialogue == 13 && a->pol->already_speak == 0)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->pol->t_pol_d_12, sfTrue);
}

void door_dial_display(v_var *a)
{
    sfSprite_setTexture(a->rpg->s_dialogue,
    a->rpg->t_door, sfTrue);
}