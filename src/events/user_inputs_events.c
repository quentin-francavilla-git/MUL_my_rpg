/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void pause_event(v_var *a)
{
    if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeyP)) {
        a->_ptr->status = 4;
    }
}

void win_event(v_var *a)
{
    if (a->dio->dio_ded == 1 && a->rpg->fight != 1
    && sfKeyboard_isKeyPressed(sfKeySpace)) {
        // sfMusic_stop(a->music->last_zone);
        // sfMusic_play(a->music->gg);
        // sfMusic_setLoop(a->music->gg, sfTrue);
        a->hud_other->gg += 1;
    }
    if (a->hud_other->gg >= 3) {
        //sfMusic_stop(a->music->gg);
        title_reset(a);
        a->_ptr->status = 1;
    }
}

void open_fight_menu(v_var *a)
{
    if (a->rpg->fight == 1 && a->hud_fight->qte == 0
    && a->hud_fight->fight_items == 0) {
        fight_menu(a);
    }
}

void interactions_with_space(v_var *a)
{
    if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeySpace) && a->rpg->fight == 2) {
        a->rpg->dialogue = 1;
    }
}

void users_input(v_var *a)
{
    reset_after_game(a);
    interactions_with_space(a);
    if (a->_ptr->event.type == sfEvtKeyPressed
    && sfKeyboard_isKeyPressed(sfKeyX) && a->rpg->fight != 0) {
        fight_quit(a);
    }
    if (a->rpg->fight != 1 && a->inv->inv_open == 0 && a->rpg->dialogue == 0
    && a->quests->quests_open == 0 && a->dio->dio_ded != 1) {
        move(a);
    }
    open_fight_menu(a);
    pause_event(a);
    win_event(a);
    dialogues(a);
    inventory_interactions(a);
    quests_interactions(a);
    items_interactions(a);
    fight_items_interactions(a);
    qte(a);
}