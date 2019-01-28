/*
** EPITECH PROJECT, 2018
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_
#include <stdlib.h>
#include <unistd.h>

void my_putchar(char c);
void my_putstr(char *str);
int my_strlen(char *str);
char *my_alloc(int len);
void aff_result(char *str, int len);
void infin_add(char *nbr, char *nbr2);
void infin_sub(char *nbr, char *nbr2);
void str_to_int(char *str, int len);
int err_alloc(void);

#endif
