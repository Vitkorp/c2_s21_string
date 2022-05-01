#include "s21_string.h"
#include <check.h>
START_TEST(test_memchr) {
    char *s21_memchr1 = s21_memchr("ABCDEFG", 'D', 8);
    char *s21_memchr2 = s21_memchr("ABCDEFG", 'C', 8);
    char *s21_memchr3 = s21_memchr("ABCDEFG", 'E', 8);
    
    ck_assert_str_eq(s21_memchr1, "DEFG");
    ck_assert_str_eq(s21_memchr2, "CDEFG");
    ck_assert_str_eq(s21_memchr3, "EFG");

}
END_TEST

Suite *s21_memchr_suite(void) {
    Suite *s = suite_create("String Unit Tests");

    TCase *tc_memchr = tcase_create("Core_memchr");

    tcase_add_test(tc_memchr, test_memchr);

    suite_add_tcase(s, tc_memchr);

    return s;
}

int main () {
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = s21_memchr_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);

    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
} 