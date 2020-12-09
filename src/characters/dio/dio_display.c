/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void dio_display_fight(v_var *a)
{
    if (a->dio->dio_interact == 1 && a->rpg->fight != 1
    && a->dio->dio_ded == 0 && a->rpg->dialogue == 0) {
        a->rpg->fight = 2;
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_other->s_press_f, NULL);
    }
    else if (a->rpg->fight != 1)
        a->rpg->fight = 0;

    if (a->rpg->fight == 1 && a->dio->dio_interact == 1)
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->dio->s_dio_hud, NULL);
}

void dio_ded(v_var *a)
{
    if (a->rpg->enemy_life <= 0)
        a->dio->dio_wich_attack = 42;
}

void dio_display_1(v_var *a)
{
    if (a->dio->dio_wich_attack == 0 || a->dio->dio_wich_attack == 1
    && a->dio->dio_interact == 1) {
        sfSprite_setTextureRect(a->dio->s_dio_standing,
        a->dio->rect_dio_standing);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->dio->s_dio_standing, NULL);
    }
    if (a->dio->dio_wich_attack == 1
    && a->dio->dio_interact == 1) {
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->dio->s_dio_is_attacking, NULL);
        sfSprite_setTextureRect(a->dio->s_dio_stand,
        a->dio->rect_dio_stand);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->dio->s_dio_stand, NULL);
    }
}

void dio_display_ded(v_var *a)
{
    if (a->dio->dio_ded == 1 && a->rpg->turn == 1 && a->rpg->fight == 1) {
        if (a->dio->gain_exp == 0)
            a->stats->xp += 500;
        a->dio->gain_exp = 1;
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->rpg->s_you_won, NULL);
        a->hud_other->pos_press_f.x = 690;
        a->hud_other->pos_press_f.y = 570;
        sfSprite_setPosition(a->hud_other->s_press_continue,
        a->hud_other->pos_press_f);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_other->s_press_continue, NULL);
    }
    if (a->dio->dio_ded == 1 && a->rpg->fight != 1)
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_other->s_gg, NULL);
}

void dio_display(v_var *a)
{
    dio_display_fight(a);
    dio_ded(a);
    dio_display_1(a);
    if (a->dio->dio_wich_attack == 2
    && a->dio->dio_interact == 1) {
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->dio->s_dio_is_attacking, NULL);
        sfSprite_setTextureRect(a->dio->s_dio_attack,
        a->dio->rect_dio_attack);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->dio->s_dio_attack, NULL);
    }
    if (a->dio->dio_wich_attack == 42) {
        sfSprite_setTextureRect(a->dio->s_dio_ded,
        a->dio->rect_dio_ded);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->dio->s_dio_ded, NULL);
    }
    dio_display_ded(a);
}