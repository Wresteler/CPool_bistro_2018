/*
** EPITECH PROJECT, 2018
** do_op.c
** File description:
** do_op.c
*/

#include "eval_expr.h"

int do_op(int fa, int sa, char op)
{
    if (op == '+')
        return (fa + sa);
    else if (op == '-')
        return (fa - sa);
    else if (op == '*')
        return (fa * sa);
    else if (op == '/')
        return (fa / sa);
    else if (op == '%')
        return (fa % sa);
    else
        return (0);
}
