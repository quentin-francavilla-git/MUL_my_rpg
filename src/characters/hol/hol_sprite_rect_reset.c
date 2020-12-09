/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void hol_reset_stand(v_var *a)
{
    a->hol->rect_hol_stand.left = 1544;
    a->hol->stand_duration = 0;
    a->hol->hol_wich_attack = 0;
}

void hol_reset_attack(v_var *a)
{
    a->hol->rect_hol_attack.left = 4246;
    a->hol->attack_duration = 0;
    a->hol->hol_wich_attack = 0;
}

void hol_reset(v_var *a)
{
    if (a->rpg->fight == 1) {
        hol_reset_position(a);
        a->rpg->turn = 0;
    }
    hol_reset_attack(a);
    hol_reset_stand(a);
}