/*
** EPITECH PROJECT, 2018
** getnb_mult.c
** File description:
** getnb_mult.c
*/

#include <stdlib.h>
#include "bistro.h"

char *getnb_mult(char *str_calcul, char **av, int i)
{
    char **nb = malloc(sizeof(char)* 3);
    char operator = str_calcul[i];
    int c1 = selector(str_calcul, av, (i - 1));
    int c2 = selector(str_calcul, av, (i - 2));
    int flag1 = 0;
    int p_start;

    for (int ii = (i - 1); (c1 == 1 && flag1 == 0)
             || (c2 != 1 && flag1 == 2);) {
        c1 = selector(str_calcul, av, --ii);
        c2 = selector(str_calcul, av, (ii - 1));
        flag1 = ( flag1 >= 2 ? flag1 : selector(str_calcul, av, i));
        nb[1] = memory(str_calcul, nb[1], i, 1);
        p_start = ii;
    }
    c1 = selector(str_calcul, av, (i + 1));
    for (int ii = (i + 1); c1 == 1 || (c1 == 2 && flag1 != 0);) {
        c1 = selector(str_calcul, av, ++ii);
        flag1 = ( flag1 == 0 ? selector(str_calcul, av, ii) : flag1);
        nb[2] = memory(str_calcul, nb[2], i, 0);
    }
    str_calcul = mult();
    return (str_calcul);
}
