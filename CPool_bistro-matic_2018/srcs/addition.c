/*
** EPITECH PROJECT, 2018
** addition.c
** File description:
** addition.c
*/

#include "bistro.h"

char *addition(char *str_calcul, char **av, char **nb, char op, int p, int ii)
{
    int neg = 1;
    int nb1_neg;
//    int flag = 0;

    for (int i = 0; nb[0][i] != '\0'; i++) {
        if (nb[0][i] == av[2][3])
            neg *= -1;
        for (int count = 0; count <= 3; count++)
            if (nb[0][i] == av[2][count])
                nb[0][i] = av[1][0];
    }
    nb1_neg = neg;
    for (int i = 0; nb[1][i] != '\0'; i++) {
        if (nb[1][i] == av[2][3])
            neg *= -1;
        for (int count = 0; count <= 3; count++)
            if (nb[1][i] == av[2][count])
                nb[1][i] = av[1][0];
    }
    if (op == av[2][3])
        neg *= -1;
    str_calcul = addition1(str_calcul, av, nb, neg, p, ii);
    if (neg > 0 && nb1_neg < 0)
        str_calcul[p] = av[2][3];
    printf("here: %s\n", str_calcul);
    return(str_calcul);
}

char *addition1(char *str_calcul, char **av, char **nb, int neg, int p, int ii)
{
//    int flag = ii;
    int num = 0;
    int ret = 0;
//    char err = -1;
    p = p;

    if (neg > 0) {
        for (int i = 0; my_strlen(nb[0]) >= i || my_strlen(nb[1]) >= i || ret == 1; i++) {
            num = addition2(nb, av, i);//                                                     
            num += ret;
            ret = (num > my_strlen(av[1]) ? 1 : 0);
            num -= (num > my_strlen(av[1]) ? my_strlen(av[1]) : 0);
            str_calcul[ii--] = av[1][num];
        }
        for (; ii >= 0; ii--)
            str_calcul[ii] = av[1][0];
    } else {
    }
    return (str_calcul);
}

int addition2(char **nb, char **av, int i)
{
    int num = 1;
    int size1 = 0;
    int size2 = 0;
    i = i;
    av = av;

    for (int ii = 0; nb[1][ii] != '\0'; ii++)
        size1++;
    for (int ii = 0; nb[1][ii] != '\0'; ii++)
        size2++;
//    num = select_nb(nb[1][(size1 - i)], av) + select_nb(nb[2][(size2 - i)], av);            
    return (num);
}
