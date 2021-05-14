/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** event.c
*/

#include "my.h"
#include "game.h"

void fight_detection (all_t *play)
{
    // if (play->state = 1)
    //     combat();

    if (play->state == 2) {
        play->game->player[0]->state = 2;
        return;
    }
    if (play->state == 0 && play->game->player[0]->state < 2 &&
    play->game->player[0]->pos.y <= play->game->player[1]->pos.y + 10 &&
    play->game->player[0]->pos.y >= play->game->player[1]->pos.y - 10) {
        if (sfClock_getElapsedTime(play->game->player[1]->clock).microseconds > 100000) {
            set_pos_perso(play->game->player[1], -10, 0, play->game->player[1]->rect.top);
            sfSprite_setTextureRect(play->game->player[1]->sprite, play->game->player[1]->rect);
            sfClock_restart(play->game->player[1]->clock);
            if (play->game->player[1]->pos.x - 30 <= play->game->player[0]->pos.x && play->state == 0){
                play->state = 1;
            }
        }
        play->game->player[0]->state = 1;
    }
}