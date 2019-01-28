/*
** EPITECH PROJECT, 2018
** infin_add.c
** File description:
** infin_add.c
*/

#include "../include/my.h"

void infin_add(char *nbr, char *nbr2)
{
    int i = my_strlen(nbr);
    int j = my_strlen(nbr2);
    int save = i;
    int calcul = i;
    char *result = my_alloc(i + 1);

    str_to_int(nbr, i);
    str_to_int(nbr2, j);
    i--;
    j--;

    while (calcul > 0) {
        result[calcul] += nbr[i] + (j < 0 ? 0 : nbr2[j]);
        result[calcul - 1] = result[calcul] / 10;
        result[calcul] = result[calcul] % 10;
        calcul--;
        i--;
        j--;
    }
    aff_result(result, save + 1);
}
