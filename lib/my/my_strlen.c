/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** hh
*/

#include "../../include/my.h"

int my_strlen(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        a++;
    }
    return (a);
}
