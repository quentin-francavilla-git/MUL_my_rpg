/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void vs_mid_interact(v_var *a)
{
    if (a->jo->jotaro_position.x >=
    a->mid->mid_position.x - 200
    && a->jo->jotaro_position.x <=
    a->mid->mid_position.x + 200
    && a->env->env == 7) {
        a->mid->mid_interact = 1;
        a->hud_other->pos_press_f.x = 1100;
        a->hud_other->pos_press_f.y = 770;
        sfSprite_setPosition(a->hud_other->s_press_f,
        a->hud_other->pos_press_f);
    }
    else if (a->rpg->fight != 1)
        a->mid->mid_interact = 0;
}

void mid_attack_positions(v_var *a)
{
    if (a->mid->mid_wich_attack == 2) {
        if (a->jo->jotaro_life > 100)
            a->jo->jotaro_life -= 100;
        else
            a->jo->jotaro_life = 0;
        a->mid->mid_position.x = 450;
        sfSprite_setPosition(a->mid->s_mid_attack,
        a->mid->mid_position);
    }
    if (a->mid->mid_wich_attack == 1) {
        a->mid->mid_position.x = 550;
        sfSprite_setPosition(a->mid->s_mid_standing,
        a->mid->mid_position);
        a->mid->pos_mid_stand.x = 350;
        sfSprite_setPosition(a->mid->s_mid_stand,
        a->mid->pos_mid_stand);
    }
}

void put_mid_life(v_var *a)
{
    if (a->rpg->put_enemy_life == 0) {
        a->rpg->enemy_life = 8000;
        a->rpg->put_enemy_life = 1;
        a->rpg->enemy_life_multiple = 0.079125;
    }
}

void vs_mid(v_var *a)
{
    vs_mid_interact(a);
    if (a->rpg->fight == 1 && a->mid->mid_interact == 1) {
        put_mid_life(a);
        if (a->jo->jotaro_wich_attack == 0 || a->jo->jotaro_wich_attack == 4
        || a->jo->jotaro_wich_attack == 3) {
            jotaro_reset_position(a);
        }
        if (a->hud_fight->qte == 1)
            qte_spe(a);
        if (a->hud_fight->qte == 2)
            qte_block(a);
        if (a->rpg->turn == 1 && a->mid->mid_wich_attack == 0) {
            wait_fight(a);
            if (a->rpg->wait_fight >= 3) {
                a->mid->mid_wich_attack = rand() % (2 + 1 - 1) + 1;
                mid_attack_positions(a);
                a->rpg->wait_fight = 0;
            }
        }
    }
}