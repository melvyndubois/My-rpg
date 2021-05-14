/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** main.c
*/

#include "my.h"
#include "game.h"

void event_game(all_t *play)
{
	sfEvent event;

	while (sfRenderWindow_pollEvent(play->window->my_window, &event)) {
		if (event.type == sfEvtClosed || sfKeyboard_isKeyPressed(sfKeyEscape))
			sfRenderWindow_close(play->window->my_window);
        if (sfKeyboard_isKeyPressed(sfKeyR)) // mettre la condition de fin de combat ici
            play->state = 2;
		if (play->game->player[0]->state % 2 != 1)
			check_mouvement(play);
	}
}

void game()
{
    all_t *play = init_all();

    set_map(play->game, 1);
    while (sfRenderWindow_isOpen(play->window->my_window)) {
        sfRenderWindow_display(play->window->my_window);
        fight_detection(play);
        event_game(play);
        draw_sprite(play);
    }
}