/*
** EPITECH PROJECT, 2018
** display_it.c
** File description:
** display_it.c
*/

#include <unistd.h>

void print_cappuccino(void);

void my_putchar(char c)
{
    write(1, &c, 1);
}

void my_putstr(char *str)
{
    for (; *str != '\0'; str++)
        my_putchar(*str);
}

int main(void)
{
    print_cappuccino();
    return (0);
}
