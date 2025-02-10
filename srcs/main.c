/*
** EPITECH PROJECT, 2020
** main
** File description:
** main.c
*/

#include "my.h"

void link_character(my_t *rpg)
{
    sfVector2f scale_link = {0.4, 0.4};

    if (rpg->perso_color_haut.r == 0 && rpg->perso_color_haut.g == 255 &&
    rpg->perso_color_haut.b == 255 && rpg->zone == 0) {
        while (rpg->map_ville_position.y != 0) {
            rpg->map_ville_position.y += 1;
            sfSprite_setPosition(rpg->map_ville_sprite, rpg->map_ville_position);
        } rpg->link_position.y = 943;
        rpg->link_position.x = 938;
        rpg->zone = 1;
    }
    if (rpg->perso_color_bas.r == 255 && rpg->perso_color_bas.g == 0 &&
    rpg->perso_color_bas.b == 255 && rpg->zone == 1) {
        while (rpg->map_ville_position.y != -1080) {
            rpg->map_ville_position.y -= 1;
            sfSprite_setPosition(rpg->map_ville_sprite, rpg->map_ville_position);
        } rpg->link_position.y = 34;
        rpg->link_position.x = 935;
        rpg->zone = 0;
    }
    if (rpg->perso_color_gauche.r == 100 && rpg->perso_color_gauche.g == 100 &&
    rpg->perso_color_gauche.g == 100 && rpg->zone == 0) {
        if (rpg->snipe == 0)
            sfSprite_setTexture(rpg->map_ville_sprite, rpg->map_labyrinthe1, sfFalse);
        else
            sfSprite_setTexture(rpg->map_ville_sprite, rpg->map_labyrinthe2, sfFalse);
        rpg->map_ville_position.y = 0;
        sfSprite_setPosition(rpg->map_ville_sprite, rpg->map_ville_position);
        rpg->link_position.y = 538;
        rpg->link_position.x = 1800;
        rpg->zone = 2;
    }
    if (rpg->perso_color_droite.r == 255 && rpg->perso_color_droite.g == 0 &&
    rpg->perso_color_droite.b == 255 && rpg->zone == 2) {
        if (rpg->sword == 0 && rpg->boss_door == 0)
            sfSprite_setTexture(rpg->map_ville_sprite, rpg->map_ville1, sfFalse);
        else if (rpg->sword == 1 && rpg->boss_door == 0)
            sfSprite_setTexture(rpg->map_ville_sprite, rpg->map_ville2, sfFalse);
        else
            sfSprite_setTexture(rpg->map_ville_sprite, rpg->map_ville3, sfFalse);
        rpg->map_ville_position.y = -1080;
        sfSprite_setPosition(rpg->map_ville_sprite, rpg->map_ville_position);
        rpg->link_position.y = 565;
        rpg->link_position.x = 70;
        rpg->zone = 0;
    }
    if (rpg->perso_color_droite.r == 200 && rpg->perso_color_droite.g == 200 &&
    rpg->perso_color_droite.b == 200 && rpg->zone == 1) {
        if (rpg->right_door == 0 && rpg->boss_key == 0)
            sfSprite_setTexture(rpg->map_ville_sprite, rpg->map_right1, sfFalse);
        else if (rpg->right_door == 1 && rpg->boss_key == 0)
            sfSprite_setTexture(rpg->map_ville_sprite, rpg->map_right2, sfFalse);
        else
            sfSprite_setTexture(rpg->map_ville_sprite, rpg->map_right3, sfFalse);
        rpg->map_ville_position.y = 0;
        sfSprite_setPosition(rpg->map_ville_sprite, rpg->map_ville_position);
        rpg->link_position.y = 506;
        rpg->link_position.x = 68;
        rpg->zone = 3;
    }
    if (rpg->perso_color_gauche.r == 0 && rpg->perso_color_gauche.g == 255 &&
    rpg->perso_color_gauche.b == 255 && rpg->zone == 3) {
        if (rpg->sword == 0 && rpg->boss_door == 0)
            sfSprite_setTexture(rpg->map_ville_sprite, rpg->map_ville1, sfFalse);
        else if (rpg->sword == 1 && rpg->boss_door == 0)
            sfSprite_setTexture(rpg->map_ville_sprite, rpg->map_ville2, sfFalse);
        else
            sfSprite_setTexture(rpg->map_ville_sprite, rpg->map_ville3, sfFalse);
        rpg->map_ville_position.y = 0;
        sfSprite_setPosition(rpg->map_ville_sprite, rpg->map_ville_position);
        rpg->link_position.y = 516;
        rpg->link_position.x = 1801;
        rpg->zone = 1;
    }
    if (rpg->zone == 4) {
        sfSprite_setTexture(rpg->map_ville_sprite, rpg->texture_salle_boss, sfFalse);
    }
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(rpg->clock_link)) > 40) {
        rpg->rect_link.left += 116;
        if (rpg->rect_link.left >= 1160 - 116)
            rpg->rect_link.left = 0;
        sfClock_restart(rpg->clock_link);
        sfSprite_setTextureRect(rpg->link_sprite, rpg->rect_link);
    } sfSprite_setPosition(rpg->link_sprite, rpg->link_position);
    if (rpg->lives == 3) {
        sfSprite_setTexture(rpg->sprite_hearts, rpg->texture_three_hearts, sfFalse);
    } if (rpg->lives == 2) {
        sfSprite_setTexture(rpg->sprite_hearts, rpg->texture_two_hearts, sfFalse);
    } if (rpg->lives == 1) {
        sfSprite_setTexture(rpg->sprite_hearts, rpg->texture_one_heart, sfFalse);
    } if (rpg->lives == 0) {
        sfClock_restart(rpg->clock_link);
        sfMusic_play(rpg->ban_zik);
        sfMusic_stop(rpg->salam_song);
        while (sfTime_asSeconds(sfClock_getElapsedTime(rpg->clock_link)) < 3) {
            scale_link.x += 0.01;
            scale_link.y += 0.01;
            sfSprite_setScale(rpg->link_sprite, scale_link);
            sfRenderWindow_drawSprite(rpg->window, rpg->link_sprite, sfFalse);
            sfRenderWindow_display(rpg->window);
            sfRenderWindow_clear(rpg->window, sfBlack);
        } sfMusic_stop(rpg->ban_zik);
        sfRenderWindow_close(rpg->window);
    } sfRenderWindow_drawSprite(rpg->window, rpg->link_sprite, sfFalse);
    sfRenderWindow_drawSprite(rpg->window, rpg->sprite_hearts, sfFalse);
    if (rpg->link_attacking == 1) {
        if (rpg->link_position.x >= rpg->memet_position.x - 200 && rpg->link_position.x <= rpg->memet_position.x  + 200
        && rpg->link_position.y >= rpg->memet_position.y - 200 && rpg->link_position.y <= rpg->memet_position.y + 200 && rpg->zone == 4) {
            rpg->memet_life = 1;
            sfClock_restart(rpg->clock_ban);
        } if (rpg->link_position.x > rpg->enemy1_position.x - 150 && rpg->link_position.x < rpg->enemy1_position.x + 150 &&
        rpg->link_position.y > rpg->enemy1_position.y - 150 && rpg->link_position.y < rpg->enemy1_position.y + 150 && rpg->zone == 3) {
            rpg->enemy1_position.x = 6000;
            rpg->enemy1_position.y = 6000;
        } if (rpg->link_position.x > rpg->enemy2_position.x - 150 && rpg->link_position.x < rpg->enemy2_position.x + 150 &&
        rpg->link_position.y > rpg->enemy2_position.y - 150 && rpg->link_position.y < rpg->enemy2_position.y + 150 && rpg->zone == 3) {
            rpg->enemy2_position.x = 7000;
            rpg->enemy2_position.y = 7000;
        } if (sfTime_asMilliseconds(sfClock_getElapsedTime(rpg->clock_link_attack)) > 1000) {
            rpg->link_attacking = 0;
            sfClock_restart(rpg->clock_link_attack);
        } sfRenderWindow_drawSprite(rpg->window, rpg->link_attack_sprite, sfFalse);
    } colision_fonction(rpg);
    if (rpg->memet_life == 1) {
        rpg->memet_position.x = 6000;
        sfSprite_setPosition(rpg->sprite_memet, rpg->memet_position);
        if (sfTime_asSeconds(sfClock_getElapsedTime(rpg->clock_ban)) > 2) {
            sfRenderWindow_drawSprite(rpg->window, rpg->sprite_ban_chat, sfFalse);
        } if (sfTime_asSeconds(sfClock_getElapsedTime(rpg->clock_ban)) > 3) {
            sfSprite_setTexture(rpg->sprite_ban_chat, rpg->texture_ban_chat2, sfFalse);
            sfRenderWindow_drawSprite(rpg->window, rpg->sprite_ban_chat, sfFalse);
        } if (sfTime_asSeconds(sfClock_getElapsedTime(rpg->clock_ban)) > 6) {
            sfSprite_setTexture(rpg->sprite_ban_chat, rpg->texture_ban_chat3, sfFalse);
            sfRenderWindow_drawSprite(rpg->window, rpg->sprite_ban_chat, sfFalse);
        } if (sfTime_asSeconds(sfClock_getElapsedTime(rpg->clock_ban)) > 9) {
            sfMusic_play(rpg->ban_zik);
            sfMusic_stop(rpg->boss_zik);
            sfClock_restart(rpg->clock_link);
            while (sfTime_asSeconds(sfClock_getElapsedTime(rpg->clock_link)) < 3) {
                scale_link.x += 0.01;
                scale_link.y += 0.01;
                sfSprite_setScale(rpg->link_sprite, scale_link);
                sfRenderWindow_drawSprite(rpg->window, rpg->link_sprite, sfFalse);
                sfRenderWindow_display(rpg->window);
                sfRenderWindow_clear(rpg->window, sfBlack);
            } sfMusic_stop(rpg->ban_zik);
            sfRenderWindow_close(rpg->window);
        }
    }
    //printf("%f %f\n", rpg->link_position.x, rpg->link_position.y);
}


void enemy_function(my_t *rpg)
{
    int static a = 0;
    int static b = 0;
    int static i = 0;
    int static j = 0;

    if (((rpg->link_position.x > rpg->enemy1_position.x - 50 && rpg->link_position.x < rpg->enemy1_position.x + 50 &&
    rpg->link_position.y > rpg->enemy1_position.y - 50 && rpg->link_position.y < rpg->enemy1_position.y + 50) ||
    (rpg->link_position.x > rpg->enemy2_position.x - 50 && rpg->link_position.x < rpg->enemy2_position.x + 50 &&
    rpg->link_position.y > rpg->enemy2_position.y - 50 && rpg->link_position.y < rpg->enemy2_position.y + 50)) &&
    sfTime_asSeconds(sfClock_getElapsedTime(rpg->clock_touched)) > 1) {
        sfClock_restart(rpg->clock_touched);
        rpg->lives--;
    } if (rpg->enemy1_position.x >= 1314) {
        a = 1;
        b = 0;
    } if (a == 1) {
        sfSprite_setTexture(rpg->sprite_enemy1, rpg->texture_enemy_left, sfFalse);
        rpg->enemy1_position.x -= 1;
    } if (rpg->enemy1_position.x <= 1041) {
        a = 0;
        b = 1;
    } if (b == 1) {
        sfSprite_setTexture(rpg->sprite_enemy1, rpg->texture_enemy_right, sfFalse);
        rpg->enemy1_position.x += 1;
    } if (rpg->enemy2_position.x >= 753) {
        i = 1;
        j = 0;
    } if (i == 1) {
        sfSprite_setTexture(rpg->sprite_enemy2, rpg->texture_enemy_left, sfFalse);
        rpg->enemy2_position.x -= 1;
    } if (rpg->enemy2_position.x <= 431) {
        i = 0;
        j = 1;
    } if (j == 1) {
        sfSprite_setTexture(rpg->sprite_enemy2, rpg->texture_enemy_right, sfFalse);
        rpg->enemy2_position.x += 1;
    } sfSprite_setPosition(rpg->sprite_enemy1, rpg->enemy1_position);
    sfSprite_setPosition(rpg->sprite_enemy2, rpg->enemy2_position);
    if (sfTime_asMilliseconds(sfClock_getElapsedTime(rpg->clock_enemy)) > 200) {
        rpg->rect_enemy.left += 24;
        if (rpg->rect_enemy.left >= 24 * 2)
            rpg->rect_enemy.left = 0;
        sfClock_restart(rpg->clock_enemy);
        sfSprite_setTextureRect(rpg->sprite_enemy1, rpg->rect_enemy);
        sfSprite_setTextureRect(rpg->sprite_enemy2, rpg->rect_enemy);
    } sfRenderWindow_drawSprite(rpg->window, rpg->sprite_enemy1, sfFalse);
    sfRenderWindow_drawSprite(rpg->window, rpg->sprite_enemy2, sfFalse);
}

void game(my_t *rpg)
{
    sfRenderWindow_drawSprite(rpg->window, rpg->map_ville_sprite, sfFalse);
    if (rpg->zone == 0) sfRenderWindow_drawSprite(rpg->window, rpg->sprite_npc1, sfFalse);
    if (rpg->zone == 0) sfRenderWindow_drawSprite(rpg->window, rpg->sprite_npcamir, sfFalse);
    if (rpg->zone == 0) sfRenderWindow_drawSprite(rpg->window, rpg->sprite_npcmage, sfFalse);
    if (rpg->hud2 == 0) sfRenderWindow_drawSprite(rpg->window, rpg->sprite_hud1, sfFalse);
    if (rpg->b == 1) sfRenderWindow_drawSprite(rpg->window, rpg->sprite_questhud1, sfFalse);
     if(rpg->k == 1) {
         if (rpg->ni != 1) sfMusic_play(rpg->explication_ak);
         rpg->ni = 1;
     }
    if (rpg->k == 1 && rpg->ni2 != 1) {
        sfRenderWindow_drawSprite(rpg->window, rpg->sprite_diak, sfFalse);
    }
    if (sfKeyboard_isKeyPressed(sfKeyK) && rpg->miss == 1) {
        sfMusic_stop(rpg->tir_ak);
        sfMusic_play(rpg->tir_ak);
    }
    game_fonction(rpg);
    link_character(rpg);
    if (rpg->zone == 3) enemy_function(rpg);
    if (rpg->zone == 0 || rpg->zone == 1 || rpg->zone == 3) sfRenderWindow_drawSprite(rpg->window, rpg->sprite_wind, sfFalse);
    if (rpg->zone == 2) sfRenderWindow_drawSprite(rpg->window, rpg->sprite_leaf, sfFalse);
    if (sfKeyboard_isKeyPressed(sfKeyM))
        sfRenderWindow_drawSprite(rpg->window, rpg->sprite_minimap, sfFalse);
}

void menu(my_t *rpg)
{
    clock_menu(rpg);
    sfRenderWindow_drawSprite(rpg->window, rpg->sprite_background, sfFalse);
    sfRenderWindow_drawSprite(rpg->window, rpg->sprite_woodampli, sfFalse);
    sfRenderWindow_drawSprite(rpg->window, rpg->sprite_brokenwood, sfFalse);
    sfRenderWindow_drawSprite(rpg->window, rpg->sprite_wood, sfFalse);
    sfRenderWindow_drawSprite(rpg->window, rpg->sprite_sol, sfFalse);
    sfRenderWindow_drawSprite(rpg->window, rpg->sprite_menuscreen1, sfFalse);
    if (rpg->play_status == 1) sfRenderWindow_drawSprite(rpg->window, rpg->sprite_playbutton, sfFalse);
}

void opened_window(my_t *rpg)
{
    events(rpg);
    if(rpg->status == 5) {
        menu3(rpg);
        sfMusic_stop(rpg->talking_zik);
    }
    if (rpg->status == 4) {
        if (rpg->makroute_zoom.x > 1 && rpg->makroute_zoom.y > 1) {
            rpg->makroute_zoom.x -= 0.001;
            rpg->makroute_zoom.y -= 0.001;
        } sfSprite_setScale(rpg->sprite_endalternative, rpg->makroute_zoom);
        sfRenderWindow_drawSprite(rpg->window, rpg->sprite_endalternative, sfFalse);
    }
    if (rpg->status == 3) {
        sfMusic_play(rpg->salam_song);
        sfMusic_stop(rpg->talking_zik);
        game(rpg);
        npc_fonction(rpg);
        fonction_mainquest(rpg);
    } if (rpg->status == 2) {
        sfMusic_play(rpg->ville_zik);
        sfMusic_setLoop(rpg->ville_zik, sfTrue);
        sfMusic_stop(rpg->menu_zik);
        cinematique(rpg);
    } if (rpg->status == 1) {
        menu2(rpg);
        sfMusic_play(rpg->talking_zik);
    } if (rpg->status == 0) menu(rpg);
    sfRenderWindow_display(rpg->window);
    sfRenderWindow_clear(rpg->window, sfBlack);
}

int main(void)
{
    my_t *rpg = malloc(sizeof(my_t));

    variable_affectation(rpg);
    setup(rpg);
    sfMusic_play(rpg->menu_zik);
    while (sfRenderWindow_isOpen(rpg->window)) {
        opened_window(rpg);
    } destroy_function(rpg);
}