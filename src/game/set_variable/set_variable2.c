/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** use_2.c
*/

#include "my.h"
#include "game.h"

void set_pos_poke(sfSprite *sprite, int x, int y)
{
    sfVector2f pos;
    pos.x = x;
    pos.y = y;
    sfSprite_setPosition(sprite, pos);
}

void set_map(game_t *game, int i)
{
    sfSprite_setTexture(game->background, game->map[i]->texture, sfTrue);
}