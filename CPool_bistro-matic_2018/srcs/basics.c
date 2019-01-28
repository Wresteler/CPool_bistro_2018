/*
** EPITECH PROJECT, 2018
** basics.c
** File description:
** basics.c
*/

#include "bistro.h"

int my_getnbr(char *nb)
{
    int result;

    for (int i = 0; nb[i] != '\0'; i++)
        result = (result + nb[i] - 48) * 10;
    result = result / 10;
    return (result);
}

int my_strlen(char *str)
{
    int i = 0;

    while (str && str[i] != '\0')
	i++;
    return (i);
}

int my_strlen2(int *str)
{
    int i = 0;

    while (str &&  str[i] != '\0')
	i++;
    return (i);
}
