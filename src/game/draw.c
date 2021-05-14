/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** draw.c
*/

#include "my.h"
#include "game.h"

void draw_sprite(all_t *play)
{
    if (play->state == 1){
        sfRenderWindow_drawSprite(play->window->my_window, play->game->map[0]->sprite, NULL);
        sfRenderWindow_drawSprite(play->window->my_window, play->game->poke[0]->sprite, NULL);
        sfRenderWindow_drawSprite(play->window->my_window, play->game->poke[1]->sprite, NULL);
    }
    else
    {
        sfRenderWindow_drawSprite(play->window->my_window, play->game->background, NULL);
        sfRenderWindow_drawSprite(play->window->my_window, play->game->player[0]->sprite, NULL);
        sfRenderWindow_drawSprite(play->window->my_window, play->game->player[1]->sprite, NULL);
    }

}