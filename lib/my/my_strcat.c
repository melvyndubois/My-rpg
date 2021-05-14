/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** concatenates two strings
*/

#include "../../include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int a = my_strlen(dest);
    int i = 0;

    while (src[i] != '\0') {
        dest[a] = src[i];
        i++;
        a++;
    }
    dest[a] = '\0';
    return dest;
}
