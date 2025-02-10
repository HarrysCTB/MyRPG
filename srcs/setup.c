/*
** EPITECH PROJECT, 2020
** setup
** File description:
** setup
*/

#include "my.h"

void setup(my_t *rpg)
{
    sfRenderWindow_setFramerateLimit(rpg->window, 144);
    sfSprite_setTextureRect(rpg->link_sprite, rpg->rect_link);
    sfSprite_setTextureRect(rpg->sprite_enemy1, rpg->rect_enemy);
    sfSprite_setTextureRect(rpg->sprite_enemy2, rpg->rect_enemy);
    sfSprite_setTexture(rpg->sprite_ban_chat, rpg->texture_ban_chat1, sfFalse);
    sfSprite_setTexture(rpg->sprite_minimap, rpg->texture_minimap, sfFalse);
    sfSprite_setTexture(rpg->sprite_hearts, rpg->texture_three_hearts, sfFalse);
    sfSprite_setTexture(rpg->sprite_image_chest, rpg->texture_image_chest, sfFalse);
    sfSprite_setTexture(rpg->sprite_enemy1, rpg->texture_enemy_left, sfFalse);
    sfSprite_setTexture(rpg->sprite_enemy2, rpg->texture_enemy_right, sfFalse);
    sfSprite_setTexture(rpg->sprite_e_button, rpg->texture_e_button, sfFalse);
    sfSprite_setTexture(rpg->sprite_npcamir, rpg->texture_npcamir, sfFalse);
    sfSprite_setTexture(rpg->map_ville_sprite, rpg->map_ville1, sfFalse);
    sfSprite_setTexture(rpg->sprite_endalternative, rpg->texture_endalternative, sfFalse);
    sfSprite_setTexture(rpg->sprite_npcmage, rpg->texture_npcmage, sfFalse);
    sfSprite_setTexture(rpg->sprite_interaction, rpg->texture_interaction, sfFalse);
    sfSprite_setTexture(rpg->sprite_hud1, rpg->texture_hud1, sfFalse);
    sfSprite_setTexture(rpg->sprite_hud2, rpg->texture_hud2, sfFalse);
    sfSprite_setTexture(rpg->sprite_memet, rpg->texture_memet, sfFalse);
    sfSprite_setTexture(rpg->sprite_questhud1, rpg->texture_questhud, sfFalse);
    sfSprite_setTexture(rpg->sprite_mainquest, rpg->texture_mainquest, sfFalse);
    sfSprite_setTexture(rpg->sprite_cinematique1, rpg->texture_cinematique1, sfFalse);
    sfSprite_setTexture(rpg->sprite_options_button, rpg->texture_settings_button, sfFalse);
    sfSprite_setTexture(rpg->sprite_brokenwood, rpg->texture_brokenwood, sfFalse);
    sfSprite_setTexture(rpg->sprite_diak, rpg->texture_diak, sfFalse);
    sfSprite_setTexture(rpg->sprite_menuscreen1, rpg->texture_menuscreen1, sfFalse);
    sfSprite_setTexture(rpg->sprite_menuscreen2, rpg->texture_menuscreen2, sfFalse);
    sfSprite_setTexture(rpg->sprite_settingscreen, rpg->settings_screen, sfFalse);
    sfSprite_setTexture(rpg->sprite_hudsword, rpg->texture_hudsword, sfFalse);
    sfSprite_setTexture(rpg->sprite_seb, rpg->texture_seb, sfFalse);
    sfSprite_setTexture(rpg->sprite_playbutton, rpg->texture_playbutton, sfFalse);
    sfSprite_setTexture(rpg->sprite_nwbutton, rpg->texture_nwbutton, sfFalse);
    sfSprite_setTexture(rpg->sprite_leaf, rpg->texture_leaf, sfFalse);
    sfSprite_setTexture(rpg->sprite_kalashquest, rpg->texture_kalashquest, sfFalse);
    sfSprite_setTexture(rpg->sprite_kalashquest2, rpg->texture_kalashquest2, sfFalse);
    sfSprite_setTexture(rpg->sprite_hudsnipe, rpg->texture_hudsnipe, sfFalse);
    sfSprite_setTexture(rpg->link_sprite, rpg->link_idle_down, sfFalse);
    sfSprite_setTexture(rpg->link_attack_sprite, rpg->link_attack, sfFalse);
    sfSprite_setTexture(rpg->sprite_sol, rpg->texture_sol, sfFalse);
    sfSprite_setTexture(rpg->sprite_wood, rpg->texture_wood, sfFalse);
    sfSprite_setTexture(rpg->sprite_woodampli, rpg->texture_woodampli, sfFalse);
    sfSprite_setTexture(rpg->sprite_dialo_seb, rpg->texture_dialogue_seb, sfFalse);
    sfSprite_setTexture(rpg->sprite_background, rpg->texture_background, sfFalse);
    sfSprite_setTexture(rpg->sprite_quest1, rpg->texture_quest1, sfFalse);
    sfSprite_setTexture(rpg->sprite_npc1, rpg->texture_npc1, sfFalse);
    sfSprite_setTexture(rpg->sprite_wind, rpg->texture_wind, sfFalse);
    sfSprite_setPosition(rpg->sprite_enemy1, rpg->enemy1_position);
    sfSprite_setPosition(rpg->sprite_enemy2, rpg->enemy2_position);
    sfSprite_setPosition(rpg->sprite_image_chest, rpg->chest_image_position);
    sfSprite_setPosition(rpg->link_attack_sprite, rpg->link_attack_pos);
    sfSprite_setPosition(rpg->link_sprite, rpg->link_position);
    sfSprite_setPosition(rpg->sprite_npc1, rpg->npc1_position);
    sfSprite_setPosition(rpg->sprite_npcmage, rpg->npcmage_position);
    sfSprite_setPosition(rpg->sprite_npcamir, rpg->npcamir_position);
    sfSprite_setPosition(rpg->sprite_wind, rpg->wind_position);
    sfSprite_setPosition(rpg->sprite_seb, rpg->seb_position);
    sfSprite_setPosition(rpg->map_ville_sprite, rpg->map_ville_position);
    sfSprite_setPosition(rpg->sprite_interaction, rpg->interaction_pos);
    sfSprite_setPosition(rpg->sprite_kalashquest2, rpg->kalash_position);
    sfSprite_setPosition(rpg->sprite_memet, rpg->memet_position);
}