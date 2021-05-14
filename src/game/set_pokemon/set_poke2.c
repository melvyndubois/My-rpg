/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** set_poke_2.c
*/

#include "my.h"
#include "game.h"

void set_rondou(sfSprite *sprite, int r)
{
    sfIntRect tmp = {200, 323, 40, 40};
    if (r != 0){
        tmp.left += 40;
        set_pos_poke(sprite, 400, 900);
    }
    else
        set_pos_poke(sprite, 1370, 400);
    sfSprite_setTextureRect(sprite, tmp);
}

void set_mewtwo(sfSprite *sprite, int r)
{
    sfIntRect tmp = {891, 566, 40, 40};
    if (r != 0){
        tmp.left += 40;
        set_pos_poke(sprite, 400, 900);
    }
    else
        set_pos_poke(sprite, 1370, 400);
    sfSprite_setTextureRect(sprite, tmp);
}

void set_onix(sfSprite *sprite, int r)
{
    sfIntRect tmp = {595, 161, 40, 40};
    if (r != 0){
        tmp.left += 40;
        set_pos_poke(sprite, 400, 900);
    }
    else
        set_pos_poke(sprite, 1370, 400);
    sfSprite_setTextureRect(sprite, tmp);
}

void set_draco(sfSprite *sprite, int r)
{
    sfIntRect tmp = {892, 525, 40, 40};
    if (r != 0){
        tmp.left += 40;
        set_pos_poke(sprite, 400, 900);
    }
    else
        set_pos_poke(sprite, 1370, 400);
    sfSprite_setTextureRect(sprite, tmp);
}

void set_ptera(sfSprite *sprite, int r)
{
    sfIntRect tmp = {695, 485, 40, 40};
    if (r != 0){
        tmp.left += 40;
        set_pos_poke(sprite, 400, 900);
    }
    else
        set_pos_poke(sprite, 1360, 370);
    sfSprite_setTextureRect(sprite, tmp);
}