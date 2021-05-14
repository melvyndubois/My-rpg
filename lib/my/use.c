/*
** EPITECH PROJECT, 2019
** print fonction
** File description:
** fonction for print
*/

#include "../../include/my.h"

void myprintf_octa(va_list *my_list)
{
    unsigned int num = va_arg(*my_list, unsigned int);

    my_put_nbr_octal(num);
}

void myprintf_hexa(va_list *my_list)
{
    unsigned int num = va_arg(*my_list, unsigned int);

    my_put_nbr_hexa(num);
}

void myprintf_str(va_list *my_list)
{
    char *string = va_arg(*my_list, char *);

    my_putstr(string);
}

void myprintf_char(va_list *my_list)
{
    char c = va_arg(*my_list, int);

    my_putchar(c);
}

void myprintf_nbr(va_list *my_list)
{
    int num = va_arg(*my_list, int);

    my_put_nbr(num);
}