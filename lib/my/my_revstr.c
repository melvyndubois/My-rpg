/*
** EPITECH PROJECT, 2019
** my revstr
** File description:
** reverse a string
*/

#include "../../include/my.h"

char *my_revstr(char *str)
{
    int a =  my_strlen(str) - 1;
    int b = 0;
    int x = my_strlen(str);
    while (a >= b) {
        char z = str[a];
        char y = str[b];
        str[a] = y;
        str[b] = z;
        b++;
        a--;
    }
    str[x] = '\0';
    return (str);
}
