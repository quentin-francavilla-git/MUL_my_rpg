/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void mar_display_fight(v_var *a)
{
    if (a->mar->mar_interact == 1 && a->rpg->fight != 1
    && a->mar->mar_ded == 0 && a->rpg->dialogue == 0) {
        a->rpg->fight = 2;
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_other->s_press_f, NULL);
    }
    else if (a->rpg->fight != 1)
        a->rpg->fight = 0;

    if (a->rpg->fight == 1 && a->mar->mar_interact == 1)
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->mar->s_mar_hud, NULL);
}

void mar_ded(v_var *a)
{
    if (a->rpg->enemy_life <= 0)
        a->mar->mar_wich_attack = 42;
}

void mar_display1(v_var *a)
{
    if (a->mar->mar_wich_attack == 0) {
        sfSprite_setTextureRect(a->mar->s_mar_standing,
        a->mar->rect_mar_standing);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->mar->s_mar_standing, NULL);
    }
    if (a->mar->mar_wich_attack == 1
    && a->mar->mar_interact == 1) {
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->mar->s_mar_is_attacking, NULL);
        sfSprite_setTextureRect(a->mar->s_mar_stand,
        a->mar->rect_mar_stand);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->mar->s_mar_stand, NULL);
    }
}

void mar_display_ded(v_var *a)
{
    if (a->mar->mar_wich_attack == 42) {
        sfSprite_setTextureRect(a->mar->s_mar_ded,
        a->mar->rect_mar_ded);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->mar->s_mar_ded, NULL);
    }
    if (a->mar->mar_ded == 1 && a->rpg->turn == 1 && a->rpg->fight == 1) {
        if (a->mar->gain_exp == 0)
            a->stats->xp += 500;
        a->mar->gain_exp = 1;
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

void mar_display(v_var *a)
{
    mar_display_fight(a);
    mar_ded(a);
    mar_display1(a);
    if (a->mar->mar_wich_attack == 2
    && a->mar->mar_interact == 1) {
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->mar->s_mar_is_attacking, NULL);
        sfSprite_setTextureRect(a->mar->s_mar_attack,
        a->mar->rect_mar_attack);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->mar->s_mar_attack, NULL);
    }
    mar_display_ded(a);
}