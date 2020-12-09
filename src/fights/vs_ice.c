/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void vs_ice_interact(v_var *a)
{
    vs_door2(a);
    if (a->jo->jotaro_position.x >=
    a->ice->ice_position.x - 200
    && a->jo->jotaro_position.x <=
    a->ice->ice_position.x + 200
    && a->env->env == 9) {
        a->ice->ice_interact = 1;
        a->hud_other->pos_press_f.x = a->ice->ice_position.x + 110;
        a->hud_other->pos_press_f.y = 770;
        sfSprite_setPosition(a->hud_other->s_press_f,
        a->hud_other->pos_press_f);
    }
    else if (a->rpg->fight != 1)
        a->ice->ice_interact = 0;
}

void vs_door2(v_var *a)
{
    if (a->jo->jotaro_position.x >= 1300
    && a->jo->jotaro_position.x <= 1650
    && a->env->env == 9) {
        a->rpg->door_interact2 = 1;
        a->hud_other->pos_press_f.x = 1400;
        a->hud_other->pos_press_f.y = 770;
        sfSprite_setPosition(a->hud_other->s_press_f,
        a->hud_other->pos_press_f);
    }
    else if (a->rpg->fight != 1)
        a->rpg->door_interact2 = 0;
}

void ice_attack_positions(v_var *a)
{
    if (a->ice->ice_wich_attack == 2) {
        if (a->jo->jotaro_life > 100)
            a->jo->jotaro_life -= 100;
        else
            a->jo->jotaro_life = 0;
        a->ice->ice_position.x = 450;
        sfSprite_setPosition(a->ice->s_ice_attack,
        a->ice->ice_position);
    }
    if (a->ice->ice_wich_attack == 1) {
        a->ice->ice_position.x = 550;
        sfSprite_setPosition(a->ice->s_ice_standing,
        a->ice->ice_position);
        a->ice->pos_ice_stand.x = 350;
        sfSprite_setPosition(a->ice->s_ice_stand,
        a->ice->pos_ice_stand);
    }
}

void put_ice_life(v_var *a)
{
    if (a->rpg->put_enemy_life == 0) {
        a->rpg->enemy_life = 10000;
        a->rpg->put_enemy_life = 1;
        a->rpg->enemy_life_multiple = 0.0633;
    }
}

void vs_ice(v_var *a)
{
    vs_ice_interact(a);
    if (a->rpg->fight == 1 && a->ice->ice_interact == 1) {
        put_ice_life(a);
        if (a->jo->jotaro_wich_attack == 0 || a->jo->jotaro_wich_attack == 4
        || a->jo->jotaro_wich_attack == 3) {
            jotaro_reset_position(a);
        }
        if (a->hud_fight->qte == 1)
            qte_spe(a);
        if (a->hud_fight->qte == 2)
            qte_block(a);
        if (a->rpg->turn == 1 && a->ice->ice_wich_attack == 0) {
            wait_fight(a);
            if (a->rpg->wait_fight >= 3) {
                a->ice->ice_wich_attack = rand() % (2 + 1 - 1) + 1;
                ice_attack_positions(a);
                a->rpg->wait_fight = 0;
            }
        }
    }
}