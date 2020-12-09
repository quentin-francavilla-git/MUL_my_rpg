/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void create_sprite_menu6(v_var *a)
{
    a->menu->t_title =
    sfTexture_createFromFile("./img/menu/buttons/b_main.png", NULL);
    a->menu->t_title_o =
    sfTexture_createFromFile("./img/menu/buttons/b_main_over.png", NULL);
    a->menu->t_title_c =
    sfTexture_createFromFile("./img/menu/buttons/b_main_click.png", NULL);
    a->menu->s_title = sfSprite_create();
    sfSprite_setTexture(a->menu->s_title, a->menu->t_title, sfTrue);
    sfSprite_setPosition(a->menu->s_title, a->menu->pos_title);
    sfSprite_setScale(a->menu->s_title, a->menu->scale_quit);
    a->menu->t_settings =
    sfTexture_createFromFile("./img/menu/settings1.png", NULL);
    a->menu->s_settings = sfSprite_create();
    sfSprite_setTexture(a->menu->s_settings, a->menu->t_settings, sfTrue);
    sfSprite_setPosition(a->menu->s_settings, a->menu->pos_settings);
}

void create_sprite_menu7(v_var *a)
{
    sfSprite_setScale(a->menu->s_settings, a->menu->scale_settings);
    a->menu->t_settings2 =
    sfTexture_createFromFile("./img/menu/settings2.png", NULL);
    a->menu->s_settings2 = sfSprite_create();
    sfSprite_setTexture(a->menu->s_settings2, a->menu->t_settings2, sfTrue);
    sfSprite_setPosition(a->menu->s_settings2, a->menu->pos_settings2);
    sfSprite_setScale(a->menu->s_settings2, a->menu->scale_settings2);
    a->menu->t_sound_on = sfTexture_createFromFile("./img/menu/sound_on.png",
    NULL);
}