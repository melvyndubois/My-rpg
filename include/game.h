/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** game.h
*/

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

#ifndef _GAME_H_
#define _GAME_H_

typedef struct window_s
{
    sfVideoMode mode;
    sfRenderWindow *my_window;
    sfSoundBuffer **soundbuffer;
    sfSound **sound;
}window_t;

typedef struct player_s
{
    int state;
    sfSprite *sprite;
    sfTexture *texture;
    sfClock *clock;
    sfVector2f pos;
    sfIntRect rect;
}player_t;

typedef struct map_s
{
    sfTexture *texture;
    sfSprite *sprite;
}map_t;

typedef struct poke_s
{
    int pv;
    int strength;
    sfSprite *sprite;
    sfTexture *texture;
    int state;
}poke_t;

typedef struct game_s
{
    sfEvent event;
    int r;
    player_t **player;
    sfSprite *background;
    map_t **map;
    poke_t **poke;
}game_t;

typedef struct all_s
{
    int state;
    game_t *game;
    window_t *window;
}all_t;

void game();

void draw_sprite(all_t *play);

void fight_detection (all_t *play);

void check_mouvement(all_t *play);

void boucle(player_t *player, int r);
void set_rect_perso(player_t *player);
void set_pos(player_t *player, int x, int y);
void set_pos_perso(player_t *player, int x, int y, int r);
void set_size (sfSprite *sprite, int size);
void set_pos_poke(sfSprite *sprite, int x, int y);
void set_map(game_t *game, int i);

void init_pokemon(all_t *play);
void init_song(window_t *window);
void init_window(all_t *play);
void init_game(all_t *play);
void init_pp(game_t *game);
void init_arene(all_t *play);
void init_map(all_t *play);
all_t *init_all(void);

void set_bulbi(sfSprite *sprite, int r);
void set_salam(sfSprite *sprite, int r);
void set_cara(sfSprite *sprite, int r);
void set_pikachu(sfSprite *sprite, int r);
void set_psyco(sfSprite *sprite, int r);
void set_rondou(sfSprite *sprite, int r);
void set_mewtwo(sfSprite *sprite, int r);
void set_onix(sfSprite *sprite, int r);
void set_draco(sfSprite *sprite, int r);
void set_ptera(sfSprite *sprite, int r);

#endif