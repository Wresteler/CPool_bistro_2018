/*
** EPITECH PROJECT, 2018
** select_nb.c
** File description:
** select.c
*/

#include "bistro.h"

int select_nb(char nb, char **av)
{
    for (int i = 0; nb && i <= my_strlen(av[1]); i++)
        if (nb == av[1][i])
            return (i);
    return (-1);
}
