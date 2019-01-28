/*
** EPITECH PROJECT, 2018
** getnb_add.c
** File description:
** getnb_add.c
*/

#include "bistro.h"

char *getnb_add(char *str_calcul, char **av, int i)
{
    int p_start = i;
    int c1 = selector(str_calcul, av, i);
    int flag1 = 0;
    int flag2 = 0;
    int ii = 0;
//    int op = 0;
    char *nb[] = {"\0", "\0"};
    char operator = 0;

    for (;c1 == 1 || ((c1 == 0 || c1 == 2) && flag1 == 0); ii++) {
        if (flag2 == 0 || (c1 == 1  && flag2 != 0 && operator == 0)) {
            nb[0] = memory(str_calcul, nb[0], i, 0);
            if (c1 == 1)
                flag2 = 1;
        }
        else if (operator == 0)
            operator = str_calcul[i];
        else {
            nb[1] = memory(str_calcul, nb[1], i, 0);
            if (c1 == 1)
                flag1 = 1;
        }
        c1 = selector(str_calcul, av, ++i);
    }
    str_calcul = addition(str_calcul, av, nb, operator, p_start, ii);
    return (str_calcul);
}
