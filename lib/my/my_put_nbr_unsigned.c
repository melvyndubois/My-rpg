/*
** EPITECH PROJECT, 2019
** put nbr
** File description:
** day3
*/

#include "../../include/my.h"

void my_put_nbr_unsigned(unsigned int nb)
{
    if (nb / 10 != 0)
        my_put_nbr(nb / 10);
    my_putchar(nb % 10 + '0');
}