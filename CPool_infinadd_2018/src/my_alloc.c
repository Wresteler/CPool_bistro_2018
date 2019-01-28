/*
** EPITECH PROJECT, 2018
** my_alloc.c
** File description:
** my_alloc.c
*/

#include "../include/my.h"

char *my_alloc(int len)
{
    char *alloc;
    int i = 0;

    if ((alloc = (char *) malloc(len * sizeof(char))) == NULL)
        err_alloc();
    while (i < len)
        alloc[i++] = '\0';
    return (alloc);
}
