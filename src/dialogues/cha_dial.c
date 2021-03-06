/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void cha_dial_display(v_var *a)
{
    if (a->rpg->nb_dialogue == 1 && a->cha->already_speak == 0)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->cha->t_cha_d_1, sfTrue);
    if (a->rpg->nb_dialogue == 2 && a->cha->already_speak == 0)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->cha->t_cha_d_2, sfTrue);
    if (a->rpg->nb_dialogue == 3)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->cha->t_cha_d_3, sfTrue);
    if (a->rpg->nb_dialogue == 4 && a->cha->already_speak == 0)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->cha->t_cha_d_4, sfTrue);
}

void dial_cha(v_var *a)
{
    if (a->env->env == 4) {
        if (a->_ptr->event.type == sfEvtKeyPressed
        && sfKeyboard_isKeyPressed(sfKeySpace)) {
            a->rpg->nb_dialogue += 1;
        }
        if (a->rpg->nb_dialogue >= 5) {
            a->rpg->dialogue = 0;
            a->rpg->nb_dialogue = 0;
            a->rpg->fight = 1;
            music_fight(a);
        }
    }
}