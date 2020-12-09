/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void create_sprite_menu2(v_var *a)
{
    a->menu->t_bust =
    sfTexture_createFromFile("./img/menu/bust_jotaro.png", NULL);
    a->menu->s_bust = sfSprite_create();
    sfSprite_setTexture(a->menu->s_bust,
    a->menu->t_bust, sfTrue);
    sfSprite_setPosition(a->menu->s_bust,
    a->menu->pos_bust);
    sfSprite_setScale(a->menu->s_bust, a->menu->scale_bust);

    a->menu->t_logo =
    sfTexture_createFromFile("./img/menu/logo.png", NULL);
    a->menu->s_logo = sfSprite_create();
    sfSprite_setTexture(a->menu->s_logo,
    a->menu->t_logo, sfTrue);
    sfSprite_setPosition(a->menu->s_logo,
    a->menu->pos_logo);
    sfSprite_setScale(a->menu->s_logo, a->menu->scale_logo);
}

void create_sprite_menu3(v_var *a)
{
    a->menu->t_back_menu =
    sfTexture_createFromFile("./img/menu/fond_menu.jpg", NULL);
    a->menu->s_back_menu = sfSprite_create();
    sfSprite_setTexture(a->menu->s_back_menu, a->menu->t_back_menu, sfTrue);

    a->menu->t_pause =
    sfTexture_createFromFile("./img/menu/pause.png", NULL);
    a->menu->s_pause = sfSprite_create();
    sfSprite_setTexture(a->menu->s_pause,
    a->menu->t_pause, sfTrue);

    a->menu->t_play =
    sfTexture_createFromFile("./img/menu/buttons/b_play.png", NULL);
    a->menu->t_play_o =
    sfTexture_createFromFile("./img/menu/buttons/b_play_over.png", NULL);
    a->menu->t_play_c =
    sfTexture_createFromFile("./img/menu/buttons/b_play_click.png", NULL);
    a->menu->s_play = sfSprite_create();
}

void create_sprite_menu4(v_var *a)
{
    sfSprite_setTexture(a->menu->s_play, a->menu->t_play, sfTrue);
    sfSprite_setPosition(a->menu->s_play, a->menu->pos_play);
    sfSprite_setScale(a->menu->s_play, a->menu->scale_play);
    a->menu->t_help =
    sfTexture_createFromFile("./img/menu/buttons/b_help.png", NULL);
    a->menu->t_help_o =
    sfTexture_createFromFile("./img/menu/buttons/b_help_over.png", NULL);
    a->menu->t_help_c =
    sfTexture_createFromFile("./img/menu/buttons/b_help_click.png", NULL);
    a->menu->s_help = sfSprite_create();
    sfSprite_setTexture(a->menu->s_help, a->menu->t_help, sfTrue);
    sfSprite_setPosition(a->menu->s_help, a->menu->pos_help);
    sfSprite_setScale(a->menu->s_help, a->menu->scale_help);
    a->menu->t_quit
    = sfTexture_createFromFile("./img/menu/buttons/b_exit.png", NULL);
}

void create_sprite_menu5(v_var *a)
{
    a->menu->t_quit_o
    = sfTexture_createFromFile("./img/menu/buttons/b_exit_over.png", NULL);
    a->menu->t_quit_c
    = sfTexture_createFromFile("./img/menu/buttons/b_exit_click.png", NULL);
    a->menu->s_quit = sfSprite_create();
    sfSprite_setTexture(a->menu->s_quit, a->menu->t_quit, sfTrue);
    sfSprite_setPosition(a->menu->s_quit, a->menu->pos_quit);
    sfSprite_setScale(a->menu->s_quit, a->menu->scale_quit);
    a->menu->t_resume =
    sfTexture_createFromFile("./img/menu/buttons/b_resume.png", NULL);
    a->menu->t_resume_o =
    sfTexture_createFromFile("./img/menu/buttons/b_resume_over.png", NULL);
    a->menu->t_resume_c =
    sfTexture_createFromFile("./img/menu/buttons/b_resume_click.png", NULL);
    a->menu->s_resume = sfSprite_create();
    sfSprite_setTexture(a->menu->s_resume, a->menu->t_resume, sfTrue);
    sfSprite_setPosition(a->menu->s_resume, a->menu->pos_resume);
    sfSprite_setScale(a->menu->s_resume, a->menu->scale_quit);
}

void create_sprite_menu(v_var *a)
{
    create_sprite_menu2(a);
    create_sprite_menu3(a);
    create_sprite_menu4(a);
    create_sprite_menu5(a);
    create_sprite_menu6(a);
    create_sprite_menu7(a);

    a->menu->t_sound_off =
    sfTexture_createFromFile("./img/menu/sound_off.png", NULL);
    a->menu->s_sound = sfSprite_create();
    sfSprite_setTexture(a->menu->s_sound, a->menu->t_sound_on, sfTrue);
    sfSprite_setPosition(a->menu->s_sound, a->menu->pos_sound);
    sfSprite_setScale(a->menu->s_sound, a->menu->scale_sound);
    a->menu->t_help_tips =
    sfTexture_createFromFile("./img/menu/help.png", NULL);
    a->menu->s_help_tips = sfSprite_create();
    sfSprite_setTexture(a->menu->s_help_tips, a->menu->t_help_tips, sfTrue);
}