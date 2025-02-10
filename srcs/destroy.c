/*
** EPITECH PROJECT, 2020
** destroy
** File description:
** destroy
*/

#include "my.h"

void destroy_function(my_t *rpg)
{
    sfRenderWindow_destroy(rpg->window);
    sfImage_destroy(rpg->image);
    sfTexture_destroy(rpg->map_ville1);
    sfTexture_destroy(rpg->link_idle_down);
    sfSprite_destroy(rpg->map_ville_sprite);
    sfSprite_destroy(rpg->link_sprite);
    sfMusic_destroy(rpg->menu_zik);
    sfMusic_destroy(rpg->salam_song);
    sfMusic_destroy(rpg->explication_ak);
    sfMusic_destroy(rpg->tir_ak);
    sfMusic_destroy(rpg->ban_zik);
    sfMusic_destroy(rpg->attack_sword_zik);
    sfMusic_destroy(rpg->je_suis_chaud_zik);
    sfMusic_destroy(rpg->je_suis_fatigue_zik);
    sfMusic_destroy(rpg->boss_zik);
    sfMusic_destroy(rpg->ville_zik);
    sfMusic_destroy(rpg->open_chest_zik);
    sfMusic_destroy(rpg->talking_zik);
    sfMusic_destroy(rpg->attack_intervention_zik);
}