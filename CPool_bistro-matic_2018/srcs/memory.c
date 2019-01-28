/*
** EPITECH PROJECT, 2018
** memory.c
** File description:
** memory.c
*/

#include <stdlib.h>
#include "bistro.h"

char *memory(char *str_calcul, char *nb, int i, int select)
{
    char *stock;

    stock = malloc(sizeof(char)* (my_strlen(nb) + 1));
    stock[my_strlen(nb)] = '\0';
    for (int ii = 0; nb && nb[ii] != '\0'; ii++)
        stock[ii] = nb[ii];
    nb = malloc(sizeof(char)* (my_strlen(stock) + 2));
    nb[(my_strlen(stock) + 1)] = '\0';
    for (int ii = 0; stock && stock[ii] != '\0'; ii++)
        nb[(select == 0 ? ii : (ii + 1))] = stock[ii];
    if (select == 0)
        nb[my_strlen(nb)] = str_calcul[i];
    else
        nb[0] = str_calcul[i];
    free(stock);
    return (nb);
}

int *memory2(int *nb, int i)
{
    int *stock;

    stock = malloc(sizeof(int)* (my_strlen2(nb) + 1));
    stock[my_strlen2(nb)] = 0;
    for (int ii = 0; nb && nb[ii] != '\0'; ii++)
        stock[ii] = nb[ii];
    nb = malloc(sizeof(int)* (my_strlen2(nb) + 2));
    nb[(my_strlen2(stock) + 1)] = 0;
    for (int ii = 0; stock[ii] != '\0'; ii++)
        nb[0] = stock[ii];
    nb[my_strlen2(stock)] = i;
    free(stock);
    return (nb);
}
