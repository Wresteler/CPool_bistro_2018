/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main.c
*/

#include "eval_expr.h"
#include <stdlib.h>

int main(int ac, char **av, char **env)
{
    if (env[0] == NULL || ac != 2)
        return (84);
    else {
        my_put_nbr(eval_expr(av[1]));
        my_putchar('\n');
        return (0);
    }
    return (84);
}
