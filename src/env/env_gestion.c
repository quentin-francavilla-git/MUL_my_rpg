/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void change_env(v_var *a)
{
    if (a->jo->jotaro_position.x >= 1600 && a->env->enemy_ded == 1
    && a->env->env != 13 && a->env->env != 15 && a->env->env != 9) {
        a->env->enemy_ded = 1;
        a->jo->jotaro_position.x = -150;
        a->env->env += 1;
    }
    if (a->jo->jotaro_position.x <= -220 && a->env->env != 1
    && a->env->env != 14) {
        a->env->enemy_ded = 1;
        a->jo->jotaro_position.x = 1500;
        a->env->env -= 1;
    }
    if (a->env->env == 14 && a->jo->jotaro_position.x <= -220) {
        a->env->enemy_ded = 1;
        a->jo->jotaro_position.x = 500;
        a->env->env = 5;
    }
}

void env_ded_enemy2(v_var *a)
{
    if (a->env->env == 7) {
        if (a->mid->mid_ded == 1)
            a->env->enemy_ded = 1;
        else
            a->env->enemy_ded = 0;
    }
    if (a->env->env == 11) {
        if (a->mar->mar_ded == 1)
            a->env->enemy_ded = 1;
        else
            a->env->enemy_ded = 0;
    }
}

void env_ded_enemy(v_var *a)
{
    if (a->env->env == 2) {
        if (a->kan->kan_ded == 1)
            a->env->enemy_ded = 1;
        else
            a->env->enemy_ded = 0;
    }
    if (a->env->env == 4) {
        if (a->cha->cha_ded == 1)
            a->env->enemy_ded = 1;
        else
            a->env->enemy_ded = 0;
    }
    env_ded_enemy2(a);
}

void env_gestion(v_var *a)
{
    //env_ded_enemy(a);
    change_env(a);
    put_texture(a);
}