/*
** EPITECH PROJECT, 2018
** rm_spaces.c
** File description:
** rm_spaces.c
*/

#include "eval_expr.h"
#include <stdlib.h>

char *rm_spaces(char *str)
{
    int i = 0;
    int j = 0;
    char *result = malloc(my_strlen(str) + 1);

    while (str[i] != '\0') {
        if (str[i] != ' ') {
            result[j] = str[i];
            j++;
        }
        i++;
    }
    result[j] = '\0';
    return (result);
}
