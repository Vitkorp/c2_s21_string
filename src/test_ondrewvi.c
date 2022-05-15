#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <check.h>
#include <stdlib.h>
#include "s21_string.h"

//#ifdef S21_TEST
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
END_TEST

START_TEST(test_strerror_POSIX) {
    int count;
#if defined(__APPLE__) && defined(__MACH__)
            count = 60;
#elif defined(__linux__)
            count = 76;
#endif    
    printf("case Posix\n");
    err elist[] = S21_ERRLIST;  
    for (int i = 0;i < count ;i++) {
            int errnum = elist[i].id;
            ck_assert_str_eq(s21_strerror(errnum), strerror(errnum));
    }
}
END_TEST

START_TEST(test_strerror_NOTPOSIX) {
    int start;
#if defined(__APPLE__) && defined(__MACH__)
            start = 107;
#elif defined(__linux__)
            start = 134;
#endif    
    printf("case notPosix\n");
    for (int i = 0; i < (255 - start + 1); i++) {
            printf("err: %d\n", start + i);
            ck_assert_str_eq(s21_strerror(start + i), strerror(start + i));
    }
}
END_TEST

START_TEST(test_strcspn) {
    int continuesFlag = 1;
    for (int i = 0;continuesFlag;i++) {
        char *input1;
        char *input2;
        switch (i) {
            case (0): {
                input1 = "ABCDEF";
                input2 = "P";
                break;
            }
            case (1): {
                input1 = "ABCDEF";
                input2 = "A";
                break;
            }
            case (2): {
                input1 = "ABCDEF";
                input2 = "B";
                break;
            }
            case (3): {
                input1 = "ABCDEF";
                input2 = "C";
                break;
            }
            case (4): {
                input1 = "ABCDEF";
                input2 = "CD";
                break;
            }
            case (5): {
                input1 = "ABCDEF";
                input2 = "DC";
                break;
            }
            case (6): {
                input1 = "ABCDEF";
                input2 = "AB";
                break;
            }
            case (7): {
                input1 = "ABCDEF";
                input2 = "BA";
                break;
            }
            case (8): {
                input1 = "ABCDEF";
                input2 = "EA";
                break;
            }
            case (9): {
                input1 = "ABCDEF";
                input2 = "A";
                break;
            }
            case (10): {
                input1 = "ABCDEF";
                input2 = "\n";
                break;
            }
            case (11): {
                input1 = "ABCDEF";
                input2 = "\n";
                break;
            }
            case (12): {
                input1 = "ABCDEF";
                input2 = "DEF";
                break;
            }
            case (13): {
                input1 = "ABCDEF FGEHTYA";
                input2 = "\n";
                break;
            }
            case (14): {
                input1 = "ABCDEF FGEHTYA";
                input2 = "A";
                break;
            }
            case (15): {
                input1 = "ABCDEF FGEHTYA";
                input2 = "AB";
                break;
            }
            case (16): {
                input1 = "ABCDEF FGEHTYA";
                input2 = "FE";
                break;
            }
            case (17): {
                input1 = "ABCDEF FGEHTYA";
                input2 = "EF";
                break;
            }
            case (18): {
                input1 = "ABCDEF FGEHTYA";
                input2 = " ";
                break;
            }
            default: {
                continuesFlag = 0;
                break;
            }
        }
        // printf("test %d is OK\n",i);
        ck_assert_int_eq(s21_strcspn(input1, input2), strcspn(input1, input2));
    }
}
END_TEST

START_TEST(test_strspn) {
    int continuesFlag = 1;
    for (int i = 0;continuesFlag;i++) {
        char *input1;
        char *input2;
        switch (i) {
            case (0): {
                input1 = "ABCDEF";
                input2 = "";
                break;
            }
            case (1): {
                input1 = "ABCDEF";
                input2 = "A";
                break;
            }
            case (2): {
                input1 = "ABCDEF";
                input2 = "B";
                break;
            }
            case (3): {
                input1 = "ABCDEF";
                input2 = "C";
                break;
            }
            case (4): {
                input1 = "ABCDEF";
                input2 = "CD";
                break;
            }
            case (5): {
                input1 = "ABCDEF";
                input2 = "DC";
                break;
            }
            case (6): {
                input1 = "ABCDEF";
                input2 = "AB";
                break;
            }
            case (7): {
                input1 = "ABCDEF";
                input2 = "BA";
                break;
            }
            case (8): {
                input1 = "ABCDEF";
                input2 = "BAA";
                break;
            }
            case (9): {
                input1 = "ABCDEF";
                input2 = "AAAA";
                break;
            }
            case (10): {
                input1 = "ABCDEF";
                input2 = "\n";
                break;
            }
            case (11): {
                input1 = "ABCDEF";
                input2 = "\n";
                break;
            }
            case (12): {
                input1 = "ABCDEF";
                input2 = "DEF";
                break;
            }
            case (13): {
                input1 = "ABCDEF FGEHTYA";
                input2 = "\n";
                break;
            }
            case (14): {
                input1 = "ABCDEF FGEHTYA";
                input2 = "A";
                break;
            }
            case (15): {
                input1 = "ABCDEF FGEHTYA";
                input2 = "AB";
                break;
            }
            case (16): {
                input1 = "ABCDEF FGEHTYA";
                input2 = "FE";
                break;
            }
            case (17): {
                input1 = "ABCDEF FGEHTYA";
                input2 = "EF";
                break;
            }
            case (18): {
                input1 = "ABCDEF FGEHTYA";
                input2 = " ";
                break;
            }
            default: {
                continuesFlag = 0;
                break;
            }
        }
        // printf("test %d is OK\n",i);
        ck_assert_int_eq(s21_strspn(input1, input2), strspn(input1, input2));
    }
}
END_TEST

Suite* s21_strlen_suit(void) {
    Suite *s = suite_create("String Unit Tests strlen");
    TCase *tc_strlen = tcase_create("strlen");
    tcase_add_test(tc_strlen, test_strlen);
    suite_add_tcase(s, tc_strlen); 
    return s;
}

Suite* s21_strerror_suit(void) {
    Suite *s = suite_create("String Unit Tests strerror");
    TCase *tc_strerror_posix = tcase_create("strerror_posix");
    TCase *tc_strerror_notposix = tcase_create("strerror_notposix");
    tcase_add_test(tc_strerror_posix, test_strerror_POSIX);
    tcase_add_test(tc_strerror_notposix, test_strerror_NOTPOSIX);
    suite_add_tcase(s, tc_strerror_posix); 
    suite_add_tcase(s, tc_strerror_notposix); 
    return s;
}

Suite* s21_strcspn_suit(void) {
    Suite *s = suite_create("String Unit Tests strcspn");
    TCase *tc_strcspn= tcase_create("strcspn");
    tcase_add_test(tc_strcspn, test_strcspn);
    suite_add_tcase(s, tc_strcspn); 
    return s;
}

Suite* s21_strspn_suit(void) {
    Suite *s = suite_create("String Unit Tests strspn");
    TCase *tc_strspn= tcase_create("strspn");
    tcase_add_test(tc_strspn, test_strspn);
    suite_add_tcase(s, tc_strspn); 
    return s;
}
//#endif  // S21_TEST

int main() {
    int number_failed;
    Suite *s;
    SRunner *sr;
    for (int i = 0; i < 4; i++) {
        switch (i) {
            case 0: {s = s21_strlen_suit(); break;}
            case 1: {s = s21_strerror_suit(); break;}
            case 2: {s = s21_strcspn_suit(); break;}
            case 3: {s = s21_strspn_suit(); break;}
            default: break;
        }
        sr = srunner_create(s);
        srunner_run_all(sr, CK_NORMAL);
        number_failed = srunner_ntests_failed(sr);
        srunner_free(sr);
    }
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
