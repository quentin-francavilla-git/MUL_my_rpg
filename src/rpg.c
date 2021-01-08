/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../include/my_rpg.h"
#include "../lib/my/lib.h"

void move(v_var *a)
{
    if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeyD)) {
        a->jo->jotaro_wich_attack = 3;
    }
    if (a->_ptr->event.type == sfEvtKeyReleased
    && !(sfKeyboard_isKeyPressed(sfKeyD)) && (a->jo->jotaro_wich_attack != 2
    && a->jo->jotaro_wich_attack != 1)) {
        jotaro_reset(a);
    }
    if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeyQ)) {
        a->jo->jotaro_wich_attack = 4;
    }
    if (a->_ptr->event.type == sfEvtKeyReleased
    && !(sfKeyboard_isKeyPressed(sfKeyQ)) && (a->jo->jotaro_wich_attack != 2
    && a->jo->jotaro_wich_attack != 1)) {
        jotaro_reset(a);
    }
}

void interactions(v_var *a)
{
    fights(a);
}

void reset_after_game(v_var *a)
{
    if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeySpace) && a->jo->jo_ded == 1) {
        a->jo->jotaro_life = a->stats->hp_max;
        fight_quit(a);
        jotaro_reset_position_game_over(a);
    }
    if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeySpace) && a->rpg->enemy_life <= 0
    && a->jo->jotaro_wich_attack == 0) {
        fight_quit(a);
    }
}

void music_fight(v_var *a)
{
    // sfMusic_stop(a->music->desert);
    // sfMusic_stop(a->music->last_zone);
    // if (a->env->env == 9 || a->env->env == 13) {
    //     sfMusic_play(a->music->boss);
    //     sfMusic_setLoop(a->music->boss, sfTrue);
    // }
    // else {
    //     sfMusic_play(a->music->fight);
    //     sfMusic_setLoop(a->music->fight, sfTrue);
    // }
}

void rpg(v_var *a)
{
    sprite_gestion(a);
    env_gestion(a);
    stats_gestion(a);
    interactions(a);
    events(a);
    life_gestion(a);
    display(a);
    cursor(a);
}