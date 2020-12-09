/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../include/my_rpg.h"
#include "../lib/my/lib.h"

void cursor(v_var *a)
{
    sfRenderWindow_setMouseCursorVisible(a->_ptr->window, sfFalse);
    a->_base->mousei.x = (int)a->_base->mouse.x - 70;
    a->_base->mousei.y = (int)a->_base->mouse.y - 70;
}

void window(v_var *a, char **av)
{
    start_window(a);
    while (sfRenderWindow_isOpen(a->_ptr->window)) {
        a->_base->mouse = sfMouse_getPosition((sfWindow *)a->_ptr->window);
        if (a->_ptr->status == 1)
            menu(a);
        if (a->_ptr->status == 0)
            rpg(a);
        if (a->_ptr->status == 4)
            pause_game(a);
    }
    destroy(a);
}

void malloc_struct2(v_var *a)
{
    a->music = malloc(sizeof(t_music));
    a->_ptr = malloc(sizeof(t_window));
    a->_base = malloc(sizeof(t_base));
    a->menu = malloc(sizeof(t_menu));
    a->rpg = malloc(sizeof(t_rpg));
    a->jo = malloc(sizeof(t_jotaro));
    a->dio = malloc(sizeof(t_dio));
    a->al = malloc(sizeof(t_al));
    a->mid = malloc(sizeof(t_mid));
    a->quests = malloc(sizeof(t_quests));
    a->joseph = malloc(sizeof(t_joseph));
    a->pol = malloc(sizeof(t_pol));
    a->kakyo = malloc(sizeof(t_kakyo));
}

void malloc_struct(v_var *a)
{
    malloc_struct2(a);
    a->mar = malloc(sizeof(t_mar));
    a->hol = malloc(sizeof(t_hol));
    a->cha = malloc(sizeof(t_cha));
    a->ice = malloc(sizeof(t_ice));
    a->kan = malloc(sizeof(t_kan));
    a->env = malloc(sizeof(t_env));
    a->hud_other = malloc(sizeof(t_hud_other));
    a->hud_fight = malloc(sizeof(t_hud_fight));
    a->inv = malloc(sizeof(t_inv));
    a->items = malloc(sizeof(t_items));
    a->stats = malloc(sizeof(t_stats));
}

int main(int ac, char **av)
{
    v_var *a = malloc(sizeof(v_var));
    create_all(a, av);

    if (ac == 2 && av[1][1] == 'h' && av[1][2] == 0) {
        my_putstr("\n\n\t\tThe RPJoJo !\n\n\t\tAn Epitech project.\n\n\n");
        destroy(a);
        return (0);
    }
    else {
        window(a, av);
        return (0);
    }
    return (0);
}