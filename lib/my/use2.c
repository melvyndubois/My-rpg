/*
** EPITECH PROJECT, 2019
** print fonction
** File description:
** fonction for print2
*/

#include "../../include/my.h"

void myprintf_bin(va_list *my_list)
{
    unsigned int num = va_arg(*my_list, unsigned int);

    my_put_nbr_bin(num);
}

void myprintf_maj(va_list *my_list)
{
    unsigned int num = va_arg(*my_list, unsigned int);

    my_put_nbr_maj(num);
}

void myprintf_nbr_unsigned(va_list *my_list)
{
    unsigned int num = va_arg(*my_list, unsigned int);

    my_put_nbr_unsigned(num);
}
