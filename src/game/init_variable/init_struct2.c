/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** init_2.c
*/

#include "my.h"
#include "game.h"

void init_song(window_t *window)
{
    window->sound[0] = sfSound_create();
    window->sound[1] = sfSound_create();
    window->sound[2] = sfSound_create();
    window->sound[3] = sfSound_create();
    window->sound[4] = sfSound_create();
    window->soundbuffer[0] = sfSoundBuffer_createFromFile("assets/sound/battle.ogg");
    window->soundbuffer[1] = sfSoundBuffer_createFromFile("assets/sound/error.ogg");
    window->soundbuffer[2] = sfSoundBuffer_createFromFile("assets/sound/run.ogg");
    window->soundbuffer[3] = sfSoundBuffer_createFromFile("assets/sound/pokego.ogg");
    window->soundbuffer[4] = sfSoundBuffer_createFromFile("assets/sound/whois.ogg");
    for (int i = 0; i <= 4; i++)
        sfSound_setBuffer(window->sound[i], window->soundbuffer[i]);
    sfSound_setVolume(window->sound[0], 0);
    sfSound_setLoop(window->sound[0], 1);
    sfSound_play(window->sound[0]);
}

void init_arene(all_t *play)
{
    play->game->map[0]->texture = sfTexture_createFromFile("assets/texture/fight/arene.png", NULL);
    play->game->map[0]->sprite = sfSprite_create();
    sfSprite_setTexture(play->game->map[0]->sprite, play->game->map[0]->texture, sfTrue);
}

void init_map(all_t *play)
{
    play->game->map[1]->texture = sfTexture_createFromFile("assets/texture/game/map/forest.png", NULL);
    play->game->map[1]->sprite = sfSprite_create();
    sfSprite_setTexture(play->game->map[1]->sprite, play->game->map[1]->texture, sfTrue);
}