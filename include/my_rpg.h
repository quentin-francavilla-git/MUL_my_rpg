/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

    #ifndef RPG_H_
    #define RPG_H

#include "lib.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <SFML/Window.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct s_window
{
    size_t *count;
    sfRenderWindow *window;
    sfImage *icon;
    float seconds;
    float seconds2;
    float seconds3;
    sfTime time;
    sfTime time2;
    sfTime time3;
    sfClock *clock;
    sfClock *clock2;
    sfClock *clock3;
    sfClock *clock4;
    sfTexture *cursor;
    sfEvent event;
    sfKeyEvent key;
    sfFont *font;
    int status;
    char *usage;
} t_window;

typedef struct s_music
{
    // sfMusic *hit;
    // sfMusic *fight;
    // sfMusic *ora;
    // sfMusic *stand_proud;
    // sfMusic *desert;
    // sfMusic *boss;
    // sfMusic *last_zone;
    // sfMusic *gg;
} t_music;

typedef struct s_base
{
    sfVector2f scale_cursor;
    sfVector2i mouse;
    sfVector2f mousei;
    sfVector2i window_pos;
}t_base;

typedef struct s_menu
{
    sfSprite *s_cross;
    sfTexture *t_cross;
    sfVector2f pos_cross;
    sfVector2f scale_cross;
    sfFloatRect cross_rect;

    sfSprite *s_back_menu;
    sfTexture *t_back_menu;

    sfSprite *s_back_go;
    sfTexture *t_back_go;

    sfSprite *s_play;
    sfTexture *t_play;
    sfTexture *t_play_o;
    sfTexture *t_play_c;
    sfVector2f pos_play;
    sfVector2f scale_play;
    sfFloatRect play_rect;

    sfSprite *s_help;
    sfTexture *t_help;
    sfTexture *t_help_o;
    sfTexture *t_help_c;
    sfVector2f pos_help;
    sfVector2f scale_help;
    sfFloatRect help_rect;

    sfSprite *s_quit;
    sfTexture *t_quit;
    sfTexture *t_quit_o;
    sfTexture *t_quit_c;
    sfVector2f pos_quit;
    sfVector2f scale_quit;
    sfFloatRect quit_rect;

    sfSprite *s_resume;
    sfTexture *t_resume;
    sfTexture *t_resume_o;
    sfTexture *t_resume_c;
    sfVector2f pos_resume;
    sfFloatRect rect_resume;

    sfSprite *s_title;
    sfTexture *t_title;
    sfTexture *t_title_o;
    sfTexture *t_title_c;
    sfVector2f pos_title;
    sfFloatRect rect_title;

    sfSprite *s_pause;
    sfTexture *t_pause;

    sfSprite *s_settings;
    sfTexture *t_settings;
    sfVector2f pos_settings;
    sfVector2f scale_settings;
    sfFloatRect rect_settings;

    int settings_click;
    sfSprite *s_settings2;
    sfTexture *t_settings2;
    sfVector2f pos_settings2;
    sfVector2f scale_settings2;
    sfFloatRect rect_settings2;

    int sound_on;
    sfSprite *s_sound;
    sfTexture *t_sound_on;
    sfTexture *t_sound_off;
    sfVector2f pos_sound;
    sfVector2f scale_sound;
    sfFloatRect rect_sound;

    int help_tips;
    sfSprite *s_help_tips;
    sfTexture *t_help_tips;

    sfSprite *s_logo;
    sfTexture *t_logo;
    sfVector2f pos_logo;
    sfVector2f scale_logo;

    sfSprite *s_bust;
    sfTexture *t_bust;
    sfVector2f pos_bust;
    sfVector2f scale_bust;

    int i;
    float seconds;
    sfTime time;
    sfClock *clock;
}t_menu;

typedef struct s_jotaro
{
    sfVector2f scale_jotaro;
    sfVector2f jotaro_position;
    int jotaro_wich_attack;

    sfIntRect rect_jotaro_standing;
    sfTexture *t_jotaro_standing;
    sfSprite *s_jotaro_standing;

    int stand_duration;
    sfIntRect rect_jotaro_stand;
    sfTexture *t_jotaro_stand;
    sfSprite *s_jotaro_stand;
    sfVector2f pos_jotaro_stand;

    int attack_duration;
    sfIntRect rect_jotaro_attack;
    sfTexture *t_jotaro_attack;
    sfSprite *s_jotaro_attack;

    sfIntRect rect_jotaro_while;
    sfTexture *t_jotaro_while;
    sfSprite *s_jotaro_while;

    sfIntRect rect_jotaro_walking;
    sfTexture *t_jotaro_walking;
    sfSprite *s_jotaro_walking;

    sfIntRect rect_jotaro_walking2;
    sfTexture *t_jotaro_walking2;
    sfSprite *s_jotaro_walking2;

    sfVector2f scale_jotaro_hud;
    sfVector2f scale_jotaro_hud2;
    sfVector2f pos_jotaro_hud;
    sfTexture *t_jotaro_hud;
    sfSprite *s_jotaro_hud;

    sfIntRect rect_jotaro_ded;
    sfTexture *t_jotaro_ded;
    sfSprite *s_jotaro_ded;

    int jotaro_life;

    sfVector2f pos_you_are_attacking;
    sfTexture *t_you_are_attacking;
    sfSprite *s_you_are_attacking;

    int jo_ded;
    sfTexture *t_you_lost;
    sfSprite *s_you_lost;

    float seconds;
    sfTime time;
    sfClock *clock;
    float seconds2;
    sfTime time2;
    sfClock *clock2;
    float seconds3;
    sfTime time3;
    sfClock *clock3;
    float seconds4;
    sfTime time4;
    sfClock *clock4;
} t_jotaro;

typedef struct s_dio
{
    int dio_interact;
    sfVector2f scale_dio;
    sfVector2f dio_position;
    int dio_wich_attack;

    sfIntRect rect_dio_standing;
    sfTexture *t_dio_standing;
    sfSprite *s_dio_standing;

    int stand_duration;
    sfIntRect rect_dio_stand;
    sfTexture *t_dio_stand;
    sfSprite *s_dio_stand;
    sfVector2f pos_dio_stand;

    int attack_duration;
    sfIntRect rect_dio_attack;
    sfTexture *t_dio_attack;
    sfSprite *s_dio_attack;

    sfIntRect rect_dio_ded;
    sfTexture *t_dio_ded;
    sfSprite *s_dio_ded;

    sfVector2f scale_dio_hud;
    sfVector2f pos_dio_hud;
    sfTexture *t_dio_hud;
    sfSprite *s_dio_hud;

    sfTexture *t_dio_is_attacking;
    sfSprite *s_dio_is_attacking;

    int dio_ded;
    int gain_exp;

    float seconds;
    sfTime time;
    sfClock *clock;
    float seconds2;
    sfTime time2;
    sfClock *clock2;

    sfTexture *t_dio_d_1;
    sfTexture *t_dio_d_2;
    sfTexture *t_dio_d_3;
    int already_speak;
    int one_already;
} t_dio;

typedef struct s_kan
{
    int kan_interact;
    sfVector2f scale_kan;
    sfVector2f kan_position;
    int kan_wich_attack;

    sfIntRect rect_kan_standing;
    sfTexture *t_kan_standing;
    sfSprite *s_kan_standing;

    int stand_duration;
    sfIntRect rect_kan_stand;
    sfTexture *t_kan_stand;
    sfSprite *s_kan_stand;
    sfVector2f pos_kan_stand;

    int attack_duration;
    sfIntRect rect_kan_attack;
    sfTexture *t_kan_attack;
    sfSprite *s_kan_attack;

    sfIntRect rect_kan_ded;
    sfTexture *t_kan_ded;
    sfSprite *s_kan_ded;

    sfVector2f scale_kan_hud;
    sfVector2f pos_kan_hud;
    sfTexture *t_kan_hud;
    sfSprite *s_kan_hud;

    sfTexture *t_kan_is_attacking;
    sfSprite *s_kan_is_attacking;

    int kan_ded;
    int gain_exp;
    float seconds;
    sfTime time;
    sfClock *clock;
    float seconds2;
    sfTime time2;
    sfClock *clock2;

    sfTexture *t_kan_d_1;
    sfTexture *t_kan_d_2;
    sfTexture *t_kan_d_3;
    sfTexture *t_kan_d_4;
    sfTexture *t_kan_d_5;
    int already_speak;
    int one_already;
} t_kan;

typedef struct s_mid
{
    int mid_interact;
    sfVector2f scale_mid;
    sfVector2f mid_position;
    int mid_wich_attack;

    sfIntRect rect_mid_standing;
    sfTexture *t_mid_standing;
    sfSprite *s_mid_standing;

    int stand_duration;
    sfIntRect rect_mid_stand;
    sfTexture *t_mid_stand;
    sfSprite *s_mid_stand;
    sfVector2f pos_mid_stand;

    int attack_duration;
    sfIntRect rect_mid_attack;
    sfTexture *t_mid_attack;
    sfSprite *s_mid_attack;

    sfIntRect rect_mid_ded;
    sfTexture *t_mid_ded;
    sfSprite *s_mid_ded;

    sfVector2f scale_mid_hud;
    sfVector2f pos_mid_hud;
    sfTexture *t_mid_hud;
    sfSprite *s_mid_hud;

    sfTexture *t_mid_is_attacking;
    sfSprite *s_mid_is_attacking;

    int mid_ded;
    int gain_exp;

    float seconds;
    sfTime time;
    sfClock *clock;
    float seconds2;
    sfTime time2;
    sfClock *clock2;

    sfTexture *t_mid_d_1;
    sfTexture *t_mid_d_2;
    int already_speak;
    int one_already;
} t_mid;

typedef struct s_joseph
{
    int joseph_interact;
    sfVector2f scale_joseph;
    sfVector2f joseph_position;
    int joseph_wich_attack;

    sfIntRect rect_joseph_standing;
    sfTexture *t_joseph_standing;
    sfSprite *s_joseph_standing;

    float seconds;
    sfTime time;
    sfClock *clock;
    float seconds2;
    sfTime time2;
    sfClock *clock2;

    sfTexture *t_joseph_d_1;
    sfTexture *t_joseph_d_2;
    sfTexture *t_joseph_d_3;
    sfTexture *t_joseph_d_4;
    sfTexture *t_joseph_d_5;
    int already_speak;
    int one_already;
} t_joseph;

typedef struct s_pol
{
    int pol_interact;
    sfVector2f scale_pol;
    sfVector2f pol_position;
    int pol_wich_attack;

    sfIntRect rect_pol_standing;
    sfTexture *t_pol_standing;
    sfSprite *s_pol_standing;

    float seconds;
    sfTime time;
    sfClock *clock;
    float seconds2;
    sfTime time2;
    sfClock *clock2;

    sfTexture *t_pol_d_1;
    sfTexture *t_pol_d_2;
    sfTexture *t_pol_d_3;
    sfTexture *t_pol_d_4;
    sfTexture *t_pol_d_5;
    sfTexture *t_pol_d_6;
    sfTexture *t_pol_d_7;
    sfTexture *t_pol_d_8;
    sfTexture *t_pol_d_9;
    sfTexture *t_pol_d_10;
    sfTexture *t_pol_d_11;
    sfTexture *t_pol_d_12;
    sfTexture *t_pol_d_hol;
    int already_speak;
    int one_already;
} t_pol;

typedef struct s_kakyo
{
    int kakyo_interact;
    sfVector2f scale_kakyo;
    sfVector2f kakyo_position;
    int kakyo_wich_attack;

    sfIntRect rect_kakyo_standing;
    sfTexture *t_kakyo_standing;
    sfSprite *s_kakyo_standing;

    float seconds;
    sfTime time;
    sfClock *clock;
    float seconds2;
    sfTime time2;
    sfClock *clock2;

    sfTexture *t_kakyo_d_1;
    sfTexture *t_kakyo_d_2;
    sfTexture *t_kakyo_d_3;
    sfTexture *t_kakyo_d_4;
    sfTexture *t_kakyo_d_5;
    sfTexture *t_kakyo_d_6;
    sfTexture *t_kakyo_d_7;
    int already_speak;
    int one_already;
} t_kakyo;

typedef struct s_mar
{
    int mar_interact;
    sfVector2f scale_mar;
    sfVector2f mar_position;
    int mar_wich_attack;

    sfIntRect rect_mar_standing;
    sfTexture *t_mar_standing;
    sfSprite *s_mar_standing;

    int stand_duration;
    sfIntRect rect_mar_stand;
    sfTexture *t_mar_stand;
    sfSprite *s_mar_stand;
    sfVector2f pos_mar_stand;

    int attack_duration;
    sfIntRect rect_mar_attack;
    sfTexture *t_mar_attack;
    sfSprite *s_mar_attack;

    sfIntRect rect_mar_ded;
    sfTexture *t_mar_ded;
    sfSprite *s_mar_ded;

    sfVector2f scale_mar_hud;
    sfVector2f pos_mar_hud;
    sfTexture *t_mar_hud;
    sfSprite *s_mar_hud;

    sfTexture *t_mar_is_attacking;
    sfSprite *s_mar_is_attacking;

    int mar_ded;
    int gain_exp;

    float seconds;
    sfTime time;
    sfClock *clock;
    float seconds2;
    sfTime time2;
    sfClock *clock2;


    sfTexture *t_mar_d_1;
    sfTexture *t_mar_d_2;
    int already_speak;
    int one_already;
} t_mar;

typedef struct s_hol
{
    int hol_interact;
    sfVector2f scale_hol;
    sfVector2f hol_position;
    int hol_wich_attack;
    sfTexture *t_key_2;

    sfIntRect rect_hol_standing;
    sfTexture *t_hol_standing;
    sfSprite *s_hol_standing;

    int stand_duration;
    sfIntRect rect_hol_stand;
    sfTexture *t_hol_stand;
    sfSprite *s_hol_stand;
    sfVector2f pos_hol_stand;

    int attack_duration;
    sfIntRect rect_hol_attack;
    sfTexture *t_hol_attack;
    sfSprite *s_hol_attack;

    sfIntRect rect_hol_ded;
    sfTexture *t_hol_ded;
    sfSprite *s_hol_ded;

    sfVector2f scale_hol_hud;
    sfVector2f pos_hol_hud;
    sfTexture *t_hol_hud;
    sfSprite *s_hol_hud;

    sfTexture *t_hol_is_attacking;
    sfSprite *s_hol_is_attacking;

    int hol_ded;
    int gain_exp;

    float seconds;
    sfTime time;
    sfClock *clock;
    float seconds2;
    sfTime time2;
    sfClock *clock2;

    sfTexture *t_hol_d_1;
    sfTexture *t_hol_d_2;
    int already_speak;
    int one_already;
} t_hol;

typedef struct s_cha
{
    int cha_interact;
    sfVector2f scale_cha;
    sfVector2f cha_position;
    int cha_wich_attack;

    sfIntRect rect_cha_standing;
    sfTexture *t_cha_standing;
    sfSprite *s_cha_standing;

    int stand_duration;
    sfIntRect rect_cha_stand;
    sfTexture *t_cha_stand;
    sfSprite *s_cha_stand;
    sfVector2f pos_cha_stand;

    int attack_duration;
    sfIntRect rect_cha_attack;
    sfTexture *t_cha_attack;
    sfSprite *s_cha_attack;

    sfIntRect rect_cha_ded;
    sfTexture *t_cha_ded;
    sfSprite *s_cha_ded;

    sfVector2f scale_cha_hud;
    sfVector2f pos_cha_hud;
    sfTexture *t_cha_hud;
    sfSprite *s_cha_hud;

    sfTexture *t_cha_is_attacking;
    sfSprite *s_cha_is_attacking;

    int cha_ded;
    int gain_exp;

    float seconds;
    sfTime time;
    sfClock *clock;
    float seconds2;
    sfTime time2;
    sfClock *clock2;

    sfTexture *t_cha_d_1;
    sfTexture *t_cha_d_2;
    sfTexture *t_cha_d_3;
    sfTexture *t_cha_d_4;
    int already_speak;
    int one_already;
} t_cha;

typedef struct s_ice
{
    int ice_interact;
    sfVector2f scale_ice;
    sfVector2f ice_position;
    int ice_wich_attack;
    sfTexture *t_key_1;

    sfIntRect rect_ice_standing;
    sfTexture *t_ice_standing;
    sfSprite *s_ice_standing;

    int stand_duration;
    sfIntRect rect_ice_stand;
    sfTexture *t_ice_stand;
    sfSprite *s_ice_stand;
    sfVector2f pos_ice_stand;

    int attack_duration;
    sfIntRect rect_ice_attack;
    sfTexture *t_ice_attack;
    sfSprite *s_ice_attack;

    sfIntRect rect_ice_ded;
    sfTexture *t_ice_ded;
    sfSprite *s_ice_ded;

    sfVector2f scale_ice_hud;
    sfVector2f pos_ice_hud;
    sfTexture *t_ice_hud;
    sfSprite *s_ice_hud;

    sfTexture *t_ice_is_attacking;
    sfSprite *s_ice_is_attacking;

    int ice_ded;
    int gain_exp;

    float seconds;
    sfTime time;
    sfClock *clock;
    float seconds2;
    sfTime time2;
    sfClock *clock2;

    sfTexture *t_ice_d_1;
    sfTexture *t_ice_d_2;
    sfTexture *t_ice_d_3;
    sfTexture *t_ice_d_4;
    int already_speak;
    int one_already;
} t_ice;

typedef struct s_al
{
    int al_interact;
    sfVector2f scale_al;
    sfVector2f al_position;
    int al_wich_attack;

    sfIntRect rect_al_standing;
    sfTexture *t_al_standing;
    sfSprite *s_al_standing;

    int stand_duration;
    sfIntRect rect_al_stand;
    sfTexture *t_al_stand;
    sfSprite *s_al_stand;
    sfVector2f pos_al_stand;

    int attack_duration;
    sfIntRect rect_al_attack;
    sfTexture *t_al_attack;
    sfSprite *s_al_attack;

    sfIntRect rect_al_ded;
    sfTexture *t_al_ded;
    sfSprite *s_al_ded;

    sfVector2f scale_al_hud;
    sfVector2f pos_al_hud;
    sfTexture *t_al_hud;
    sfSprite *s_al_hud;

    sfTexture *t_al_is_attacking;
    sfSprite *s_al_is_attacking;

    int al_ded;
    int gain_exp;

    float seconds;
    sfTime time;
    sfClock *clock;
    float seconds2;
    sfTime time2;
    sfClock *clock2;
} t_al;

typedef struct s_env
{
    int env;
    int enemy_ded;
    sfSprite *s_env;
    sfTexture *t_desert1_1;
    sfTexture *t_desert1_2;
    sfTexture *t_desert1_3;
    sfTexture *t_ville_1;
    sfTexture *t_ville_2;
    sfTexture *t_ville_3;
    sfTexture *t_ville_4;
    sfTexture *t_ville_5;
    sfTexture *t_ville_6;

    sfTexture *t_cave_1;
    sfTexture *t_cave_2;
    sfTexture *t_cave_3;
    sfTexture *t_cave_4;

    sfTexture *t_hub_1;
    sfTexture *t_hub_2;
} t_env;

typedef struct s_hud_fight
{
    int armor;
    int fight_items;
    int case_items;

    sfSprite *s_msg;

    sfVector2f scale_fight;
    sfVector2f pos_fight;
    sfTexture *t_fight;
    sfSprite *s_fight;

    sfVector2f scale_bb;
    sfVector2f pos_bb;
    sfTexture *t_bb;
    sfSprite *s_bb;

    sfVector2f scale_hud_menu;
    int hud_menu;

    sfVector2f pos_attack;
    sfTexture *t_attack;
    sfSprite *s_attack;

    sfVector2f pos_items;
    sfTexture *t_items;
    sfSprite *s_items;

    sfVector2f pos_spe;
    sfTexture *t_spe;
    sfSprite *s_spe;

    sfVector2f pos_block;
    sfTexture *t_block;
    sfSprite *s_block;

    sfIntRect rect_v_var1;
    sfVector2f pos_v_bar1;
    sfTexture *t_v_bar1;
    sfSprite *s_v_bar1;

    sfIntRect rect_v_var2;
    sfVector2f pos_v_bar2;
    sfTexture *t_v_bar2;
    sfSprite *s_v_bar2;

    int arrow;
    sfVector2f pos_arrow;
    sfTexture *t_arrow;
    sfSprite *s_arrow;

    int qte;
    int random_y;
    int qte_good;
    sfTexture *t_bspe;
    sfSprite *s_bspe;

    sfTexture *t_bblock;
    sfSprite *s_bblock;
    int block_dmg;

    sfVector2f scale_star;
    sfVector2f pos_star;
    sfTexture *t_star;
    sfSprite *s_star;
    float seconds;
    sfTime time;
    sfClock *clock;

    int explo_duration;
    float seconds2;
    sfTime time2;
    sfClock *clock2;
    int explo;
    sfIntRect rect_explo;
    sfVector2f scale_explo;
    sfVector2f pos_explo;
    sfTexture *t_explo;
    sfSprite *s_explo;

    sfTexture *t_boss;
    sfVector2f scale_boss;
} t_hud_fight;

typedef struct s_hud_other
{
    sfVector2f scale_press_f;
    sfVector2f pos_press_f;
    sfTexture *t_press_f;
    sfSprite *s_press_f;

    sfTexture *t_gg;
    sfSprite *s_gg;

    int gg;
    sfTexture *t_press_continue;
    sfSprite *s_press_continue;
} t_hud_other;

typedef struct s_inv
{
    int inv_open;
    sfVector2f scale_inv;
    sfVector2f pos_inv;
    sfTexture *t_inv;
    sfSprite *s_inv;

    int case_inv;
    sfVector2f pos_inv_select;
    sfTexture *t_inv_select;
    sfSprite *s_inv_select;

    int inv_heal_potion1;
    sfVector2f pos_inv_heal_potion1;
    sfVector2f scale_inv_heal_potion1;
    sfTexture *t_inv_heal_potion1;
    sfSprite *s_inv_heal_potion1;

    int inv_armor_potion;
    sfVector2f pos_inv_armor_potion;
    sfTexture *t_inv_armor_potion;
    sfSprite *s_inv_armor_potion;

    int inv_big_heal_potion;
    sfVector2f pos_inv_big_heal_potion;
    sfTexture *t_inv_big_heal_potion;
    sfSprite *s_inv_big_heal_potion;
    sfVector2f scale_inv_heal_potion2;

    int inv_key_1;
    sfVector2f pos_key_1;
    sfTexture *t_key_1;
    sfSprite *s_key_1;
    sfVector2f scale_key_1;

    int inv_key_2;
    sfVector2f pos_key_2;
    sfTexture *t_key_2;
    sfSprite *s_key_2;
    sfVector2f scale_key_2;

    sfVector2f pos_back;
    sfVector2f scale_back;
    sfSprite *s_back;
    sfTexture *t_back;

    sfVector2f pos_info;
    sfVector2f scale_info;
    sfSprite *s_info;
    sfTexture *t_info_heal_potion;
    sfTexture *t_info_armor_potion;
    sfTexture *t_info_big_heal_potion;
    sfTexture *t_info_key_1;
    sfTexture *t_info_key_2;
} t_inv;

typedef struct s_items
{
    int *heal_potion;
    int heal_potion_interaction;
    sfVector2f *pos_heal_potion1;
    sfVector2f scale_heal_potion1;
    sfSprite **s_heal_potion1;

    int *armor_potion;
    int armor_potion_interaction;
    sfVector2f *pos_armor_potion;
    sfSprite **s_armor_potion;

    int *big_heal_potion;
    int big_heal_potion_interaction;
    sfVector2f *pos_big_heal_potion;
    sfSprite **s_big_heal_potion;
} t_items;

typedef struct s_stats
{
    int xp;
    int xp_need;
    int level;
    float hp_max;
    int hp_bonus;
    int strength;
    int strength_bonus;

    sfVector2f pos_level;
    sfVector2f scale_level;
    sfSprite *s_level;

    sfTexture *t_level_1;
    sfTexture *t_level_2;
    sfTexture *t_level_3;
    sfTexture *t_level_4;
    sfTexture *t_level_5;

    int l1;

    char *str_level_inv;
    sfText *text_level_inv;
    sfVector2f pos_text_level_inv;

    char *str_hp_inv;
    sfText *text_hp_inv;
    sfVector2f pos_hp_level_inv;

    char *str_strength_inv;
    sfText *text_strength_inv;
    sfVector2f pos_text_strength_inv;

    char *str_xp_inv;
    sfText *text_xp_inv;
    sfVector2f pos_text_xp_inv;
} t_stats;

typedef struct s_quests
{
    int quests_open;
    sfVector2f scale_quests;

    sfTexture *t_quests;
    sfSprite *s_quests;
    sfVector2f pos_quests;

    int q_hol;
    sfTexture *t_q_hol;
    sfSprite *s_q_hol;
    sfVector2f pos_q_hol;

    int q_dio;
    sfTexture *t_q_dio;
    sfSprite *s_q_dio;
    sfVector2f pos_q_dio;

    int q_retrouver;
    sfTexture *t_q_retrouver;
    sfSprite *s_q_retrouver;
    sfVector2f pos_q_retrouver;
} t_quests;

typedef struct s_rpg
{
    int dialogue;
    int nb_dialogue;
    int turn;
    int fight;
    int wait_key;
    int enemy_life;
    float enemy_life_multiple;
    int put_enemy_life;

    int enemy_ded_sprite;
    sfTexture *t_you_won;
    sfSprite *s_you_won;

    sfSprite *s_dialogue;
    sfVector2f pos_dialogue;
    sfVector2f scale_dialogue;

    float seconds;
    sfTime time;
    sfClock *clock;
    int wait_fight;

    int door_interact;
    int door_interact2;
    sfTexture *t_door;
} t_rpg;

typedef struct v_variable
{
    t_music     *music;
    t_window    *_ptr;
    t_base      *_base;
    t_rpg       *rpg;
    t_jotaro    *jo;
    t_dio       *dio;
    t_al        *al;
    t_mid       *mid;
    t_joseph    *joseph;
    t_pol       *pol;
    t_kakyo      *kakyo;
    t_quests      *quests;
    t_mar       *mar;
    t_hol       *hol;
    t_cha       *cha;
    t_ice       *ice;
    t_kan       *kan;
    t_env       *env;
    t_menu      *menu;
    t_hud_other *hud_other;
    t_hud_fight *hud_fight;
    t_inv       *inv;
    t_items     *items;
    t_stats     *stats;
} v_var;

//OTHER
void start_window(v_var *a);
void display(v_var *a);
void destroy(v_var *a);
int create_music(v_var *a);
void create_clock(v_var *a);
void variables(v_var *a);
void create_text(v_var *a);
void create_sprite(v_var *a);
void rect(v_var *a);
void cursor(v_var *a);
void rpg(v_var *a);
void create_all(v_var *a, char **av);
void sprite_gestion(v_var *a);
void malloc_struct(v_var *a);
void qte(v_var *a);
void music_fight(v_var *a);
void pause_game(v_var *a);
void title_reset(v_var *a);
void pol_create(v_var *a);
void joseph_create(v_var *a);
void mid_create(v_var *a);
void dio_create(v_var *a);
void jotaro_create(v_var *a);
void ice_create(v_var *a);
void cha_create(v_var *a);
void hol_create(v_var *a);
void mar_create(v_var *a);
void kakyo_create(v_var *a);
void inventory_create(v_var *a);
void hud_create(v_var *a);
void items_create(v_var *a);
void quests_create(v_var *a);
void menu_create(v_var *a);
void events(v_var *a);
void users_input(v_var *a);
void reset_after_game(v_var *a);
void move(v_var *a);
void variables_hud_fight4(v_var *a);

//quests
void quests_interactions(v_var *a);
void quests_display(v_var *a);
void create_sprite_quests(v_var *a);
void quests_var(v_var *a);

//dialogues
void dial_var(v_var *a);
void dial_sprite_creation(v_var *a);
void dialogues_display(v_var *a);
void dial_dio(v_var *a);
void dialogues(v_var *a);
void dio_dial_display(v_var *a);
void dial_joseph(v_var *a);
void joseph_dial_display(v_var *a);
void dial_kakyo(v_var *a);
void kakyo_dial_display(v_var *a);
void dial_joseph(v_var *a);
void joseph_dial_display(v_var *a);
void dial_kan(v_var *a);
void kan_dial_display(v_var *a);
void dial_cha(v_var *a);
void cha_dial_display(v_var *a);
void dial_pol(v_var *a);
void pol_dial_display(v_var *a);
void dial_mid(v_var *a);
void mid_dial_display(v_var *a);
void dial_ice(v_var *a);
void ice_dial_display(v_var *a);
void dial_mar(v_var *a);
void mar_dial_display(v_var *a);
void dial_hol(v_var *a);
void hol_dial_display(v_var *a);
void dial_sprite_creation6(v_var *a);

//door
void vs_door(v_var *a);
void vs_door2(v_var *a);
void dial_door(v_var *a);
void door_dial_display(v_var *a);
void door2_display(v_var *a);
void dial_door2(v_var *a);
void door2_dial_display(v_var *a);

//JOJO
void jotaro_reset_position_game_over(v_var *a);
void move_rect_jotaro_ded(v_var *a);
void move_rect_jotaro_while(v_var *a);
void jotaro_reset(v_var *a);
void move_rect_jotaro_walking2(v_var *a);
void move_rect_jotaro_walking(v_var *a);
void move_rect_jotaro_attack(v_var *a);
void move_rect_jotaro_standing(v_var *a);
void sprite_gestion(v_var *a);
void move_rect_jotaro_stand(v_var *a);
void rect_jotaro(v_var *a);
void create_sprite_jotaro(v_var *a);
void malloc_struct(v_var *a);
void variables_jotaro(v_var *a);
void jotaro_sprite_gestion(v_var *a);
void jotaro_reset_position(v_var *a);
void jotaro_display(v_var *a);
void stats_gestion(v_var *a);
void jotaro_reset_while(v_var *a);

//stats
void variables_stats(v_var *a);
void stats_display(v_var *a);
void create_sprite_stats(v_var *a);
void stats_create_text(v_var *a);

//DIO-SAMA
void move_rect_dio_ded(v_var *a);
void dio_reset_position(v_var *a);
void move_rect_dio_stand(v_var *a);
void move_rect_dio_standing(v_var *a);
void move_rect_dio_attack(v_var *a);
void dio_reset(v_var *a);
void rect_dio(v_var *a);
void variables_dio(v_var *a);
void create_sprite_dio(v_var *a);
void dio_sprite_gestion(v_var *a);
void dio_display(v_var *a);
void dio_attack_positions(v_var *a);
void vs_dio_cinematic(v_var *a);

//alessy
void move_rect_al_ded(v_var *a);
void al_reset_position(v_var *a);
void move_rect_al_stand(v_var *a);
void move_rect_al_standing(v_var *a);
void move_rect_al_attack(v_var *a);
void al_reset(v_var *a);
void rect_al(v_var *a);
void variables_al(v_var *a);
void create_sprite_al(v_var *a);
void al_sprite_gestion(v_var *a);
void al_display(v_var *a);
void al_attack_positions(v_var *a);
void vs_al_cinematic(v_var *a);

//midler
void move_rect_mid_ded(v_var *a);
void mid_reset_position(v_var *a);
void move_rect_mid_stand(v_var *a);
void move_rect_mid_standing(v_var *a);
void move_rect_mid_attack(v_var *a);
void mid_reset(v_var *a);
void rect_mid(v_var *a);
void variables_mid(v_var *a);
void create_sprite_mid(v_var *a);
void mid_sprite_gestion(v_var *a);
void mid_display(v_var *a);
void mid_attack_positions(v_var *a);
void vs_mid_cinematic(v_var *a);

//joseph
void joseph_reset_position(v_var *a);
void move_rect_joseph_stand(v_var *a);
void joseph_reset(v_var *a);
void rect_joseph(v_var *a);
void variables_joseph(v_var *a);
void create_sprite_joseph(v_var *a);
void joseph_sprite_gestion(v_var *a);
void joseph_display(v_var *a);
void move_rect_joseph_standing(v_var *a);

//pol
void pol_reset_position(v_var *a);
void move_rect_pol_stand(v_var *a);
void pol_reset(v_var *a);
void rect_pol(v_var *a);
void variables_pol(v_var *a);
void create_sprite_pol(v_var *a);
void pol_sprite_gestion(v_var *a);
void pol_display(v_var *a);
void move_rect_pol_standing(v_var *a);

//kakyo
void kakyo_reset_position(v_var *a);
void move_rect_kakyo_stand(v_var *a);
void kakyo_reset(v_var *a);
void rect_kakyo(v_var *a);
void variables_kakyo(v_var *a);
void create_sprite_kakyo(v_var *a);
void kakyo_sprite_gestion(v_var *a);
void kakyo_display(v_var *a);
void move_rect_kakyo_standing(v_var *a);

//maria
void move_rect_mar_ded(v_var *a);
void mar_reset_position(v_var *a);
void move_rect_mar_stand(v_var *a);
void move_rect_mar_standing(v_var *a);
void move_rect_mar_attack(v_var *a);
void mar_reset(v_var *a);
void rect_mar(v_var *a);
void variables_mar(v_var *a);
void create_sprite_mar(v_var *a);
void mar_sprite_gestion(v_var *a);
void mar_display(v_var *a);
void mar_attack_positions(v_var *a);
void vs_mar_cinematic(v_var *a);

//holhorse
void move_rect_hol_ded(v_var *a);
void hol_reset_position(v_var *a);
void move_rect_hol_stand(v_var *a);
void move_rect_hol_standing(v_var *a);
void move_rect_hol_attack(v_var *a);
void hol_reset(v_var *a);
void rect_hol(v_var *a);
void variables_hol(v_var *a);
void create_sprite_hol(v_var *a);
void hol_sprite_gestion(v_var *a);
void hol_display(v_var *a);
void hol_attack_positions(v_var *a);
void vs_hol_cinematic(v_var *a);

//chaca
void move_rect_cha_ded(v_var *a);
void cha_reset_position(v_var *a);
void move_rect_cha_stand(v_var *a);
void move_rect_cha_standing(v_var *a);
void move_rect_cha_attack(v_var *a);
void cha_reset(v_var *a);
void rect_cha(v_var *a);
void variables_cha(v_var *a);
void create_sprite_cha(v_var *a);
void cha_sprite_gestion(v_var *a);
void cha_display(v_var *a);
void cha_attack_positions(v_var *a);
void vs_cha_cinematic(v_var *a);

//ice
void move_rect_ice_ded(v_var *a);
void ice_reset_position(v_var *a);
void move_rect_ice_stand(v_var *a);
void move_rect_ice_standing(v_var *a);
void move_rect_ice_attack(v_var *a);
void ice_reset(v_var *a);
void rect_ice(v_var *a);
void variables_ice(v_var *a);
void create_sprite_ice(v_var *a);
void ice_sprite_gestion(v_var *a);
void ice_display(v_var *a);
void ice_attack_positions(v_var *a);
void vs_ice_cinematic(v_var *a);

//KAN
void move_rect_kan_ded(v_var *a);
void kan_reset_position(v_var *a);
void move_rect_kan_stand(v_var *a);
void move_rect_kan_standing(v_var *a);
void move_rect_kan_attack(v_var *a);
void kan_reset(v_var *a);
void rect_kan(v_var *a);
void variables_kan(v_var *a);
void create_sprite_kan(v_var *a);
void kan_sprite_gestion(v_var *a);
void kan_display(v_var *a);
void kan_attack_positions(v_var *a);

//ENV
void env_gestion(v_var *a);
void create_sprite_env(v_var *a);
void put_texture(v_var *a);

//HUD
void create_sprite_hud_other(v_var *a);
void variables_hud_other(v_var *a);
void create_sprite_hud_fight(v_var *a);
void variables_hud_fight(v_var *a);
void hud_fight_sprite_gestion(v_var *a);
void explo_sprite_gestion(v_var *a);
void explo_position(v_var *a);
void reset_postions_selec(v_var *a);
void create_sprite_hud_fight_texts6(v_var *a);
void create_sprite_hud_fight_texts(v_var *a);
void create_sprite_hud_fight_menu(v_var *a);
void create_sprite_hud_fight_qte(v_var *a);

//FIGHTS
void qte_actions(v_var *a);
void fail_qte(v_var *a);
void pos_star(v_var *a);
void reset_position_star(v_var *a);
void qte_spe(v_var *a);
void qte(v_var *a);
void qte_block(v_var *a);
void vs_dio(v_var *a);
void vs_joseph(v_var *a);
void vs_pol(v_var *a);
void vs_kakyo(v_var *a);
void vs_al(v_var *a);
void vs_mid(v_var *a);
void vs_mar(v_var *a);
void vs_hol(v_var *a);
void vs_cha(v_var *a);
void vs_ice(v_var *a);
void vs_kan(v_var *a);
void fight_menu(v_var *a);
void fights(v_var *a);
void fight_quit(v_var *a);
void wait_fight(v_var *a);
void fight_items(v_var *a);
void life_gestion(v_var *a);
void fight_display_items(v_var *a);
void boss_display(v_var *a);
void fight_display(v_var *a);
void life_bar(v_var *a);


//INV
void create_sprite_inventory(v_var *a);
void inventory(v_var *a);
void inventory_interactions(v_var *a);
void inventory_display(v_var *a);
void inventory_var(v_var *a);
void display_items_in_inv(v_var *a);

//ITEMS
void display_items(v_var *a);
void items_create_sprite(v_var *a);
void items_var(v_var *a);
void create_heal_potions(v_var *a);
void items_interactions(v_var *a);
void fight_items_interactions(v_var *a);
void reset_postions_selec(v_var *a);

//MENU
void settings_b(v_var *a);
void sound_on_off(v_var *a);
void menu_display(v_var *a);
void menu_get_bounds(v_var *a);
void menu(v_var *a);
void pressed(v_var *a);
void over_buttons(v_var *a);
void do_close(v_var *a);
void play(v_var *a);
void help(v_var *a);
void over_play(v_var *a);
void over_help(v_var *a);
void over_exit(v_var *a);
void over_resume(v_var *a);
void over_title(v_var *a);
void variables_menu2(v_var *a);
void variables_menu(v_var *a);
void create_sprite_menu(v_var *a);
void play_press(v_var *a);
void help_press(v_var *a);
void exit_press(v_var *a);
void resume_press(v_var *a);
void title_press(v_var *a);
void create_sprite_menu7(v_var *a);
void create_sprite_menu6(v_var *a);
void menu_display(v_var *a);


#endif
