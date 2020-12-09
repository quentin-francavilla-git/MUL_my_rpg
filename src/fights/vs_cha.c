/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void vs_cha_interact(v_var *a)
{
    if (a->jo->jotaro_position.x >=
    a->cha->cha_position.x - 200
    && a->jo->jotaro_position.x <=
    a->cha->cha_position.x + 200
    && a->env->env == 4) {
        a->cha->cha_interact = 1;
        a->hud_other->pos_press_f.x = 1100;
        a->hud_other->pos_press_f.y = 770;
        sfSprite_setPosition(a->hud_other->s_press_f,
        a->hud_other->pos_press_f);
    }
    else if (a->rpg->fight != 1)
        a->cha->cha_interact = 0;
}

void cha_attack_positions(v_var *a)
{
    if (a->cha->cha_wich_attack == 2) {
        if (a->jo->jotaro_life > 100)
            a->jo->jotaro_life -= 100;
        else
            a->jo->jotaro_life = 0;
        a->cha->cha_position.x = 450;
        sfSprite_setPosition(a->cha->s_cha_attack,
        a->cha->cha_position);
    }
    if (a->cha->cha_wich_attack == 1) {
        a->cha->cha_position.x = 550;
        sfSprite_setPosition(a->cha->s_cha_standing,
        a->cha->cha_position);
        a->cha->pos_cha_stand.x = 410;
        sfSprite_setPosition(a->cha->s_cha_stand,
        a->cha->pos_cha_stand);
    }
}

void put_cha_life(v_var *a)
{
    if (a->rpg->put_enemy_life == 0) {
        a->rpg->enemy_life = 4000;
        a->rpg->put_enemy_life = 1;
        a->rpg->enemy_life_multiple = 0.15825;
    }
}

void vs_cha(v_var *a)
{
    vs_cha_interact(a);
    if (a->rpg->fight == 1 && a->cha->cha_interact == 1) {
        put_cha_life(a);
        if (a->jo->jotaro_wich_attack == 0 || a->jo->jotaro_wich_attack == 4
        || a->jo->jotaro_wich_attack == 3) {
            jotaro_reset_position(a);
        }
        if (a->hud_fight->qte == 1)
            qte_spe(a);
        if (a->hud_fight->qte == 2)
            qte_block(a);
        if (a->rpg->turn == 1 && a->cha->cha_wich_attack == 0) {
            wait_fight(a);
            if (a->rpg->wait_fight >= 3) {
                a->cha->cha_wich_attack = rand() % (2 + 1 - 1) + 1;
                cha_attack_positions(a);
                a->rpg->wait_fight = 0;
            }
        }
    }
}