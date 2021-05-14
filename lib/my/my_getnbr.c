/*
** EPITECH PROJECT, 2019
** getnbr
** File description:
** day4
*/

#include "../../include/my.h"

int plus(char const *str)
{
    int nb = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '+' || str[i] == '-' )
            nb++;
        i++;
    }
    return nb;
}

int minus(char const *str)
{
    int minus = 0;
    int i = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            minus++;
        i++;
    }
    if (minus % 2 == 1)
        return -1;
    else
        return 1;
}

int my_getnbr(char *str)
{
    int nb = plus(str), i = nb, x = 0, n = 0, count = 0, temp = 0;

    for (; str[i]; i++) {
        if (str[i] >= '0' && str[i] <= '9')
            count++;
        else
            break;
    }
    for (i = nb; str[i] != '\0' && str[i] >= '0' && str[i] <= '9'; x += temp,
    i++, n = 0, count--) {
        temp = str[i] - '0';
        for (;n + 1 < count; temp *= 10, n++);
    }
    x *= minus(str);
    if (x > 2147483647 || x < -2147483647)
        x = 0;
    return x;
}