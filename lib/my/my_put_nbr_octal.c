/*
** EPITECH PROJECT, 2019
** putnbr octa
** File description:
** octa
*/

#include "../../include/my.h"

void my_put_nbr_octal(unsigned int nb)
{
    unsigned int nbtempon = nb;
    unsigned int reste = 0;
    int i = 0;
    char *str = malloc(sizeof(char) * my_numlen(nb));
    while (nb > 0){
        reste = nb % 8;
        nb = nb / 8;
        str[i] = reste + '0';
        i++;
    }
    nb = nbtempon;
    str = my_revstr(str);
    my_putstr(str);
}
