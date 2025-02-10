/*
** EPITECH PROJECT, 2020
** events
** File description:
** events
*/

#include "my.h"

void events(my_t *rpg)
{
    static int last_pos = 3;

    rpg->mouse_position = sfMouse_getPositionRenderWindow(rpg->window);
    //printf("X = %d\n", rpg->mouse_position.x);
    //printf("\nY = %d", rpg->mouse_position.y);
    while (sfRenderWindow_pollEvent(rpg->window, &rpg->events)) {
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(rpg->window);
        if (sfKeyboard_isKeyPressed(sfKeyE) && rpg->mainquest == 1 && rpg->a == 0)
            rpg->mainquest2 = 1;
        if (sfKeyboard_isKeyPressed(sfKeyK) && rpg->hud2 == 1) {
            rpg->k = 1;
        }
        if (rpg->events.type == sfEvtMouseButtonPressed && rpg->events.mouseButton.button == sfMouseLeft
        && rpg->status == 3 && rpg->link_attacking == 0 && rpg->check2 == 0 && rpg->mainquest2 == 0
        && rpg->check1 == 0 && rpg->mainquest == 0 && rpg->sword == 1) {
            sfClock_restart(rpg->clock_link_attack);
            sfMusic_stop(rpg->attack_sword_zik);
            sfMusic_play(rpg->attack_sword_zik);
            rpg->link_attacking = 1;
        } if (sfKeyboard_isKeyPressed(sfKeyE) && rpg->check1 == 1 && rpg->c == 0)
            rpg->check2 = 1;
        if (rpg->status == 0) {
            if (rpg->events.type == sfEvtMouseButtonPressed && rpg->events.mouseButton.button == sfMouseLeft &&
               rpg->mouse_position.x >= 680 && rpg->mouse_position.x <= 1270 && rpg->mouse_position.y <= 909 && rpg->mouse_position.y >= 710) {
                    rpg->status = 1;
                }
            if (rpg->mouse_position.x >= 680 && rpg->mouse_position.x <= 1270 && rpg->mouse_position.y <= 909 && rpg->mouse_position.y >= 710) {
                rpg->play_status =  1;
            } else {
                rpg->play_status = 0;
            }
        }
        if (rpg->status == 1) {
            if (rpg->events.type == sfEvtMouseButtonPressed && rpg->events.mouseButton.button == sfMouseLeft &&
               rpg->mouse_position.x >= 1552 && rpg->mouse_position.x <= 1828 && rpg->mouse_position.y <= 613 && rpg->mouse_position.y >= 570) {
                    rpg->status = 2;
                }
            if (rpg->mouse_position.x >= 1552 && rpg->mouse_position.x <= 1828 && rpg->mouse_position.y <= 613 && rpg->mouse_position.y >= 570) {
                rpg->play_status = 2;
            } else {
                rpg->play_status = 0;
            }
            if (rpg->events.type == sfEvtMouseButtonPressed && rpg->events.mouseButton.button == sfMouseLeft &&
               rpg->mouse_position.x >= 1552 && rpg->mouse_position.x <= 1747 && rpg->mouse_position.y <= 809 && rpg->mouse_position.y >= 775) {
                    rpg->status = 5;
                }
            if (rpg->mouse_position.x >= 1552 && rpg->mouse_position.x <= 1747 && rpg->mouse_position.y <= 809 && rpg->mouse_position.y >= 775) {
                rpg->play_status2 = 1;
            }
            else {
                rpg->play_status2 = 0;
            }
            if (rpg->events.type == sfEvtMouseButtonPressed && rpg->events.mouseButton.button == sfMouseLeft &&
               rpg->mouse_position.x >= 36 && rpg->mouse_position.x <= 83 && rpg->mouse_position.y <= 84 && rpg->mouse_position.y >= 22) {
                    sfRenderWindow_close(rpg->window);
                }
        }
        if (rpg->status == 2) {
            if (rpg->events.type == sfEvtMouseButtonPressed && rpg->events.mouseButton.button == sfMouseLeft &&
               rpg->mouse_position.x >= 1602 && rpg->mouse_position.x <= 1675 && rpg->mouse_position.y <= 931 && rpg->mouse_position.y >= 904)
               rpg->status = 3;
        }
        if(rpg->status == 5) {
            if (rpg->events.type == sfEvtMouseButtonPressed && rpg->events.mouseButton.button == sfMouseLeft &&
                   rpg->mouse_position.x >= 0 && rpg->mouse_position.x <= 400 && rpg->mouse_position.y <= 300 && rpg->mouse_position.y >= 0) {
                       rpg->status = 1;
                   }
        }
        if (rpg->status == 3) {
            if (rpg->mainquest == 1 && rpg->zone == 0) {
                if (rpg->events.type == sfEvtMouseButtonPressed && rpg->events.mouseButton.button == sfMouseLeft &&
                   rpg->mouse_position.x >= 787 && rpg->mouse_position.x <= 895 && rpg->mouse_position.y <= 873 && rpg->mouse_position.y >= 843) {
                        rpg->mainquest2 = 0;
                        rpg->a = 1;
                        rpg->b = 1;
                        rpg->mainquest_accept = 1;
                        sfMusic_play(rpg->je_suis_chaud_zik);
                   }
                if (rpg->events.type == sfEvtMouseButtonPressed && rpg->events.mouseButton.button == sfMouseLeft &&
                rpg->mouse_position.x >= 1025 && rpg->mouse_position.x <= 1152 && rpg->mouse_position.y <= 873 && rpg->mouse_position.y >= 843) {
                    rpg->status = 4;
                    sfMusic_play(rpg->je_suis_fatigue_zik);
                }
            }
            if (rpg->check1 == 1 && rpg->zone == 0) {
                if (rpg->events.type == sfEvtMouseButtonPressed && rpg->events.mouseButton.button == sfMouseLeft &&
                   rpg->mouse_position.x >= 676 && rpg->mouse_position.x <= 1318 && rpg->mouse_position.y <= 365 && rpg->mouse_position.y >= 341) {
                       rpg->yes = 1;
                       rpg->yes2 = 1;
                       rpg->check2 = 0;
                       rpg->c = 1;
                   }
                   if (rpg->yes2 == 1) {
                        if (rpg->events.type == sfEvtMouseButtonPressed && rpg->events.mouseButton.button == sfMouseLeft &&
                           rpg->mouse_position.x >= 676 && rpg->mouse_position.x <= 1318 && rpg->mouse_position.y <= 790 && rpg->mouse_position.y >= 747) {
                               rpg->hud2 = 1;
                               rpg->yes = 0;
                           }
                   }
            }
            if (rpg->k == 1 && rpg->zone == 0) {
                if (rpg->events.type == sfEvtMouseButtonPressed && rpg->events.mouseButton.button == sfMouseLeft &&
                rpg->mouse_position.x >= 1108 && rpg->mouse_position.x <= 1189 && rpg->mouse_position.y <= 892 && rpg->mouse_position.y >= 864) {
                    rpg->miss = 1;
                    rpg->ni2 = 1;
                }
            }
            if (rpg->events.type == sfEvtMouseButtonPressed && rpg->events.mouseButton.button == sfMouseRight &&
            rpg->snipe == 1) {
                if (rpg->mouse_position.x >= 1853 && rpg->mouse_position.x <= 1888 &&
                rpg->mouse_position.y >= 604 && rpg->mouse_position.y <= 645 &&
                rpg->zone == 3 && rpg->right_door != 1) {
                    sfSprite_setTexture(rpg->map_ville_sprite, rpg->map_right2, sfFalse);
                    rpg->right_door = 1;
                } sfMusic_stop(rpg->attack_intervention_zik);
                sfMusic_play(rpg->attack_intervention_zik);
            }
            if (rpg->zone == 1) {
                if (rpg->events.type == sfEvtMouseButtonPressed && rpg->events.mouseButton.button == sfMouseLeft &&
                      rpg->mouse_position.x >= 736 && rpg->mouse_position.x <= 1210 && rpg->mouse_position.y <= 410 && rpg->mouse_position.y >= 371) {
                          rpg->seb_int = 0;
                      }
            }
        }
    }
    if (last_pos == 1)
        sfSprite_setTexture(rpg->link_sprite, rpg->link_idle_right, sfFalse);
    if (last_pos == 2)
        sfSprite_setTexture(rpg->link_sprite, rpg->link_idle_left, sfFalse);
    if (last_pos == 3)
        sfSprite_setTexture(rpg->link_sprite, rpg->link_idle_down, sfFalse);
    if (last_pos == 4)
        sfSprite_setTexture(rpg->link_sprite, rpg->link_idle_top, sfFalse);
    if (sfKeyboard_isKeyPressed(sfKeyD) && !sfKeyboard_isKeyPressed(sfKeyS)
    && !sfKeyboard_isKeyPressed(sfKeyZ) && rpg->collision_droite == 0) {
        sfSprite_setTexture(rpg->link_sprite, rpg->link_run_right, sfFalse);
        last_pos = 1;
        rpg->link_position.x += 1;
    } if (sfKeyboard_isKeyPressed(sfKeyQ) && !sfKeyboard_isKeyPressed(sfKeyS)
    && !sfKeyboard_isKeyPressed(sfKeyZ)&& rpg->collision_gauche == 0) {
        sfSprite_setTexture(rpg->link_sprite, rpg->link_run_left, sfFalse);
        last_pos = 2;
        rpg->link_position.x -= 1;
    } if (sfKeyboard_isKeyPressed(sfKeyS) && !sfKeyboard_isKeyPressed(sfKeyD)
    && !sfKeyboard_isKeyPressed(sfKeyQ) && rpg->collision_bas == 0) {
        sfSprite_setTexture(rpg->link_sprite, rpg->link_run_down, sfFalse);
        last_pos = 3;
        rpg->link_position.y += 1;
    } if (sfKeyboard_isKeyPressed(sfKeyZ) && !sfKeyboard_isKeyPressed(sfKeyD)
    && !sfKeyboard_isKeyPressed(sfKeyQ) && rpg->collision_haut == 0) {
        sfSprite_setTexture(rpg->link_sprite, rpg->link_run_top, sfFalse);
        last_pos = 4;
        rpg->link_position.y -= 1;
    }
}