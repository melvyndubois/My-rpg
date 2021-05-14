/*
** EPITECH PROJECT, 2019
** my_strsame
** File description:
** check is 2strings are same
*/

int my_strsame(char *str, char *string)
{
    if (!str || !string)
        return 1;
    for (int i = 0; str[i] || string[i]; i++){
        if (str[i] != string[i])
            return 1;
    }
    return 0;
}