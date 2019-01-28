/*
** EPITECH PROJECT, 2018
** tests_bistro-matic_int.c
** File description:
** tests_bistro-matic_int.c
*/

#include <criterion/criterion.h>
#include "bistro.h"

Test(calc, test_empty_buffer)
{
    cr_assert_eq(calc(""), 0);
}

Test(calc, test_one_digits)
{
    cr_assert_eq(calc("1"), 1);
}

Test(calc, test_simple_add)
{
    cr_assert_eq(calc("1+2"), 3);
}

Test(calc, test_simple_sub)
{
    cr_assert_eq(calc("3-1"), 2);
}

Test(calc, test_simple_mul)
{
    cr_assert_eq(calc("2*3"), 6);
}

Test(calc, test_simple_divi)
{
    cr_assert_eq(calc("4/2"), 2);
}

Test(calc, test_simple_modulo)
{
    cr_assert_eq(calc("5%2"), 1);
}

Test(calc, test_inter_add)
{
    cr_assert_eq(calc("42+18"), 60);
}

Test(calc, test_inter_sub)
{
    cr_assert_eq(calc("130-172"), -42);
}

Test(calc, test_inter_mul)
{
    cr_assert_eq(calc("32*56"), 1792);
}

Test(calc, test_inter_divi)
{
    cr_assert_eq(calc("56793/30"), 1893);
}

Test(calc, test_inter_modulo)
{
    cr_assert_eq(calc("894%5"), 4);
}

Test(calc, test_mul_by_0)
{
    cr_assert_eq(calc("48*0"), 0);
}

Test(calc, test_simple_priority)
{
    cr_assert_eq(calc("3+2*5"), 13);
}

Test(calc, test_inter_priority)
{
    cr_assert_eq(calc("45*(555/(4+89))-2"), 223);
}

Test(calc, test_med_add)
{
    cr_assert_eq(calc("987+560+2333+67107+4+78"), 71069);
}

Test(calc, test_med_sub)
{
    cr_assert_eq(calc("957-288282+67988-3-12+97888"), -121464);
}

Test(calc, test_med_mul)
{
    cr_assert_eq(calc("487098*1230*2"), 1198261080);
}

Test(calc, test_med_divi)
{
    cr_assert_eq(calc("486002/3/2/9/6"), 1500);
}

Test(calc, test_med_modulo)
{
    cr_assert_eq(calc("967056%34+69"), 97);
}

Test(calc, test_med_priority)
{
    cr_assert_eq(calc("945+(2-56)*4-(52 + 6999)-4+(6+3*(4*2-(6+2-(8-8))))"), -6320);
}

Test(calc, test_hard_parenthesis)
{
    cr_assert_eq(calc("((((((8))))))"), 8);
}

Test(calc, test_limit)
{
    cr_assert_eq(calc("2147483647+2"), 2147483649);
}
Test(calc, test_limit_sub)
{
    cr_assert_eq(calc("-2147483647-2"), -2147483649);
}

Test(calc, test_hardcore_op)
{
    cr_assert_eq(calc("48000-47000*34-(782*4555+(123456%567)-48888)+5678/(18342+59891-46*(223-567888))"), -5063539);
}
