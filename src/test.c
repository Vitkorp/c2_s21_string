#include <stdlib.h>
#include <string.h>
#include "check.h"
#include "s21_string.h"

START_TEST(s21_strcat_test) {
    int len_test = 7;
    char src[7][50] = {"Hello world\0", " \n\0", "\0", "\n\0", "a\0",
                       "NULL\0", "Hello Hello Hello Hello\0"};
    char dest1[7][50] = {"Hello world\0", " \n\0", "\0", "\n\0", "a\0",
                         "NULL\0", "Hello Hello Hello Hello\0"};
    char dest2[7][50] = {"Hello world\0", " \n\0", "\0", "\n\0", "a\0",
                         "NULL\0", "Hello Hello Hello Hello\0"};
    for (int i = 0; i < len_test; i++) {
        for (int j = 0; j < len_test; j++) {
            ck_assert_str_eq(s21_strcat(dest1[j], src[i]), strcat(dest2[j], src[i]));
        }
    }
}

END_TEST

START_TEST(s21_strncat_test) {
    int len_test = 7;
    char src[7][50] = {"Hello world\0", " \n\0", "\0", "\n\0", "a\0",
                       "NULL\0", "Hello Hello Hello Hello\0"};
    char dest1[7][50] = {"Hello world\0", " \n\0", "\0", "\n\0", "a\0",
                         "NULL\0", "Hello Hello Hello Hello\0"};
    char dest2[7][50] = {"Hello world\0", " \n\0", "\0", "\n\0", "a\0",
                         "NULL\0", "Hello Hello Hello Hello\0"};
    for (int i = 0; i < len_test; i++) {
        for (int j = 0; j < len_test; j++) {
            ck_assert_str_eq(s21_strncat(dest1[j], src[i], 7), strncat(dest2[j], src[i], 7));
        }
    }
}

END_TEST

START_TEST(s21_strtok_test) {

}

Suite *funcs_suite() {
    Suite *s21;
    TCase *tc_core;

    s21 = suite_create("s21_suite");
    tc_core = tcase_create("Core");

    tcase_add_test(tc_core, s21_strcat_test);
    tcase_add_test(tc_core, s21_strncat_test);
    tcase_add_test(tc_core, s21_strtok_test);

    suite_add_tcase(s21, tc_core);

    return s21;
}

int main(void) {
    int number_failed;
    Suite *s21;
    SRunner *sr;

    s21 = funcs_suite();
    sr = srunner_create(s21);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
