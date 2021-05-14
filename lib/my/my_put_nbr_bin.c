/*
** EPITECH PROJECT, 2019
** putnbr bin
** File description:
** bin
*/

#include "../../include/my.h"

unsigned int my_put_nbr_bin(unsigned int nb)
{
    unsigned int nbtempon = nb;
    unsigned int reste = 0;
    int i = 0;
    char *str = malloc(sizeof(char) * my_numlen(nb));

    while (nb > 0) {
        reste = nb % 2;
        nb = nb / 2;
        str[i] = reste + '0';
        i++;
    }
    nb = nbtempon;
    str = my_revstr(str);
    my_putstr(str);
    return (0);
}