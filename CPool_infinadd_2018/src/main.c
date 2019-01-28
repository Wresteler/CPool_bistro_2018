/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main.c
*/

#include "../include/my.h"

int main(int ac, char **av, char **env)
{
    if (ac != 3 || env[0] == NULL)
        return (84);

    infin_add(av[1], av[2]);
    return (0);
}
