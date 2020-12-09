/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void jotaro_reset_position(v_var *a)
{
    a->jo->jotaro_wich_attack = 0;
    a->jo->jotaro_position.x = 300;
    a->jo->jotaro_position.y = 690;
    a->jo->pos_jotaro_stand.x = a->jo->jotaro_position.x + 330;
    a->jo->pos_jotaro_stand.y = 730;
    sfSprite_setPosition(a->jo->s_jotaro_stand,
    a->jo->pos_jotaro_stand);
    sfSprite_setPosition(a->jo->s_jotaro_ded,
    a->jo->jotaro_position);
    sfSprite_setPosition(a->jo->s_jotaro_standing,
    a->jo->jotaro_position);
    sfSprite_setPosition(a->jo->s_jotaro_attack,
    a->jo->jotaro_position);
    sfSprite_setPosition(a->jo->s_jotaro_walking2,
    a->jo->jotaro_position);
    sfSprite_setPosition(a->jo->s_jotaro_walking,
    a->jo->jotaro_position);
}

void jotaro_reset_position_game_over(v_var *a)
{
    a->jo->jotaro_wich_attack = 0;
    a->jo->jotaro_position.x = -150;
    a->jo->jotaro_position.y = 690;
    a->jo->pos_jotaro_stand.x = 30;
    a->jo->pos_jotaro_stand.y = 730;
    sfSprite_setPosition(a->jo->s_jotaro_stand,
    a->jo->pos_jotaro_stand);
    sfSprite_setPosition(a->jo->s_jotaro_ded,
    a->jo->jotaro_position);
    sfSprite_setPosition(a->jo->s_jotaro_standing,
    a->jo->jotaro_position);
    sfSprite_setPosition(a->jo->s_jotaro_attack,
    a->jo->jotaro_position);
    sfSprite_setPosition(a->jo->s_jotaro_walking2,
    a->jo->jotaro_position);
    sfSprite_setPosition(a->jo->s_jotaro_walking,
    a->jo->jotaro_position);
}