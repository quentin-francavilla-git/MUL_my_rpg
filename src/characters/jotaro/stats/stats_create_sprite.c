/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../../../include/my_rpg.h"
#include "../../../../lib/my/lib.h"

void create_sprite_stats(v_var *a)
{
    a->stats->t_level_1 =
    sfTexture_createFromFile("./img/stats/level_1.png", NULL);
    a->stats->t_level_2 =
    sfTexture_createFromFile("./img/stats/level_2.png", NULL);
    a->stats->t_level_3 =
    sfTexture_createFromFile("./img/stats/level_3.png", NULL);
    a->stats->t_level_4 =
    sfTexture_createFromFile("./img/stats/level_4.png", NULL);
    a->stats->t_level_5 =
    sfTexture_createFromFile("./img/stats/level_5.png", NULL);
    a->stats->s_level = sfSprite_create();
    sfSprite_setTexture(a->stats->s_level,
    a->stats->t_level_1, sfTrue);
    sfSprite_setPosition(a->stats->s_level,
    a->stats->pos_level);
    sfSprite_setScale(a->stats->s_level,
    a->stats->scale_level);
}