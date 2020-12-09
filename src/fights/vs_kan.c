/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void vs_kan_interact(v_var *a)
{
    if (a->jo->jotaro_position.x >=
    a->kan->kan_position.x - 200
    && a->jo->jotaro_position.x <=
    a->kan->kan_position.x + 200
    && a->env->env == 2) {
        a->kan->kan_interact = 1;
        a->hud_other->pos_press_f.x = a->kan->kan_position.x + 110;
        a->hud_other->pos_press_f.y = 770;
        sfSprite_setPosition(a->hud_other->s_press_f,
        a->hud_other->pos_press_f);
    }
    else if (a->rpg->fight != 1)
        a->kan->kan_interact = 0;
}

void kan_attack_positions(v_var *a)
{
    if (a->kan->kan_wich_attack == 2) {
        if (a->jo->jotaro_life > 100)
            a->jo->jotaro_life -= 100;
        else
            a->jo->jotaro_life = 0;
        a->kan->kan_position.x = 450;
        sfSprite_setPosition(a->kan->s_kan_attack,
        a->kan->kan_position);
    }
    if (a->kan->kan_wich_attack == 1) {
        a->kan->kan_position.x = 550;
        sfSprite_setPosition(a->kan->s_kan_standing,
        a->kan->kan_position);
        a->kan->pos_kan_stand.x = 410;
        sfSprite_setPosition(a->kan->s_kan_stand,
        a->kan->pos_kan_stand);
    }
}

void put_kan_life(v_var *a)
{
    if (a->rpg->put_enemy_life == 0) {
        a->rpg->enemy_life = 3000;
        a->rpg->put_enemy_life = 1;
        a->rpg->enemy_life_multiple = 0.211;
    }
}

void vs_kan(v_var *a)
{
    vs_kan_interact(a);
    if (a->rpg->fight == 1 && a->kan->kan_interact == 1) {
        put_kan_life(a);
        if (a->jo->jotaro_wich_attack == 0 || a->jo->jotaro_wich_attack == 4
        || a->jo->jotaro_wich_attack == 3) {
            jotaro_reset_position(a);
        }
        if (a->hud_fight->qte == 1)
            qte_spe(a);
        if (a->hud_fight->qte == 2)
            qte_block(a);
        if (a->rpg->turn == 1 && a->kan->kan_wich_attack == 0) {
            wait_fight(a);
            if (a->rpg->wait_fight >= 3) {
                a->kan->kan_wich_attack = rand() % (2 + 1 - 1) + 1;
                kan_attack_positions(a);
                a->rpg->wait_fight = 0;
            }
        }
    }
}