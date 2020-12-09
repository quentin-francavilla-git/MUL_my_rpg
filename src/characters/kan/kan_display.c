/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void kan_display_fight(v_var *a)
{
    if (a->kan->kan_interact == 1 && a->rpg->fight != 1
    && a->kan->kan_ded == 0 && a->rpg->dialogue == 0) {
        a->rpg->fight = 2;
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_other->s_press_f, NULL);
    }
    else if (a->rpg->fight != 1)
        a->rpg->fight = 0;

    if (a->rpg->fight == 1 && a->kan->kan_interact == 1)
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->kan->s_kan_hud, NULL);
}

void kan_ded(v_var *a)
{
    if (a->rpg->enemy_life <= 0)
        a->kan->kan_wich_attack = 42;
}

void kan_display1(v_var *a)
{
    if (a->kan->kan_wich_attack == 0) {
        sfSprite_setTextureRect(a->kan->s_kan_standing,
        a->kan->rect_kan_standing);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->kan->s_kan_standing, NULL);
    }
    if (a->kan->kan_wich_attack == 1
    && a->kan->kan_interact == 1) {
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->kan->s_kan_is_attacking, NULL);
        sfSprite_setTextureRect(a->kan->s_kan_stand,
        a->kan->rect_kan_stand);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->kan->s_kan_stand, NULL);
    }
}

void kan_display_ded(v_var *a)
{
    if (a->kan->kan_wich_attack == 42) {
        sfSprite_setTextureRect(a->kan->s_kan_ded,
        a->kan->rect_kan_ded);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->kan->s_kan_ded, NULL);
    }
    if (a->kan->kan_ded == 1 && a->rpg->turn == 1 && a->rpg->fight == 1) {
        if (a->kan->gain_exp == 0)
            a->stats->xp += 500;
        a->kan->gain_exp = 1;
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

void kan_display(v_var *a)
{
    kan_display_fight(a);
    kan_ded(a);
    kan_display1(a);

    if (a->kan->kan_wich_attack == 2
    && a->kan->kan_interact == 1) {
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->kan->s_kan_is_attacking, NULL);
        sfSprite_setTextureRect(a->kan->s_kan_attack,
        a->kan->rect_kan_attack);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->kan->s_kan_attack, NULL);
    }
    kan_display_ded(a);
}