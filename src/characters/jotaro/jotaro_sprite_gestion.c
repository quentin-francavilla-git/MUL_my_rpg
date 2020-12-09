/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void jotaro_move(v_var *a)
{
    if (a->jo->jotaro_wich_attack == 3 && a->jo->jotaro_position.x < 1600)
        a->jo->jotaro_position.x += 7;
    if (a->jo->jotaro_wich_attack == 4 && a->jo->jotaro_position.x > -245)
        a->jo->jotaro_position.x -= 7;

    a->jo->pos_jotaro_stand.x = a->jo->jotaro_position.x + 330;
    sfSprite_setPosition(a->jo->s_jotaro_stand, a->jo->pos_jotaro_stand);
    sfSprite_setPosition(a->jo->s_jotaro_attack, a->jo->jotaro_position);
    sfSprite_setPosition(a->jo->s_jotaro_standing, a->jo->jotaro_position);
    sfSprite_setPosition(a->jo->s_jotaro_walking2, a->jo->jotaro_position);
    sfSprite_setPosition(a->jo->s_jotaro_walking, a->jo->jotaro_position);
}

void jotaro_stand_gestion(v_var *a)
{
    if (a->jo->jotaro_wich_attack == 1) {
        a->jo->seconds = a->jo->time.microseconds / 1000000.0;
        a->jo->time = sfClock_getElapsedTime(a->jo->clock);
        if (a->jo->seconds > 0.01) {
            if (a->rpg->enemy_life > 6 + a->hud_fight->block_dmg +
            a->stats->strength) {
                a->rpg->enemy_life -= 6 + a->hud_fight->block_dmg +
                a->stats->strength;
            }
            else
                a->rpg->enemy_life = 0;
            move_rect_jotaro_stand(a);
            sfClock_restart(a->jo->clock);
        }
    }
}

void jotaro_animation_gestion(v_var *a)
{
    a->jo->seconds2 = a->jo->time2.microseconds / 1000000.0;
    a->jo->time2 = sfClock_getElapsedTime(a->jo->clock2);
    if (a->jo->seconds2 > 0.06) {
        if (a->jo->jotaro_wich_attack == 2)
            move_rect_jotaro_attack(a);
        if (a->jo->jotaro_wich_attack == 0)
            move_rect_jotaro_standing(a);
        if (a->jo->jotaro_wich_attack == 42)
            move_rect_jotaro_ded(a);
        sfClock_restart(a->jo->clock2);
    }
}

void jotaro_sprite_gestion(v_var *a)
{
    if (a->rpg->fight != 1)
        jotaro_move(a);
    jotaro_stand_gestion(a);
    jotaro_animation_gestion(a);
    a->jo->seconds3 = a->jo->time3.microseconds / 1000000.0;
    a->jo->time3 = sfClock_getElapsedTime(a->jo->clock3);
    if (a->jo->seconds3 > 0.04) {
        if (a->jo->jotaro_wich_attack == 3)
            move_rect_jotaro_walking(a);
        if (a->jo->jotaro_wich_attack == 4)
            move_rect_jotaro_walking2(a);
        sfClock_restart(a->jo->clock3);
    }

    a->jo->seconds4 = a->jo->time4.microseconds / 1000000.0;
    a->jo->time4 = sfClock_getElapsedTime(a->jo->clock4);
    if (a->jo->seconds4 > 0.1) {
        if (a->jo->jotaro_wich_attack == 1)
            move_rect_jotaro_while(a);
        sfClock_restart(a->jo->clock4);
    }
}