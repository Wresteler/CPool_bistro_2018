/*
** EPITECH PROJECT, 2018
** calcul.c
** File description:
** calcul.c
*/

#include "bistro.h"

char *calcul(char *str_calcul, char **av, int i, int nb_mult_div)
{
    if (nb_mult_div > 0)
        ;//str_calcul = getnb_mult(str_calcul, av, i);
    else
        str_calcul = getnb_add(str_calcul, av, i);
    return (str_calcul);
}

int resolve_calcul(char *str_calcul, char **av, int *par_start)
{
    int *mult_n_div_p = {0};
    int par_num = my_strlen2(par_start);
    int nb_mult_div = 0;
    int priority = 0;

    for (int i = 0; par_num >= 0; par_num--) {
        i = (par_num <= 0 ? 0 : (par_start[(par_num - 1)] - 1));
        for (int ii = i; str_calcul[ii] != '\0' && par_num == 0; ii++) {
            priority = selector(str_calcul, av, ii);
            resolve_priority(str_calcul, av, ii, priority, mult_n_div_p, par_num);
        }
        nb_mult_div = my_strlen2(mult_n_div_p);
        for (; nb_mult_div >= 0; nb_mult_div--) {
            i = (nb_mult_div == 0 ? i : mult_n_div_p[(nb_mult_div - 1)]);
            str_calcul = calcul(str_calcul, av, i, nb_mult_div);
        }
        printf("i: %d\n%s\n",i, str_calcul); // AFFICHAGE
    }
    return (0);
}

int resolve_priority(char *str_calcul, char **av, int ii, int priority, int *mult_n_div_p, int par_num)
{
    par_num = par_num;

    if (priority == 0) {
        if (str_calcul[ii] == av[2][1])
            par_num = 1;
        str_calcul[ii] = av[1][0];
    }
    if (priority == 3)
        mult_n_div_p = memory2(mult_n_div_p, ii);
    if (priority == -1)
        return (84);
    return (0);
}
