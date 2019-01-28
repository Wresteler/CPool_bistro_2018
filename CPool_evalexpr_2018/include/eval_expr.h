/*
** EPITECH PROJECT, 2018
** eval_expr.h
** File description:
** eval_expr.h
*/

#ifndef EVAL_EXPR_H_
#define EVAL_EXPR_H_

void my_putchar(char c);
int my_strlen(char *str);
void my_put_nbr(int nbr);
char *rm_spaces(char *str);
int parse_nbr(char **ps);
int eval_expr_spl(char **ps);
int eval_expr_cplx(char **ps);
int eval_expr(char *str);
int do_op(int lhs, int rhs, char op);

#endif
