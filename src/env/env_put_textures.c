/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void cave(v_var *a)
{
    if (a->env->env == 10)
        sfSprite_setTexture(a->env->s_env,
        a->env->t_cave_1, sfTrue);
    if (a->env->env == 11)
        sfSprite_setTexture(a->env->s_env,
        a->env->t_cave_2, sfTrue);
    if (a->env->env == 12)
        sfSprite_setTexture(a->env->s_env,
        a->env->t_cave_3, sfTrue);
    if (a->env->env == 13)
        sfSprite_setTexture(a->env->s_env,
        a->env->t_cave_4, sfTrue);
}

void hub(v_var *a)
{
    if (a->env->env == 14)
        sfSprite_setTexture(a->env->s_env,
        a->env->t_hub_1, sfTrue);
    if (a->env->env == 15)
        sfSprite_setTexture(a->env->s_env,
        a->env->t_hub_2, sfTrue);
}

void ville(v_var *a)
{
    if (a->env->env == 4)
        sfSprite_setTexture(a->env->s_env,
        a->env->t_ville_1, sfTrue);
    if (a->env->env == 5)
        sfSprite_setTexture(a->env->s_env,
        a->env->t_ville_2, sfTrue);
    if (a->env->env == 6)
        sfSprite_setTexture(a->env->s_env,
        a->env->t_ville_3, sfTrue);
    if (a->env->env == 7)
        sfSprite_setTexture(a->env->s_env,
        a->env->t_ville_4, sfTrue);
    if (a->env->env == 8)
        sfSprite_setTexture(a->env->s_env,
        a->env->t_ville_5, sfTrue);
    if (a->env->env == 9)
        sfSprite_setTexture(a->env->s_env,
        a->env->t_ville_6, sfTrue);
}

void put_texture(v_var *a)
{
    if (a->env->env == 1)
        sfSprite_setTexture(a->env->s_env,
        a->env->t_desert1_1, sfTrue);
    if (a->env->env == 2)
        sfSprite_setTexture(a->env->s_env,
        a->env->t_desert1_2, sfTrue);
    if (a->env->env == 3)
        sfSprite_setTexture(a->env->s_env,
        a->env->t_desert1_3, sfTrue);
    ville(a);
    cave(a);
    hub(a);
}