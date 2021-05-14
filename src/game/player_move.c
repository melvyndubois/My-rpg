/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** mouvement_player.c
*/

#include "my.h"
#include "game.h"

void check_left(all_t *play)
{
    if (sfKeyboard_isKeyPressed(sfKeyLeft) && play->game->player[0]->pos.x >= 100){
        play->game->r = 65;
        set_pos_perso(play->game->player[0], -10, 0, play->game->r);
    }
}

void check_right(all_t *play)
{
    if (sfKeyboard_isKeyPressed(sfKeyRight) && play->game->player[0]->pos.x <= 1750){
        play->game->r = 130;
        set_pos_perso(play->game->player[0], 10, 0, play->game->r);
    }
}

void check_down(all_t *play)
{
    if (sfKeyboard_isKeyPressed(sfKeyDown) && play->game->player[0]->pos.y <= 980){
        play->game->r = 0;
        set_pos_perso(play->game->player[0], 0, 10, play->game->r);
    }
}

void check_up(all_t *play)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp) && play->game->player[0]->pos.y >= 100){
        play->game->r = 195;
        set_pos_perso(play->game->player[0], 0, -10, play->game->r);
    }
}

void check_mouvement(all_t *play)
{
    check_left(play);
    check_right(play);
    check_down(play);
    check_up(play);
}