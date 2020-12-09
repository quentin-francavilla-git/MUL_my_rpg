/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void ice_display_fight(v_var *a)
{
    if (a->ice->ice_interact == 1 && a->rpg->fight != 1
    && a->ice->ice_ded == 0 && a->rpg->dialogue == 0) {
        a->rpg->fight = 2;
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_other->s_press_f, NULL);
    }
    else if (a->rpg->fight != 1)
        a->rpg->fight = 0;

    if (a->rpg->fight == 1 && a->ice->ice_interact == 1)
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->ice->s_ice_hud, NULL);
}

void ice_ded(v_var *a)
{
    if (a->rpg->door_interact2 == 1)
        door2_display(a);
    else
        ice_display_fight(a);
    if (a->rpg->enemy_life <= 0)
        a->ice->ice_wich_attack = 42;
}

void ice_display_1(v_var *a)
{
    if (a->ice->ice_wich_attack == 0 || a->ice->ice_wich_attack == 1
    && a->ice->ice_interact == 1) {
        sfSprite_setTextureRect(a->ice->s_ice_standing,
        a->ice->rect_ice_standing);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->ice->s_ice_standing, NULL);
    }
    if (a->ice->ice_wich_attack == 1
    && a->ice->ice_interact == 1) {
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->ice->s_ice_is_attacking, NULL);
        sfSprite_setTextureRect(a->ice->s_ice_stand,
        a->ice->rect_ice_stand);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->ice->s_ice_stand, NULL);
    }
}

void ice_display_ded(v_var *a)
{
    if (a->ice->ice_ded == 1 && a->rpg->turn == 1 && a->rpg->fight == 1) {
        if (a->ice->gain_exp == 0)
            a->stats->xp += 500;
        a->ice->gain_exp = 1;
        a->inv->inv_key_1 = 1;
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->rpg->s_you_won, NULL);
        sfSprite_setTexture(a->hud_fight->s_msg,
        a->ice->t_key_1, sfTrue);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_fight->s_msg, NULL);
        a->hud_other->pos_press_f.x = 690;
        a->hud_other->pos_press_f.y = 570;
        sfSprite_setPosition(a->hud_other->s_press_continue,
        a->hud_other->pos_press_f);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_other->s_press_continue, NULL);
    }
}

void ice_display(v_var *a)
{
    ice_ded(a);
    ice_display_1(a);
    if (a->ice->ice_wich_attack == 2
    && a->ice->ice_interact == 1) {
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->ice->s_ice_is_attacking, NULL);
        sfSprite_setTextureRect(a->ice->s_ice_attack,
        a->ice->rect_ice_attack);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->ice->s_ice_attack, NULL);
    }
    if (a->ice->ice_wich_attack == 42) {
        sfSprite_setTextureRect(a->ice->s_ice_ded,
        a->ice->rect_ice_ded);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->ice->s_ice_ded, NULL);
    }
    ice_display_ded(a);
}