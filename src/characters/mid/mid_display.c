/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void mid_display_fight(v_var *a)
{
    if (a->mid->mid_interact == 1 && a->rpg->fight != 1
    && a->mid->mid_ded == 0 && a->rpg->dialogue == 0) {
        a->rpg->fight = 2;
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_other->s_press_f, NULL);
    }
    else if (a->rpg->fight != 1)
        a->rpg->fight = 0;

    if (a->rpg->fight == 1 && a->mid->mid_interact == 1)
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->mid->s_mid_hud, NULL);
}

void mid_ded(v_var *a)
{
    if (a->rpg->enemy_life <= 0)
        a->mid->mid_wich_attack = 42;
}

void mid_display1(v_var *a)
{
    if (a->mid->mid_wich_attack == 0 || a->mid->mid_wich_attack == 1
    && a->mid->mid_interact == 1) {
        sfSprite_setTextureRect(a->mid->s_mid_standing,
        a->mid->rect_mid_standing);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->mid->s_mid_standing, NULL);
    }
    if (a->mid->mid_wich_attack == 1
    && a->mid->mid_interact == 1) {
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->mid->s_mid_is_attacking, NULL);
        sfSprite_setTextureRect(a->mid->s_mid_stand,
        a->mid->rect_mid_stand);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->mid->s_mid_stand, NULL);
    }
}

void mid_display_ded(v_var *a)
{
    if (a->mid->mid_wich_attack == 42) {
        sfSprite_setTextureRect(a->mid->s_mid_ded,
        a->mid->rect_mid_ded);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->mid->s_mid_ded, NULL);
    }
    if (a->mid->mid_ded == 1 && a->rpg->turn == 1 && a->rpg->fight == 1) {
        if (a->mid->gain_exp == 0)
            a->stats->xp += 1500;
        a->mid->gain_exp = 1;
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->rpg->s_you_won, NULL);
        a->hud_other->pos_press_f.x = 690;
        a->hud_other->pos_press_f.y = 570;
        sfSprite_setPosition(a->hud_other->s_press_continue,
        a->hud_other->pos_press_f);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_other->s_press_continue, NULL);
    }
}

void mid_display(v_var *a)
{
    mid_display_fight(a);
    mid_ded(a);
    mid_display1(a);
    if (a->mid->mid_wich_attack == 2
    && a->mid->mid_interact == 1) {
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->mid->s_mid_is_attacking, NULL);
        sfSprite_setTextureRect(a->mid->s_mid_attack,
        a->mid->rect_mid_attack);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->mid->s_mid_attack, NULL);
    }
    mid_display_ded(a);
}