/*
** EPITECH PROJECT, 2018
** basics.c
** File description:
** basics.c
*/

#include "eval_expr.h"
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

void my_put_nbr(int nbr)
{
    if (nbr < 0) {
        my_putchar('-');
        nbr = -nbr;
    }
    if (nbr > 9) {
        my_put_nbr(nbr / 10);
        my_put_nbr(nbr % 10);
    }
    else
        my_putchar(nbr + 48);
}
