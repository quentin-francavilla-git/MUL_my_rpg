/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void dial_sprite_creation2(v_var *a)
{
    a->rpg->s_dialogue = sfSprite_create();
    sfSprite_setPosition(a->rpg->s_dialogue, a->rpg->pos_dialogue);
    sfSprite_setScale(a->rpg->s_dialogue, a->rpg->scale_dialogue);

    a->rpg->t_door =
    sfTexture_createFromFile("./img/hud/door_lock.png", NULL);
    a->kakyo->t_kakyo_d_1 =
    sfTexture_createFromFile("./img/char/kakyo/kakyo_d_1.png", NULL);
    a->kakyo->t_kakyo_d_2 =
    sfTexture_createFromFile("./img/char/kakyo/kakyo_d_2.png", NULL);
    a->kakyo->t_kakyo_d_3 =
    sfTexture_createFromFile("./img/char/kakyo/kakyo_d_3.png", NULL);
    a->kakyo->t_kakyo_d_4 =
    sfTexture_createFromFile("./img/char/kakyo/kakyo_d_4.png", NULL);
    a->kakyo->t_kakyo_d_5 =
    sfTexture_createFromFile("./img/char/kakyo/kakyo_d_5.png", NULL);
    a->kakyo->t_kakyo_d_6 =
    sfTexture_createFromFile("./img/char/kakyo/kakyo_d_6.png", NULL);
    a->kakyo->t_kakyo_d_7 =
    sfTexture_createFromFile("./img/char/kakyo/kakyo_d_7.png", NULL);
}

void dial_sprite_creation3(v_var *a)
{
    a->joseph->t_joseph_d_1 =
    sfTexture_createFromFile("./img/char/joseph/joseph_d_1.png", NULL);
    a->joseph->t_joseph_d_2 =
    sfTexture_createFromFile("./img/char/joseph/joseph_d_2.png", NULL);
    a->joseph->t_joseph_d_3 =
    sfTexture_createFromFile("./img/char/joseph/joseph_d_3.png", NULL);
    a->joseph->t_joseph_d_4 =
    sfTexture_createFromFile("./img/char/joseph/joseph_d_4.png", NULL);
    a->joseph->t_joseph_d_5 =
    sfTexture_createFromFile("./img/char/joseph/joseph_d_5.png", NULL);

    a->pol->t_pol_d_1 =
    sfTexture_createFromFile("./img/char/pol/pol_d_1.png", NULL);
    a->pol->t_pol_d_2 =
    sfTexture_createFromFile("./img/char/pol/pol_d_2.png", NULL);
    a->pol->t_pol_d_3 =
    sfTexture_createFromFile("./img/char/pol/pol_d_3.png", NULL);
    a->pol->t_pol_d_4 =
    sfTexture_createFromFile("./img/char/pol/pol_d_4.png", NULL);
}

void dial_sprite_creation4(v_var *a)
{
    a->pol->t_pol_d_5 =
    sfTexture_createFromFile("./img/char/pol/pol_d_5.png", NULL);
    a->pol->t_pol_d_6 =
    sfTexture_createFromFile("./img/char/pol/pol_d_6.png", NULL);
    a->pol->t_pol_d_7 =
    sfTexture_createFromFile("./img/char/pol/pol_d_7.png", NULL);
    a->pol->t_pol_d_8 =
    sfTexture_createFromFile("./img/char/pol/pol_d_8.png", NULL);
    a->pol->t_pol_d_9 =
    sfTexture_createFromFile("./img/char/pol/pol_d_9.png", NULL);
    a->pol->t_pol_d_10 =
    sfTexture_createFromFile("./img/char/pol/pol_d_10.png", NULL);
    a->pol->t_pol_d_11 =
    sfTexture_createFromFile("./img/char/pol/pol_d_11.png", NULL);
    a->pol->t_pol_d_12 =
    sfTexture_createFromFile("./img/char/pol/pol_d_12.png", NULL);
    a->pol->t_pol_d_hol =
    sfTexture_createFromFile("./img/char/pol/pol_d_hol.png", NULL);
    a->kan->t_kan_d_1 =
    sfTexture_createFromFile("./img/char/kan/kan_d_1.png", NULL);
}

void dial_sprite_creation5(v_var *a)
{
    a->kan->t_kan_d_2 =
    sfTexture_createFromFile("./img/char/kan/kan_d_2.png", NULL);
    a->kan->t_kan_d_3 =
    sfTexture_createFromFile("./img/char/kan/kan_d_3.png", NULL);
    a->kan->t_kan_d_4 =
    sfTexture_createFromFile("./img/char/kan/kan_d_4.png", NULL);
    a->kan->t_kan_d_5 =
    sfTexture_createFromFile("./img/char/kan/kan_d_5.png", NULL);

    a->cha->t_cha_d_1 =
    sfTexture_createFromFile("./img/char/cha/cha_d_1.png", NULL);
    a->cha->t_cha_d_2 =
    sfTexture_createFromFile("./img/char/cha/cha_d_2.png", NULL);
    a->cha->t_cha_d_3 =
    sfTexture_createFromFile("./img/char/cha/cha_d_3.png", NULL);
    a->cha->t_cha_d_4 =
    sfTexture_createFromFile("./img/char/cha/cha_d_4.png", NULL);
}

void dial_sprite_creation(v_var *a)
{
    dial_sprite_creation2(a);
    dial_sprite_creation3(a);
    dial_sprite_creation4(a);
    dial_sprite_creation5(a);
    dial_sprite_creation6(a);

    a->dio->t_dio_d_1 =
    sfTexture_createFromFile("./img/char/dio/dio_d_1.png", NULL);
    a->dio->t_dio_d_2 =
    sfTexture_createFromFile("./img/char/dio/dio_d_2.png", NULL);
    a->dio->t_dio_d_3 =
    sfTexture_createFromFile("./img/char/dio/dio_d_3.png", NULL);

    a->hol->t_hol_d_1 =
    sfTexture_createFromFile("./img/char/hol/hol_d_1.png", NULL);
    a->hol->t_hol_d_2 =
    sfTexture_createFromFile("./img/char/hol/hol_d_2.png", NULL);
}