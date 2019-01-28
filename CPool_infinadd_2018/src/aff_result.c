/*
** EPITECH PROJECT, 2018
** aff_result.c
** File description:
** aff_result.c
*/

#include "../include/my.h"

void aff_result(char *str, int len)
{
    int i = 0;

    for (int j = 0; j < len; j++) {
        if (i != 0 || str[j] != 0 || j + 1 == len) {
            my_putchar(str[j] + 48);
            i = 1;
        }
    }
    my_putchar('\n');
    free(str);
}
