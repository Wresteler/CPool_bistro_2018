/*
** EPITECH PROJECT, 2018
** parse_nbr.c
** File description:
** parse_nbr.c
*/

#include "eval_expr.h"

int parse_nbr(char **par_arg)
{
    int nbr = 0;
    int sign = 1;

    if ((*par_arg)[0] == '+' || (*par_arg)[0] == '-') {
        if ((*par_arg)[0] == '-')
            sign = -1;
        *par_arg = *par_arg + 1;
    }
    if ((*par_arg)[0] == '(') {
        *par_arg = *par_arg + 1;
        nbr = eval_expr_spl(par_arg);
        if ((*par_arg)[0] == ')')
            *par_arg = *par_arg + 1;
        return (sign * nbr);
    }
    while ('0' <= (*par_arg)[0] && (*par_arg)[0] <= '9') {
        nbr = (nbr * 10) + (*par_arg)[0] - '0';
        *par_arg = *par_arg + 1;
    }
    return (sign * nbr);
}
