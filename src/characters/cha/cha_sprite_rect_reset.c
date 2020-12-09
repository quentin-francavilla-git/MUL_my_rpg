/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void cha_reset_stand(v_var *a)
{
    a->cha->rect_cha_stand.left = 5790;
    a->cha->stand_duration = 0;
    a->cha->cha_wich_attack = 0;
}

void cha_reset_attack(v_var *a)
{
    a->cha->rect_cha_attack.left = 2316;
    a->cha->attack_duration = 0;
    a->cha->cha_wich_attack = 0;
}

void cha_reset(v_var *a)
{
    if (a->rpg->fight == 1) {
        cha_reset_position(a);
        a->rpg->turn = 0;
    }
    cha_reset_attack(a);
    cha_reset_stand(a);
}