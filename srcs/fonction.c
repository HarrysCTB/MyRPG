/*
** EPITECH PROJECT, 2020
** fonction
** File description:
** fonction
*/

#include "my.h"

void menu2(my_t *rpg)
{
    clock_menu(rpg);
    sfRenderWindow_drawSprite(rpg->window, rpg->sprite_background, sfFalse);
    sfRenderWindow_drawSprite(rpg->window, rpg->sprite_woodampli, sfFalse);
    sfRenderWindow_drawSprite(rpg->window, rpg->sprite_brokenwood, sfFalse);
    sfRenderWindow_drawSprite(rpg->window, rpg->sprite_wood, sfFalse);
    sfRenderWindow_drawSprite(rpg->window, rpg->sprite_sol, sfFalse);
    sfRenderWindow_drawSprite(rpg->window, rpg->sprite_menuscreen2, sfFalse);
    if (rpg->play_status == 2) sfRenderWindow_drawSprite(rpg->window, rpg->sprite_nwbutton, sfFalse);
    if (rpg->play_status2 == 1) sfRenderWindow_drawSprite(rpg->window, rpg->sprite_options_button, sfFalse);
}

void menu3(my_t *rpg)
{
    clock_menu(rpg);
    sfRenderWindow_drawSprite(rpg->window, rpg->sprite_background, sfFalse);
    sfRenderWindow_drawSprite(rpg->window, rpg->sprite_woodampli, sfFalse);
    sfRenderWindow_drawSprite(rpg->window, rpg->sprite_brokenwood, sfFalse);
    sfRenderWindow_drawSprite(rpg->window, rpg->sprite_wood, sfFalse);
    sfRenderWindow_drawSprite(rpg->window, rpg->sprite_sol, sfFalse);
    sfRenderWindow_drawSprite(rpg->window, rpg->sprite_settingscreen, sfFalse);
}

void cinematique(my_t *rpg)
{
    sfRenderWindow_drawSprite(rpg->window, rpg->sprite_cinematique1, sfFalse);
}

