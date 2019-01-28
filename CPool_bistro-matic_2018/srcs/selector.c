/*
** EPITECH PROJECT, 2018
** selector.c
** File description:
** selector.c
*/

#include "bistro.h"

int selector(char *str_calcul, char **av, int i)
{
    for (int ii = 0; av[1][ii] || av[2][ii]; ii++)
	if (str_calcul[i] == av[1][ii])
            return (1);
        else if (str_calcul[i] == av[2][ii])
            if (ii == 0 || ii == 1)
                return (0);
            else if (ii < 4)
                return (2);
            else
                return (3);
    return (-1);
}
