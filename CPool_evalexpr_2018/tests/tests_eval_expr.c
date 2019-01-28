/*
** EPITECH PROJECT, 2018
** tests_eval_expr.c
** File description:
** tests_eval_expr.c
*/

#include <criterion/criterion.h>
#include "eval_expr.h"

Test(eval_expr, test_empty_buffer)
{
    cr_assert_eq(eval_expr(""), 0);
}

Test(eval_expr, test_one_digits)
{
    cr_assert_eq(eval_expr("1"), 1);
}

Test(eval_expr, test_simple_add)
{
    cr_assert_eq(eval_expr("1+2"), 3);
}

Test(eval_expr, test_simple_sub)
{
    cr_assert_eq(eval_expr("3-1"), 2);
}

Test(eval_expr, test_simple_mul)
{
    cr_assert_eq(eval_expr("2*3"), 6);
}

Test(eval_expr, test_simple_divi)
{
    cr_assert_eq(eval_expr("4/2"), 2);
}

Test(eval_expr, test_simple_modulo)
{
    cr_assert_eq(eval_expr("5%2"), 1);
}

Test(eval_expr, test_inter_add)
{
    cr_assert_eq(eval_expr("42+18"), 60);
}

Test(eval_expr, test_inter_sub)
{
    cr_assert_eq(eval_expr("130-172"), -42);
}

Test(eval_expr, test_inter_mul)
{
    cr_assert_eq(eval_expr("32*56"), 1792);
}

Test(eval_expr, test_inter_divi)
{
    cr_assert_eq(eval_expr("56793/30"), 1893);
}

Test(eval_expr, test_inter_modulo)
{
    cr_assert_eq(eval_expr("894%5"), 4);
}

Test(eval_expr, test_mul_by_0)
{
    cr_assert_eq(eval_expr("48*0"), 0);
}

Test(eval_expr, test_simple_priority)
{
    cr_assert_eq(eval_expr("3+2*5"), 13);
}

Test(eval_expr, test_simply_spaces)
{
    cr_assert_eq(eval_expr("4 + 2"), 6);
}

Test(eval_expr, test_inter_priority)
{
    cr_assert_eq(eval_expr("45*(555/(4+89))-2"), 223);
}

Test(eval_expr, test_inter_spaces)
{
    cr_assert_eq(eval_expr("  4 * 2 + (3*          (8-2))"), 26);
}

Test(eval_expr, test_med_add)
{
    cr_assert_eq(eval_expr("987+560+2333+67107+4+78"), 71069);
}

Test(eval_expr, test_med_sub)
{
    cr_assert_eq(eval_expr("957-288282+67988-3-12+97888"), -121464);
}

Test(eval_expr, test_med_mul)
{
    cr_assert_eq(eval_expr("487098*1230*2"), 1198261080);
}

Test(eval_expr, test_med_divi)
{
    cr_assert_eq(eval_expr("486002/3/2/9/6"), 1500);
}

Test(eval_expr, test_med_modulo)
{
    cr_assert_eq(eval_expr("967056%34+69"), 97);
}

Test(eval_expr, test_med_priority)
{
    cr_assert_eq(eval_expr("945+(2-56)*4-(52 + 6999)-4+(6+3*(4*2-(6+2-(8-8))))"), -6320);
}

Test(eval_expr, test_med_spaces)
{
    cr_assert_eq(eval_expr("                 4+2         * (3-4)    "), 2);
}

Test(eval_expr, test_hard_parenthesis)
{
    cr_assert_eq(eval_expr("((((((8))))))"), 8);
}

Test(eval_expr, test_limit)
{
    cr_assert_eq(eval_expr("2147483648-1"), 2147483647);
}

Test(eval_expr, test_hardcore_op)
{
    cr_assert_eq(eval_expr("48000-47000*34-(782*4555+(123456%567)-48888)+5678/(18342+59891-46*(223-567888))"), -5063539);
}

Test(eval_expr, test_hard_spaces_op)
{
    cr_assert_eq(eval_expr("48        0 00-          47000*34-      (782*4555      +(123456%     567)-                              48888       )+56  78/(18342+59891-46*(223-                   567888))"), -5063539);
}
