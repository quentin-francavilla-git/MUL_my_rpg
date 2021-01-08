/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void music_quit_fight(v_var *a)
{
    // if (a->rpg->fight == 1) {
    //     if (a->env->env >= 10 && a->env->env <= 13) {
    //         sfMusic_play(a->music->last_zone);
    //         sfMusic_setLoop(a->music->last_zone, sfTrue);
    //     }
    //     else {
    //         sfMusic_play(a->music->desert);
    //         sfMusic_setLoop(a->music->desert, sfTrue);
    //     }
    //     sfMusic_stop(a->music->fight);
    //     sfMusic_stop(a->music->boss);
    // }
}

void fight_quit2(v_var *a)
{
    music_quit_fight(a);
    a->rpg->dialogue = 0;
    a->hud_fight->armor = 0;
    a->rpg->fight = 0;
    a->hud_fight->qte = 0;
    a->hud_fight->arrow = 1;
    a->jo->jotaro_wich_attack = 0;
    a->rpg->put_enemy_life = 0;
    a->rpg->enemy_life = 100;
    a->hud_fight->fight_items = 0;

    a->rpg->turn = 0;
    a->jo->rect_jotaro_ded.left = 0;
    a->jo->jo_ded = 0;
    a->rpg->wait_key = 0;
    a->jo->jotaro_life = a->stats->hp_max;

    a->dio->dio_interact = 0;
    a->rpg->door_interact = 0;
    a->rpg->door_interact2 = 0;
    a->al->al_interact = 0;
}

void fight_quit3(v_var *a)
{
    a->mid->mid_interact = 0;
    a->joseph->joseph_interact = 0;
    a->pol->pol_interact = 0;
    a->kakyo->kakyo_interact = 0;
    a->mar->mar_interact = 0;
    a->hol->hol_interact = 0;
    a->cha->cha_interact = 0;
    a->kan->kan_interact = 0;
    a->ice->ice_interact = 0;

    a->inv->case_inv = 1;

    a->inv->pos_inv_heal_potion1.x = 888;
    a->inv->pos_inv_heal_potion1.y = 393;
    sfSprite_setPosition(a->inv->s_inv_heal_potion1,
    a->inv->pos_inv_heal_potion1);
}

void fight_quit(v_var *a)
{
    fight_quit2(a);
    fight_quit3(a);

    a->inv->pos_inv_armor_potion.x = 1015;
    a->inv->pos_inv_armor_potion.y = 393;
    sfSprite_setPosition(a->inv->s_inv_armor_potion,
    a->inv->pos_inv_armor_potion);

    a->inv->pos_inv_select.x = 868;
    a->inv->pos_inv_select.y = 379;
    sfSprite_setPosition(a->inv->s_inv_select,
    a->inv->pos_inv_select);

    a->inv->pos_inv_big_heal_potion.x = 1132;
    a->inv->pos_inv_big_heal_potion.y = 393;
    sfSprite_setPosition(a->inv->s_inv_big_heal_potion,
    a->inv->pos_inv_big_heal_potion);
}