/*
 * DO NOT EDIT THIS FILE. Generated by checkmk.
 * Edit the original source file "s21_2_9_10.check" instead.
 */

#include <check.h>

#line 1 "s21_2_9_10.check"
#include "s21_2_9_10.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

START_TEST(memcmp_1)
{
#line 7
const char* str1 = "1234567890";
const char* str2 = "1234567890";
ck_assert_int_eq(memcmp(str1,str2,10),s21_memcmp(str1,str2,10));

}
END_TEST

int main(void)
{
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    int nf;

    suite_add_tcase(s1, tc1_1);
    tcase_add_test(tc1_1, memcmp_1);

    srunner_run_all(sr, CK_ENV);
    nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}
