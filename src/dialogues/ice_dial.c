/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void door2_dial_display(v_var *a)
{
    sfSprite_setTexture(a->rpg->s_dialogue,
    a->rpg->t_door, sfTrue);
}

void dial_door2(v_var *a)
{
    if (a->env->env == 9 && a->inv->inv_key_2 == 0) {
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
    if (a->env->env == 9 && a->inv->inv_key_2 != 0) {
        //sfMusic_stop(a->music->desert);
        //sfMusic_play(a->music->last_zone);
        //sfMusic_setLoop(a->music->last_zone, sfTrue);
        fight_quit(a);
        a->jo->jotaro_position.x = -150;
        a->env->env = 10;
    }
}

void ice_dial_display(v_var *a)
{
    if (a->rpg->nb_dialogue == 1 && a->ice->already_speak == 0)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->ice->t_ice_d_1, sfTrue);
    if (a->rpg->nb_dialogue == 2 && a->ice->already_speak == 0)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->ice->t_ice_d_2, sfTrue);
    if (a->rpg->nb_dialogue == 3)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->ice->t_ice_d_3, sfTrue);
    if (a->rpg->nb_dialogue == 4 && a->ice->already_speak == 0)
        sfSprite_setTexture(a->rpg->s_dialogue,
        a->ice->t_ice_d_4, sfTrue);
}

void dial_ice(v_var *a)
{
    if (a->env->env == 9) {
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