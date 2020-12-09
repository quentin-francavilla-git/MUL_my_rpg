/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void create_sprite_env2(v_var *a)
{
    a->env->s_env = sfSprite_create();

    a->env->t_desert1_1 =
    sfTexture_createFromFile("./img/env/desert1/desert1_1.jpg", NULL);
    a->env->t_desert1_2 =
    sfTexture_createFromFile("./img/env/desert1/desert1_2.jpg", NULL);
    a->env->t_desert1_3 =
    sfTexture_createFromFile("./img/env/desert1/desert1_3.jpg", NULL);
    a->env->t_ville_1 =
    sfTexture_createFromFile("./img/env/ville/ville_1.jpg", NULL);
    a->env->t_ville_2 =
    sfTexture_createFromFile("./img/env/ville/ville_2.jpg", NULL);
    a->env->t_ville_3 =
    sfTexture_createFromFile("./img/env/ville/ville_3.jpg", NULL);
    a->env->t_ville_4 =
    sfTexture_createFromFile("./img/env/ville/ville_4.jpg", NULL);
    a->env->t_ville_5 =
    sfTexture_createFromFile("./img/env/ville/ville_5.jpg", NULL);
    a->env->t_ville_6 =
    sfTexture_createFromFile("./img/env/ville/ville_6.jpg", NULL);
}

void create_sprite_env(v_var *a)
{
    create_sprite_env2(a);

    a->env->t_cave_1 =
    sfTexture_createFromFile("./img/env/cave/cave_1.jpg", NULL);
    a->env->t_cave_2 =
    sfTexture_createFromFile("./img/env/cave/cave_2.jpg", NULL);
    a->env->t_cave_3 =
    sfTexture_createFromFile("./img/env/cave/cave_3.jpg", NULL);
    a->env->t_cave_4 =
    sfTexture_createFromFile("./img/env/cave/cave_4.jpg", NULL);

    a->env->t_hub_1 =
    sfTexture_createFromFile("./img/env/hub/hub_1.jpg", NULL);
    a->env->t_hub_2 =
    sfTexture_createFromFile("./img/env/hub/hub_2.jpg", NULL);

    sfSprite_setTexture(a->env->s_env,
    a->env->t_desert1_1, sfTrue);
}