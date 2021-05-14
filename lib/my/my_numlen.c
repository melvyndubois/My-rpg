/*
** EPITECH PROJECT, 2019
** my_numlen
** File description:
** count number size
*/

#include "../../include/my.h"

int my_numlen(unsigned int nb)
{
    int a = 1;

    while (nb > 9){
        nb = nb / 10;
        a++;
    }
    return (a);
}
