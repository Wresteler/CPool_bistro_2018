/*
** EPITECH PROJECT, 2018
** infin_sub.c
** File description:
** infin_sub.c
*/

#include "../include/my.h"

void infin_sub(char *nbr, char *nbr2)
{
    int i = my_strlen(nbr);
    int j = my_strlen(nbr2);
    int calc = i - 1;
    char *result = my_alloc(i);

    str_to_int(nbr, i);
    str_to_int(nbr2, j);
    j--;

    while (calc >= 0) {
        result[calc] += (j < 0 ? 0 : nbr2[j]);
        if (nbr[calc] < result[calc]) {
            nbr[calc] += 10;
            result[calc - 1] = 1;
        }
        result[calc] = nbr[calc] - result[calc];
        calc--;
        j--;
    }
    aff_result(result, i);
}
