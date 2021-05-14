/*
** EPITECH PROJECT, 2019
** my str to word array
** File description:
** split words a string
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int alphanum(char c)
{
    if (c >= 48 && c <= 57)
        return (1);
    if (c >= 65 && c <= 90)
        return (1);
    if (c >= 97 && c <= 122)
        return (1);
    else
        return (0);
}

int separate(char const *str, int i)
{
    while (alphanum(str[i]) == 0)
        i++;
    return i;
}

int countwords(char const *str)
{
    int a = 0;
    int count = 0;

    while (str[a] != '\0') {
        if (alphanum(str[a]) == 1 && (alphanum(str[a+1]) == 0))
            count++;
        a++;
    }
    return (count);
}

int getj(char const *str, int i)
{
    while (alphanum(str[i]) == 1)
        i++;
    return i;
}

char **my_str_to_word_array(char const *str)
{
    int a = 0, i = 0, j = 0, count = 0;
    char **tab = NULL;

    if (str == NULL)
        return NULL;
    count = countwords(str);
    tab = malloc(sizeof(char *) * (count + 1));
    for (int nb = 0; nb < count; nb++) {
        i = separate(str, i);
        if (str[i] == '\0')
            break;
        j = getj(str, i);
        tab[nb] = malloc(sizeof(char) * (j - i + 1));
        for (a = 0; i != j; a++, i++)
            tab[nb][a] = str[i];
        tab[nb][a] = '\0'; }
    tab[count] = NULL;
    return tab;
}