/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void vs_mar_interact(v_var *a)
{
    if (a->jo->jotaro_position.x >=
    a->mar->mar_position.x - 200
    && a->jo->jotaro_position.x <=
    a->mar->mar_position.x + 200
    && a->env->env == 11) {
        a->mar->mar_interact = 1;
        a->hud_other->pos_press_f.x = 1100;
        a->hud_other->pos_press_f.y = 770;
        sfSprite_setPosition(a->hud_other->s_press_f,
        a->hud_other->pos_press_f);
    }
    else if (a->rpg->fight != 1)
        a->mar->mar_interact = 0;
}

void mar_attack_positions(v_var *a)
{
    if (a->mar->mar_wich_attack == 2) {
        if (a->jo->jotaro_life > 100)
            a->jo->jotaro_life -= 100;
        else
            a->jo->jotaro_life = 0;
        a->mar->mar_position.x = 400;
        sfSprite_setPosition(a->mar->s_mar_attack,
        a->mar->mar_position);
    }
    if (a->mar->mar_wich_attack == 1) {
        a->mar->mar_position.x = 550;
        sfSprite_setPosition(a->mar->s_mar_standing,
        a->mar->mar_position);
        a->mar->pos_mar_stand.x = 420;
        sfSprite_setPosition(a->mar->s_mar_stand,
        a->mar->pos_mar_stand);
    }
}

void put_mar_life(v_var *a)
{
    if (a->rpg->put_enemy_life == 0) {
        a->rpg->enemy_life = 10000;
        a->rpg->put_enemy_life = 1;
        a->rpg->enemy_life_multiple = 0.0633;
    }
}

void vs_mar(v_var *a)
{
    vs_mar_interact(a);
    if (a->rpg->fight == 1 && a->mar->mar_interact == 1) {
        put_mar_life(a);
        if (a->jo->jotaro_wich_attack == 0 || a->jo->jotaro_wich_attack == 4
        || a->jo->jotaro_wich_attack == 3) {
            jotaro_reset_position(a);
        }
        if (a->hud_fight->qte == 1)
            qte_spe(a);
        if (a->hud_fight->qte == 2)
            qte_block(a);
        if (a->rpg->turn == 1 && a->mar->mar_wich_attack == 0) {
            wait_fight(a);
            if (a->rpg->wait_fight >= 3) {
                a->mar->mar_wich_attack = rand() % (2 + 1 - 1) + 1;
                mar_attack_positions(a);
                a->rpg->wait_fight = 0;
            }
        }
    }
}