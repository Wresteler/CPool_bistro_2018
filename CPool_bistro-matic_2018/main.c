/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main.c
*/

#include "bistro.h"
#include <stdlib.h>

int main(int ac, char **av)
{
    char str_calcul[] = "(1+1)";//my_getnbr(av[4]) + 1];
    int calcul = 1;// read(0, str_calcul, my_getnbr(av[4]));
    int *par_start = {0};
    int *par_end = {0};
    int err = 0;

    if (ac != 4 || calcul == -1)
        return (84);
    for (int i = 0; str_calcul[i] != '\0'; i++)
        if (str_calcul[i] == av[2][0])
            par_start = memory2(par_start, (i + 1));
        else if (str_calcul[i] == av[2][1])
            par_end = memory2(par_end, (i + 1));
    err = error(av, par_start, par_end);
    if (err == 1)
        return (84);
    calcul = resolve_calcul(str_calcul, av, par_start);
    printf("%d\n", calcul);
    return (0);
}
