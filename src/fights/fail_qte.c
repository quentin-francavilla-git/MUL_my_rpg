/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void fail_qte2(v_var *a)
{
    pos_star(a);
    a->rpg->turn = 1;
    a->hud_fight->qte = 0;
    a->hud_fight->qte_good = 0;
    a->hud_fight->arrow = 1;

    if (a->env->env == 13) {
        a->dio->dio_wich_attack = 1;
        dio_attack_positions(a);
    }
    if (a->env->env == 7) {
        a->mid->mid_wich_attack = 1;
        mid_attack_positions(a);
    }
    if (a->env->env == 2) {
        a->kan->kan_wich_attack = 1;
        kan_attack_positions(a);
    }
}

void fail_qte(v_var *a)
{
    fail_qte2(a);
    if (a->env->env == 9) {
        a->ice->ice_wich_attack = 1;
        ice_attack_positions(a);
    }
    if (a->env->env == 4) {
        a->cha->cha_wich_attack = 1;
        cha_attack_positions(a);
    }
    if (a->env->env == 15) {
        a->hol->hol_wich_attack = 1;
        hol_attack_positions(a);
    }
    if (a->env->env == 11) {
        a->mar->mar_wich_attack = 1;
        mar_attack_positions(a);
    }
}