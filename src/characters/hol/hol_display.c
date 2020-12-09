/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void hol_display_fight(v_var *a)
{
    if (a->hol->hol_interact == 1 && a->rpg->fight != 1
    && a->hol->hol_ded == 0 && a->rpg->dialogue == 0) {
        a->rpg->fight = 2;
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_other->s_press_f, NULL);
    }
    else if (a->rpg->fight != 1)
        a->rpg->fight = 0;

    if (a->rpg->fight == 1 && a->hol->hol_interact == 1)
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hol->s_hol_hud, NULL);
}

void hol_ded(v_var *a)
{
    if (a->rpg->enemy_life <= 0)
        a->hol->hol_wich_attack = 42;
}

void hol_display_ded(v_var *a)
{
    if (a->hol->hol_ded == 1 && a->rpg->turn == 1 && a->rpg->fight == 1) {
        if (a->hol->gain_exp == 0)
            a->stats->xp += 500;
        a->hol->gain_exp = 1;
        a->inv->inv_key_2 = 1;
        sfSprite_setTexture(a->hud_fight->s_msg,
        a->hol->t_key_2, sfTrue);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_fight->s_msg, NULL);
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

void hol_display_1(v_var *a)
{
    if (a->hol->hol_wich_attack == 0 || a->hol->hol_wich_attack == 1
    && a->hol->hol_interact == 1) {
        sfSprite_setTextureRect(a->hol->s_hol_standing,
        a->hol->rect_hol_standing);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hol->s_hol_standing, NULL);
    }
    if (a->hol->hol_wich_attack == 1
    && a->hol->hol_interact == 1) {
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hol->s_hol_is_attacking, NULL);
        sfSprite_setTextureRect(a->hol->s_hol_stand,
        a->hol->rect_hol_stand);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hol->s_hol_stand, NULL);
    }
}

void hol_display(v_var *a)
{
    hol_display_fight(a);
    hol_ded(a);
    hol_display_1(a);
    if (a->hol->hol_wich_attack == 2
    && a->hol->hol_interact == 1) {
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hol->s_hol_is_attacking, NULL);
        sfSprite_setTextureRect(a->hol->s_hol_attack,
        a->hol->rect_hol_attack);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hol->s_hol_attack, NULL);
    }
    if (a->hol->hol_wich_attack == 42) {
        sfSprite_setTextureRect(a->hol->s_hol_ded,
        a->hol->rect_hol_ded);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hol->s_hol_ded, NULL);
    }
    hol_display_ded(a);
}