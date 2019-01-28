/*
** EPITECH PROJECT, 2018
** tests_bistro-matic.c
** File description:
** tests_bistro-matic.c
*/

#include <criterion/criterion.h>
#include "bistro.h"

Test(calc, test_division_by_0)
{
    cr_assert_eq(calc("15/0"), 84);
}

Test(calc, test_mult_by_0)
{
    cr_assert_eq(calc("45*0"), 0);
}

Test(calc, test_modulo_by_0)
{
    cr_assert_eq(calc("45%0"), 84);
}

Test(calc, test
