/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../include/my_rpg.h"
#include "../../../lib/my/lib.h"

void create_sprite_quests2(v_var *a)
{
    a->quests->t_quests =
    sfTexture_createFromFile("./img/quests/quest_menu.png", NULL);
    a->quests->s_quests = sfSprite_create();
    sfSprite_setTexture(a->quests->s_quests,
    a->quests->t_quests, sfTrue);
    sfSprite_setPosition(a->quests->s_quests,
    a->quests->pos_quests);
    sfSprite_setScale(a->quests->s_quests, a->quests->scale_quests);

    a->quests->t_q_hol =
    sfTexture_createFromFile("./img/quests/q_hol_horse.png", NULL);
    a->quests->s_q_hol = sfSprite_create();
    sfSprite_setTexture(a->quests->s_q_hol,
    a->quests->t_q_hol, sfTrue);
    sfSprite_setPosition(a->quests->s_q_hol,
    a->quests->pos_q_hol);
    sfSprite_setScale(a->quests->s_q_hol, a->quests->scale_quests);
}

void create_sprite_quests(v_var *a)
{
    create_sprite_quests2(a);

    a->quests->t_q_retrouver =
    sfTexture_createFromFile("./img/quests/q_retrouver.png", NULL);
    a->quests->s_q_retrouver = sfSprite_create();
    sfSprite_setTexture(a->quests->s_q_retrouver,
    a->quests->t_q_retrouver, sfTrue);
    sfSprite_setPosition(a->quests->s_q_retrouver,
    a->quests->pos_q_retrouver);
    sfSprite_setScale(a->quests->s_q_retrouver, a->quests->scale_quests);

    a->quests->t_q_dio =
    sfTexture_createFromFile("./img/quests/q_dio.png", NULL);
    a->quests->s_q_dio = sfSprite_create();
    sfSprite_setTexture(a->quests->s_q_dio,
    a->quests->t_q_dio, sfTrue);
    sfSprite_setPosition(a->quests->s_q_dio,
    a->quests->pos_q_dio);
    sfSprite_setScale(a->quests->s_q_dio, a->quests->scale_quests);
}