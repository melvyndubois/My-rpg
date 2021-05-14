/*
** EPITECH PROJECT, 2019
** my_printf main
** File description:
** main
*/

#include "../../include/my.h"

int indexx(const char *tab, char element)
{
    int indexx = 0;

    while (tab[indexx]) {
        if (tab[indexx] == element)
            return (indexx);
        indexx++;
    }
    return (-1);
}

void my_printf(char *string, ...)
{
    void (*tabfunction[9]) (va_list *) = {myprintf_str, myprintf_char,
    myprintf_nbr, myprintf_nbr, myprintf_octa, myprintf_hexa, myprintf_maj,
    myprintf_bin, myprintf_nbr_unsigned};
    char tabIndex[10] = {'s', 'c', 'd', 'i', 'o', 'x', 'X', 'b', 'u', 0};
    va_list my_list;
    int i = 0;
    va_start(my_list, string);

    while (string[i] != '\0') {
        if (string[i-1] == '%' && indexx(tabIndex, string[i]) != -1)
            (*tabfunction[indexx(tabIndex, string[i])]) (&my_list);
        else if (string[i] != '%')
            my_putchar(string[i]);
        i++;
    }
}