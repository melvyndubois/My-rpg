/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** set_poke_1.c
*/

#include "my.h"
#include "game.h"

void set_bulbi(sfSprite *sprite, int r)
{
    sfIntRect tmp = {0, 0, 40, 40};
    if (r != 0){
        tmp.left += 40;
        set_pos_poke(sprite, 400, 900);
    }
    else
        set_pos_poke(sprite, 1370, 400);
    sfSprite_setTextureRect(sprite, tmp);
}

void set_salam(sfSprite *sprite, int r)
{
    sfIntRect tmp = {100, 0, 40, 40};
    if (r != 0){
        tmp.left += 40;
        set_pos_poke(sprite, 400, 900);
    }
    else
        set_pos_poke(sprite, 1370, 400);
    sfSprite_setTextureRect(sprite, tmp);
}

void set_cara(sfSprite *sprite, int r)
{
    sfIntRect tmp = {200, 0, 40, 40};
    if (r != 0){
        tmp.left += 40;
        set_pos_poke(sprite, 400, 900);
    }
    else
        set_pos_poke(sprite, 1370, 400);
    sfSprite_setTextureRect(sprite, tmp);
}

void set_pikachu(sfSprite *sprite, int r)
{
    sfIntRect tmp = {300, 120, 40, 40};
    if (r != 0){
        tmp.left += 40;
        set_pos_poke(sprite, 400, 900);
    }
    else
        set_pos_poke(sprite, 1370, 400);
    sfSprite_setTextureRect(sprite, tmp);
}

void set_psyco(sfSprite *sprite, int r)
{
    sfIntRect tmp = {200, 445, 40, 40};
    if (r != 0){
        tmp.left += 40;
        set_pos_poke(sprite, 400, 900);
    }
    else
        set_pos_poke(sprite, 1370, 400);
    sfSprite_setTextureRect(sprite, tmp);
}