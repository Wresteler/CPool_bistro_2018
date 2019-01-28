/*
** EPITECH PROJECT, 2018
** eval_expr.c
** File description:
** eval_expr.c
*/

#include "eval_expr.h"

int eval_expr_spl(char **par_arg)
{
    int fa = parse_nbr(par_arg);
    int sa = 0;
    char op;

    while ((*par_arg)[0] != '\0' && (*par_arg)[0] != ')') {
        op = (*par_arg)[0];
        *par_arg = *par_arg + 1;
        if (op == '+' || op == '-')
            sa = eval_expr_cplx(par_arg);
        else
            sa = parse_nbr(par_arg);
        fa = do_op(fa, sa, op);
    }
    return (fa);
}

int eval_expr_cplx(char **par_arg)
{
    int fa = parse_nbr(par_arg);
    int sa = 0;
    char op;

    while ((*par_arg)[0] == '*' || (*par_arg)[0] == '/'
    || (*par_arg)[0] == '%') {
        op = (*par_arg)[0];
        *par_arg = *par_arg + 1;
        sa = parse_nbr(par_arg);
        fa = do_op(fa, sa, op);
    }
    return (fa);
}

int eval_expr(char *str)
{
    str = rm_spaces(str);
    if (str[0] == '\0')
        return (0);
    return (eval_expr_spl(&str));
}
