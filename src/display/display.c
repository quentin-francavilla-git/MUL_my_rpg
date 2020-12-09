/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void env_display(v_var *a)
{
    sfRenderWindow_drawSprite(a->_ptr->window,
    a->env->s_env, NULL);
}

void boss_display(v_var *a)
{
    if (a->env->env == 9 || a->env->env == 13) {
        sfSprite_setScale(a->hud_fight->s_fight, a->hud_fight->scale_boss);
        sfSprite_setTexture(a->hud_fight->s_fight,
        a->hud_fight->t_boss, sfTrue);
    }
    else {
        sfSprite_setScale(a->hud_fight->s_fight, a->hud_fight->scale_fight);
        sfSprite_setTexture(a->hud_fight->s_fight,
        a->hud_fight->t_fight, sfTrue);
    }
}

void characters_display(v_var *a)
{
    if (a->env->env == 13)
        dio_display(a);
    if (a->env->env == 7)
        mid_display(a);
    if (a->env->env == 2)
        kan_display(a);
    if (a->env->env == 9)
        ice_display(a);
    if (a->env->env == 4)
        cha_display(a);
    if (a->env->env == 15)
        hol_display(a);
    if (a->env->env == 11)
        mar_display(a);
    if (a->env->env == 12)
        joseph_display(a);
    if (a->env->env == 1)
        kakyo_display(a);
    if (a->env->env == 5)
        pol_display(a);
}

void display(v_var *a)
{
    sfRenderWindow_clear(a->_ptr->window, sfBlack);
    env_display(a);
    if (a->rpg->fight == 1)
        fight_display(a);
    if (a->rpg->dialogue == 1)
        dialogues_display(a);
    characters_display(a);
    jotaro_display(a);
    life_bar(a);
    quests_display(a);
    inventory_display(a);
    display_items(a);
    stats_display(a);
    sfRenderWindow_display(a->_ptr->window);
}