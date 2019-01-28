/*
** EPITECH PROJECT, 2018
** str_to_int.c
** File description:
** str_to_int.c
*/

#include "../include/my.h"

void str_to_int(char *str, int len)
{
    for (int i = 0; i < len;)
        str[i++] -= '0';
}
