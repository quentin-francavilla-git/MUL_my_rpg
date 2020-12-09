/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void qte_spe(v_var *a)
{
    a->hud_fight->seconds = a->hud_fight->time.microseconds / 1000000.0;
    a->hud_fight->time = sfClock_getElapsedTime(a->hud_fight->clock);
    if (a->hud_fight->seconds > 0.01) {
        a->hud_fight->pos_star.x -= 14;
        sfClock_restart(a->hud_fight->clock);
    }

    sfSprite_setPosition(a->hud_fight->s_star, a->hud_fight->pos_star);
    if (a->hud_fight->pos_star.x <= 715)
        fail_qte(a);
}

void qte_block(v_var *a)
{
    a->hud_fight->seconds = a->hud_fight->time.microseconds / 1000000.0;
    a->hud_fight->time = sfClock_getElapsedTime(a->hud_fight->clock);
    if (a->hud_fight->seconds > 0.01) {
        a->hud_fight->pos_star.x -= 18;
        sfClock_restart(a->hud_fight->clock);
    }

    sfSprite_setPosition(a->hud_fight->s_star, a->hud_fight->pos_star);
    if (a->hud_fight->pos_star.x <= 715)
        fail_qte(a);
}

void qte_good(v_var *a)
{
    if (a->hud_fight->qte_good == 8 && a->hud_fight->qte == 2) {
        if (a->jo->jotaro_life + 1000 < a->stats->hp_max)
            a->jo->jotaro_life += 1000;
        else
            a->jo->jotaro_life = a->stats->hp_max;
        //sfMusic_play(a->music->ora);
        a->hud_fight->qte = 0;
        a->hud_fight->qte_good = 0;
        pos_star(a);
        a->jo->jotaro_position.x = 700;
        sfSprite_setPosition(a->jo->s_jotaro_while,
        a->jo->jotaro_position);
        a->jo->pos_jotaro_stand.x = 1035;
        sfSprite_setPosition(a->jo->s_jotaro_stand,
        a->jo->pos_jotaro_stand);
        a->jo->jotaro_wich_attack = 1;
        a->hud_fight->arrow = 1;
        a->hud_fight->block_dmg = 5;
    }
}

void qte(v_var *a)
{
    if (a->hud_fight->qte == 1 || a->hud_fight->qte == 2)
        qte_actions(a);
    if (a->hud_fight->qte_good == 4 && a->hud_fight->qte == 1) {
        //sfMusic_play(a->music->ora);
        a->hud_fight->qte = 0;
        a->hud_fight->qte_good = 0;
        pos_star(a);
        a->jo->jotaro_position.x = 700;
        sfSprite_setPosition(a->jo->s_jotaro_while,
        a->jo->jotaro_position);
        a->jo->pos_jotaro_stand.x = 1035;
        sfSprite_setPosition(a->jo->s_jotaro_stand,
        a->jo->pos_jotaro_stand);
        a->jo->jotaro_wich_attack = 1;
        a->hud_fight->arrow = 1;
    }
    qte_good(a);
}