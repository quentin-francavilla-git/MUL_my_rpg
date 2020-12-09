/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void vs_hol_interact(v_var *a)
{
    if (a->jo->jotaro_position.x >=
    a->hol->hol_position.x - 200
    && a->jo->jotaro_position.x <=
    a->hol->hol_position.x + 200
    && a->env->env == 15) {
        a->hol->hol_interact = 1;
        a->hud_other->pos_press_f.x = a->hol->hol_position.x + 110;
        a->hud_other->pos_press_f.y = 770;
        sfSprite_setPosition(a->hud_other->s_press_f,
        a->hud_other->pos_press_f);
    }
    else if (a->rpg->fight != 1)
        a->hol->hol_interact = 0;
}

void hol_attack_positions(v_var *a)
{
    if (a->hol->hol_wich_attack == 2) {
        if (a->jo->jotaro_life > 100)
            a->jo->jotaro_life -= 100;
        else
            a->jo->jotaro_life = 0;
        a->hol->hol_position.x = 450;
        sfSprite_setPosition(a->hol->s_hol_attack,
        a->hol->hol_position);
    }
    if (a->hol->hol_wich_attack == 1) {
        a->hol->hol_position.x = 550;
        sfSprite_setPosition(a->hol->s_hol_standing,
        a->hol->hol_position);
        a->hol->pos_hol_stand.x = 300;
        sfSprite_setPosition(a->hol->s_hol_stand,
        a->hol->pos_hol_stand);
    }
}

void put_hol_life(v_var *a)
{
    if (a->rpg->put_enemy_life == 0) {
        a->rpg->enemy_life = 3000;
        a->rpg->put_enemy_life = 1;
        a->rpg->enemy_life_multiple = 0.211;
    }
}

void vs_hol(v_var *a)
{
    vs_hol_interact(a);
    if (a->rpg->fight == 1 && a->hol->hol_interact == 1) {
        put_hol_life(a);
        if (a->jo->jotaro_wich_attack == 0 || a->jo->jotaro_wich_attack == 4
        || a->jo->jotaro_wich_attack == 3) {
            jotaro_reset_position(a);
        }
        if (a->hud_fight->qte == 1)
            qte_spe(a);
        if (a->hud_fight->qte == 2)
            qte_block(a);
        if (a->rpg->turn == 1 && a->hol->hol_wich_attack == 0) {
            wait_fight(a);
            if (a->rpg->wait_fight >= 3) {
                a->hol->hol_wich_attack = rand() % (2 + 1 - 1) + 1;
                hol_attack_positions(a);
                a->rpg->wait_fight = 0;
            }
        }
    }
}