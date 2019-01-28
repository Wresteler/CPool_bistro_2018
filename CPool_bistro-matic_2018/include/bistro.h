/*
** EPITECH PROJECT, 2018
** bistro.h
** File description:
** bistro.h
*/

#ifndef BISTRO_H_
#define BISTRO_H_

#include <stdio.h>

void my_putchar(char);
void my_putstr(char *);
int my_getnbr(char *);
int my_strlen(char *);
int my_strlen2(int *);
char *memory(char *, char *, int, int);
int *memory2(int *, int);
int error(char **, int *, int *);
int selector(char *, char **, int);
int selector_calc(int, int);
//char *getnb_mult(char *, char **, int);
int select_nb(char, char **);
int addition2(char **, char **, int);
char *addition1(char *, char **, char **, int, int, int);
char *addition(char *, char **, char **, char, int, int);
char *getnb_add(char *, char **, int);
char *calcul(char *, char **, int, int);
int resolve_calcul(char *, char **, int *);
int resolve_priority(char *, char **, int, int, int *, int);
void display_cappuccino(void);

#endif
