/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void jotaro_display_1(v_var *a)
{
    if (a->jo->jotaro_wich_attack == 0) {
        sfSprite_setTextureRect(a->jo->s_jotaro_standing,
        a->jo->rect_jotaro_standing);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->jo->s_jotaro_standing, NULL);
    }
    if (a->jo->jotaro_wich_attack == 1) {
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->jo->s_you_are_attacking, NULL);

        sfSprite_setTextureRect(a->jo->s_jotaro_while,
        a->jo->rect_jotaro_while);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->jo->s_jotaro_while, NULL);

        sfSprite_setTextureRect(a->jo->s_jotaro_stand,
        a->jo->rect_jotaro_stand);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->jo->s_jotaro_stand, NULL);
    }
}

void jotaro_display_2(v_var *a)
{
    if (a->jo->jotaro_wich_attack == 2) {
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->jo->s_you_are_attacking, NULL);
        sfSprite_setTextureRect(a->jo->s_jotaro_attack,
        a->jo->rect_jotaro_attack);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->jo->s_jotaro_attack, NULL);
    }
    if (a->jo->jotaro_wich_attack == 3) {
        sfSprite_setTextureRect(a->jo->s_jotaro_walking,
        a->jo->rect_jotaro_walking);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->jo->s_jotaro_walking, NULL);
    }
    if (a->jo->jotaro_wich_attack == 4) {
        sfSprite_setTextureRect(a->jo->s_jotaro_walking2,
        a->jo->rect_jotaro_walking2);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->jo->s_jotaro_walking2, NULL);
    }
}

void jotaro_display_3(v_var *a)
{
    if (a->jo->jotaro_wich_attack == 42) {
        sfSprite_setTextureRect(a->jo->s_jotaro_ded,
        a->jo->rect_jotaro_ded);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->jo->s_jotaro_ded, NULL);
    }
    if (a->jo->jo_ded == 1 && a->rpg->turn == 0 && a->rpg->fight == 1) {
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->jo->s_you_lost, NULL);
        a->hud_other->pos_press_f.x = 690;
        a->hud_other->pos_press_f.y = 570;
        sfSprite_setPosition(a->hud_other->s_press_continue,
        a->hud_other->pos_press_f);
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->hud_other->s_press_continue, NULL);
    }
}

void jotaro_display(v_var *a)
{
    jotaro_display_1(a);
    jotaro_display_2(a);
    jotaro_display_3(a);

    if (a->rpg->fight == 1)
        sfRenderWindow_drawSprite(a->_ptr->window,
        a->jo->s_jotaro_hud, NULL);
}