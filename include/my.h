/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** struct
*/

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

#ifndef MY_H
#define MY_H

void my_putstr(char const *);
int my_strlen(char const *);
void my_putchar(char );
int my_getnbr(char *);
int my_put_nbr(int );
int my_numlen(unsigned int );
char *my_strcpy(char *dest, char const *);
char *my_revstr(char *);
void my_put_nbr_maj(unsigned int );
void my_put_nbr_hexa(unsigned int );
unsigned int my_put_nbr_bin(unsigned int );
void my_put_nbr_octal(unsigned int );
void my_put_nbr_unsigned(unsigned int );
void myprintf_octa(va_list *);
void myprintf_hexa(va_list *);
void myprintf_str(va_list *);
void myprintf_char(va_list *);
void myprintf_nbr(va_list *);
void myprintf_bin(va_list *);
void myprintf_maj(va_list *);
void myprintf_nbr_unsigned(va_list *);
int indexx(const char *tab, char element);
void my_printf(char *string, ...);
int my_strsame(char *str, char *string);
char *my_strcat(char *dest, char const *src);
char *charcat (char *str, char nu);
char read_file (int fd);
char *get_next_line (int fd);
char **my_str_to_word_array(char const *str);

#endif
