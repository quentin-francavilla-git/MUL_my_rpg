/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void fights(v_var *a)
{
    if (a->env->env == 13)
        vs_dio(a);
    if (a->env->env == 7)
        vs_mid(a);
    if (a->env->env == 2)
        vs_kan(a);
    if (a->env->env == 9)
        vs_ice(a);
    if (a->env->env == 4)
        vs_cha(a);
    if (a->env->env == 15)
        vs_hol(a);
    if (a->env->env == 11)
        vs_mar(a);
    if (a->env->env == 12)
        vs_joseph(a);
    if (a->env->env == 1)
        vs_kakyo(a);
    if (a->env->env == 5)
        vs_pol(a);
}

void wait_fight(v_var *a)
{
    a->rpg->seconds = a->rpg->time.microseconds / 1000000.0;
    a->rpg->time = sfClock_getElapsedTime(a->rpg->clock);
    if (a->rpg->seconds > 0.7) {
        a->rpg->wait_fight += 1;
        sfClock_restart(a->rpg->clock);
    }
}

void move_arrow(v_var *a)
{
    if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeyS) && a->hud_fight->arrow < 4
    && a->jo->jotaro_wich_attack == 0 && a->rpg->turn == 0) {
        a->hud_fight->arrow += 1;
    }
    if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeyZ) && a->hud_fight->arrow > 1
    && a->jo->jotaro_wich_attack == 0 && a->rpg->turn == 0) {
        a->hud_fight->arrow -= 1;
    }
}

void arrows(v_var *a)
{
    if (a->hud_fight->arrow == 1) {
        if (a->rpg->enemy_life > 200 + a->stats->strength * 100)
            a->rpg->enemy_life -= 200 + a->stats->strength * 100;
        else
            a->rpg->enemy_life = 0;
        a->jo->jotaro_position.x = 900;
        sfSprite_setPosition(a->jo->s_jotaro_attack,
        a->jo->jotaro_position);
        a->jo->jotaro_wich_attack = 2;
    }
    if (a->hud_fight->arrow == 2)
        a->hud_fight->qte = 1;
    if (a->hud_fight->arrow == 3)
        a->hud_fight->qte = 2;
    if (a->hud_fight->arrow == 4) {
        reset_postions_selec(a);
        a->hud_fight->fight_items = 1;
    }
}

void fight_menu(v_var *a)
{
    move_arrow(a);

    if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeySpace) && a->rpg->wait_key == 1
    && a->jo->jotaro_wich_attack == 0 && a->rpg->turn == 0
    && !(sfKeyboard_isKeyPressed(sfKeyS))
    && !(sfKeyboard_isKeyPressed(sfKeyZ))) {
        arrows(a);
    }
    a->rpg->wait_key = 1;
}