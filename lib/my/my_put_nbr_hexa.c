/*
** EPITECH PROJECT, 2019
** putnbr hexa
** File description:
** hexa
*/

#include "../../include/my.h"

void my_put_nbr_hexa(unsigned int nb)
{
    unsigned int nbtempon = nb;
    unsigned int reste = 0;
    char *str = malloc(sizeof(char) * my_numlen(nb));
    char tab[17] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a',
                    'b', 'c', 'd', 'e', 'f', '\0'};

    for (int i = 0; nb > 0; i++) {
        reste = nb % 16;
        nb = nb / 16;
        str[i] = tab[reste];
    }
    nb = nbtempon;
    str = my_revstr(str);
    str[my_numlen(nb)] = '\0';
    my_putstr(str);
}