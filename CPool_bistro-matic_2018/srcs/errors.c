/*
** EPITECH PROJECT, 2018
** errors.c
** File description:
** errors.c
*/

#include "bistro.h"

int error(char **av, int *par_start, int *par_end)
{
    int ii = 0;
    int par_nb_start = my_strlen2(par_start);
    int par_nb_end = my_strlen2(par_end);
    int operator = my_strlen(av[2]);

    if (operator != 7)
        return (1);
    for (int i = 0; i < my_strlen(av[1]); ii++)
        if (av[1][i] == av[2][ii])
            return (1);
        else if (ii == operator) {
            ii = 0;
            i++;
        }
    if (par_nb_start != par_nb_end)
        return (1);
    return (0);
}
