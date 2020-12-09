/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void cha_display_fight(v_var *a)
{
    if (a->cha->cha_interact == 1 && a->rpg->fight != 1
    && a->cha->cha_ded == 0 && a->rpg->dialogue == 0) {
        a->rpg->fight = 2;
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_other->s_press_f, NULL);
    }
    else if (a->rpg->fight != 1)
        a->rpg->fight = 0;

    if (a->rpg->fight == 1 && a->cha->cha_interact == 1)
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->cha->s_cha_hud, NULL);
}

void cha_ded(v_var *a)
{
    if (a->rpg->enemy_life <= 0)
        a->cha->cha_wich_attack = 42;
}

void cha_display_1(v_var *a)
{
    if (a->cha->cha_wich_attack == 0) {
        sfSprite_setTextureRect(a->cha->s_cha_standing,
        a->cha->rect_cha_standing);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->cha->s_cha_standing, NULL);
    }
    if (a->cha->cha_wich_attack == 1
    && a->cha->cha_interact == 1) {
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->cha->s_cha_is_attacking, NULL);
        sfSprite_setTextureRect(a->cha->s_cha_stand,
        a->cha->rect_cha_stand);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->cha->s_cha_stand, NULL);
    }
}

void cha_display_ded(v_var *a)
{
    if (a->cha->cha_ded == 1 && a->rpg->turn == 1 && a->rpg->fight == 1) {
        if (a->cha->gain_exp == 0)
            a->stats->xp += 500;
        a->cha->gain_exp = 1;
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

void cha_display(v_var *a)
{
    cha_display_fight(a);
    cha_ded(a);
    cha_display_1(a);
    if (a->cha->cha_wich_attack == 2
    && a->cha->cha_interact == 1) {
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->cha->s_cha_is_attacking, NULL);
        sfSprite_setTextureRect(a->cha->s_cha_attack,
        a->cha->rect_cha_attack);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->cha->s_cha_attack, NULL);
    }
    if (a->cha->cha_wich_attack == 42) {
        sfSprite_setTextureRect(a->cha->s_cha_ded,
        a->cha->rect_cha_ded);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->cha->s_cha_ded, NULL);
    }
    cha_display_ded(a);
}