/*
** EPITECH PROJECT, 2019
** put nbr
** File description:
** day3
*/

#include "../../include/my.h"

int my_put_nbr(int nb)
{
    if (nb < 0 && nb >= -2147483647) {
        my_putchar('-');
        if (((nb * -1) / 10) != 0)
            my_put_nbr((nb * -1) / 10);
        my_putchar(((nb * -1) % 10) + '0');
        return 0;
    }
    else if (nb > 0 && nb <= 2147483647) {
        if (nb / 10 != 0)
            my_put_nbr(nb / 10);
        my_putchar(nb % 10 + '0');
        return 0;
    }
    else {
        return (84);
    }
}