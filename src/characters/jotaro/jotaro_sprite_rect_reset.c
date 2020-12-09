/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void jotaro_reset_stand(v_var *a)
{
    a->jo->rect_jotaro_stand.left = 0;
    a->jo->stand_duration = 0;
    a->jo->jotaro_wich_attack = 0;
}

void jotaro_reset_attack(v_var *a)
{
    a->jo->rect_jotaro_attack.left = 0;
    a->jo->attack_duration = 0;
    a->jo->jotaro_wich_attack = 0;
}

void jotaro_reset_while(v_var *a)
{
    a->jo->rect_jotaro_while.left = 0;
    a->jo->attack_duration = 0;
}

void jotaro_reset(v_var *a)
{
    if (a->rpg->fight == 1) {
        jotaro_reset_position(a);
        if (a->hud_fight->block_dmg == 0 || a->rpg->enemy_life <= 0)
            a->rpg->turn = 1;
        else
            a->rpg->turn = 0;
        a->hud_fight->block_dmg = 0;
    }
    jotaro_reset_attack(a);
    jotaro_reset_stand(a);
}