/*
** EPITECH PROJECT, 2018
** basic.c
** File description:
** basic.c
*/

#include "../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    for (; *str != '\0'; str++)
        my_putchar(*str);
}

int my_strlen(char *str)
{
    unsigned int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}
