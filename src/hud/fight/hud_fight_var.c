/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void pos_star(v_var *a)
{
    a->hud_fight->pos_star.x = 1230;
    if (a->hud_fight->random_y == 1)
        a->hud_fight->pos_star.y = 478;
    if (a->hud_fight->random_y == 2)
        a->hud_fight->pos_star.y = 550;
    if (a->hud_fight->random_y == 3)
        a->hud_fight->pos_star.y = 622;
}

void explosion(v_var *a)
{
    a->hud_fight->explo_duration = 0;
    a->hud_fight->explo = 0;
    a->hud_fight->scale_explo.x = 1;
    a->hud_fight->scale_explo.y = 1;
    a->hud_fight->pos_explo.x = 735;
    a->hud_fight->pos_explo.y = 500;

    a->hud_fight->rect_explo.top = 0;
    a->hud_fight->rect_explo.left = 0;
    a->hud_fight->rect_explo.width = 102;
    a->hud_fight->rect_explo.height = 102;
}

void variables_hud_fight2(v_var *a)
{
    a->hud_fight->hud_menu = 0;
    a->hud_fight->arrow = 1;
    a->hud_fight->qte = 0;
    a->hud_fight->random_y = rand() % (3 + 1 - 1) + 1;
    a->hud_fight->qte_good = 0;

    a->hud_fight->scale_fight.x = 0.9;
    a->hud_fight->scale_fight.y = 0.9;
    a->hud_fight->pos_fight.x = 800;
    a->hud_fight->pos_fight.y = 100;

    a->hud_fight->scale_bb.x = 0.8;
    a->hud_fight->scale_bb.y = 0.8;
    a->hud_fight->pos_bb.x = 640;
    a->hud_fight->pos_bb.y = 370;


    a->hud_fight->scale_hud_menu.x = 0.8;
    a->hud_fight->scale_hud_menu.y = 0.8;
}

void variables_hud_fight3(v_var *a)
{
    a->hud_fight->pos_attack.x = 750;
    a->hud_fight->pos_attack.y = 410;

    a->hud_fight->pos_spe.x = 750;
    a->hud_fight->pos_spe.y = 475;

    a->hud_fight->pos_block.x = 750;
    a->hud_fight->pos_block.y = 545;

    a->hud_fight->pos_items.x = 750;
    a->hud_fight->pos_items.y = 615;

    a->hud_fight->pos_arrow.x = 690;
    a->hud_fight->pos_arrow.y = 410;

    a->hud_fight->scale_star.x = 0.8;
    a->hud_fight->scale_star.y = 0.8;

    a->hud_fight->pos_v_bar1.x = 290;
    a->hud_fight->pos_v_bar1.y = 123;
}

void variables_hud_fight(v_var *a)
{
    variables_hud_fight2(a);
    variables_hud_fight3(a);
    variables_hud_fight4(a);
    a->hud_fight->rect_v_var1.top = 0;
    a->hud_fight->rect_v_var1.left = 0;
    a->hud_fight->rect_v_var1.width = 633;
    a->hud_fight->rect_v_var1.height = 21;
    a->hud_fight->pos_v_bar2.x = 1623;
    a->hud_fight->pos_v_bar2.y = 139;
    a->hud_fight->rect_v_var2.top = 0;
    a->hud_fight->rect_v_var2.left = 0;
    a->hud_fight->rect_v_var2.width = 633;
    a->hud_fight->rect_v_var2.height = 21;
    a->rpg->enemy_life = 100;
    a->rpg->enemy_life_multiple = 0;
    a->jo->pos_you_are_attacking.x = 685;
    a->jo->pos_you_are_attacking.y = 440;
    pos_star(a);
    explosion(a);
}