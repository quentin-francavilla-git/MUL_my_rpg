/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../../include/my_rpg.h"
#include "../../lib/my/lib.h"

void dial_sprite_creation6(v_var *a)
{
    a->mid->t_mid_d_1 =
    sfTexture_createFromFile("./img/char/mid/mid_d_1.png", NULL);
    a->mid->t_mid_d_2 =
    sfTexture_createFromFile("./img/char/mid/mid_d_2.png", NULL);

    a->ice->t_ice_d_1 =
    sfTexture_createFromFile("./img/char/ice/ice_d_1.png", NULL);
    a->ice->t_ice_d_2 =
    sfTexture_createFromFile("./img/char/ice/ice_d_2.png", NULL);
    a->ice->t_ice_d_3 =
    sfTexture_createFromFile("./img/char/ice/ice_d_3.png", NULL);
    a->ice->t_ice_d_4 =
    sfTexture_createFromFile("./img/char/ice/ice_d_4.png", NULL);

    a->mar->t_mar_d_1 =
    sfTexture_createFromFile("./img/char/mar/mar_d_1.png", NULL);
    a->mar->t_mar_d_2 =
    sfTexture_createFromFile("./img/char/mar/mar_d_2.png", NULL);
}
