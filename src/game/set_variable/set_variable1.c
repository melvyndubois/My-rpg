/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** use.c
*/

#include "my.h"
#include "game.h"

void boucle(player_t *player, int r)
{
    player->rect.top = r;
    if (player->rect.left <= 188)
        player->rect.left += 63;
    else
        player->rect.left = 0;
    sfSprite_setTextureRect(player->sprite, player->rect);
}

void set_rect_perso(player_t *player)
{
    player->rect.top = 0;
    player->rect.left = 0;
    player->rect.height = 63;
    player->rect.width = 65;
    sfSprite_setTextureRect(player->sprite, player->rect);
}

void set_pos(player_t *player, int x, int y)
{
    player->pos.x += x;
    player->pos.y += y;
    sfSprite_setPosition(player->sprite, player->pos);
}

void set_pos_perso(player_t *player, int x, int y, int r)
{
    player->pos.x += x;
    player->pos.y += y;
    sfSprite_setPosition(player->sprite, player->pos);
    boucle(player, r);
}

void set_size (sfSprite *sprite, int size)
{
    sfVector2f tmp;
    tmp.x = size;
    tmp.y = size;
    sfSprite_setScale(sprite, tmp);
}