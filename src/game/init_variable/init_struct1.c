/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** init_first.c
*/

#include "my.h"
#include "game.h"

void init_window(all_t *play)
{
    play->window = malloc(sizeof(window_t));
    sfVideoMode tmp = {1920, 1080, 32};
    play->window->mode = tmp;
    play->window->my_window = sfRenderWindow_create(play->window->mode,
    "MyWindow", sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(play->window->my_window, 60);
    play->window->sound = malloc(sizeof(sfSound *) * 5);
    play->window->soundbuffer = malloc(sizeof(sfSoundBuffer *) * 5);
    init_song(play->window);
}

void init_pp(game_t *game)
{
    game->player[0]->state = 0;
    game->player[0]->sprite = sfSprite_create();
    game->player[0]->texture = sfTexture_createFromFile("assets/texture/game/character/player.png", NULL);
    game->player[0]->clock = sfClock_create();
    game->player[0]->pos.x = 0;
    game->player[0]->pos.y = 0;
    sfSprite_setTexture(game->player[0]->sprite, game->player[0]->texture, sfTrue);
    set_rect_perso(game->player[0]);
    set_pos(game->player[0], 900, 500);
}

void init_enemy(game_t *game)
{
    game->player[1]->texture = sfTexture_createFromFile("assets/texture/game/character/ennemy.png", NULL);
    game->player[1]->sprite = sfSprite_create();
    game->player[1]->clock = sfClock_create();
    sfSprite_setTexture(game->player[1]->sprite, game->player[1]->texture, sfTrue);
    set_rect_perso(game->player[1]);
    set_pos_perso(game->player[1], 1380, 180, 65);
}

void init_pokemon(all_t *play)
{
    play->game->poke[0] = malloc(sizeof(poke_t));
    play->game->poke[1] = malloc(sizeof(poke_t));
    play->game->poke[2] = NULL;
    for (int i = 0; play->game->poke[i]; i++){
        play->game->poke[i]->sprite = sfSprite_create();
        play->game->poke[i]->texture = sfTexture_createFromFile("assets/texture/pokemon/kanto.png", NULL);
        sfSprite_setTexture(play->game->poke[i]->sprite, play->game->poke[i]->texture, NULL);
        play->game->poke[i]->pv = 100;
        play->game->poke[i]->strength = 10;
        set_size(play->game->poke[i]->sprite, 3);
    }
    set_pikachu(play->game->poke[0]->sprite, 1);
    set_mewtwo(play->game->poke[1]->sprite, 0);
    play->state = 0;
}

void init_game(all_t *play)
{
    play->game->r = 0;
    play->game->player[0] = malloc(sizeof(player_t));
    play->game->player[1] = malloc(sizeof(player_t));
    play->game->map[0] = malloc(sizeof(map_t));
    play->game->map[1] = malloc(sizeof(map_t));
    play->game->background = sfSprite_create();
    init_pp(play->game);
    init_enemy(play->game);
    init_arene(play);
    init_map(play);
    init_pokemon(play);
}

all_t *init_all(void)
{
    all_t *play = malloc(sizeof(all_t));
    play->game = malloc(sizeof(game_t));
    play->game->player = malloc(sizeof(player_t *) * 2);
    play->game->map = malloc(sizeof(map_t *) * 2);
    play->game->poke = malloc(sizeof(poke_t *) * 3);
    init_window(play);
    init_game(play);
    return play;
}