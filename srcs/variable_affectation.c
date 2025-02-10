/*
** EPITECH PROJECT, 2020
** variable
** File description:
** variable
*/

#include "my.h"

void variable_affectation(my_t *rpg)
{
    sfVideoMode resolution = {1024, 768, 32};
    sfVector2f scale_link = {0.4, 0.4};
    sfVector2f scale_enemy = {2, 2};

    rpg->window = sfRenderWindow_create(resolution, "WALID", sfFullscreen, NULL);
    rpg->texture_one_heart = sfTexture_createFromFile("1_heart.png", NULL);
    rpg->texture_two_hearts = sfTexture_createFromFile("2_hearts.png", NULL);
    rpg->texture_three_hearts = sfTexture_createFromFile("3_hearts.png", NULL);
    rpg->texture_image_chest = sfTexture_createFromFile("tqt.png", NULL);
    rpg->texture_enemy_left = sfTexture_createFromFile("Enemy_Left.png", NULL);
    rpg->texture_enemy_right = sfTexture_createFromFile("Enemy_Right.png", NULL);
    rpg->map_ville1 = sfTexture_createFromFile("mapfinal.png", NULL);
    rpg->map_ville2 = sfTexture_createFromFile("mapfinal2.png", NULL);
    rpg->map_ville3 = sfTexture_createFromFile("mapfinal3.png", NULL);
    rpg->map_labyrinthe1 = sfTexture_createFromFile("labyrinthe_coffre_FERME.png", NULL);
    rpg->map_labyrinthe2 = sfTexture_createFromFile("labyrinthe_coffre_OUVERT.png", NULL);
    rpg->texture_seb = sfTexture_createFromFile("seb.png", NULL);
    rpg->map_right1 = sfTexture_createFromFile("map2_tout_ferme.png", NULL);
    rpg->map_right2 = sfTexture_createFromFile("map2_sans_chaine.png", NULL);
    rpg->texture_memet = sfTexture_createFromFile("memet.png", NULL);
    rpg->map_right3 = sfTexture_createFromFile("map2_tout_ouvert.png", NULL);
    rpg->texture_salle_boss = sfTexture_createFromFile("boss_zone_1.png", NULL);
    rpg->texture_e_button = sfTexture_createFromFile("E_button.png", NULL);
    rpg->texture_e_button_pushed = sfTexture_createFromFile("E_button_pushed.png", NULL);
    rpg->texture_brokenwood = sfTexture_createFromFile("brokenwood.png", NULL);
    rpg->texture_menuscreen1 = sfTexture_createFromFile("ecran_menu1.png", NULL);
    rpg->texture_menuscreen2 = sfTexture_createFromFile("ngbutton.png", NULL);
    rpg->texture_woodampli = sfTexture_createFromFile("woodampli.png", NULL);
    rpg->texture_playbutton = sfTexture_createFromFile("playbutton.png", NULL);
    rpg->texture_npcmage = sfTexture_createFromFile("kalashman.png", NULL);
    rpg->texture_settings_button = sfTexture_createFromFile("settingsbutton.png", NULL);
    rpg->texture_nwbutton = sfTexture_createFromFile("nw.png", NULL);
    rpg->texture_wind = sfTexture_createFromFile("wind.png", NULL);
    rpg->texture_mainquest = sfTexture_createFromFile("mainquest.png", NULL);
    rpg->texture_sol = sfTexture_createFromFile("sol.png", NULL);
    rpg->texture_npc1 = sfTexture_createFromFile("npcgoumi.png", NULL);
    rpg->texture_npcamir = sfTexture_createFromFile("amir.png", NULL);
    rpg->texture_quest1 = sfTexture_createFromFile("quest1.png", NULL);
    rpg->texture_background = sfTexture_createFromFile("background.png", NULL);
    rpg->texture_wood = sfTexture_createFromFile("wood.png", NULL);
    rpg->link_attack = sfTexture_createFromFile("link_attack.png", NULL);
    rpg->link_idle_down = sfTexture_createFromFile("Idle_down.png", NULL);
    rpg->link_idle_top = sfTexture_createFromFile("Idle_top.png", NULL);
    rpg->link_idle_left = sfTexture_createFromFile("Idle_left.png", NULL);
    rpg->link_idle_right = sfTexture_createFromFile("Idle_right.png", NULL);
    rpg->link_run_down = sfTexture_createFromFile("Run_down.png", NULL);
    rpg->link_run_top = sfTexture_createFromFile("Run_top.png", NULL);
    rpg->link_run_left = sfTexture_createFromFile("Run_left.png", NULL);
    rpg->link_run_right = sfTexture_createFromFile("Run_right.png", NULL);
    rpg->texture_minimap = sfTexture_createFromFile("Map.png", NULL);
    rpg->settings_screen = sfTexture_createFromFile("settingscreen.png", NULL);
    rpg->texture_ban_chat1 = sfTexture_createFromFile("Ban_walid1.png", NULL);
    rpg->texture_ban_chat1 = sfTexture_createFromFile("Ban_walid2.png", NULL);
    rpg->texture_ban_chat1 = sfTexture_createFromFile("Ban_walid3.png", NULL);
    rpg->texture_endalternative = sfTexture_createFromFile("Fin_makrout.png", NULL);
    rpg->texture_cinematique1 = sfTexture_createFromFile("cinematique1.png", NULL);
    rpg->texture_hud1 = sfTexture_createFromFile("hud1.png", NULL);
    rpg->texture_questhud = sfTexture_createFromFile("questcheck.png", NULL);
    rpg->texture_interaction = sfTexture_createFromFile("intero.png", NULL);
    rpg->texture_kalashquest = sfTexture_createFromFile("dialogue_kalash.png", NULL);
    rpg->texture_kalashquest2 = sfTexture_createFromFile("dialogue_kalash2.png", NULL);
    rpg->texture_diak = sfTexture_createFromFile("diak.png", NULL);
    rpg->texture_hudsword = sfTexture_createFromFile("hudsword.png", NULL);
    rpg->texture_leaf = sfTexture_createFromFile("leaf.png", NULL);
    rpg->texture_hudsnipe = sfTexture_createFromFile("hudsnipe.png", NULL);
    rpg->texture_hud2 = sfTexture_createFromFile("hud2.png", NULL);
    rpg->texture_dialogue_seb = sfTexture_createFromFile("dialogue_seb.png", NULL);
    rpg->image_down = sfImage_createFromFile("Collisions_ville_en_bas.png");
    rpg->image_top = sfImage_createFromFile("Collisions_ville_en_haut2.png");
    rpg->image_left = sfImage_createFromFile("Collisions_labyrinthe.png");
    rpg->image_right_close = sfImage_createFromFile("Collisions_droite_porte_fermee.png");
    rpg->image_right_open = sfImage_createFromFile("Collisions_droite_porte_ouverte.png");
    rpg->image_boss = sfImage_createFromFile("Collisions_boss.png");
    rpg->sprite_ban_chat= sfSprite_create();
    rpg->sprite_hearts= sfSprite_create();
    rpg->sprite_image_chest = sfSprite_create();
    rpg->sprite_enemy1 = sfSprite_create();
    rpg->sprite_enemy2 = sfSprite_create();
    rpg->sprite_e_button = sfSprite_create();
    rpg->sprite_seb = sfSprite_create();
    rpg->sprite_hudsnipe = sfSprite_create();
    rpg->sprite_questhud1 = sfSprite_create();
    rpg->sprite_diak = sfSprite_create();
    rpg->sprite_kalashquest = sfSprite_create();
    rpg->sprite_kalashquest2 = sfSprite_create();
    rpg->sprite_interaction = sfSprite_create();
    rpg->sprite_options_button = sfSprite_create();
    rpg->sprite_hud1 = sfSprite_create();
    rpg->sprite_memet = sfSprite_create();
    rpg->sprite_hud2 = sfSprite_create();
    rpg->sprite_settingscreen = sfSprite_create();
    rpg->sprite_npcmage = sfSprite_create();
    rpg->sprite_mainquest = sfSprite_create();
    rpg->sprite_cinematique1 = sfSprite_create();
    rpg->sprite_endalternative = sfSprite_create();
    rpg->sprite_minimap = sfSprite_create();
    rpg->sprite_npcamir = sfSprite_create();
    rpg->sprite_nwbutton = sfSprite_create();
    rpg->sprite_hudsword = sfSprite_create();
    rpg->sprite_playbutton = sfSprite_create();
    rpg->sprite_menuscreen1 = sfSprite_create();
    rpg->sprite_menuscreen2 = sfSprite_create();
    rpg->sprite_brokenwood = sfSprite_create();
    rpg->sprite_woodampli = sfSprite_create();
    rpg->map_ville_sprite = sfSprite_create();
    rpg->sprite_npc1 = sfSprite_create();
    rpg->sprite_background = sfSprite_create();
    rpg->sprite_leaf = sfSprite_create();
    rpg->sprite_quest1 = sfSprite_create();
    rpg->sprite_dialo_seb = sfSprite_create();
    rpg->sprite_sol = sfSprite_create();
    rpg->sprite_wind = sfSprite_create();
    rpg->sprite_wood = sfSprite_create();
    rpg->link_attack_sprite = sfSprite_create();
    rpg->link_sprite = sfSprite_create();
    rpg->clock_link_attack = sfClock_create();
    rpg->clock_wind = sfClock_create();
    rpg->clock_menu1 = sfClock_create();
    rpg->clock_menu2 = sfClock_create();
    rpg->clock_menu3 = sfClock_create();
    rpg->clock_link = sfClock_create();
    rpg->clock_chest = sfClock_create();
    rpg->clock_test = sfClock_create();
    rpg->clock_ban = sfClock_create();
    rpg->clock_ban2 = sfClock_create();
    rpg->clock_e_button = sfClock_create();
    rpg->clock_touched = sfClock_create();
    rpg->clock_enemy = sfClock_create();
    rpg->menu_zik = sfMusic_createFromFile("Musique_menu.ogg");
    rpg->salam_song = sfMusic_createFromFile("end2song.ogg");
    rpg->explication_ak = sfMusic_createFromFile("Explication_AK47.ogg");
    rpg->tir_ak = sfMusic_createFromFile("Tir_AK47.ogg");
    rpg->ban_zik = sfMusic_createFromFile("Ban.ogg");
    rpg->attack_sword_zik = sfMusic_createFromFile("Attack.ogg");
    rpg->je_suis_chaud_zik = sfMusic_createFromFile("Je_suis_chaud.ogg");
    rpg->je_suis_fatigue_zik = sfMusic_createFromFile("Je_suis_fatigue_ma_gueule.ogg");
    rpg->boss_zik = sfMusic_createFromFile("Musique_Boss.ogg");
    rpg->ville_zik = sfMusic_createFromFile("Musique_Ville.ogg");
    rpg->open_chest_zik = sfMusic_createFromFile("Ouverture_Coffre.ogg");
    rpg->talking_zik = sfMusic_createFromFile("Parler.ogg");
    rpg->attack_intervention_zik = sfMusic_createFromFile("Tir_intervention.ogg");
    rpg->lives = 3;
    rpg->link_attacking = 0;
    rpg->zone = 0;
    rpg->enemy1_position.x = 1314;
    rpg->enemy1_position.y = 507;
    rpg->enemy2_position.x = 431;
    rpg->enemy2_position.y = 507;
    rpg->chest_image_position.x = 1024 / 2;
    rpg->chest_image_position.x = 768 / 2;
    rpg->kalash_position.y = 400;
    rpg->map_ville_position.x = 0;
    rpg->map_ville_position.y = -1080;
    rpg->map_collision.x = 0;
    rpg->map_collision.y = -1080;
    rpg->link_attack_pos.x = (1920 / 2) - (640 / 2);
    rpg->link_attack_pos.y = (1080 / 2) - (335 / 2);
    rpg->link_position.x = 900;
    rpg->link_position.y = 1080 - 160;
    rpg->collision_droite = 0;
    rpg->npc1_position.x = 193;
    rpg->npc1_position.y = 60;
    rpg->npcmage_position.x = 1020;
    rpg->npcmage_position.y = 300;
    rpg->npcamir_position.x = 843;
    rpg->npcamir_position.y = 880;
    rpg->quest1_position.x = 193;
    rpg->quest1_position.y = 20;
    rpg->interaction_pos.x = 1021;
    rpg->interaction_pos.y = 255;
    rpg->rect_wood.height = 1080;
    rpg->rect_wood.left = 0;
    rpg->rect_wood.top = 0;
    rpg->rect_wood.width = 1920;
    rpg->rect_sol.height = 1080;
    rpg->rect_sol.left = 0;
    rpg->rect_sol.top = 0;
    rpg->rect_sol.width = 1920;
    rpg->rect_brokenwood.height = 1080;
    rpg->rect_brokenwood.left = 0;
    rpg->rect_brokenwood.top = 0;
    rpg->rect_brokenwood.width = 1920;
    rpg->rect_woodampli.height = 1080;
    rpg->rect_woodampli.left = 0;
    rpg->rect_woodampli.top = 0;
    rpg->rect_woodampli.width = 1920;
    rpg->rect_wind.height = 1080;
    rpg->rect_wind.left = 0;
    rpg->rect_wind.top = 0;
    rpg->rect_wind.width = 1920;
    rpg->rect_link.height = 120;
    rpg->rect_link.width = 116;
    rpg->rect_enemy.height = 29;
    rpg->rect_enemy.width = 24;
    rpg->makroute_zoom.x = 2.0;
    rpg->makroute_zoom.y = 2.0;
    rpg->snipe = 0;
    rpg->snipe2 = 0;
    rpg->zone = 0;
    rpg->memet_position.x = 855;
    rpg->memet_position.y = 200;
    rpg->seb_position.x = 1186;
    rpg->seb_position.y = 300;
    sfSprite_setScale(rpg->link_sprite, scale_link);
    sfSprite_setScale(rpg->sprite_enemy1, scale_enemy);
    sfSprite_setScale(rpg->sprite_enemy2, scale_enemy);
    sfMusic_setVolume(rpg->boss_zik, 15);
    sfMusic_setVolume(rpg->open_chest_zik, 40);
    sfMusic_setVolume(rpg->salam_song, 15);
    sfMusic_setVolume(rpg->ville_zik, 10);
}

void colision_fonction(my_t *rpg)
{
    if (rpg->zone == 0) {
        rpg->perso_color_droite = sfImage_getPixel(rpg->image_down, rpg->link_position.x + 40, rpg->link_position.y + 40);
        rpg->perso_color_gauche = sfImage_getPixel(rpg->image_down, rpg->link_position.x + 40, rpg->link_position.y + 40);
        rpg->perso_color_bas = sfImage_getPixel(rpg->image_down, rpg->link_position.x + 40, rpg->link_position.y + 40);
        rpg->perso_color_haut = sfImage_getPixel(rpg->image_down, rpg->link_position.x + 40, rpg->link_position.y + 40);
    }
    if (rpg->zone == 1) {
        rpg->perso_color_droite = sfImage_getPixel(rpg->image_top, rpg->link_position.x + 40, rpg->link_position.y + 40);
        rpg->perso_color_gauche = sfImage_getPixel(rpg->image_top, rpg->link_position.x + 40, rpg->link_position.y + 40);
        rpg->perso_color_bas = sfImage_getPixel(rpg->image_top, rpg->link_position.x + 40, rpg->link_position.y + 40);
        rpg->perso_color_haut = sfImage_getPixel(rpg->image_top, rpg->link_position.x + 40, rpg->link_position.y + 40);
    }
    if (rpg->zone == 2) {
        rpg->perso_color_droite = sfImage_getPixel(rpg->image_left, rpg->link_position.x + 40, rpg->link_position.y + 40);
        rpg->perso_color_gauche = sfImage_getPixel(rpg->image_left, rpg->link_position.x + 40, rpg->link_position.y + 40);
        rpg->perso_color_bas = sfImage_getPixel(rpg->image_left, rpg->link_position.x + 40, rpg->link_position.y + 40);
        rpg->perso_color_haut = sfImage_getPixel(rpg->image_left, rpg->link_position.x + 40, rpg->link_position.y + 40);
    }
    if (rpg->zone == 3 && rpg->right_door != 1) {
        rpg->perso_color_droite = sfImage_getPixel(rpg->image_right_close, rpg->link_position.x + 40, rpg->link_position.y + 40);
        rpg->perso_color_gauche = sfImage_getPixel(rpg->image_right_close, rpg->link_position.x + 40, rpg->link_position.y + 40);
        rpg->perso_color_bas = sfImage_getPixel(rpg->image_right_close, rpg->link_position.x + 40, rpg->link_position.y + 40);
        rpg->perso_color_haut = sfImage_getPixel(rpg->image_right_close, rpg->link_position.x + 40, rpg->link_position.y + 40);
    }
    if (rpg->zone == 3 && rpg->right_door == 1) {
        rpg->perso_color_droite = sfImage_getPixel(rpg->image_right_open, rpg->link_position.x + 40, rpg->link_position.y + 40);
        rpg->perso_color_gauche = sfImage_getPixel(rpg->image_right_open, rpg->link_position.x + 40, rpg->link_position.y + 40);
        rpg->perso_color_bas = sfImage_getPixel(rpg->image_right_open, rpg->link_position.x + 40, rpg->link_position.y + 40);
        rpg->perso_color_haut = sfImage_getPixel(rpg->image_right_open, rpg->link_position.x + 40, rpg->link_position.y + 40);
    }
    if (rpg->zone == 4) {
        rpg->perso_color_droite = sfImage_getPixel(rpg->image_boss, rpg->link_position.x + 40, rpg->link_position.y + 40);
        rpg->perso_color_gauche = sfImage_getPixel(rpg->image_boss, rpg->link_position.x + 40, rpg->link_position.y + 40);
        rpg->perso_color_bas = sfImage_getPixel(rpg->image_boss, rpg->link_position.x + 40, rpg->link_position.y + 40);
        rpg->perso_color_haut = sfImage_getPixel(rpg->image_boss, rpg->link_position.x + 40, rpg->link_position.y + 40);
    }
    if (rpg->perso_color_droite.r == 0 && rpg->perso_color_droite.b == 0 &&
    rpg->perso_color_droite.g == 0) {
        rpg->collision_droite = 1;
    }
    else rpg->collision_droite = 0;
    if (rpg->perso_color_gauche.r == 0 && rpg->perso_color_gauche.b == 255 &&
    rpg->perso_color_gauche.g == 0) rpg->collision_gauche = 1;
    else rpg->collision_gauche = 0;
    if (rpg->perso_color_haut.r == 0 && rpg->perso_color_haut.b == 0 &&
    rpg->perso_color_haut.g == 255) rpg->collision_haut = 1;
    else rpg->collision_haut = 0;
    if (rpg->perso_color_bas.r == 255 && rpg->perso_color_bas.b == 0 &&
    rpg->perso_color_bas.g == 0) rpg->collision_bas = 1;
    else rpg->collision_bas = 0;
}

void npc_fonction(my_t *rpg)
{
    sfSprite_setPosition(rpg->sprite_wind, rpg->wind_position);
    sfSprite_setPosition(rpg->sprite_quest1, rpg->quest1_position);
    if (rpg->link_position.x >= rpg->npc1_position.x - 200 && rpg->link_position.x <= rpg->npc1_position.x + 200
    && rpg->link_position.y >= rpg->npc1_position.y - 200 && rpg->link_position.y <= rpg->npc1_position.y + 200 && rpg->zone == 0) {
        rpg->quest1_check = 1;
        rpg->mainquest = 1;
    }
    else {
        rpg->quest1_check = 0;
        rpg->mainquest = 0;
    }
    if (rpg->quest1_check == 1) {
        sfRenderWindow_drawSprite(rpg->window, rpg->sprite_quest1, sfFalse);
    }
    if (rpg->mainquest2 == 1 ) {
        sfRenderWindow_drawSprite(rpg->window, rpg->sprite_mainquest, sfFalse);
    }
    if (rpg->link_position.x >= rpg->npcmage_position.x - 200 && rpg->link_position.x <= rpg->npcmage_position.x  + 200
    && rpg->link_position.y >= rpg->npcmage_position.y - 200 && rpg->link_position.y <= rpg->npcmage_position.y + 200 && rpg->zone == 0) {
        rpg->intero1 = 1;
        rpg->check1 = 1;
    }
    else {
        rpg->intero1 = 0;
        rpg->check1 = 0;
    }
    if (rpg->intero1 == 1 && rpg->zone == 0) {
        sfRenderWindow_drawSprite(rpg->window, rpg->sprite_interaction, sfFalse);
    }
    if (rpg->check2 == 1 && rpg->zone == 0) {
        sfRenderWindow_drawSprite(rpg->window, rpg->sprite_kalashquest, sfFalse);
    }
    if (rpg->yes == 1 && rpg->zone == 0) {
        sfRenderWindow_drawSprite(rpg->window, rpg->sprite_kalashquest2, sfFalse);
    }
    if (rpg->hud2 == 1) {
        sfRenderWindow_drawSprite(rpg->window, rpg->sprite_hud2, sfFalse);
    }
    if (rpg->zone == 1) {
        sfRenderWindow_drawSprite(rpg->window, rpg->sprite_seb, sfFalse);
        if (rpg->link_position.x >= rpg->seb_position.x - 200 && rpg->link_position.x <= rpg->seb_position.x  + 200
        && rpg->link_position.y >= rpg->seb_position.y - 200 && rpg->link_position.y <= rpg->seb_position.y + 200 && rpg->zone == 1) {
            if (sfKeyboard_isKeyPressed(sfKeyE)) rpg->seb_int = 1;
        }
        if (rpg->seb_int == 1) sfRenderWindow_drawSprite(rpg->window, rpg->sprite_dialo_seb, sfFalse);
    }
}

void fonction_mainquest(my_t *rpg)
{
    static int x = 0;
    static int a = 0;
    static int b = 0;
    static int button = 0;
    static int pushed = 0;

    if (x == 20 && b == 0) {
        b = 1;
        rpg->sword = 1;
        sfSprite_setTexture(rpg->map_ville_sprite, rpg->map_ville2, sfFalse);
    } if (rpg->link_position.x >= 13 && rpg->link_position.x <= 132
    && rpg->link_position.y >= 230 && rpg->link_position.y <= 364 && rpg->zone == 1) {
        if (sfKeyboard_isKeyPressed(sfKeyE) && x < 20 && a == 0) {
            x++;
            a = 1;
        } if (sfKeyboard_isKeyPressed(sfKeyE) && x < 20) a = 0;
        if (button == 0) {
            sfClock_restart(rpg->clock_e_button);
            button = 1;
        } if (sfTime_asMilliseconds(sfClock_getElapsedTime(rpg->clock_e_button)) > 400 && pushed == 0) {
            sfClock_restart(rpg->clock_e_button);
            sfSprite_setTexture(rpg->sprite_e_button, rpg->texture_e_button_pushed, sfFalse);
            pushed = 1;
        } else if (sfTime_asMilliseconds(sfClock_getElapsedTime(rpg->clock_e_button)) > 400 && pushed == 1) {
            sfClock_restart(rpg->clock_e_button);
            sfSprite_setTexture(rpg->sprite_e_button, rpg->texture_e_button, sfFalse);
            pushed = 0;
        } sfRenderWindow_drawSprite(rpg->window, rpg->sprite_e_button, sfFalse);
    } else button = 0;
    if (rpg->sword == 1) sfRenderWindow_drawSprite(rpg->window, rpg->sprite_hudsword, sfFalse);
    if (rpg->link_position.x >= 1047 && rpg->link_position.x <= 1109
    && rpg->link_position.y >= 688 && rpg->link_position.y <= 737 && rpg->zone == 2) {
        if (sfKeyboard_isKeyPressed(sfKeyE) && rpg->snipe == 0) {
            sfClock_restart(rpg->clock_chest);
            sfMusic_play(rpg->open_chest_zik);
            sfSprite_setTexture(rpg->map_ville_sprite, rpg->map_labyrinthe2, sfFalse);
            rpg->snipe = 1;
            rpg->snipe2 = 1;
        }
    }
    if (rpg->snipe2 == 1) {
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(rpg->clock_chest)) > 3000) {
            rpg->snipe2 = 0;
            sfClock_restart(rpg->clock_chest);
            sfMusic_stop(rpg->open_chest_zik);
        } sfRenderWindow_drawSprite(rpg->window, rpg->sprite_image_chest, sfFalse);
    }
    if (rpg->link_position.x >= 1619 && rpg->link_position.x <= 1742
    && rpg->link_position.y >= 449 && rpg->link_position.y <= 602 && rpg->zone == 3) {
        if (sfKeyboard_isKeyPressed(sfKeyE) && rpg->boss_key == 0) {
            sfClock_restart(rpg->clock_chest);
            sfMusic_play(rpg->open_chest_zik);
            sfSprite_setTexture(rpg->map_ville_sprite, rpg->map_right3, sfFalse);
            rpg->boss_key = 1;
            rpg->boss_key2 = 1;
        }
    }
    if (rpg->boss_key2 == 1) {
        if (sfTime_asMilliseconds(sfClock_getElapsedTime(rpg->clock_chest)) > 3000) {
            rpg->boss_key2 = 0;
            sfClock_restart(rpg->clock_chest);
            sfMusic_stop(rpg->open_chest_zik);
        } sfRenderWindow_drawSprite(rpg->window, rpg->sprite_image_chest, sfFalse);
    } if (rpg->snipe == 1) sfRenderWindow_drawSprite(rpg->window, rpg->sprite_hudsnipe, sfFalse);
    if (rpg->link_position.x >= 896 && rpg->link_position.x <= 989
    && rpg->link_position.y >= 67 && rpg->link_position.y <= 103 && rpg->zone == 1) {
        if (sfKeyboard_isKeyPressed(sfKeyE) && rpg->boss_key == 1) {
            sfClock_restart(rpg->clock_chest);
            sfSprite_setTexture(rpg->map_ville_sprite, rpg->map_ville3, sfFalse);
            rpg->boss_door = 1;
        }
    } if (sfTime_asSeconds(sfClock_getElapsedTime(rpg->clock_chest)) > 1 && rpg->boss_door == 1) {
        sfMusic_play(rpg->boss_zik);
        sfMusic_stop(rpg->ville_zik);
        rpg->link_position.y = 950;
        rpg->link_position.x = 950;
        rpg->zone = 4;
        rpg->boss_door = 0;
    }
    if (rpg->zone == 4) {
        sfRenderWindow_drawSprite(rpg->window, rpg->sprite_memet, sfFalse);
    }
}

void clock_menu(my_t *rpg)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime
    (rpg->clock_menu1)) > 0.1) {
        rpg->rect_sol.left += 2;
        rpg->rect_wood.left += 2;
        if (rpg->rect_sol.left >= 1920) {
            rpg->rect_sol.left = 0;
            sfClock_restart(rpg->clock_menu1);
        }
        if (rpg->rect_wood.left >= 1920) {
            rpg->rect_wood.left = 0;
            sfClock_restart(rpg->clock_menu1);
        }
    }
    if (sfTime_asMilliseconds(sfClock_getElapsedTime
    (rpg->clock_menu2)) > 0.1) {
        rpg->rect_brokenwood.left += 1;
        if (rpg->rect_brokenwood.left >= 1920) {
            rpg->rect_brokenwood.left = 0;
            sfClock_restart(rpg->clock_menu2);
        }
    }
    if (sfTime_asMilliseconds(sfClock_getElapsedTime
    (rpg->clock_menu3)) > 0.1) {
        rpg->rect_woodampli.left += 0.5;
        if (rpg->rect_woodampli.left >= 1920) {
            rpg->rect_woodampli.left = 0;
            sfClock_restart(rpg->clock_menu3);
        }
    }
    sfSprite_setTextureRect(rpg->sprite_woodampli, rpg->rect_woodampli);
    sfSprite_setTextureRect(rpg->sprite_brokenwood, rpg->rect_brokenwood);
    sfSprite_setTextureRect(rpg->sprite_sol, rpg->rect_sol);
    sfSprite_setTextureRect(rpg->sprite_wood, rpg->rect_wood);
}

void game_fonction(my_t *rpg)
{
    /*if (sfTime_asMilliseconds(sfClock_getElapsedTime
    (rpg->clock_wind)) > 0.1) {
        rpg->rect_wind.left -= 2;
        if (rpg->rect_wind.left <= -1920) {
            rpg->rect_wind.left = 0;
            sfClock_restart(rpg->clock_wind);
        }
    } sfSprite_setTextureRect(rpg->sprite_wind, rpg->rect_wind);*/

    rpg->wind_position.x += 2;
    sfSprite_setPosition(rpg->sprite_wind, rpg->wind_position);
    if (rpg->wind_position.x > 1920) {
        rpg->wind_position.x = -5000;
        sfSprite_setPosition(rpg->sprite_wind, rpg->wind_position);
    }
    rpg->leaf_position.x += 2;
    sfSprite_setPosition(rpg->sprite_leaf, rpg->leaf_position);
    if (rpg->leaf_position.x > 1920) {
        rpg->leaf_position.x = -1920;
        sfSprite_setPosition(rpg->sprite_leaf, rpg->leaf_position);
    }
}