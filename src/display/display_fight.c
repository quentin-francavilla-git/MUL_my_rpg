/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void fight_display_menu(v_var *a)
{
    sfRenderWindow_drawSprite(a->_ptr->window,
    a->hud_fight->s_attack, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window,
    a->hud_fight->s_spe, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window,
    a->hud_fight->s_block, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window,
    a->hud_fight->s_arrow, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window,
    a->hud_fight->s_items, NULL);
}

void fight_display_qte_spe(v_var *a)
{
    if (a->hud_fight->qte == 1)
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_fight->s_bspe, NULL);
    else
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_fight->s_bblock, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window,
    a->hud_fight->s_star, NULL);
    if (a->hud_fight->explo != 0) {
        sfSprite_setTextureRect(a->hud_fight->s_explo,
        a->hud_fight->rect_explo);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_fight->s_explo, NULL);
    }
}

void life_bar(v_var *a)
{
    if (a->rpg->fight == 1) {
        sfSprite_setTextureRect(a->hud_fight->s_v_bar1,
        a->hud_fight->rect_v_var1);
        sfSprite_setTextureRect(a->hud_fight->s_v_bar2,
        a->hud_fight->rect_v_var2);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_fight->s_v_bar1, NULL);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_fight->s_v_bar2, NULL);
    }
}

void fight_display(v_var *a)
{
    boss_display(a);
    sfRenderWindow_drawSprite(a->_ptr->window,
    a->hud_fight->s_fight, NULL);
    sfRenderWindow_drawSprite(a->_ptr->window,
    a->hud_fight->s_bb, NULL);

    if (a->hud_fight->hud_menu == 0 && a->hud_fight->qte == 0
    && a->jo->jotaro_wich_attack == 0 && a->rpg->turn == 0
    && a->jo->jotaro_life > 0 && a->hud_fight->fight_items == 0) {
        fight_display_menu(a);
    }
    if (a->hud_fight->qte == 1 || a->hud_fight->qte == 2) {
        fight_display_qte_spe(a);
    }
    fight_display_items(a);
}