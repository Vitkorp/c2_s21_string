#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <check.h>
#include <stdlib.h>
#include "s21_string.h"

#ifdef S21_TEST
START_TEST(test_strlen) {
    int continuesFlag = 1;
    for (int i = 0;continuesFlag;i++) {
        char *input;
        switch (i) {
            case (0): {
                input = "ABCDEF";
                break;
            }
            case (1): {
                input = "Школа 21";
                break;
            }
            case (2): {
                input = "\0";
                break;
            }
            case (3): {
                input = "\n";
                break;
            }
            case (4): {
                input = "\0\n";
                break;
            }
            case (5): {
                input = "";
                break;
            }
            case (6): {
                input = "\"";
                break;
            }
            case (7): {
                input = "\327";
                break;
            }
            default: {
                continuesFlag = 0;
                break;
            }
        }
        ck_assert_int_eq(s21_strlen(input), strlen(input));
    }
}

START_TEST(test_strerror) {
    for (int i = 0;i < 255 ;i++) {
        ck_assert_str_eq(s21_strerror(i), strerror(i));
    }
}

Suite* s21_strlen_suit(void) {
    Suite *s = suite_create("String Unit Tests");
    TCase *tc_strlen = tcase_create("strlen");
    tcase_add_test(tc_strlen, test_strlen);
    suite_add_tcase(s, tc_strlen); 
    return s;
}

Suite* s21_strerror_suit(void) {
    Suite *s = suite_create("String Unit Tests");
    TCase *tc_strerror = tcase_create("strerror");
    tcase_add_test(tc_strerror, test_strerror);
    suite_add_tcase(s, tc_strerror); 
    return s;
}
#endif  // S21_TEST

int main(int argc, char** argv) {
    int number_failed;
    Suite *s;
    SRunner *sr;
    switch (argc){
        case (0): {
            printf("Не правильное число параметров\n");
            break;
        }

        case (1): {
            s = s21_strlen_suit();
            sr = srunner_create(s);
            srunner_run_all(sr, CK_NORMAL);
            number_failed = srunner_ntests_failed(sr);
            srunner_free(sr);

            s = s21_strerror_suit();
            sr = srunner_create(s);
            srunner_run_all(sr, CK_NORMAL);
            number_failed = srunner_ntests_failed(sr);
            srunner_free(sr);
            break;
        }
        case (2): {
            printf("Распознан 1 аргумент: %s\n", argv[1]);
            printf("Результат работы функции strlen(): %lu \n", strlen(argv[1]));
            printf("Результат работы функции s21_strlen(): %lu \n", s21_strlen(argv[1]));
            break;
        }
        case (3): {
            printf("Распознаны 2 аргумента: %s\n", argv[1]);
            printf("Результат работы функции strlen(): %lu \n", strlen(argv[1]));
            printf("Результат работы функции s21_strlen(): %lu \n", s21_strlen(argv[1]));
            printf("Результат работы функции strcspn(): %lu \n", strcspn(argv[1], argv[2]));
            printf("Результат работы функции s21_strcspn(): %lu \n", s21_strcspn(argv[1], argv[2]));
            printf("Результат работы функции strspn(): %lu \n", strspn(argv[1], argv[2]));
            printf("Результат работы функции s21_strspn(): %lu \n", s21_strspn(argv[1], argv[2]));
            break;
        }
        default: {
            break;
        }
    }
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
