/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void mid_dial_display(v_var *a)
{
    if (a->rpg->nb_dialogue == 1 && a->mid->already_speak == 0)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->mid->t_mid_d_1, sfTrue);
    if (a->rpg->nb_dialogue == 2 && a->mid->already_speak == 0)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->mid->t_mid_d_2, sfTrue);
}

void dial_mid(v_var *a)
{
    if (a->env->env == 7) {
        if (a->_ptr->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeySpace)) {
            a->rpg->nb_dialogue += 1;
        }
        if (a->rpg->nb_dialogue >= 3) {
            a->rpg->dialogue = 0;
            a->rpg->nb_dialogue = 0;
            a->rpg->fight = 1;
            music_fight(a);
        }
    }
}