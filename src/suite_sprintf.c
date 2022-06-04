#include "suite_sprintf.h"

#define BUFF_SIZE 512

START_TEST(SPRINTFTestLaslhyn19) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%-+ 05.10d %10.15f %-10.2s %10.c %%%% %10u|\n", 10, 10.3, "qwerty", 'd', -100);
    sprintf(data1, "|%-+ 05.10d %10.15f %-10.2s %10.c %%%% %10u|\n", 10, 10.3, "qwerty", 'd', -100);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn20) {
    char data[100];
    char data1[100];
    int a1 = sprintf(data, "|%20% this is good|\n");
    int b1 = s21_sprintf(data1, "|%20% this is good|\n");
    ck_assert_int_eq(a1, b1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn21) {
    char data[100];
    char data1[100];
    int a1 = sprintf(data, "|%20% this is good|\n");
    int b1 = s21_sprintf(data1, "|%20% this is good|\n");
    ck_assert_int_eq(a1, b1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn22) {
    char data[100];
    char data1[100];
    sprintf(data, "|%32s|\n", "111");
    s21_sprintf(data1, "|%32s|\n", "111");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn23) {
    char data[100];
    char data1[100];
    sprintf(data, "|%32s|\n", "abc");
    s21_sprintf(data1, "|%32s|\n", "abc");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn24) {
    char data[100];
    char data1[100];
    sprintf(data, "|%-32s|\n", "abc");
    s21_sprintf(data1, "|%-32s|\n", "abc");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn25) {
    char data[100];
    char data1[100];
    sprintf(data, "|%16s|\n", "nark nark");
    s21_sprintf(data1, "|%16s|\n", "nark nark");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn26) {
    char data[100];
    char data1[100];
    sprintf(data, "|%16s|\n", "nark nark");
    s21_sprintf(data1, "|%16s|\n", "nark nark");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn27) {
    char data[100];
    char data1[100];
    int c = s21_sprintf(data, "|%.03s|\n", "hello");
    int d = sprintf(data1, "|%.03s|\n", "hello");
    ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn28) {
    char data[100];
    char data1[100];
    int c = s21_sprintf(data, "|%.3s| kushat nado |%20s|\n", "MneEEEEEEEEE", "arbuz");
    int d = sprintf(data1, "|%.3s| kushat nado |%20s|\n", "MneEEEEEEEEE", "arbuz");
    ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn30) {
    char data[100];
    char data1[100];
    int c = s21_sprintf(data, "|%03.7d|\n", -2375);
    int d = sprintf(data1, "|%03.7d|\n", -2375);
    ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn31) {
    char data[100];
    char data1[100];
    int c = s21_sprintf(data, "|%-20.18u|\n", -345);
    int d = sprintf(data1, "|%-20.18u|\n", -345);
    ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn32) {
    char data[100];
    char data1[100];
    int c = s21_sprintf(data, "|%-20.18d|\n", -345);
    int d = sprintf(data1, "|%-20.18d|\n", -345);
    ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn33) {
    char data[100];
    char data1[100];
    int c = s21_sprintf(data, "|%020.2d|\n", -345);
    int d = sprintf(data1, "|%020.2d|\n", -345);
    ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn34) {
    char data[100];
    char data1[100];
    int c = s21_sprintf(data, "|%020d|\n", -345);
    int d = sprintf(data1, "|%020d|\n", -345);
    ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn35) {
    char data[100];
    char data1[100];
    int c = s21_sprintf(data, "|%%|\n");
    int d = sprintf(data1, "|%%|\n");
    ck_assert_int_eq(c, d);
}
END_TEST



START_TEST(SPRINTFTestLaslhyn37) {
    char data[100];
    char data1[100];
    int c = s21_sprintf(data, "|test %-12i et %24s !|\n", 0, "coco");
    int d = sprintf(data1, "|test %-12i et %24s !|\n", 0, "coco");
    ck_assert_int_eq(c, d);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn38) {
    char data[100];
    char data1[100];
    int c = s21_sprintf(data, "|test %-12i et %--2.4d %24s !|\n", 0, 25, "coco");
    int d = sprintf(data1, "|test %-12i et %--2.4d %24s !|\n" , 0, 25, "coco");
    ck_assert_int_eq(c, d);
}
END_TEST


START_TEST(SPRINTFTestLaslhyn39) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%c|\n", 'a');
    sprintf(data1, "01)SPRINTF : |%c|\n", 'a');
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn40) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%-c|\n", 'z');
    sprintf(data1, "01)SPRINTF : |%-c|\n", 'z');
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn41) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%-----c|\n", '!');
    sprintf(data1, "01)SPRINTF : |%-----c|\n", '!');
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn42) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%5c|\n", 'R');
    sprintf(data1, "01)SPRINTF : |%5c|\n", 'R');
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn43) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%-5c|\n", 'R');
    sprintf(data1, "01)SPRINTF : |%-5c|\n", 'R');
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn44) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%1c|\n", '3');
    sprintf(data1, "01)SPRINTF : |%1c|\n", '3');
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn45) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%c|\n", '\0');
    sprintf(data1, "01)SPRINTF : |%c|\n", '\0');
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn46) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%5c|\n", '\0');
    sprintf(data1, "01)SPRINTF : |%5c|\n", '\0');
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn47) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%-5c|\n", '\0');
    sprintf(data1, "01)SPRINTF : |%-5c|\n", '\0');
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn48) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%1c|\n", '\0');
    sprintf(data1, "01)SPRINTF : |%1c|\n", '\0');
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn49) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%s|\n", "salut");
    sprintf(data1, "01)SPRINTF : |%s|\n", "salut");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn50) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%-s|\n", "test");
    sprintf(data1, "01)SPRINTF : |%-s|\n", "test");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn51) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%---------s|\n", "test2");
    sprintf(data1, "01)SPRINTF : |%---------s|\n", "test2");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn52) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%10s|\n", "42");
    sprintf(data1, "01)SPRINTF : |%10s|\n", "42");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn53) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%-10s|\n", "42");
    sprintf(data1, "01)SPRINTF : |%-10s|\n", "42");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn54) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%2s|\n", "string");
    sprintf(data1, "01)SPRINTF : |%2s|\n", "string");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn55) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%-2s|\n", "string");
    sprintf(data1, "01)SPRINTF : |%-2s|\n", "string");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn56) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%.15s|\n", "precision");
    sprintf(data1, "01)SPRINTF : |%.15s|\n", "precision");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn57) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%.4s|\n", "precision");
    sprintf(data1, "01)SPRINTF : |%.4s|\n", "precision");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn58) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%.0s|\n", "precision");
    sprintf(data1, "01)SPRINTF : |%.0s|\n", "precision");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn59) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%s|\n", "\0\0\0\0\0");
    sprintf(data1, "01)SPRINTF : |%s|\n", "\0\0\0\0\0");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn60) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%10s|\n", "\0\0\0\0\0");
    sprintf(data1, "01)SPRINTF : |%10s|\n", "\0\0\0\0\0");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn61) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%s|\n", "");
    sprintf(data1, "01)SPRINTF : |%s|\n", "");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn62) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%-.2s|\n", "boom");
    sprintf(data1, "01)SPRINTF : |%-.2s|\n", "boom");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn63) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%10.8s|\n", "google");
    sprintf(data1, "01)SPRINTF : |%10.8s|\n", "google");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn64) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%10.2s|\n", "twitter");
    sprintf(data1, "01)SPRINTF : |%10.2s|\n", "twitter");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn65) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%2.10s|\n", "samsung");
    sprintf(data1, "01)SPRINTF : |%2.10s|\n", "samsung");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn66) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%2.5s|\n", "sprintf");
    sprintf(data1, "01)SPRINTF : |%2.5s|\n", "sprintf");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn67) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%-10.2s|\n", "424242424242");
    sprintf(data1, "01)SPRINTF : |%-10.2s|\n", "424242424242");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn68) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%1.0s|\n", "123456789");
    sprintf(data1, "01)SPRINTF : |%1.0s|\n", "123456789");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn69) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%-1.0s|\n", "123456789");
    sprintf(data1, "01)SPRINTF : |%-1.0s|\n", "123456789");
    ck_assert_str_eq(data, data1);
}
END_TEST


START_TEST(SPRINTFTestLaslhyn70) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%.1s|\n", "covid-19");
    sprintf(data1, "01)SPRINTF : |%.1s|\n", "covid-19");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn71) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%10.2s|\n", "covid-19");
    sprintf(data1, "01)SPRINTF : |%10.2s|\n", "covid-19");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn72) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%2.5s|\n", "covid-19");
    sprintf(data1, "01)SPRINTF : |%2.5s|\n", "covid-19");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn73) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%-10.2s|\n", "covid-19");
    sprintf(data1, "01)SPRINTF : |%-10.2s|\n", "covid-19");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn74) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%1.4s| et |%-6.8s| et |%4.2s|\n", "tuuu", "12345", "hu");
    sprintf(data1, "01)SPRINTF : |%1.4s| et |%-6.8s| et |%4.2s|\n", "tuuu", "12345", "hu");
    ck_assert_str_eq(data, data1);
}
END_TEST


START_TEST(SPRINTFTestLaslhyn88) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%1.1d|\n", -20);
    sprintf(data1, "02) standart PRINTF :|%1.1d|\n", -20);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn89) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%-10d|\n", -50);
    sprintf(data1, "02) standart PRINTF :|%-10d|\n", -50);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn90) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%2d|\n", -20);
    sprintf(data1, "02) standart PRINTF :|%2d|\n", -20);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn91) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%.2d|\n", -20);
    sprintf(data1, "02) standart PRINTF :|%.2d|\n", -20);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn92) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%d|\n", 42);
    sprintf(data1, "02) standart PRINTF :|%d|\n", 42);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn93) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%i|\n", 42);
    sprintf(data1, "02) standart PRINTF :|%i|\n", 42);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn94) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%-d|\n", 42);
    sprintf(data1, "02) standart PRINTF :|%-d|\n", 42);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn95) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%10d|\n", 100);
    sprintf(data1, "02) standart PRINTF :|%10d|\n", 100);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn96) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%-10d|\n", 100);
    sprintf(data1, "02) standart PRINTF :|%-10d|\n", 100);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn97) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%.10d|\n", 100);
    sprintf(data1, "02) standart PRINTF :|%.10d|\n", 100);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn98) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%10.5d|\n", 100);
    sprintf(data1, "02) standart PRINTF :|%10.5d|\n", 100);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn99) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%5.10d|\n", 64);
    sprintf(data1, "02) standart PRINTF :|%5.10d|\n", 64);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn100) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%1.1d|\n", 16);
    sprintf(data1, "02) standart PRINTF :|%1.1d|\n", 16);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn101) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%d|\n", -42);
    sprintf(data1, "02) standart PRINTF :|%d|\n", -42);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn102) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%10d|\n", -42);
    sprintf(data1, "02) standart PRINTF :|%10d|\n", -42);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn103) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%.10d|\n", -42);
    sprintf(data1, "02) standart PRINTF :|%.10d|\n", -42);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn104) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%10.5d|\n", -16);
    sprintf(data1, "02) standart PRINTF :|%10.5d|\n", -16);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn105) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%5.10d|\n", -16);
    sprintf(data1, "02) standart PRINTF :|%5.10d|\n", -16);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn106) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%.2d|\n", -1);
    sprintf(data1, "02) standart PRINTF : |%.2d|\n", -1);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn107) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%-10d|\n", -80);
    sprintf(data1, "02) standart PRINTF : |%-10d|\n", -80);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn108) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%-.10d|\n", -80);
    sprintf(data1, "02) standart PRINTF : |%-.10d|\n", -80);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn109) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%6d|\n", 35);
    sprintf(data1, "02) standart PRINTF : |%6d|\n", 35);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn110) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%6d|\n", -35);
    sprintf(data1, "02) standart PRINTF : |%6d|\n", -35);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn111) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%5.3d|\n", 5);
    sprintf(data1, "02) standart PRINTF : |%5.3d|\n", 5);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn112) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%3.5d|\n", 5);
    sprintf(data1, "02) standart PRINTF : |%3.5d|\n", 5);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn113) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%5.3d|\n", -5);
    sprintf(data1, "02) standart PRINTF : |%5.3d|\n", -5);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn114) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%3.5d|\n", -5);
    sprintf(data1, "02) standart PRINTF : |%3.5d|\n", -5);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn115) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%.d|\n", 0);
    sprintf(data1, "02) standart PRINTF : |%.d|\n", 0);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn116) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%.d|\n", 100);
    sprintf(data1, "02) standart PRINTF : |%.d|\n", 100);
    ck_assert_str_eq(data, data1);
}
END_TEST


START_TEST(SPRINTFTestLaslhyn155) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%u|\n", 34);
    sprintf(data1, "02) standart PRINTF : |%u|\n", 34);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn156) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%u|\n", -34);
    sprintf(data1, "02) standart PRINTF : |%u|\n", -34);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn157) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%-u|\n", 50);
    sprintf(data1, "02) standart PRINTF : |%-u|\n", 50);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn158) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%10u|\n", 90);
    sprintf(data1, "02) standart PRINTF : |%10u|\n", 90);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn159) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%.10u|\n", 90);
    sprintf(data1, "02) standart PRINTF : |%.10u|\n", 90);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn160) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%15u|\n", -100);
    sprintf(data1, "02) standart PRINTF : |%15u|\n", -100);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn161) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%10.5u|\n", 52);
    sprintf(data1, "02) standart PRINTF : |%10.5u|\n", 52);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn162) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%5.10u|\n", 52);
    sprintf(data1, "02) standart PRINTF : |%5.10u|\n", 52);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn163) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%20.15u|\n", -100000);
    sprintf(data1, "02) standart PRINTF : |%20.15u|\n", -100000);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn164) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%15.20u|\n", -100000);
    sprintf(data1, "02) standart PRINTF : |%15.20u|\n", -100000);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn165) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%-10u|\n", 144);
    sprintf(data1, "02) standart PRINTF : |%-10u|\n", 144);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn166) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%-.10u|\n", 144);
    sprintf(data1, "02) standart PRINTF : |%-.10u|\n", 144);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn167) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%-20u|\n", -20000000);
    sprintf(data1, "02) standart PRINTF : |%-20u|\n", -20000000);
    ck_assert_str_eq(data, data1);
}
END_TEST


START_TEST(SPRINTFTestLaslhyn168) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%08u|\n", 64);
    sprintf(data1, "02) standart PRINTF : |%08u|\n", 64);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn169) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%03.4u|\n", 10);
    sprintf(data1, "02) standart PRINTF : |%03.4u|\n", 10);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn170) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%u|\n", 0);
    sprintf(data1, "02) standart PRINTF :|%u|\n", 0);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn171) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%.u|\n", 0);
    sprintf(data1, "02) standart PRINTF : |%.u|\n", 0);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn172) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%10u|\n", 0);
    sprintf(data1, "02) standart PRINTF : |%10u|\n", 0);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn173) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%.u|\n", 88);
    sprintf(data1, "02) standart PRINTF : |%.u|\n", 88);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn174) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%.s|\n", "bratok");
    sprintf(data1, "02) standart PRINTF : |%.s|\n", "bratok");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn175) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%.d|\n", 5, 5);
    sprintf(data1, "02) standart PRINTF : |%.d|\n", 5, 5);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn176) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%.d|\n", 5, 0);
    sprintf(data1, "02) standart PRINTF : |%.d|\n", 5, 0);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn177) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%.3s|\n", "21");
    sprintf(data1, "02) standart PRINTF : |%.3s|\n", "21");
    ck_assert_str_eq(data, data1);
}
END_TEST




START_TEST(SPRINTFTestLaslhyn183) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%u|\n", -1);
    sprintf(data1, "|%u|\n", -1);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn184) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%u|\n", -1);
    sprintf(data1, "|%u|\n", -1);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn185) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%f|\n", 324.34);
    sprintf(data1, "|%f|\n", 324.34);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn186) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%10f|\n", 324.343);
    sprintf(data1, "|%10f|\n", 324.343);
    ck_assert_str_eq(data, data1);
}
END_TEST


START_TEST(SPRINTFTestLaslhyn187) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%10.3f|\n", 324.343);
    sprintf(data1, "|%10.3f|\n", 324.343);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn188) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%1.30f|\n", 324.343);
    sprintf(data1, "|%1.30f|\n", 324.343);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn189) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%-1.10f|\n", 324.343);
    sprintf(data1, "|%-1.10f|\n", 324.343);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn190) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%-1.10f|\n", -324.343);
    sprintf(data1, "|%-1.10f|\n", -324.343);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn191) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%.10f|\n", -324.343);
    sprintf(data1, "|%.10f|\n", -324.343);
    ck_assert_str_eq(data, data1);
}
END_TEST


START_TEST(SPRINTFTestLaslhyn192) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%.10f|\n", 324.343);
    sprintf(data1, "|%.10f|\n", 324.343);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn193) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|% 10f|\n", 324.1);
    sprintf(data1, "|% 10f|\n", 324.1);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn194) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%+10f|\n", 324.1);
    sprintf(data1, "|%+10f|\n", 324.1);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn195) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%10f|\n", 324.1);
    sprintf(data1, "|%10f|\n", 324.1);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn196) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%10f|\n", 324.1123132);
    sprintf(data1, "|%10f|\n", 324.1123132);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn197) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%10.15f|\n", 324.1123132);
    sprintf(data1, "|%10.15f|\n", 324.1123132);
    ck_assert_str_eq(data, data1);
}
END_TEST


START_TEST(SPRINTFTestLaslhyn198) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%.0f|\n", 324.1123132);
    sprintf(data1, "|%.0f|\n", 324.1123132);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn199) {
    //
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%10.0f|\n", 3.14);
    sprintf(data1, "|%10.0f|\n", 3.14);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn200) {
    //
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%10.10f|\n", 320.3);
    sprintf(data1, "|%10.10f|\n", 320.3);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn201) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%-10.10f|\n", 320.3);
    sprintf(data1, "|%-10.10f|\n", 320.3);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn202) {
    //
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%-10.10f|\n", 320.3);
    sprintf(data1, "|%-10.10f|\n", 320.3);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn203) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%-10.10f|\n", -320.3);
    sprintf(data1, "|%-10.10f|\n", -320.3);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn204) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%.0f|\n", -320.3);
    sprintf(data1, "|%.0f|\n", -320.3);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn205) {
    char data[100];
    char data1[100];

    s21_sprintf(data, "|%.0f|\n", -320.3);
    sprintf(data1, "|%.0f|\n", -320.3);

    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn206) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%5.0f|\n", -320.3);
    sprintf(data1, "|%5.0f|\n", -320.3);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn207) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%5.0f|\n", 3.141592653589793);
    sprintf(data1, "|%5.0f|\n", 3.141592653589793);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn208) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%5.0f|\n", 3.141592653589793);
    sprintf(data1, "|%5.0f|\n", 3.141592653589793);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn209) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|% -5.1f|\n", 0.001);
    sprintf(data1, "|% -5.1f|\n", 0.001);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn210) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%5.1f|\n", 324.324);
    sprintf(data1, "|%5.1f|\n", 324.324);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestLaslhyn211) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%5.3f|\n", 0.0001);
    sprintf(data1, "|%5.3f|\n", 0.0001);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestdogletho1) {
    char str[100];
    char str1[100];
    int a = 10, b = 20, c;
    c = a + b;
    sprintf(str, "Sum of %d and %d is %d", a, b, c);
    s21_sprintf(str1, "Sum of %d and %d is %d", a, b, c);
    ck_assert_str_eq(str, str1);
    sprintf(str, "Chislo:|%-5s|kust and |%9c|. This sum is |%i|. This is |%%|. And now unsigned: |%u|\n",
            "abra", 'e', 56, -43);
    s21_sprintf(str1, "Chislo:|%-5s|kust and |%9c|. This sum is |%i|. This is |%%|. And now unsigned: |%u|\n",
                "abra", 'e', 56, -43);
    ck_assert_str_eq(str, str1);
    sprintf(str, "Sum of %d and %d is %d", a, b, c);
    s21_sprintf(str1, "Sum of %d and %d is %d", a, b, c);
}
END_TEST


START_TEST(SPRINTFTestdogletho2) {
    char str[100];
    char str1[100];
    sprintf(str, "Chislo:|%-5s|kust and |%9c|. This sum is |%i|. This is |%%|. And now unsigned: |%u|\n",
            "abra", 'e', 56, -43);
    s21_sprintf(str1, "Chislo:|%-5s|kust and |%9c|. This sum is |%i|. This is |%%|. And now unsigned: |%u|\n",
                "abra", 'e', 56, -43);
    ck_assert_str_eq(str, str1);
}
END_TEST




START_TEST(SPRINTFTestdogletho6) {
    char str[100];
    char str1[100];
    sprintf(str, "|%i|\n",   10);
    s21_sprintf(str1, "|%i|\n",   10);
    ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho52) {
    char str[100];
    char str1[100];
    sprintf(str, "|%.d|\n", 0);
    s21_sprintf(str1, "|%.d|\n", 0);
    ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho53) {
    char str[100];
    char str1[100];
    sprintf(str, "|%5.d|\n", 0);
    s21_sprintf(str1, "|%5.d|\n", 0);
    ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho54) {
    char str[100];
    char str1[100];
    sprintf(str, "|%5.0d|\n", 0);
    s21_sprintf(str1, "|%5.0d|\n", 0);
    ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho55) {
    char str[100];
    char str1[100];
    sprintf(str, "|%-5.d|\n", 0);
    s21_sprintf(str1, "|%-5.d|\n", 0);
    ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho56) {
    char str[100];
    char str1[100];
    sprintf(str, "|%.0d|\n", 0);
    s21_sprintf(str1, "|%.0d|\n", 0);
    ck_assert_str_eq(str, str1);
}
END_TEST




START_TEST(SPRINTFTestdogletho68) {
    char str[100];
    char str1[100];
    sprintf(str, "|%020.18u|\n", -345);
    s21_sprintf(str1, "|%020.18u|\n", -345);
    ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho69) {
    char str[100];
    char str1[100];
    sprintf(str, "|%-20.18u|\n", -345);
    s21_sprintf(str1, "|%-20.18u|\n", -345);
    ck_assert_str_eq(str, str1);
}
END_TEST


START_TEST(SPRINTFTestdogletho127) {
    char str[100];
    char str1[100];
    sprintf(str, "|%8s|\n", "abra");
    s21_sprintf(str1, "|%8s|\n", "abra");
    ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho128) {
    char str[100];
    char str1[100];
    sprintf(str, "|%-8s|\n", "abrafdefgbr");
    s21_sprintf(str1, "|%-8s|\n", "abrafdefgbr");
    ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho129) {
    char str[100];
    char str1[100];
    sprintf(str, "|%8s|\n", "abra");
    s21_sprintf(str1, "|%8s|\n", "abra");
    ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho130) {
    char str[100];
    char str1[100];
    sprintf(str, "|%8s|\n", "abrafdefgbr");
    s21_sprintf(str1, "|%8s|\n", "abrafdefgbr");
    ck_assert_str_eq(str, str1);
}
END_TEST


START_TEST(SPRINTFTestdogletho131) {
    char str[100];
    char str1[100];
    sprintf(str, "|%8s|\n", "abra");
    s21_sprintf(str1, "|%8s|\n", "abra");
    ck_assert_str_eq(str, str1);
}


START_TEST(SPRINTFTestdogletho187) {
    char str[100];
    char str1[100];
    sprintf(str, "%i", 0);
    s21_sprintf(str1, "%i", 0);
    ck_assert_str_eq(str, str1);
}
END_TEST

// --------------Check for c-------------


START_TEST(SPRINTFTestdogletho190) {
    char str[100];
    char str1[100];
    sprintf(str, "|%c|\n", 'a');
    s21_sprintf(str1, "|%c|\n", 'a');
    ck_assert_str_eq(str, str1);
}
END_TEST



START_TEST(SPRINTFTestdogletho197) {
    char str[100];
    char str1[100];
    sprintf(str, "|%.c|\n", 'a');
    s21_sprintf(str1, "|%.c|\n", 'a');
    ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho198) {
    char str[100];
    char str1[100];
    sprintf(str, "|%-.c|\n", 'a');
    s21_sprintf(str1, "|%-.c|\n", 'a');
    ck_assert_str_eq(str, str1);
}
END_TEST


START_TEST(SPRINTFTestdogletho218) {
    char str[100];
    char str1[100];
    sprintf(str, "|%5%|\n");
    s21_sprintf(str1, "|%5%|\n");
    ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho219) {
    char str[100];
    char str1[100];
    sprintf(str, "|%5.%|\n");
    s21_sprintf(str1, "|%5.%|\n");
    ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho220) {
    char str[100];
    char str1[100];
    sprintf(str, "|%-5%|\n");
    s21_sprintf(str1, "|%-5%|\n");
    ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho221) {
    char str[100];
    char str1[100];
    sprintf(str, "|%-5.%|\n");
    s21_sprintf(str1, "|%-5.%|\n");
    ck_assert_str_eq(str, str1);
}
END_TEST


START_TEST(SPRINTFTestdogletho232) {
    char str[100];
    char str1[100];
    for (int i = -101; i <= 101; i++) {
        sprintf(str, "%+i", i);
        s21_sprintf(str1, "%+i", i);
        ck_assert_str_eq(str, str1);
    }
}
END_TEST

START_TEST(SPRINTFTestdogletho233) {
    char str[100];
    char str1[100];
    for (int i = -101; i <= 101; i++) {
        sprintf(str, "%+d", i);
        s21_sprintf(str1, "%+d", i);
        ck_assert_str_eq(str, str1);
    }
}
END_TEST



START_TEST(SPRINTFTestdogletho234) {
    char str[100];
    char str1[100];
    sprintf(str, " %+d %+i %+d %+d", 2147483647, -2147483647, 21, 0);
    s21_sprintf(str1, " %+d %+i %+d %+d", 2147483647, -2147483647, 21, 0);
    ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho235) {
    char str[100];
    char str1[100];
    sprintf(str, " %+li ", 9223372036854775807);
    s21_sprintf(str1, " %+li ", 9223372036854775807);
    ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho236) {
    char str[100];
    char str1[100];
    sprintf(str, " %+ld ", 9223372036854775807);
    s21_sprintf(str1, " %+ld ", 9223372036854775807);
    ck_assert_str_eq(str, str1);
}
END_TEST

START_TEST(SPRINTFTestdogletho237) {
    char str[100];
    char str1[100];
    sprintf(str, " %+-5d %+-5i", -7, 0);
    s21_sprintf(str1, " %+-5d %+-5i", -7, 0);
    ck_assert_str_eq(str, str1);
}
END_TEST


START_TEST(SPRINTFTestdogletho239) {
    char str[100];
    char str1[100];
    sprintf(str, "|%u|\n",   10);
    s21_sprintf(str1, "|%u|\n",   10);
    ck_assert_str_eq(str, str1);
}
END_TEST


START_TEST(SPRINTFTestdogletho259) {
    char str[100];
    char str1[100];
    for (int i = -101; i <= 101;) {
        sprintf(str, "% d", i);
        s21_sprintf(str1, "% d", i);
        i = i+7;
        ck_assert_str_eq(str, str1);
    }
}
END_TEST


START_TEST(SPRINTFTestdogletho261) {
    char str[100];
    char str1[100];
    for (int i = -101; i <= 101;) {
        sprintf(str, "% -i % -d % -5d", i, i+1, 143646235);
        s21_sprintf(str1, "% -i % -d % -5d", i, i+1, 143646235);
        i = i+7;
        ck_assert_str_eq(str, str1);
    }
}
END_TEST

START_TEST(SPRINTFTestdogletho282) {
    char data[100];
    char data1[100];

    s21_sprintf(data, "%s ", "hello world");
    sprintf(data1, "%s ", "hello world");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestdogletho283) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "%-3.1s", "\0");
    sprintf(data1, "%-3.1s", "\0");
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestRleonard1) {
    char data[200];
    char data1[200];
    s21_sprintf(data, "%li", 100000000000000000);
    sprintf(data1, "%li", 100000000000000000);
    ck_assert_str_eq(data, data1);
}
END_TEST



START_TEST(SPRINTFTestRleonard3) {
    char data[200];
    char data1[200];
    s21_sprintf(data, "%lu", 100000000000000000);
    sprintf(data1, "%lu", 100000000000000000);
    ck_assert_str_eq(data, data1);
}
END_TEST


START_TEST(SPRINTFTestRleonard6) {
    char data[200];
    char data1[200];
    s21_sprintf(data, "%ld", 100000000000000000);
    sprintf(data1, "%ld", 100000000000000000);
    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestRleonard7) {
    char data[200];
    char data1[200];
    short int i = -30000;
    s21_sprintf(data, "%hi", i);
    sprintf(data1, "%hi", i);

    ck_assert_str_eq(data, data1);
}
END_TEST


START_TEST(SPRINTFTestRleonard9) {
    char data[200];
    char data1[200];
    short int i = -30000;
    s21_sprintf(data, "%hu", i);
    sprintf(data1, "%hu", i);

    ck_assert_str_eq(data, data1);
}
END_TEST



START_TEST(SPRINTFTestRleonard12) {
    char data[200];
    char data1[200];
    short int i = -30000;
    s21_sprintf(data, "%hd", i);
    sprintf(data1, "%hd", i);

    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestRleonard13) {
    char data[200];
    char data1[200];
    s21_sprintf(data, "%lc", 'c');
    sprintf(data1, "%lc", 'c');

    ck_assert_str_eq(data, data1);
}
END_TEST

START_TEST(SPRINTFTestRleonard14) {
    char data[200];
    char data1[200];
    wchar_t buf[100] = L"hello";
    s21_sprintf(data, "%ls", buf);
    sprintf(data1, "%ls", buf);

    ck_assert_str_eq(data, data1);
}
END_TEST

// ###############################################################################################################################################


START_TEST(s21_sprintf_test_percent) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
  int r2 = s21_sprintf(str2, "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST



// ###############################################################################################################################################

START_TEST(simple_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple value %d";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(precise_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%.5i";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(width_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%5d";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(minus_width_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%-5i";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(plus_width_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%+12d";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(padding_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%12i";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST



START_TEST(flags_long_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%+5.31li";
    long int val = 698518581899;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(flags_short_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%-16.9hi";
    short int val = 6958;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST



START_TEST(zero_precision_zero_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%.0d";
    int val = 0;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(space_flag_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "% d";
    int val = 0;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(unsigned_val) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(unsigned_val_width) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%15u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(unsigned_val_flags) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%-16u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(unsigned_val_precision) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%.51u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(unsigned_val_many_flags) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "% 5.51u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(unsigned_val_short) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%hu";
    unsigned short int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(unsigned_val_long) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%lu";
    unsigned long int val = 949149114140;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(unsigned_val_many) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%lu, %u, %hu, %.5u, %5.u";
    unsigned long int val = 949149114140;
    ck_assert_int_eq(s21_sprintf(str1, format, val, 14, 1441, 14414, 9681),
                     sprintf(str2, format, val, (unsigned)14,
                             (unsigned short)1441, (unsigned)14414,
                             (unsigned)9681));

    ck_assert_str_eq(str1, str2);
}
END_TEST


START_TEST(octal_short) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%hd";
    short int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST


START_TEST(unsigned_zero) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%u";
    ck_assert_int_eq(s21_sprintf(str1, format, 0),
                     sprintf(str2, format, (unsigned)0));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(one_char) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%c";
    char val = 'X';
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(one_precision) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%.5c";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(one_flags) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "% -5c";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(one_width) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%15c";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(one_many) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%-5.3c%c%c%c%c Hello! ABOBA";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val, 'c', 'a', 'b', 'b'),
                     sprintf(str2, format, val, 'c', 'a', 'b', 'b'));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(one_many_flags) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%-5.3c";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(string) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%s";
    char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(string_precision) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%.15s";
    char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(string_width) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%15s";
    char *val = "69 IS MY FAVORITE NUMBER";
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST
START_TEST(string_flags) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%-15.9s";
    char *val = "69 IS MY FAVORITE NUMBER";
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(string_long) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%s";
    char *val =
        "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(string_many) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%s%s%s%s";
    char *val =
        "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
    char *s1 = "";
    char *s2 = "87418347813748913749871389480913";
    char *s3 = "HAHAABOBASUCKER";
    ck_assert_int_eq(s21_sprintf(str1, format, val, s1, s2, s3),
                     sprintf(str2, format, val, s1, s2, s3));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(string_width_huge) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char *val = "kjafdiuhfjahfjdahf";
    char *format = "%120s";
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST



START_TEST(float_flags) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char *format = "% f";
    float val = 0;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
}
END_TEST



START_TEST(all_empty) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    ck_assert_int_eq(s21_sprintf(str1, "abc"), sprintf(str2, "abc"));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(empty_format_and_parameters) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "abc"), sprintf(str2, "abc"));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_char) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%c", '\t'), sprintf(str2, "%c", '\t'));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_char) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'),
                     sprintf(str2, "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_string) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%s", "Drop Sega PLS"),
                     sprintf(str2, "%s", "Drop Sega PLS"));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_string) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(
        s21_sprintf(str1, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"),
        sprintf(str2, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_dec) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%d", 666), sprintf(str2, "%d", 666));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_dec) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%d%d%d%d", -999, 0, 666, -100),
                     sprintf(str2, "%d%d%d%d", -999, 0, 666, -100));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%i", -0), sprintf(str2, "%i", -0));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%i%i%i%i", -999, 0, 666, -100),
                     sprintf(str2, "%i%i%i%i", -999, 0, 666, -100));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_float) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%f", 0.0001),
                     sprintf(str2, "%f", 0.0001));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_float) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(
        s21_sprintf(str1, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001),
        sprintf(str2, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_unsigned_dec) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%u", 100),
                     sprintf(str2, "%u", (unsigned)100));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_unsigned_dec) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%u%u%u%u", 999, 0, 666, 100),
                     sprintf(str2, "%u%u%u%u", (unsigned)999, (unsigned)0,
                             (unsigned)666, (unsigned)100));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_char_with_alignment_left) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%8c", '\t'),
                     sprintf(str2, "%8c", '\t'));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_one_char_with_alignment_right) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%-8c", '\t'),
                     sprintf(str2, "%-8c", '\t'));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_many_char_with_alignment) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(
        s21_sprintf(str1, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'),
        sprintf(str2, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'));

    ck_assert_str_eq(str1, str2);
}
END_TEST


START_TEST(test_sprintf1) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%10ld";

    ck_assert_int_eq(s21_sprintf(str1, format, 1), sprintf(str2, format, 1));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf2) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%1.1f";

    ck_assert_int_eq(s21_sprintf(str1, format, 1.1),
                     sprintf(str2, format, 1.1));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf3) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%8.3c";

    ck_assert_int_eq(s21_sprintf(str1, format, 'a'),
                     sprintf(str2, format, 'a'));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf4) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%+5.5d aboba";

    int val = 10000;
    int a = s21_sprintf(str1, format, val);
    int b = sprintf(str2, format, val);
    ck_assert_int_eq(a, b);

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf6) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%7.7f";

    ck_assert_int_eq(s21_sprintf(str1, format, 11.123456),
                     sprintf(str2, format, 11.123456));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf7) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%7.4s";

    ck_assert_int_eq(s21_sprintf(str1, format, "aboba floppa"),
                     sprintf(str2, format, "aboba floppa"));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf8) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%6.6u";

    ck_assert_int_eq(s21_sprintf(str1, format, 12341151),
                     sprintf(str2, format, 12341151));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf9) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%li%ld%lu";

    ck_assert_int_eq(s21_sprintf(str1, format, 666666666666, 777, 111),
                     sprintf(str2, format, 666666666666, 777, 111));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf10) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%hi%hd%hu";

    ck_assert_int_eq(s21_sprintf(str1, format, 666, -777, 111),
                     sprintf(str2, format, 666, -777, 111));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf11) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%+li%+lu%+d%+lf";

    ck_assert_int_eq(s21_sprintf(str1, format, -123, 321, -5555, -1213.123),
                     sprintf(str2, format, -123, 321, -5555, -1213.123));

    ck_assert_str_eq(str1, str2);
}
END_TEST


START_TEST(test_sprintf16) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "% c";

    ck_assert_int_eq(s21_sprintf(str1, format, 'a'),
                     sprintf(str2, format, 'a'));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf17) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "% s";

    ck_assert_int_eq(s21_sprintf(str1, format, "aboba likes floppa"),
                     sprintf(str2, format, "aboba likes floppa"));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf18) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "% s% c";

    ck_assert_int_eq(s21_sprintf(str1, format, "", 'f'),
                     sprintf(str2, format, "", 'f'));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf19) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%210s";

    ck_assert_int_eq(s21_sprintf(str1, format, "AHHAHAHA\0AHHAHAHAH"),
                     sprintf(str2, format, "AHHAHAHA\0AHHAHAHAH"));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf20) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%-115s";

    ck_assert_int_eq(s21_sprintf(str1, format, "Nick her"),
                     sprintf(str2, format, "Nick her"));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf24) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%+2.1c%+4.2d%+5.4i%+10.2f%+55.55s%+1.1u";

    ck_assert_int_eq(
        s21_sprintf(str1, format, 'f', 21, 42, 666.666,
                    "Lorem ipsum dolor sit amet. Aut quam ducimus.", 11),
        sprintf(str2, format, 'f', 21, 42, 666.666,
                "Lorem ipsum dolor sit amet. Aut quam ducimus.", 11));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf25) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%.f";

    ck_assert_int_eq(s21_sprintf(str1, format, 121.123),
                     sprintf(str2, format, 121.123));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf26) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%%";

    ck_assert_int_eq(s21_sprintf(str1, format), sprintf(str2, format));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf27) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%%%%%%%%";

    ck_assert_int_eq(s21_sprintf(str1, format), sprintf(str2, format));

    ck_assert_str_eq(str1, str2);
}
END_TEST


START_TEST(test_sprintf29) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%-.f";

    ck_assert_int_eq(s21_sprintf(str1, format, 111.111),
                     sprintf(str2, format, 111.111));

    ck_assert_str_eq(str1, str2);
}
END_TEST

START_TEST(test_sprintf30) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%-.1d";

    ck_assert_int_eq(s21_sprintf(str1, format, 111),
                     sprintf(str2, format, 111));

    ck_assert_str_eq(str1, str2);
}
END_TEST


START_TEST(wide_char) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple wide char %lc";
    unsigned long w = L'汉';
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
}

START_TEST(width_char) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple wide char %5c";
    char w = 'c';
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
}
START_TEST(minus_wide_char) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple wide char %-5lc";
    unsigned long w = L'森';
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
}
END_TEST
START_TEST(wide_string) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple wide char %ls";
    wchar_t w[] = L"森我爱菠萝";
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(wide_string1) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple wide char %5.12ls";
    wchar_t w[] = L"森我爱菠萝";
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
}
END_TEST

START_TEST(wide_string2) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple wide char %120ls ABOBA";
    wchar_t w[] = L"森我爱菠萝";
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
}
END_TEST
START_TEST(wide_string3) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple wide char %-43ls";
    wchar_t w[] = L"森我爱菠萝";
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
}
END_TEST

// ###############################################################################################################################################











START_TEST(sprintf_pr_1)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %%");
s21_sprintf(test_your, "Hello %%");
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_pr_2)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello 2022 World");
s21_sprintf(test_your, "Hello 2022 World");
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_c_1)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %c", 'W');
s21_sprintf(test_your, "Hello %c", 'W');
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_c_2)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %-5c", 'W');
s21_sprintf(test_your, "Hello %-5c", 'W');
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_c_3)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %5c", 'W');
s21_sprintf(test_your, "Hello %5c", 'W');
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_c_4)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %-c", 'W');
s21_sprintf(test_your, "Hello %-c", 'W');
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_c_5)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %c", 'W');
s21_sprintf(test_your, "Hello %c", 'W');
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_c_6)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "%cHello %c", 's', 'W');
s21_sprintf(test_your, "%cHello %c", 's', 'W');
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_c_7)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "He%cllo %-5c", 's', 'W');
s21_sprintf(test_your, "He%cllo %-5c", 's', 'W');
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_c_8)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "%5cHello %5c", 's', 'W');
s21_sprintf(test_your, "%5cHello %5c", 's', 'W');
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_c_9)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "%-10cHello %-c", 's', 'W');
s21_sprintf(test_your, "%-10cHello %-c", 's', 'W');
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_c_10)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "He%%llo %c", 'W');
s21_sprintf(test_your, "He%%llo %c", 'W');
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_d_1)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %d", 23);
s21_sprintf(test_your, "Hello %d", 23);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_d_2)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %5d", 23);
s21_sprintf(test_your, "Hello %5d", 23);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_d_3)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %-6d", 23);
s21_sprintf(test_your, "Hello %-6d", 23);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_d_4)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %+d", 23);
s21_sprintf(test_your, "Hello %+d", 23);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_d_5)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello % d", 23);
s21_sprintf(test_your, "Hello % d", 23);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_d_6)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %hd", 23);
s21_sprintf(test_your, "Hello %hd", 23);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_d_7)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %ld", 238230000006325000);
s21_sprintf(test_your, "Hello %ld", 238230000006325000);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_d_8)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello % 10d", 23);
s21_sprintf(test_your, "Hello % 10d", 23);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_d_9)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %+10d", 23);
s21_sprintf(test_your, "Hello %+10d", 23);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_d_10)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %+10d", -23);
s21_sprintf(test_your, "Hello %+10d", -23);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_d_11)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello % 10d", -23);
s21_sprintf(test_your, "Hello % 10d", -23);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_d_and_c_1)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %d %18d", 5, -23);
s21_sprintf(test_your, "Hello %d %18d", 5, -23);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_1)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %d %f", 5, -23.0);
s21_sprintf(test_your, "Hello %d %f", 5, -23.0);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_2)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %s %f", "abc", -23.0);
s21_sprintf(test_your, "Hello %s %f", "abc", -23.0);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_3)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hel%ulo %s %f", 100, "abc", -23.0);
s21_sprintf(test_your, "Hel%ulo %s %f", 100, "abc", -23.0);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_4)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %s %.3f", "abc", -23.0000001);
s21_sprintf(test_your, "Hello %s %.3f", "abc", -23.0000001);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_5)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %s %.7f", "abc", -23.999999);
s21_sprintf(test_your, "Hello %s %.7f", "abc", -23.999999);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_6)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "Hello %s %.3f", "abc", -23.999999);
s21_sprintf(test_your, "Hello %s %.3f", "abc", -23.999999);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_7)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "H%ldello %s", 1234567890123456789, "abcdefghtabcdefghtabcdefghtabcdefghtabcdefghtabcdefght");
s21_sprintf(test_your, "H%ldello %s", 1234567890123456789, "abcdefghtabcdefghtabcdefghtabcdefghtabcdefghtabcdefght");
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_8)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "H%uello %s", 123456789, "abcdefghtabcdefghtabcdefghtabcdefghtabcdefghtabcdefght");
s21_sprintf(test_your, "H%uello %s", 123456789, "abcdefghtabcdefghtabcdefghtabcdefghtabcdefghtabcdefght");
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_9)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%lfdslkj", 1234.0);
s21_sprintf(test_your, "saeflkahj%lfdslkj", 1234.0);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_10)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%10.12f dslkj", -4353.235300);
s21_sprintf(test_your, "saeflkahj%10.12f dslkj", -4353.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_11)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%+10.12f dslkj", 4353.235300);
s21_sprintf(test_your, "saeflkahj%+10.12f dslkj", 4353.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_12)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj% 10.12f dslkj", 0.235300);
s21_sprintf(test_your, "saeflkahj% 10.12f dslkj", 0.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_13)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj% 10.12f dslkj", -4353.235300);
s21_sprintf(test_your, "saeflkahj% 10.12f dslkj", -4353.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_14)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%-.12f dslkj", 4353.235300);
s21_sprintf(test_your, "saeflkahj%-.12f dslkj", 4353.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_15)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%-.12f dslkj", -4353.235300);
s21_sprintf(test_your, "saeflkahj%-.12f dslkj", -4353.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_16)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%-f dslkj", -4353.235300);
s21_sprintf(test_your, "saeflkahj%-f dslkj", -4353.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_17)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%-.12f dslkj", -4353.235300);
s21_sprintf(test_your, "saeflkahj%-.12f dslkj", -4353.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_18)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%-f dslkj", 0.235300);
s21_sprintf(test_your, "saeflkahj%-f dslkj", 0.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_19)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%+f dslkj", 0.235300);
s21_sprintf(test_your, "saeflkahj%+f dslkj", 0.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_20)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj% f dslkj", -4353.235300);
s21_sprintf(test_your, "saeflkahj% f dslkj", -4353.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_21)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj% 8f dslkj", -4353.235300);
s21_sprintf(test_your, "saeflkahj% 8f dslkj", -4353.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_22)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj% -f dslkj", 4353.235300);
s21_sprintf(test_your, "saeflkahj% -f dslkj", 4353.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_23)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj% -10f dslkj", -0.235300);
s21_sprintf(test_your, "saeflkahj% -10f dslkj", -0.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_24)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj% .10f dslkj", -4353.235300);
s21_sprintf(test_your, "saeflkahj%.10f dslkj", -4353.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_25)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%.10f dslkj", 13.235300);
s21_sprintf(test_your, "saeflkahj%.10f dslkj", 13.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_26)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%.f dslkj", 12.235300);
s21_sprintf(test_your, "saeflkahj%.f dslkj", 12.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_27)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj% .f dslkj", 345.235300);
s21_sprintf(test_your, "saeflkahj% .f dslkj", 345.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_28)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%10.f dslkj", 0.235300);
s21_sprintf(test_your, "saeflkahj%10.f dslkj", 0.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_29)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%+.f dslkj", -0.235300);
s21_sprintf(test_your, "saeflkahj%+.f dslkj", -0.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_30)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%-.f dslkj", 20.235300);
s21_sprintf(test_your, "saeflkahj%-.f dslkj", 20.235300);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_31)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%f dslkj", 0.000000006);
s21_sprintf(test_your, "saeflkahj%f dslkj", 0.000000006);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_32)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%.f dslkj", 0.000000006);
s21_sprintf(test_your, "saeflkahj%.f dslkj", 0.000000006);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_33)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%12f dslkj", 0.000000006);
s21_sprintf(test_your, "saeflkahj%12f dslkj", 0.000000006);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_34)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%.12f dslkj", 0.000000006);
s21_sprintf(test_your, "saeflkahj%.12f dslkj", 0.000000006);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_35)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%-.12f dslkj", 0.000000006);
s21_sprintf(test_your, "saeflkahj%-.12f dslkj", 0.000000006);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_36)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%%%%%%%%%% dslkj");
s21_sprintf(test_your, "saeflkahj%%%%%%%%%% dslkj");
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_37)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%%%%%%%%%%%-.12f dslkj", 0.000000006);
s21_sprintf(test_your, "saeflkahj%%%%%%%%%%%-.12f dslkj", 0.000000006);
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_38)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahj%s dslkj", "0.000000006");
s21_sprintf(test_your, "saeflkahj%s dslkj", "0.000000006");
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_39)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "saeflkahjdslkj%s", "^&*(=...%");
s21_sprintf(test_your, "saeflkahjdslkj%s", "^&*(=...%");
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_40)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "%ssaeflkahj dslkj", "^&*(=...%");
s21_sprintf(test_your, "%ssaeflkahj dslkj", "^&*(=...%");
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_41)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "%ssaeflkahj%sdslkj%s", "^&*(=...%", "jk", "");
s21_sprintf(test_your, "%ssaeflkahj%sdslkj%s", "^&*(=...%", "jk", "");
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_42)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "%ssaeflkahj%sdslkj%s", "", "", " ");
s21_sprintf(test_your, "%ssaeflkahj%sdslkj%s", "", "", " ");
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_43)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "%-ssaeflkahj%1sdslkj%s", "^&*(=...%", "jk", "");
s21_sprintf(test_your, "%-ssaeflkahj%1sdslkj%s", "^&*(=...%", "jk", "");
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(sprintf_44)
{
char test_original[1024] = "";
char test_your[1024] = "";
sprintf(test_original, "%3ssaeflkahj%1sdslkj%10s", "^&*(=...%", " ", "");
s21_sprintf(test_your, "%3ssaeflkahj%1sdslkj%10s", "^&*(=...%", " ", "");
ck_assert_str_eq(test_original, test_your);

}
END_TEST

START_TEST(int_sprintf_pr_1)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %%"), s21_sprintf(test_your, "Hello %%"));

}
END_TEST

START_TEST(int_sprintf_pr_2)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello 2022 World"),s21_sprintf(test_your, "Hello 2022 World"));

}
END_TEST

START_TEST(int_sprintf_c_1)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %c", 'W'), s21_sprintf(test_your, "Hello %c", 'W'));

}
END_TEST

START_TEST(int_sprintf_c_2)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %-5c", 'W'), s21_sprintf(test_your, "Hello %-5c", 'W'));

}
END_TEST

START_TEST(int_sprintf_c_3)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %5c", 'W'), s21_sprintf(test_your, "Hello %5c", 'W'));

}
END_TEST

START_TEST(int_sprintf_c_4)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %-c", 'W'), s21_sprintf(test_your, "Hello %-c", 'W'));

}
END_TEST

START_TEST(int_sprintf_c_5)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %c", 'W'), s21_sprintf(test_your, "Hello %c", 'W'));

}
END_TEST

START_TEST(int_sprintf_c_6)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "%cHello %c", 's', 'W'), s21_sprintf(test_your, "%cHello %c", 's', 'W'));

}
END_TEST

START_TEST(int_sprintf_c_7)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "He%cllo %-5c", 's', 'W'), s21_sprintf(test_your, "He%cllo %-5c", 's', 'W'));

}
END_TEST

START_TEST(int_sprintf_c_8)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "%5cHello %5c", 's', 'W'), s21_sprintf(test_your, "%5cHello %5c", 's', 'W'));

}
END_TEST

START_TEST(int_sprintf_c_9)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "%-10cHello %-c", 's', 'W'), s21_sprintf(test_your, "%-10cHello %-c", 's', 'W'));

}
END_TEST

START_TEST(int_sprintf_c_10)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "He%%llo %c", 'W'), s21_sprintf(test_your, "He%%llo %c", 'W'));

}
END_TEST

START_TEST(int_sprintf_d_1)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %d", 23), s21_sprintf(test_your, "Hello %d", 23));

}
END_TEST

START_TEST(int_sprintf_d_2)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %5d", 23), s21_sprintf(test_your, "Hello %5d", 23));

}
END_TEST

START_TEST(int_sprintf_d_3)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %-6d", 23), s21_sprintf(test_your, "Hello %-6d", 23));

}
END_TEST

START_TEST(int_sprintf_d_4)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %+d", 23), s21_sprintf(test_your, "Hello %+d", 23));

}
END_TEST

START_TEST(int_sprintf_d_5)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello % d", 23), s21_sprintf(test_your, "Hello % d", 23));

}
END_TEST

START_TEST(int_sprintf_d_6)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %hd", 23), s21_sprintf(test_your, "Hello %hd", 23));

}
END_TEST

START_TEST(int_sprintf_d_7)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %ld", 238230000006325000), s21_sprintf(test_your, "Hello %ld", 238230000006325000));

}
END_TEST

START_TEST(int_sprintf_d_8)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello % 10d", 23), s21_sprintf(test_your, "Hello % 10d", 23));

}
END_TEST

START_TEST(int_sprintf_d_9)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %+10d", 23), s21_sprintf(test_your, "Hello %+10d", 23));

}
END_TEST

START_TEST(int_sprintf_d_10)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %+10d", -23), s21_sprintf(test_your, "Hello %+10d", -23));

}
END_TEST

START_TEST(int_sprintf_d_11)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello % 10d", -23), s21_sprintf(test_your, "Hello % 10d", -23));

}
END_TEST

START_TEST(int_sprintf_d_and_c_1)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %d %18d", 5, -23), s21_sprintf(test_your, "Hello %d %18d", 5, -23));

}
END_TEST

START_TEST(int_sprintf_1)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %d %f", 5, -23.0), s21_sprintf(test_your, "Hello %d %f", 5, -23.0));

}
END_TEST

START_TEST(int_sprintf_2)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %s %f", "abc", -23.0), s21_sprintf(test_your, "Hello %s %f", "abc", -23.0));

}
END_TEST

START_TEST(int_sprintf_3)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hel%ulo %s %f", 100, "abc", -23.0), s21_sprintf(test_your, "Hel%ulo %s %f", 100, "abc", -23.0));

}
END_TEST

START_TEST(int_sprintf_4)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %s %.3f", "abc", -23.0000001), s21_sprintf(test_your, "Hello %s %.3f", "abc", -23.0000001));

}
END_TEST

START_TEST(int_sprintf_5)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %s %.7f", "abc", -23.999999), s21_sprintf(test_your, "Hello %s %.7f", "abc", -23.999999));

}
END_TEST

START_TEST(int_sprintf_6)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "Hello %s %.3f", "abc", -23.999999), s21_sprintf(test_your, "Hello %s %.3f", "abc", -23.999999));

}
END_TEST

START_TEST(int_sprintf_7)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "H%ldello %s", 1234567890123456789, "abcdefghtabcdefghtabcdefghtabcdefghtabcdefghtabcdefght"), s21_sprintf(test_your, "H%ldello %s", 1234567890123456789, "abcdefghtabcdefghtabcdefghtabcdefghtabcdefghtabcdefght"));

}
END_TEST

START_TEST(int_sprintf_8)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "H%uello %s", 123456789, "abcdefghtabcdefghtabcdefghtabcdefghtabcdefghtabcdefght"), s21_sprintf(test_your, "H%uello %s", 123456789, "abcdefghtabcdefghtabcdefghtabcdefghtabcdefghtabcdefght"));

}
END_TEST

START_TEST(int_sprintf_9)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "saeflkahj%lfdslkj", 1234.0), s21_sprintf(test_your, "saeflkahj%lfdslkj", 1234.0));

}
END_TEST

START_TEST(int_sprintf_10)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "saeflkahj%10.12f dslkj", -4353.235300), s21_sprintf(test_your, "saeflkahj%10.12f dslkj", -4353.235300));

}
END_TEST

START_TEST(int_sprintf_11)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "saeflkahj%+10.12f dslkj", 4353.235300), s21_sprintf(test_your, "saeflkahj%+10.12f dslkj", 4353.235300));

}
END_TEST

START_TEST(int_sprintf_12)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "saeflkahj% 10.12f dslkj", 0.235300), s21_sprintf(test_your, "saeflkahj% 10.12f dslkj", 0.235300));

}
END_TEST

START_TEST(int_sprintf_13)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "saeflkahj% 10.12f dslkj", -4353.235300), s21_sprintf(test_your, "saeflkahj% 10.12f dslkj", -4353.235300));

}
END_TEST

START_TEST(int_sprintf_14)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "saeflkahj%-.12f dslkj", 4353.235300), s21_sprintf(test_your, "saeflkahj%-.12f dslkj", 4353.235300));

}
END_TEST

START_TEST(int_sprintf_15)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "saeflkahj%-.12f dslkj", -4353.235300), s21_sprintf(test_your, "saeflkahj%-.12f dslkj", -4353.235300));

}
END_TEST

START_TEST(int_sprintf_16)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "saeflkahj%-f dslkj", -4353.235300), s21_sprintf(test_your, "saeflkahj%-f dslkj", -4353.235300));

}
END_TEST

START_TEST(int_sprintf_17)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "saeflkahj%-.12f dslkj", -4353.235300), s21_sprintf(test_your, "saeflkahj%-.12f dslkj", -4353.235300));

}
END_TEST

START_TEST(int_sprintf_18)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "saeflkahj%-f dslkj", 0.235300), s21_sprintf(test_your, "saeflkahj%-f dslkj", 0.235300));

}
END_TEST

START_TEST(int_sprintf_19)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "saeflkahj%+f dslkj", 0.235300), s21_sprintf(test_your, "saeflkahj%+f dslkj", 0.235300));

}
END_TEST

START_TEST(int_sprintf_20)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "saeflkahj% f dslkj", -4353.235300), s21_sprintf(test_your, "saeflkahj% f dslkj", -4353.235300));

}
END_TEST

START_TEST(int_sprintf_21)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "saeflkahj% 8f dslkj", -4353.235300), s21_sprintf(test_your, "saeflkahj% 8f dslkj", -4353.235300));

}
END_TEST

START_TEST(int_sprintf_22)
{
char test_original[1024] = "";
char test_your[1024] = "";
ck_assert_int_eq(sprintf(test_original, "%s%s%s%s%s%ssaeflkahj% 8f dslkj", "ds", " ", " ", "0", "+", "9999999", -4353.235300), s21_sprintf(test_your, "%s%s%s%s%s%ssaeflkahj% 8f dslkj", "ds", " ", " ", "0", "+", "9999999", -4353.235300));

}
END_TEST

START_TEST(sprintf_221)
{
char str1[1024] = "";
s21_sprintf(str1, "Hola %8d", 34);
char str2[1024] = "";
sprintf(str2, "Hola %8d", 34);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_222)
{
char str1[1024] = "";
s21_sprintf(str1, "Hola %8d", 34);
char str2[1024] = "";
sprintf(str2, "Hola %8d", 34);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_223)
{
char str1[1024] = "";
s21_sprintf(str1, "Hola %-8d", 34);
char str2[1024] = "";
sprintf(str2, "Hola %-8d", 34);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_224)
{
char str1[1024] = "";
s21_sprintf(str1, "Hola %18d", 34);
char str2[1024] = "";
sprintf(str2, "Hola %18d", 34);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_225)
{
char str1[1024] = "";
s21_sprintf(str1, "Hola %18d", 34);
char str2[1024] = "";
sprintf(str2, "Hola %18d", 34);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_226)
{
char str1[1024] = "";
s21_sprintf(str1, "Hola %-18d", 34);
char str2[1024] = "";
sprintf(str2, "Hola %-18d", 34);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_227)
{
char str1[1024] = "";
s21_sprintf(str1, "Hola %2d", 343432);
char str2[1024] = "";
sprintf(str2, "Hola %2d", 343432);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_228)
{
char str1[1024] = "";
s21_sprintf(str1, "Hola %-2d", 34423342);
char str2[1024] = "";
sprintf(str2, "Hola %-2d", 34423342);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_229)
{
char str1[1024] = "";
s21_sprintf(str1, "Hola %9s", "Mundo");
char str2[1024] = "";
sprintf(str2, "Hola %9s", "Mundo");
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_2210)
{
char str1[1024] = "";
s21_sprintf(str1, "Hola %-9s", "Mundo");
char str2[1024] = "";
sprintf(str2, "Hola %-9s", "Mundo");
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_2211)
{
char str1[1024] = "";
s21_sprintf(str1, "Hola %2s", "Mundo");
char str2[1024] = "";
sprintf(str2, "Hola %2s", "Mundo");
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_2212)
{
char str1[1024] = "";
s21_sprintf(str1, "Hola %-2s", "Mundo");
char str2[1024] = "";
sprintf(str2, "Hola %-2s", "Mundo");
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_2213)
{
char str1[1024] = "";
s21_sprintf(str1, "Hola %12s", "Mundo");
char str2[1024] = "";
sprintf(str2, "Hola %12s", "Mundo");
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(ssprintf_2214)
{
char str1[1024] = "";
s21_sprintf(str1, "Hola %-12s", "Mundo");
char str2[1024] = "";
sprintf(str2, "Hola %-12s", "Mundo");
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_231)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "Hola %d", 7);
sprintf(str1, "Hola %d", 7);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_232)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%d:%d:%d", 7, 4, 0);
sprintf(str1, "%d:%d:%d", 7, 4, 0);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_233)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "MAX %d", INT_MAX);
sprintf(str1, "MAX %d", INT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_234)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "MIN %d", INT_MIN);
sprintf(str1, "MIN %d", INT_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_235)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "Hola %i", 3534555);
sprintf(str1, "Hola %i", 3534555);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_236)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "Hola %+d", 3534555);
sprintf(str1, "Hola %+d", 3534555);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_237)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5d'", 7);
sprintf(str1, "padding '%5d'", 7);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_238)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5d'", INT_MAX);
sprintf(str1, "padding '%5d'", INT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_239)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5d'", INT_MIN);
sprintf(str1, "padding '%5d'", INT_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2310)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5d'", 7);
sprintf(str1, "padding '%5d'", 7);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2311)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5d'", INT_MAX);
sprintf(str1, "padding '%5d'", INT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2312)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5d'", INT_MIN);
sprintf(str1, "padding '%5d'", INT_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2313)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%-5d'", 7);
sprintf(str1, "padding '%-5d'", 7);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2314)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%-5d'", INT_MAX);
sprintf(str1, "padding '%-5d'", INT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2315)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%-5d'", INT_MIN);
sprintf(str1, "padding '%-5d'", INT_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2316)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%.5d'", 7);
sprintf(str1, "precision '%.5d'", 7);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2317)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%.5d'", INT_MAX);
sprintf(str1, "precision '%.5d'", INT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2318)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%.5d'", INT_MIN);
sprintf(str1, "precision '%.5d'", INT_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2319)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%3.5d'", 7);
sprintf(str1, "precision '%3.5d'", 7);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2320)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%3.5d'", INT_MAX);
sprintf(str1, "precision '%3.5d'", INT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2321)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%3.5d'", INT_MIN);
sprintf(str1, "precision '%3.5d'", INT_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2322)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%-3.5d'", 7);
sprintf(str1, "precision '%-3.5d'", 7);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2323)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%-3.5d'", INT_MAX);
sprintf(str1, "precision '%-3.5d'", INT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2324)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%-3.5d'", INT_MIN);
sprintf(str1, "precision '%-3.5d'", INT_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2325)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "Hola %u", 7);
sprintf(str1, "Hola %u", 7);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2326)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%u:%u:%u", 7, 4, 0);
sprintf(str1, "%u:%u:%u", 7, 4, 0);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2327)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "MAX %u", UINT_MAX);
sprintf(str1, "MAX %u", UINT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2328)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "MIN %u", 0);
sprintf(str1, "MIN %u", 0);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2329)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5u'", 7);
sprintf(str1, "padding '%5u'", 7);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2330)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5u'", UINT_MAX);
sprintf(str1, "padding '%5u'", UINT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2331)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5u'", 0);
sprintf(str1, "padding '%5u'", 0);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2332)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%-5u'", 7);
sprintf(str1, "padding '%-5u'", 7);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2333)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%-5u'", UINT_MAX);
sprintf(str1, "padding '%-5u'", UINT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2334)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%-5u'", 0);
sprintf(str1, "padding '%-5u'", 0);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2335)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%.5u'", 7);
sprintf(str1, "precision '%.5u'", 7);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2336)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%.5u'", UINT_MAX);
sprintf(str1, "precision '%.5u'", UINT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2337)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%.5u'", 0);
sprintf(str1, "precision '%.5u'", 0);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2338)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%3.5u'", 7);
sprintf(str1, "precision '%3.5u'", 7);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2339)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%3.5u'", UINT_MAX);
sprintf(str1, "precision '%3.5u'", UINT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2340)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%3.5u'", 0);
sprintf(str1, "precision '%3.5u'", 0);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2341)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%-3.5u'", 7);
sprintf(str1, "precision '%-3.5u'", 7);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2342)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%-3.5u'", UINT_MAX);
sprintf(str1, "precision '%-3.5u'", UINT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2343)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%-3.5u'", 0);
sprintf(str1, "precision '%-3.5u'", 0);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2344)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "Hola %ld", 3534535547l);
sprintf(str1, "Hola %ld", 3534535547l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2345)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%ld:%ld:%ld", 7l, 34543245324l, 0l);
sprintf(str1, "%ld:%ld:%ld", 7l, 34543245324l, 0l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2346)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%ld", -5435432542l);
sprintf(str1, "%ld", -5435432542l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2347)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "MAX %ld", LONG_MAX);
sprintf(str1, "MAX %ld", LONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2348)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "MIN %ld", LONG_MIN);
sprintf(str1, "MIN %ld", LONG_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2349)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "Hola %li", 3534535547l);
sprintf(str1, "Hola %li", 3534535547l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2350)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5ld'", 72342l);
sprintf(str1, "padding '%5ld'", 72342l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2351)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5ld'", LONG_MAX);
sprintf(str1, "padding '%5ld'", LONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2352)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5ld'", LONG_MIN);
sprintf(str1, "padding '%5ld'", LONG_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2353)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5ld'", 72342l);
sprintf(str1, "padding '%5ld'", 72342l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2354)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5ld'", LONG_MAX);
sprintf(str1, "padding '%5ld'", LONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2355)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5ld'", LONG_MIN);
sprintf(str1, "padding '%5ld'", LONG_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2356)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%-5ld'", 742343l);
sprintf(str1, "padding '%-5ld'", 742343l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2357)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%-5ld'", LONG_MAX);
sprintf(str1, "padding '%-5ld'", LONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2358)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%-5ld'", LONG_MIN);
sprintf(str1, "padding '%-5ld'", LONG_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2359)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%.5ld'", 754354l);
sprintf(str1, "precision '%.5ld'", 754354l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2360)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%.5ld'", LONG_MAX);
sprintf(str1, "precision '%.5ld'", LONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2361)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%.5ld'", LONG_MIN);
sprintf(str1, "precision '%.5ld'", LONG_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2362)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%3.5ld'", 7343l);
sprintf(str1, "precision '%3.5ld'", 7343l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2363)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%3.5ld'", LONG_MAX);
sprintf(str1, "precision '%3.5ld'", LONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2364)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%3.5ld'", LONG_MIN);
sprintf(str1, "precision '%3.5ld'", LONG_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2365)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%-3.5ld'", 754354l);
sprintf(str1, "precision '%-3.5ld'", 754354l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2366)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%-3.5ld'", LONG_MAX);
sprintf(str1, "precision '%-3.5ld'", LONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2367)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%-3.5ld'", LONG_MIN);
sprintf(str1, "precision '%-3.5ld'", LONG_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2368)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "Hola %lu", 7l);
sprintf(str1, "Hola %lu", 7l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2369)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%lu:%lu:%lu", 7l, 4l, 0l);
sprintf(str1, "%lu:%lu:%lu", 7l, 4l, 0l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2370)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "MAX %lu", ULONG_MAX);
sprintf(str1, "MAX %lu", ULONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2371)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "MIN %lu", 0l);
sprintf(str1, "MIN %lu", 0l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2372)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5lu'", 7l);
sprintf(str1, "padding '%5lu'", 7l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2373)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5lu'", ULONG_MAX);
sprintf(str1, "padding '%5lu'", ULONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2374)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%5lu'", 0l);
sprintf(str1, "padding '%5lu'", 0l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2375)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%-5lu'", 7l);
sprintf(str1, "padding '%-5lu'", 7l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2376)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%-5lu'", ULONG_MAX);
sprintf(str1, "padding '%-5lu'", ULONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2377)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "padding '%-5lu'", 0l);
sprintf(str1, "padding '%-5lu'", 0l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2378)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%.5lu'", 7l);
sprintf(str1, "precision '%.5lu'", 7l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2379)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%.5lu'", ULONG_MAX);
sprintf(str1, "precision '%.5lu'", ULONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2380)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%.5lu'", 0l);
sprintf(str1, "precision '%.5lu'", 0l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2381)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%3.5lu'", 7l);
sprintf(str1, "precision '%3.5lu'", 7l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2382)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%3.5lu'", ULONG_MAX);
sprintf(str1, "precision '%3.5lu'", ULONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2383)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%3.5lu'", 0l);
sprintf(str1, "precision '%3.5lu'", 0l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2384)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%-3.5lu'", 7l);
sprintf(str1, "precision '%-3.5lu'", 7l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2385)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%-3.5lu'", ULONG_MAX);
sprintf(str1, "precision '%-3.5lu'", ULONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2386)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%-3.5lu'", 0l);
sprintf(str1, "precision '%-3.5lu'", 0l);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2387)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%.5f", 3.5);
sprintf(str1, "%.5f", 3.5);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2388)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%.5f", -3.5);
sprintf(str1, "%.5f", -3.5);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2391)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%.5f", 0.0);
sprintf(str1, "%.5f", 0.0);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2392)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%.5f", 3.5458730589043);
sprintf(str1, "%.5f", 3.5458730589043);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2393)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%.5f", -3.5458730589043);
sprintf(str1, "%.5f", -3.5458730589043);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2394)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%10.4f", 3.5458730589043);
sprintf(str1, "%10.4f", 3.5458730589043);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2395)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%10.4f", -3.5458730589043);
sprintf(str1, "%10.4f", -3.5458730589043);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2396)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%7.5f", 334243.5458730589043);
sprintf(str1, "%7.5f", 334243.5458730589043);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2401)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%10.5d", INT_MIN);
sprintf(str1, "%10.5d", INT_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2402)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%10.5d", INT_MAX);
sprintf(str1, "%10.5d", INT_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2403)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%10.5ld", LONG_MIN);
sprintf(str1, "%10.5ld", LONG_MIN);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2404)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%10.5ld", LONG_MAX);
sprintf(str1, "%10.5ld", LONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2405)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%10.5lu", ULONG_MAX);
sprintf(str1, "%10.5lu", ULONG_MAX);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_070501)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%f", 6.1);
sprintf(str1, "%f", 6.1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_070502)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%f", 06.1);
sprintf(str1, "%f", 06.1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_070503)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%f", 6.01);
sprintf(str1, "%f", 6.01);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_070504)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%.f", 6.01);
sprintf(str1, "%.f", 6.01);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_070505)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%.0f", 6.01);
sprintf(str1, "%.0f", 6.01);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_070506)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%.1f", 6.01);
sprintf(str1, "%.1f", 6.01);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_070507)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%f", 1.23e+07);
sprintf(str1, "%f", 1.23e+07);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_070508)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%f", 1234561e+00);
sprintf(str1, "%f", 1234561e+00);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_070509)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%f", 1234561e+07);
sprintf(str1, "%f", 1234561e+07);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_070510)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%.9f", 1000000000.00);
sprintf(str1, "%.9f", 1000000000.00);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_070513)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "%3.f", 0.0);
sprintf(str1, "%3.f", 0.0);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2405x)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%h%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%h%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2406x)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%3.15h%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%3.15h%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2408)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%03.15h%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%03.15h%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2409)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#0%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#0%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2410)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#015.20%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#015.20%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2411)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#0- 15.5%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#0- 15.5%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2412)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#0-+ 3.2%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#0-+ 3.2%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2413)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#0+ 3.2%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#0+ 3.2%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2414)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#0 15.5%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#0 15.5%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2415)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#-3%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#-3%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2416)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#-15.0%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#-15.0%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2417)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#-+15.0%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#-+15.0%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2418)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#- 15.0%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#- 15.0%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2419)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#-+ 15.0%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#-+ 15.0%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2420)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#-+ 15.20%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#-+ 15.20%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2421)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#+%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#+%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2423)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%#+15%%] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%#+15%%] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2427)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%d] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%d] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2428)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "[%d]", 0);
sprintf(str1, "[%d]", 0);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2429)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%15.20d] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%15.20d] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2430)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "[%15.20d]", 0);
sprintf(str1, "[%15.20d]", 0);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2431)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%015.20d] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%015.20d] - l.%d\n" - 2, __LINE__);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2433)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "precision '%f'", 6.1);
sprintf(str1, "precision '%f'", 6.1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2434)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%f] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%f] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2436)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%%3.15f] - l.%d\n" - 2, __LINE__);
sprintf(str1, " - %d - [%%3.15f] - l.%d\n" - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2708)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%d] - l.%d\n, [%d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%d] - l.%d\n, [%d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2709)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%d] - l.%d\n, [%d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%d] - l.%d\n, [%d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2710)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%d] - l.%d\n, [%d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%d] - l.%d\n, [%d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2711)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3d] - l.%d\n, [%3d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3d] - l.%d\n, [%3d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2712)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3d] - l.%d\n, [%3d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3d] - l.%d\n, [%3d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2713)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3d] - l.%d\n, [%3d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3d] - l.%d\n, [%3d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2714)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.0d] - l.%d\n, [%3.0d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.0d] - l.%d\n, [%3.0d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2715)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.0d] - l.%d\n, [%3.0d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.0d] - l.%d\n, [%3.0d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2716)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.0d] - l.%d\n, [%3.0d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.0d] - l.%d\n, [%3.0d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2717)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.2d] - l.%d\n, [%3.2d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.2d] - l.%d\n, [%3.2d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2718)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.2d] - l.%d\n, [%3.2d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.2d] - l.%d\n, [%3.2d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2719)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.2d] - l.%d\n, [%3.2d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.2d] - l.%d\n, [%3.2d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2720)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.5d] - l.%d\n, [%3.5d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.5d] - l.%d\n, [%3.5d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2721)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.5d] - l.%d\n, [%3.5d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.5d] - l.%d\n, [%3.5d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2722)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.5d] - l.%d\n, [%3.5d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.5d] - l.%d\n, [%3.5d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2723)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.15d] - l.%d\n, [%3.15d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.15d] - l.%d\n, [%3.15d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2724)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.15d] - l.%d\n, [%3.15d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.15d] - l.%d\n, [%3.15d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2725)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.15d] - l.%d\n, [%3.15d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.15d] - l.%d\n, [%3.15d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2726)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15d] - l.%d\n, [%15d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15d] - l.%d\n, [%15d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2727)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15d] - l.%d\n, [%15d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15d] - l.%d\n, [%15d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2728)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15d] - l.%d\n, [%15d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15d] - l.%d\n, [%15d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2729)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.0d] - l.%d\n, [%15.0d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.0d] - l.%d\n, [%15.0d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2730)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.0d] - l.%d\n, [%15.0d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.0d] - l.%d\n, [%15.0d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2731)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.0d] - l.%d\n, [%15.0d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.0d] - l.%d\n, [%15.0d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2732)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.5d] - l.%d\n, [%15.5d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.5d] - l.%d\n, [%15.5d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2733)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.5d] - l.%d\n, [%15.5d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.5d] - l.%d\n, [%15.5d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2734)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.5d] - l.%d\n, [%15.5d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.5d] - l.%d\n, [%15.5d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2735)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.20d] - l.%d\n, [%15.20d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.20d] - l.%d\n, [%15.20d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2736)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.20d] - l.%d\n, [%15.20d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.20d] - l.%d\n, [%15.20d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2737)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.20d] - l.%d\n, [%15.20d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.20d] - l.%d\n, [%15.20d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2738)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-d] - l.%d\n, [%-d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-d] - l.%d\n, [%-d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2739)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3d] - l.%d\n, [%-3d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3d] - l.%d\n, [%-3d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2740)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.0d] - l.%d\n, [%-3.0d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.0d] - l.%d\n, [%-3.0d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2741)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.2d] - l.%d\n, [%-3.2d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.2d] - l.%d\n, [%-3.2d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2742)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.5d] - l.%d\n, [%-3.5d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.5d] - l.%d\n, [%-3.5d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2743)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.5d] - l.%d\n, [%-3.5d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.5d] - l.%d\n, [%-3.5d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2744)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.15d] - l.%d\n, [%-3.15d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.15d] - l.%d\n, [%-3.15d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2745)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.15d] - l.%d\n, [%-3.15d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.15d] - l.%d\n, [%-3.15d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2746)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.15d] - l.%d\n, [%-3.15d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.15d] - l.%d\n, [%-3.15d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2747)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+d] - l.%d\n, [%+d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+d] - l.%d\n, [%+d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2748)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+d] - l.%d\n, [%+d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+d] - l.%d\n, [%+d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2749)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+d] - l.%d\n, [%+d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+d] - l.%d\n, [%+d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2750)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3d] - l.%d\n, [%+3d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3d] - l.%d\n, [%+3d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2751)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3d] - l.%d\n, [%+3d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3d] - l.%d\n, [%+3d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2752)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3d] - l.%d\n, [%+3d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3d] - l.%d\n, [%+3d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2753)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3d] - l.%d\n, [%+3d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3d] - l.%d\n, [%+3d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2754)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3d] - l.%d\n, [%+3d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3d] - l.%d\n, [%+3d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2755)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3d] - l.%d\n, [%+3d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3d] - l.%d\n, [%+3d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2756)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.5d] - l.%d\n, [%+3.5d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.5d] - l.%d\n, [%+3.5d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2757)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.5d] - l.%d\n, [%+3.5d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.5d] - l.%d\n, [%+3.5d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2758)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.5d] - l.%d\n, [%+3.5d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.5d] - l.%d\n, [%+3.5d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2759)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.15d] - l.%d\n, [%+3.15d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.15d] - l.%d\n, [%+3.15d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2760)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.15d] - l.%d\n, [%+3.15d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.15d] - l.%d\n, [%+3.15d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2761)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.15d] - l.%d\n, [%+3.15d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.15d] - l.%d\n, [%+3.15d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2762)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15d] - l.%d\n, [%+15d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15d] - l.%d\n, [%+15d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2763)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15d] - l.%d\n, [%+15d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15d] - l.%d\n, [%+15d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2764)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15d] - l.%d\n, [%+15d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15d] - l.%d\n, [%+15d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2765)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.0d] - l.%d\n, [%+15.0d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.0d] - l.%d\n, [%+15.0d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2766)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.0d] - l.%d\n, [%+15.0d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.0d] - l.%d\n, [%+15.0d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2767)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.0d] - l.%d\n, [%+15.0d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.0d] - l.%d\n, [%+15.0d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2768)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.5d] - l.%d\n, [%+15.5d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.5d] - l.%d\n, [%+15.5d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2769)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.5d] - l.%d\n, [%+15.5d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.5d] - l.%d\n, [%+15.5d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2770)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.5d] - l.%d\n, [%+15.5d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.5d] - l.%d\n, [%+15.5d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2771)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.20d] - l.%d\n, [%+15.20d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.20d] - l.%d\n, [%+15.20d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2772)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.20d] - l.%d\n, [%+15.20d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.20d] - l.%d\n, [%+15.20d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2773)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.20d] - l.%d\n, [%+15.20d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.20d] - l.%d\n, [%+15.20d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2774)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% d] - l.%d\n, [% d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% d] - l.%d\n, [% d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2775)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% d] - l.%d\n, [% d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% d] - l.%d\n, [% d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2776)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% d] - l.%d\n, [% d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% d] - l.%d\n, [% d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2777)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3d] - l.%d\n, [% 3d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3d] - l.%d\n, [% 3d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2778)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3d] - l.%d\n, [% 3d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3d] - l.%d\n, [% 3d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2779)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3d] - l.%d\n, [% 3d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3d] - l.%d\n, [% 3d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2780)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%% 3.0d] - l.%d\n, [% 3.0d]", 0, - 2, __LINE__);
sprintf(str1, " - %d - [%% 3.0d] - l.%d\n, [% 3.0d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2781)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%% 3.0d] - l.%d\n, [% 3.0d]", INT_MIN, - 2, __LINE__);
sprintf(str1, " - %d - [%% 3.0d] - l.%d\n, [% 3.0d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2782)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %d - [%% 3.0d] - l.%d\n, [% 3.0d]", INT_MAX, - 2, __LINE__);
sprintf(str1, " - %d - [%% 3.0d] - l.%d\n, [% 3.0d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2783)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.2d] - l.%d\n, [% 3.2d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.2d] - l.%d\n, [% 3.2d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2784)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.2d] - l.%d\n, [% 3.2d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.2d] - l.%d\n, [% 3.2d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2785)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.2d] - l.%d\n, [% 3.2d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.2d] - l.%d\n, [% 3.2d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2786)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.5d] - l.%d\n, [% 3.5d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.5d] - l.%d\n, [% 3.5d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2786_2)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.5d] - l.%d\n, [% 3.5d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.5d] - l.%d\n, [% 3.5d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2787)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.5d] - l.%d\n, [% 3.5d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.5d] - l.%d\n, [% 3.5d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2788)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.15d] - l.%d\n, [% 3.15d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.15d] - l.%d\n, [% 3.15d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2789)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.15d] - l.%d\n, [% 3.15d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.15d] - l.%d\n, [% 3.15d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2790)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.15d] - l.%d\n, [% 3.15d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.15d] - l.%d\n, [% 3.15d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2791)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15d] - l.%d\n, [% 15d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15d] - l.%d\n, [% 15d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2792)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15d] - l.%d\n, [% 15d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15d] - l.%d\n, [% 15d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2793)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15d] - l.%d\n, [% 15d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15d] - l.%d\n, [% 15d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2794)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.0d] - l.%d\n, [% 15.0d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.0d] - l.%d\n, [% 15.0d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2795)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.0d] - l.%d\n, [% 15.0d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.0d] - l.%d\n, [% 15.0d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2796)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.0d] - l.%d\n, [% 15.0d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.0d] - l.%d\n, [% 15.0d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2797)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.5d] - l.%d\n, [% 15.5d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.5d] - l.%d\n, [% 15.5d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2798)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.5d] - l.%d\n, [% 15.5d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.5d] - l.%d\n, [% 15.5d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2799)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.5d] - l.%d\n, [% 15.5d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.5d] - l.%d\n, [% 15.5d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2800)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.20d] - l.%d\n, [% 15.20d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.20d] - l.%d\n, [% 15.20d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2801)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.20d] - l.%d\n, [% 15.20d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.20d] - l.%d\n, [% 15.20d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2802)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.20d] - l.%d\n, [% 15.20d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.20d] - l.%d\n, [% 15.20d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2803)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%hd] - l.%d\n, [%hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%hd] - l.%d\n, [%hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2804)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%hd] - l.%d\n, [%hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%hd] - l.%d\n, [%hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2805)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%hd] - l.%d\n, [%hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%hd] - l.%d\n, [%hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2806)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3hd] - l.%d\n, [%3hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3hd] - l.%d\n, [%3hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2807)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3hd] - l.%d\n, [%3hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3hd] - l.%d\n, [%3hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2807_2)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3hd] - l.%d\n, [%3hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3hd] - l.%d\n, [%3hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2808)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.0hd] - l.%d\n, [%3.0hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.0hd] - l.%d\n, [%3.0hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2809)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.0hd] - l.%d\n, [%3.0hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.0hd] - l.%d\n, [%3.0hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2810)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.0hd] - l.%d\n, [%3.0hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.0hd] - l.%d\n, [%3.0hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2811)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.2hd] - l.%d\n, [%3.2hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.2hd] - l.%d\n, [%3.2hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2812)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.2hd] - l.%d\n, [%3.2hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.2hd] - l.%d\n, [%3.2hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2813)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.2hd] - l.%d\n, [%3.2hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.2hd] - l.%d\n, [%3.2hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2814)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.5hd] - l.%d\n, [%3.5hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.5hd] - l.%d\n, [%3.5hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2815)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.5hd] - l.%d\n, [%3.5hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.5hd] - l.%d\n, [%3.5hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2816)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.5hd] - l.%d\n, [%3.5hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.5hd] - l.%d\n, [%3.5hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2817)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.15hd] - l.%d\n, [%3.15hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.15hd] - l.%d\n, [%3.15hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2818)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.15hd] - l.%d\n, [%3.15hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.15hd] - l.%d\n, [%3.15hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2819)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.15hd] - l.%d\n, [%3.15hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.15hd] - l.%d\n, [%3.15hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2820)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15hd] - l.%d\n, [%15hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15hd] - l.%d\n, [%15hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2821)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15hd] - l.%d\n, [%15hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15hd] - l.%d\n, [%15hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2822)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15hd] - l.%d\n, [%15hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15hd] - l.%d\n, [%15hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2823)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.0hd] - l.%d\n, [%15.0hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.0hd] - l.%d\n, [%15.0hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2824)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.0hd] - l.%d\n, [%15.0hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.0hd] - l.%d\n, [%15.0hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2825)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.0hd] - l.%d\n, [%15.0hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.0hd] - l.%d\n, [%15.0hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2826)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.5hd] - l.%d\n, [%15.5hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.5hd] - l.%d\n, [%15.5hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2827)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.5hd] - l.%d\n, [%15.5hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.5hd] - l.%d\n, [%15.5hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2828)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.5hd] - l.%d\n, [%15.5hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.5hd] - l.%d\n, [%15.5hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2829)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.20hd] - l.%d\n, [%15.20hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.20hd] - l.%d\n, [%15.20hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2830)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.20hd] - l.%d\n, [%15.20hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.20hd] - l.%d\n, [%15.20hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2831)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.20hd] - l.%d\n, [%15.20hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.20hd] - l.%d\n, [%15.20hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2832)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-hd] - l.%d\n, [%-hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-hd] - l.%d\n, [%-hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2833)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-hd] - l.%d\n, [%-hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-hd] - l.%d\n, [%-hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2834)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-hd] - l.%d\n, [%-hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-hd] - l.%d\n, [%-hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2835)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3hd] - l.%d\n, [%-3hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3hd] - l.%d\n, [%-3hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2836)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3hd] - l.%d\n, [%-3hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3hd] - l.%d\n, [%-3hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2837)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3hd] - l.%d\n, [%-3hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3hd] - l.%d\n, [%-3hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2838)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.0hd] - l.%d\n, [%-3.0hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.0hd] - l.%d\n, [%-3.0hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2839)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.0hd] - l.%d\n, [%-3.0hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.0hd] - l.%d\n, [%-3.0hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2840)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.0hd] - l.%d\n, [%-3.0hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.0hd] - l.%d\n, [%-3.0hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2841)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.2hd] - l.%d\n, [%-3.2hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.2hd] - l.%d\n, [%-3.2hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2842)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.2hd] - l.%d\n, [%-3.2hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.2hd] - l.%d\n, [%-3.2hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2843)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.2hd] - l.%d\n, [%-3.2hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.2hd] - l.%d\n, [%-3.2hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2844)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.5hd] - l.%d\n, [%-3.5hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.5hd] - l.%d\n, [%-3.5hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2845)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.5hd] - l.%d\n, [%-3.5hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.5hd] - l.%d\n, [%-3.5hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2846)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.5hd] - l.%d\n, [%-3.5hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.5hd] - l.%d\n, [%-3.5hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2847)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.15hd] - l.%d\n, [%-3.15hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.15hd] - l.%d\n, [%-3.15hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2848)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.15hd] - l.%d\n, [%-3.15hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.15hd] - l.%d\n, [%-3.15hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2849)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.15hd] - l.%d\n, [%-3.15hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.15hd] - l.%d\n, [%-3.15hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2850)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+hd] - l.%d\n, [%+hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+hd] - l.%d\n, [%+hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2851)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+hd] - l.%d\n, [%+hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+hd] - l.%d\n, [%+hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2852)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+hd] - l.%d\n, [%+hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+hd] - l.%d\n, [%+hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2853)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3hd] - l.%d\n, [%+3hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3hd] - l.%d\n, [%+3hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2854)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3hd] - l.%d\n, [%+3hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3hd] - l.%d\n, [%+3hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2855)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3hd] - l.%d\n, [%+3hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3hd] - l.%d\n, [%+3hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2856)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.0hd] - l.%d\n, [%+3.0hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.0hd] - l.%d\n, [%+3.0hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2857)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.0hd] - l.%d\n, [%+3.0hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.0hd] - l.%d\n, [%+3.0hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2858)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.0hd] - l.%d\n, [%+3.0hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.0hd] - l.%d\n, [%+3.0hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2859)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.5hd] - l.%d\n, [%+3.5hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.5hd] - l.%d\n, [%+3.5hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2860)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.5hd] - l.%d\n, [%+3.5hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.5hd] - l.%d\n, [%+3.5hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2861)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.5hd] - l.%d\n, [%+3.5hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.5hd] - l.%d\n, [%+3.5hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2862)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.15hd] - l.%d\n, [%+3.15hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.15hd] - l.%d\n, [%+3.15hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2863)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.15hd] - l.%d\n, [%+3.15hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.15hd] - l.%d\n, [%+3.15hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2864)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+3.15hd] - l.%d\n, [%+3.15hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+3.15hd] - l.%d\n, [%+3.15hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2865)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15hd] - l.%d\n, [%+15hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15hd] - l.%d\n, [%+15hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2866)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15hd] - l.%d\n, [%+15hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15hd] - l.%d\n, [%+15hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2867)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15hd] - l.%d\n, [%+15hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15hd] - l.%d\n, [%+15hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2868)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.0hd] - l.%d\n, [%+15.0hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.0hd] - l.%d\n, [%+15.0hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2869)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.0hd] - l.%d\n, [%+15.0hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.0hd] - l.%d\n, [%+15.0hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2870)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.0hd] - l.%d\n, [%+15.0hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.0hd] - l.%d\n, [%+15.0hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2871)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.5hd] - l.%d\n, [%+15.5hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.5hd] - l.%d\n, [%+15.5hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2872)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.5hd] - l.%d\n, [%+15.5hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.5hd] - l.%d\n, [%+15.5hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2873)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.5hd] - l.%d\n, [%+15.5hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.5hd] - l.%d\n, [%+15.5hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2874)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.20hd] - l.%d\n, [%+15.20hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.20hd] - l.%d\n, [%+15.20hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2875)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.20hd] - l.%d\n, [%+15.20hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.20hd] - l.%d\n, [%+15.20hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2876)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+15.20hd] - l.%d\n, [%+15.20hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+15.20hd] - l.%d\n, [%+15.20hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2877)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% hd] - l.%d\n, [% hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% hd] - l.%d\n, [% hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2878)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% hd] - l.%d\n, [% hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% hd] - l.%d\n, [% hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2879)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% hd] - l.%d\n, [% hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% hd] - l.%d\n, [% hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2880)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3hd] - l.%d\n, [% 3hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3hd] - l.%d\n, [% 3hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2881)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3hd] - l.%d\n, [% 3hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3hd] - l.%d\n, [% 3hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2882)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3hd] - l.%d\n, [% 3hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3hd] - l.%d\n, [% 3hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2883)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.0hd] - l.%d\n, [% 3.0hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.0hd] - l.%d\n, [% 3.0hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2884)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.0hd] - l.%d\n, [% 3.0hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.0hd] - l.%d\n, [% 3.0hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2885)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.0hd] - l.%d\n, [% 3.0hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.0hd] - l.%d\n, [% 3.0hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2886)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.2hd] - l.%d\n, [% 3.2hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.2hd] - l.%d\n, [% 3.2hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2887)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.2hd] - l.%d\n, [% 3.2hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.2hd] - l.%d\n, [% 3.2hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2888)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.2hd] - l.%d\n, [% 3.2hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.2hd] - l.%d\n, [% 3.2hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2889)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.5hd] - l.%d\n, [% 3.5hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.5hd] - l.%d\n, [% 3.5hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2890)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.5hd] - l.%d\n, [% 3.5hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.5hd] - l.%d\n, [% 3.5hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2891)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.5hd] - l.%d\n, [% 3.5hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.5hd] - l.%d\n, [% 3.5hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2892)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.15hd] - l.%d\n, [% 3.15hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.15hd] - l.%d\n, [% 3.15hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2893)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.15hd] - l.%d\n, [% 3.15hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.15hd] - l.%d\n, [% 3.15hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2894)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 3.15hd] - l.%d\n, [% 3.15hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 3.15hd] - l.%d\n, [% 3.15hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2895)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15hd] - l.%d\n, [% 15hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15hd] - l.%d\n, [% 15hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2896)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15hd] - l.%d\n, [% 15hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15hd] - l.%d\n, [% 15hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2897)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15hd] - l.%d\n, [% 15hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15hd] - l.%d\n, [% 15hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2898)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.0hd] - l.%d\n, [% 15.0hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.0hd] - l.%d\n, [% 15.0hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2899)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.0hd] - l.%d\n, [% 15.0hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.0hd] - l.%d\n, [% 15.0hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2900)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.0hd] - l.%d\n, [% 15.0hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.0hd] - l.%d\n, [% 15.0hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2901)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.5hd] - l.%d\n, [% 15.5hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.5hd] - l.%d\n, [% 15.5hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2902)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.5hd] - l.%d\n, [% 15.5hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.5hd] - l.%d\n, [% 15.5hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2903)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.5hd] - l.%d\n, [% 15.5hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.5hd] - l.%d\n, [% 15.5hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2904)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.20hd] - l.%d\n, [% 15.20hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.20hd] - l.%d\n, [% 15.20hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2905)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.20hd] - l.%d\n, [% 15.20hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.20hd] - l.%d\n, [% 15.20hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2906)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%% 15.20hd] - l.%d\n, [% 15.20hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%% 15.20hd] - l.%d\n, [% 15.20hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3013)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+d] - l.%d\n, [%-+d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+d] - l.%d\n, [%-+d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3014)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+d] - l.%d\n, [%-+d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+d] - l.%d\n, [%-+d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3015)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+d] - l.%d\n, [%-+d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+d] - l.%d\n, [%-+d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3016)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3d] - l.%d\n, [%-+3d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3d] - l.%d\n, [%-+3d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3017)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3d] - l.%d\n, [%-+3d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3d] - l.%d\n, [%-+3d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3018)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3d] - l.%d\n, [%-+3d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3d] - l.%d\n, [%-+3d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3019)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.0d] - l.%d\n, [%-+3.0d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.0d] - l.%d\n, [%-+3.0d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3020)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.0d] - l.%d\n, [%-+3.0d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.0d] - l.%d\n, [%-+3.0d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3021)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.0d] - l.%d\n, [%-+3.0d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.0d] - l.%d\n, [%-+3.0d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3021_2)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.2d] - l.%d\n, [%-+3.2d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.2d] - l.%d\n, [%-+3.2d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3022)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.2d] - l.%d\n, [%-+3.2d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.2d] - l.%d\n, [%-+3.2d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3023)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.2d] - l.%d\n, [%-+3.2d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.2d] - l.%d\n, [%-+3.2d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3024)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.5d] - l.%d\n, [%-+3.5d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.5d] - l.%d\n, [%-+3.5d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3025)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.5d] - l.%d\n, [%-+3.5d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.5d] - l.%d\n, [%-+3.5d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3026)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.5d] - l.%d\n, [%-+3.5d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.5d] - l.%d\n, [%-+3.5d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3027)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.15d] - l.%d\n, [%-+3.15d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.15d] - l.%d\n, [%-+3.15d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3028)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.15d] - l.%d\n, [%-+3.15d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.15d] - l.%d\n, [%-+3.15d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3029)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.15d] - l.%d\n, [%-+3.15d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.15d] - l.%d\n, [%-+3.15d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3030)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15d] - l.%d\n, [%-+15d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15d] - l.%d\n, [%-+15d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3031)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15d] - l.%d\n, [%-+15d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15d] - l.%d\n, [%-+15d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3032)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15d] - l.%d\n, [%-+15d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15d] - l.%d\n, [%-+15d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3033)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.0d] - l.%d\n, [%-+15.0d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.0d] - l.%d\n, [%-+15.0d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3034)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.0d] - l.%d\n, [%-+15.0d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.0d] - l.%d\n, [%-+15.0d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3035)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.0d] - l.%d\n, [%-+15.0d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.0d] - l.%d\n, [%-+15.0d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3036)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.5d] - l.%d\n, [%-+15.5d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.5d] - l.%d\n, [%-+15.5d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3037)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.5d] - l.%d\n, [%-+15.5d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.5d] - l.%d\n, [%-+15.5d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3038)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.5d] - l.%d\n, [%-+15.5d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.5d] - l.%d\n, [%-+15.5d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3039)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.20d] - l.%d\n, [%-+15.20d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.20d] - l.%d\n, [%-+15.20d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3040)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.20d] - l.%d\n, [%-+15.20d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.20d] - l.%d\n, [%-+15.20d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3041)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.20d] - l.%d\n, [%-+15.20d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.20d] - l.%d\n, [%-+15.20d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3072)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- d] - l.%d\n, [%- d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- d] - l.%d\n, [%- d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3073)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- d] - l.%d\n, [%- d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- d] - l.%d\n, [%- d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3074)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- d] - l.%d\n, [%- d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- d] - l.%d\n, [%- d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3075)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3d] - l.%d\n, [%- 3d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3d] - l.%d\n, [%- 3d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3076)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3d] - l.%d\n, [%- 3d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3d] - l.%d\n, [%- 3d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3077)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3d] - l.%d\n, [%- 3d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3d] - l.%d\n, [%- 3d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3078)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.0d] - l.%d\n, [%- 3.0d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.0d] - l.%d\n, [%- 3.0d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3079)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.0d] - l.%d\n, [%- 3.0d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.0d] - l.%d\n, [%- 3.0d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3080)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.0d] - l.%d\n, [%- 3.0d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.0d] - l.%d\n, [%- 3.0d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3081)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.2d] - l.%d\n, [%- 3.2d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.2d] - l.%d\n, [%- 3.2d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3082)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.2d] - l.%d\n, [%- 3.2d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.2d] - l.%d\n, [%- 3.2d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3083)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.2d] - l.%d\n, [%- 3.2d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.2d] - l.%d\n, [%- 3.2d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3084)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.5d] - l.%d\n, [%- 3.5d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.5d] - l.%d\n, [%- 3.5d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3085)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.5d] - l.%d\n, [%- 3.5d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.5d] - l.%d\n, [%- 3.5d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3086)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.5d] - l.%d\n, [%- 3.5d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.5d] - l.%d\n, [%- 3.5d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3087)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.15d] - l.%d\n, [%- 3.15d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.15d] - l.%d\n, [%- 3.15d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3088)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.15d] - l.%d\n, [%- 3.15d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.15d] - l.%d\n, [%- 3.15d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3089)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.15d] - l.%d\n, [%- 3.15d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.15d] - l.%d\n, [%- 3.15d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3090)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15d] - l.%d\n, [%- 15d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15d] - l.%d\n, [%- 15d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3091)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15d] - l.%d\n, [%- 15d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15d] - l.%d\n, [%- 15d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3092)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15d] - l.%d\n, [%- 15d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15d] - l.%d\n, [%- 15d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3093)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.0d] - l.%d\n, [%- 15.0d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.0d] - l.%d\n, [%- 15.0d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3094)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.0d] - l.%d\n, [%- 15.0d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.0d] - l.%d\n, [%- 15.0d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3095)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.0d] - l.%d\n, [%- 15.0d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.0d] - l.%d\n, [%- 15.0d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3096)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.5d] - l.%d\n, [%- 15.5d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.5d] - l.%d\n, [%- 15.5d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3097)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.5d] - l.%d\n, [%- 15.5d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.5d] - l.%d\n, [%- 15.5d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3098)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.5d] - l.%d\n, [%- 15.5d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.5d] - l.%d\n, [%- 15.5d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3099)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.20d] - l.%d\n, [%- 15.20d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.20d] - l.%d\n, [%- 15.20d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3100)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.20d] - l.%d\n, [%- 15.20d]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.20d] - l.%d\n, [%- 15.20d]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3101)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.20d] - l.%d\n, [%- 15.20d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.20d] - l.%d\n, [%- 15.20d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3132)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+hd] - l.%d\n, [%-+hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+hd] - l.%d\n, [%-+hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3133)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+hd] - l.%d\n, [%-+hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+hd] - l.%d\n, [%-+hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3134)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+hd] - l.%d\n, [%-+hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+hd] - l.%d\n, [%-+hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3135)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3hd] - l.%d\n, [%-+3hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3hd] - l.%d\n, [%-+3hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3136)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3hd] - l.%d\n, [%-+3hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3hd] - l.%d\n, [%-+3hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3137)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3hd] - l.%d\n, [%-+3hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3hd] - l.%d\n, [%-+3hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3138)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.0hd] - l.%d\n, [%-+3.0hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.0hd] - l.%d\n, [%-+3.0hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3139)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.0hd] - l.%d\n, [%-+3.0hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.0hd] - l.%d\n, [%-+3.0hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3140)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.0hd] - l.%d\n, [%-+3.0hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.0hd] - l.%d\n, [%-+3.0hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3141)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.2hd] - l.%d\n, [%-+3.2hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.2hd] - l.%d\n, [%-+3.2hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3142)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.2hd] - l.%d\n, [%-+3.2hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.2hd] - l.%d\n, [%-+3.2hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3143)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.2hd] - l.%d\n, [%-+3.2hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.2hd] - l.%d\n, [%-+3.2hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3144)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.5hd] - l.%d\n, [%-+3.5hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.5hd] - l.%d\n, [%-+3.5hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3145)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.5hd] - l.%d\n, [%-+3.5hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.5hd] - l.%d\n, [%-+3.5hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3146)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.5hd] - l.%d\n, [%-+3.5hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.5hd] - l.%d\n, [%-+3.5hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3147)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.15hd] - l.%d\n, [%-+3.15hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.15hd] - l.%d\n, [%-+3.15hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3148)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.15hd] - l.%d\n, [%-+3.15hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.15hd] - l.%d\n, [%-+3.15hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3149)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+3.15hd] - l.%d\n, [%-+3.15hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+3.15hd] - l.%d\n, [%-+3.15hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3150)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15hd] - l.%d\n, [%-+15hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15hd] - l.%d\n, [%-+15hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3151)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15hd] - l.%d\n, [%-+15hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15hd] - l.%d\n, [%-+15hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3152)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15hd] - l.%d\n, [%-+15hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15hd] - l.%d\n, [%-+15hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3153)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.0hd] - l.%d\n, [%-+15.0hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.0hd] - l.%d\n, [%-+15.0hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3154)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.0hd] - l.%d\n, [%-+15.0hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.0hd] - l.%d\n, [%-+15.0hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3155)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.0hd] - l.%d\n, [%-+15.0hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.0hd] - l.%d\n, [%-+15.0hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3156)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.5hd] - l.%d\n, [%-+15.5hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.5hd] - l.%d\n, [%-+15.5hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3157)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.5hd] - l.%d\n, [%-+15.5hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.5hd] - l.%d\n, [%-+15.5hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3158)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.5hd] - l.%d\n, [%-+15.5hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.5hd] - l.%d\n, [%-+15.5hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3159)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.20hd] - l.%d\n, [%-+15.20hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.20hd] - l.%d\n, [%-+15.20hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3160)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.20hd] - l.%d\n, [%-+15.20hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.20hd] - l.%d\n, [%-+15.20hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3161)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-+15.20hd] - l.%d\n, [%-+15.20hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-+15.20hd] - l.%d\n, [%-+15.20hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3192)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- hd] - l.%d\n, [%- hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- hd] - l.%d\n, [%- hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3193)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- hd] - l.%d\n, [%- hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- hd] - l.%d\n, [%- hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3194)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- hd] - l.%d\n, [%- hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- hd] - l.%d\n, [%- hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3195)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3hd] - l.%d\n, [%- 3hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3hd] - l.%d\n, [%- 3hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3196)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3hd] - l.%d\n, [%- 3hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3hd] - l.%d\n, [%- 3hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3197)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3hd] - l.%d\n, [%- 3hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3hd] - l.%d\n, [%- 3hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3198)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.0hd] - l.%d\n, [%- 3.0hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.0hd] - l.%d\n, [%- 3.0hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3199)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.0hd] - l.%d\n, [%- 3.0hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.0hd] - l.%d\n, [%- 3.0hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3200)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.0hd] - l.%d\n, [%- 3.0hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.0hd] - l.%d\n, [%- 3.0hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3201)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.2hd] - l.%d\n, [%- 3.2hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.2hd] - l.%d\n, [%- 3.2hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3202)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.2hd] - l.%d\n, [%- 3.2hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.2hd] - l.%d\n, [%- 3.2hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3203)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.2hd] - l.%d\n, [%- 3.2hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.2hd] - l.%d\n, [%- 3.2hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3204)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.5hd] - l.%d\n, [%- 3.5hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.5hd] - l.%d\n, [%- 3.5hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3205)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.5hd] - l.%d\n, [%- 3.5hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.5hd] - l.%d\n, [%- 3.5hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3206)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.5hd] - l.%d\n, [%- 3.5hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.5hd] - l.%d\n, [%- 3.5hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3207)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.15hd] - l.%d\n, [%- 3.15hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.15hd] - l.%d\n, [%- 3.15hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3208)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.15hd] - l.%d\n, [%- 3.15hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.15hd] - l.%d\n, [%- 3.15hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3209)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 3.15hd] - l.%d\n, [%- 3.15hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 3.15hd] - l.%d\n, [%- 3.15hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3210)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15hd] - l.%d\n, [%- 15hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15hd] - l.%d\n, [%- 15hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3211)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15hd] - l.%d\n, [%- 15hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15hd] - l.%d\n, [%- 15hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3212)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15hd] - l.%d\n, [%- 15hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15hd] - l.%d\n, [%- 15hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3213)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.0hd] - l.%d\n, [%- 15.0hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.0hd] - l.%d\n, [%- 15.0hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3214)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.0hd] - l.%d\n, [%- 15.0hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.0hd] - l.%d\n, [%- 15.0hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3215)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.0hd] - l.%d\n, [%- 15.0hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.0hd] - l.%d\n, [%- 15.0hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3216)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.5hd] - l.%d\n, [%- 15.5hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.5hd] - l.%d\n, [%- 15.5hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3217)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.5hd] - l.%d\n, [%- 15.5hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.5hd] - l.%d\n, [%- 15.5hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3218)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.5hd] - l.%d\n, [%- 15.5hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.5hd] - l.%d\n, [%- 15.5hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3219)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.20hd] - l.%d\n, [%- 15.20hd]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.20hd] - l.%d\n, [%- 15.20hd]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3220)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.20hd] - l.%d\n, [%- 15.20hd]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.20hd] - l.%d\n, [%- 15.20hd]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3221)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%- 15.20hd] - l.%d\n, [%- 15.20hd]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%- 15.20hd] - l.%d\n, [%- 15.20hd]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3373)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%s] - l.%d\n, [%s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%s] - l.%d\n, [%s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3374)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%s] - l.%d\n, [%s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%s] - l.%d\n, [%s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3375)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%3s] - l.%d\n, [%3s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%3s] - l.%d\n, [%3s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3376)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%3s] - l.%d\n, [%3s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%3s] - l.%d\n, [%3s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3377)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%3.0s] - l.%d\n, [%3.0s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%3.0s] - l.%d\n, [%3.0s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3378)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%3.0s] - l.%d\n, [%3.0s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%3.0s] - l.%d\n, [%3.0s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3379)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%3.2s] - l.%d\n, [%3.2s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%3.2s] - l.%d\n, [%3.2s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3380)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%3.2s] - l.%d\n, [%3.2s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%3.2s] - l.%d\n, [%3.2s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3381)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%3.5s] - l.%d\n, [%3.5s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%3.5s] - l.%d\n, [%3.5s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3382)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%3.5s] - l.%d\n, [%3.5s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%3.5s] - l.%d\n, [%3.5s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3383)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%3.25s] - l.%d\n, [%3.25s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%3.25s] - l.%d\n, [%3.25s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3384)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%3.25s] - l.%d\n, [%3.25s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%3.25s] - l.%d\n, [%3.25s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3385)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%25s] - l.%d\n, [%25s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%25s] - l.%d\n, [%25s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3386)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%25s] - l.%d\n, [%25s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%25s] - l.%d\n, [%25s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3387)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%25.0s] - l.%d\n, [%25.0s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%25.0s] - l.%d\n, [%25.0s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3388)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%25.0s] - l.%d\n, [%25.0s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%25.0s] - l.%d\n, [%25.0s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3389)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%25.5s] - l.%d\n, [%25.5s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%25.5s] - l.%d\n, [%25.5s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3390)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%25.5s] - l.%d\n, [%25.5s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%25.5s] - l.%d\n, [%25.5s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3391)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%-s] - l.%d\n, [%-s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%-s] - l.%d\n, [%-s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3392)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%-s] - l.%d\n, [%-s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%-s] - l.%d\n, [%-s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3393)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%-3s] - l.%d\n, [%-3s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%-3s] - l.%d\n, [%-3s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3394)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%-3s] - l.%d\n, [%-3s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%-3s] - l.%d\n, [%-3s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3395)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%-3.0s] - l.%d\n, [%-3.0s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%-3.0s] - l.%d\n, [%-3.0s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3396)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%-3.0s] - l.%d\n, [%-3.0s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%-3.0s] - l.%d\n, [%-3.0s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3397)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%-3.2s] - l.%d\n, [%-3.2s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%-3.2s] - l.%d\n, [%-3.2s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3398)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%-3.2s] - l.%d\n, [%-3.2s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%-3.2s] - l.%d\n, [%-3.2s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3399)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%-3.5s] - l.%d\n, [%-3.5s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%-3.5s] - l.%d\n, [%-3.5s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3400)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%-3.5s] - l.%d\n, [%-3.5s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%-3.5s] - l.%d\n, [%-3.5s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3401)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%-3.25s] - l.%d\n, [%-3.25s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%-3.25s] - l.%d\n, [%-3.25s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3402)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = NULL;
s21_sprintf(str2, "- %d - [%%-3.25s] - l.%d\n, [%-3.25s]", - 2, __LINE__, str);
sprintf(str1, "- %d - [%%-3.25s] - l.%d\n, [%-3.25s]", - 2, __LINE__ - 1, str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3523)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%c] - l.%d\n, [%c]", - 2, __LINE__, *str);
sprintf(str1, "- %d - [%%c] - l.%d\n, [%c]", - 2, __LINE__ - 1, *str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3525)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%3c] - l.%d\n, [%3c]", - 2, __LINE__, *str);
sprintf(str1, "- %d - [%%3c] - l.%d\n, [%3c]", - 2, __LINE__ - 1, *str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3535)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%25c] - l.%d\n, [%25c]", - 2, __LINE__, *str);
sprintf(str1, "- %d - [%%25c] - l.%d\n, [%25c]", - 2, __LINE__ - 1, *str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3554)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%-c] - l.%d\n, [%-c]", - 2, __LINE__, *str);
sprintf(str1, "- %d - [%%-c] - l.%d\n, [%-c]", - 2, __LINE__ - 1, *str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_3555)
{
char str1[1024] = "";
char str2[1024] = "";
char *str = "Hello World";
s21_sprintf(str2, "- %d - [%%-3c] - l.%d\n, [%-3c]", - 2, __LINE__, *str);
sprintf(str1, "- %d - [%%-3c] - l.%d\n, [%-3c]", - 2, __LINE__ - 1, *str);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2708_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%i] - l.%d\n, [%i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%i] - l.%d\n, [%i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2709_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%i] - l.%d\n, [%i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%i] - l.%d\n, [%i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2710_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%i] - l.%d\n, [%i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%i] - l.%d\n, [%i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2711i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3d] - l.%d\n, [%3d]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3d] - l.%d\n, [%3d]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2712i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3i] - l.%d\n, [%3i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3i] - l.%d\n, [%3i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2713i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3i] - l.%d\n, [%3i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3i] - l.%d\n, [%3i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2714i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.0i] - l.%d\n, [%3.0i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.0i] - l.%d\n, [%3.0i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2715i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.0i] - l.%d\n, [%3.0i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.0i] - l.%d\n, [%3.0i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2716i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.0d] - l.%d\n, [%3.0d]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.0d] - l.%d\n, [%3.0d]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2717i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.2i] - l.%d\n, [%3.2i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.2i] - l.%d\n, [%3.2i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2718i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.2i] - l.%d\n, [%3.2i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.2i] - l.%d\n, [%3.2i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2719i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.2i] - l.%d\n, [%3.2i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.2i] - l.%d\n, [%3.2i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2720i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.5i] - l.%d\n, [%3.5i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.5i] - l.%d\n, [%3.5i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2721i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.5i] - l.%d\n, [%3.5i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.5i] - l.%d\n, [%3.5i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2722i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.5i] - l.%d\n, [%3.5i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.5i] - l.%d\n, [%3.5i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2723i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.15i] - l.%d\n, [%3.15i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.15i] - l.%d\n, [%3.15i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2724i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.15i] - l.%d\n, [%3.15i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.15i] - l.%d\n, [%3.15i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2725i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.15i] - l.%d\n, [%3.15i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.15i] - l.%d\n, [%3.15i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2726i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15i] - l.%d\n, [%15i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15i] - l.%d\n, [%15i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2727i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15i] - l.%d\n, [%15i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15i] - l.%d\n, [%15i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2728i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15i] - l.%d\n, [%15i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15i] - l.%d\n, [%15i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2729i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.0i] - l.%d\n, [%15.0i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.0i] - l.%d\n, [%15.0i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2730i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.0i] - l.%d\n, [%15.0i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.0i] - l.%d\n, [%15.0i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2731i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.0i] - l.%d\n, [%15.0i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.0i] - l.%d\n, [%15.0i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2732i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.5i] - l.%d\n, [%15.5i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.5i] - l.%d\n, [%15.5i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2733i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.5i] - l.%d\n, [%15.5i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.5i] - l.%d\n, [%15.5i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2734i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.5i] - l.%d\n, [%15.5i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.5i] - l.%d\n, [%15.5i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2735i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.20i] - l.%d\n, [%15.20i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.20i] - l.%d\n, [%15.20i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2736i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.20i] - l.%d\n, [%15.20i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.20i] - l.%d\n, [%15.20i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2737i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.20i] - l.%d\n, [%15.20i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.20i] - l.%d\n, [%15.20i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2738i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-i] - l.%d\n, [%-i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-i] - l.%d\n, [%-i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2739i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3i] - l.%d\n, [%-3i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3i] - l.%d\n, [%-3i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2740i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.0i] - l.%d\n, [%-3.0i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.0i] - l.%d\n, [%-3.0i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2741i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.2i] - l.%d\n, [%-3.2i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.2i] - l.%d\n, [%-3.2i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2742i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.5i] - l.%d\n, [%-3.5i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.5i] - l.%d\n, [%-3.5i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2743i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.5i] - l.%d\n, [%-3.5i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.5i] - l.%d\n, [%-3.5i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2744i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.15i] - l.%d\n, [%-3.15i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.15i] - l.%d\n, [%-3.15i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2745i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.15i] - l.%d\n, [%-3.15i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.15i] - l.%d\n, [%-3.15i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2746i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.15i] - l.%d\n, [%-3.15i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.15i] - l.%d\n, [%-3.15i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2747i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+i] - l.%d\n, [%+i]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%+i] - l.%d\n, [%+i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2748i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+i] - l.%d\n, [%+i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%+i] - l.%d\n, [%+i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_2749i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%+i] - l.%d\n, [%+i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%+i] - l.%d\n, [%+i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2750_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3i] - l.%i\n, [%+3i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3i] - l.%i\n, [%+3i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2751_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3i] - l.%i\n, [%+3i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3i] - l.%i\n, [%+3i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2752_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3i] - l.%i\n, [%+3i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3i] - l.%i\n, [%+3i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2753_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3i] - l.%i\n, [%+3i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3i] - l.%i\n, [%+3i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2754_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3i] - l.%i\n, [%+3i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3i] - l.%i\n, [%+3i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2755_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3i] - l.%i\n, [%+3i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3i] - l.%i\n, [%+3i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2756_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.5i] - l.%i\n, [%+3.5i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.5i] - l.%i\n, [%+3.5i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2757_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.5i] - l.%i\n, [%+3.5i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.5i] - l.%i\n, [%+3.5i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2758_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.5i] - l.%i\n, [%+3.5i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.5i] - l.%i\n, [%+3.5i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2759_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.15i] - l.%i\n, [%+3.15i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.15i] - l.%i\n, [%+3.15i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2760_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.15i] - l.%i\n, [%+3.15i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.15i] - l.%i\n, [%+3.15i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2761_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.15i] - l.%i\n, [%+3.15i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.15i] - l.%i\n, [%+3.15i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2762_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15i] - l.%i\n, [%+15i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15i] - l.%i\n, [%+15i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2763_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15i] - l.%i\n, [%+15i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15i] - l.%i\n, [%+15i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2764_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15i] - l.%i\n, [%+15i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15i] - l.%i\n, [%+15i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2765_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.0i] - l.%i\n, [%+15.0i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.0i] - l.%i\n, [%+15.0i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2766_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.0i] - l.%i\n, [%+15.0i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.0i] - l.%i\n, [%+15.0i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2767_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.0i] - l.%i\n, [%+15.0i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.0i] - l.%i\n, [%+15.0i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2768_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.5i] - l.%i\n, [%+15.5i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.5i] - l.%i\n, [%+15.5i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2769_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.5i] - l.%i\n, [%+15.5i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.5i] - l.%i\n, [%+15.5i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2770_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.5i] - l.%i\n, [%+15.5i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.5i] - l.%i\n, [%+15.5i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2771_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.20i] - l.%i\n, [%+15.20i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.20i] - l.%i\n, [%+15.20i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2772_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.20i] - l.%i\n, [%+15.20i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.20i] - l.%i\n, [%+15.20i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2773_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.20i] - l.%i\n, [%+15.20i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.20i] - l.%i\n, [%+15.20i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2774_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% i] - l.%i\n, [% i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% i] - l.%i\n, [% i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2775_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% i] - l.%i\n, [% i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% i] - l.%i\n, [% i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2776_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% i] - l.%i\n, [% i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% i] - l.%i\n, [% i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2777_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3i] - l.%i\n, [% 3i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3i] - l.%i\n, [% 3i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2778_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3i] - l.%i\n, [% 3i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3i] - l.%i\n, [% 3i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2779_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3i] - l.%i\n, [% 3i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3i] - l.%i\n, [% 3i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2780_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %i - [%% 3.0i] - l.%i\n, [% 3.0i]", 0, - 2, __LINE__);
sprintf(str1, " - %i - [%% 3.0i] - l.%i\n, [% 3.0i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2781_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %i - [%% 3.0i] - l.%i\n, [% 3.0i]", INT_MIN, - 2, __LINE__);
sprintf(str1, " - %i - [%% 3.0i] - l.%i\n, [% 3.0i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2782_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, " - %i - [%% 3.0i] - l.%i\n, [% 3.0i]", INT_MAX, - 2, __LINE__);
sprintf(str1, " - %i - [%% 3.0i] - l.%i\n, [% 3.0i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2783_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.2i] - l.%i\n, [% 3.2i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.2i] - l.%i\n, [% 3.2i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2784_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.2i] - l.%i\n, [% 3.2i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.2i] - l.%i\n, [% 3.2i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2785_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.2i] - l.%i\n, [% 3.2i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.2i] - l.%i\n, [% 3.2i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2786_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.5i] - l.%i\n, [% 3.5i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.5i] - l.%i\n, [% 3.5i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2786_2_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.5i] - l.%i\n, [% 3.5i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.5i] - l.%i\n, [% 3.5i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2787_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.5i] - l.%i\n, [% 3.5i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.5i] - l.%i\n, [% 3.5i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2788_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.15i] - l.%i\n, [% 3.15i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.15i] - l.%i\n, [% 3.15i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2789_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.15i] - l.%i\n, [% 3.15i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.15i] - l.%i\n, [% 3.15i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2790_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.15i] - l.%i\n, [% 3.15i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.15i] - l.%i\n, [% 3.15i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2791_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15i] - l.%i\n, [% 15i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15i] - l.%i\n, [% 15i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2792_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15i] - l.%i\n, [% 15i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15i] - l.%i\n, [% 15i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2793_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15i] - l.%i\n, [% 15i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15i] - l.%i\n, [% 15i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2794_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15.0i] - l.%i\n, [% 15.0i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15.0i] - l.%i\n, [% 15.0i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2795_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15.0i] - l.%i\n, [% 15.0i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15.0i] - l.%i\n, [% 15.0i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2796_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15.0i] - l.%i\n, [% 15.0i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15.0i] - l.%i\n, [% 15.0i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2800_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15.20i] - l.%i\n, [% 15.20i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15.20i] - l.%i\n, [% 15.20i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2802_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15.20i] - l.%i\n, [% 15.20i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15.20i] - l.%i\n, [% 15.20i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2803_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%hi] - l.%i\n, [%hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%hi] - l.%i\n, [%hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2804_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%hi] - l.%i\n, [%hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%hi] - l.%i\n, [%hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2805_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%hi] - l.%i\n, [%hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%hi] - l.%i\n, [%hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2806_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3hi] - l.%i\n, [%3hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%3hi] - l.%i\n, [%3hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2807_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3hi] - l.%i\n, [%3hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%3hi] - l.%i\n, [%3hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2807_2_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3hi] - l.%i\n, [%3hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%3hi] - l.%i\n, [%3hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2808_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3.0hi] - l.%i\n, [%3.0hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%3.0hi] - l.%i\n, [%3.0hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2809_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3.0hi] - l.%i\n, [%3.0hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%3.0hi] - l.%i\n, [%3.0hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2810_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3.0hi] - l.%i\n, [%3.0hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%3.0hi] - l.%i\n, [%3.0hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2811_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3.2hi] - l.%i\n, [%3.2hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%3.2hi] - l.%i\n, [%3.2hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2812_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3.2hi] - l.%i\n, [%3.2hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%3.2hi] - l.%i\n, [%3.2hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2813_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3.2hi] - l.%i\n, [%3.2hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%3.2hi] - l.%i\n, [%3.2hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2814_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3.5hi] - l.%i\n, [%3.5hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%3.5hi] - l.%i\n, [%3.5hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2815_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3.5hi] - l.%i\n, [%3.5hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%3.5hi] - l.%i\n, [%3.5hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2816_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3.5hi] - l.%i\n, [%3.5hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%3.5hi] - l.%i\n, [%3.5hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2817_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3.15hi] - l.%i\n, [%3.15hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%3.15hi] - l.%i\n, [%3.15hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2818_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3.15hi] - l.%i\n, [%3.15hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%3.15hi] - l.%i\n, [%3.15hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2819_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%3.15hi] - l.%i\n, [%3.15hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%3.15hi] - l.%i\n, [%3.15hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2820_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%15hi] - l.%i\n, [%15hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%15hi] - l.%i\n, [%15hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2821_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%15hi] - l.%i\n, [%15hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%15hi] - l.%i\n, [%15hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2822_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%15hi] - l.%i\n, [%15hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%15hi] - l.%i\n, [%15hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2823_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%15.0hi] - l.%i\n, [%15.0hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%15.0hi] - l.%i\n, [%15.0hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2824_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%15.0hi] - l.%i\n, [%15.0hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%15.0hi] - l.%i\n, [%15.0hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2825_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%15.0hi] - l.%i\n, [%15.0hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%15.0hi] - l.%i\n, [%15.0hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2826_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%15.5hi] - l.%i\n, [%15.5hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%15.5hi] - l.%i\n, [%15.5hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2827_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%15.5hi] - l.%i\n, [%15.5hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%15.5hi] - l.%i\n, [%15.5hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2828_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%15.5hi] - l.%i\n, [%15.5hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%15.5hi] - l.%i\n, [%15.5hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2829_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%15.20hi] - l.%i\n, [%15.20hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%15.20hi] - l.%i\n, [%15.20hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2830_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%15.20hi] - l.%i\n, [%15.20hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%15.20hi] - l.%i\n, [%15.20hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2831_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%15.20hi] - l.%i\n, [%15.20hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%15.20hi] - l.%i\n, [%15.20hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2832_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-hi] - l.%i\n, [%-hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-hi] - l.%i\n, [%-hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2833_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-hi] - l.%i\n, [%-hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-hi] - l.%i\n, [%-hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2834_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-hi] - l.%i\n, [%-hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-hi] - l.%i\n, [%-hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2835_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3hi] - l.%i\n, [%-3hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3hi] - l.%i\n, [%-3hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2836_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3hi] - l.%i\n, [%-3hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3hi] - l.%i\n, [%-3hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2837_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3hi] - l.%i\n, [%-3hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3hi] - l.%i\n, [%-3hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2838_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3.0hi] - l.%i\n, [%-3.0hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3.0hi] - l.%i\n, [%-3.0hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2839_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3.0hi] - l.%i\n, [%-3.0hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3.0hi] - l.%i\n, [%-3.0hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2840_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3.0hi] - l.%i\n, [%-3.0hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3.0hi] - l.%i\n, [%-3.0hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2841_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3.2hi] - l.%i\n, [%-3.2hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3.2hi] - l.%i\n, [%-3.2hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2842_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3.2hi] - l.%i\n, [%-3.2hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3.2hi] - l.%i\n, [%-3.2hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2843_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3.2hi] - l.%i\n, [%-3.2hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3.2hi] - l.%i\n, [%-3.2hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2844_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3.5hi] - l.%i\n, [%-3.5hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3.5hi] - l.%i\n, [%-3.5hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2845_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3.5hi] - l.%i\n, [%-3.5hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3.5hi] - l.%i\n, [%-3.5hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2846_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3.5hi] - l.%i\n, [%-3.5hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3.5hi] - l.%i\n, [%-3.5hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2847_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3.15hi] - l.%i\n, [%-3.15hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3.15hi] - l.%i\n, [%-3.15hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2848_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3.15hi] - l.%i\n, [%-3.15hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3.15hi] - l.%i\n, [%-3.15hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2849_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-3.15hi] - l.%i\n, [%-3.15hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-3.15hi] - l.%i\n, [%-3.15hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2850_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+hi] - l.%i\n, [%+hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+hi] - l.%i\n, [%+hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2851_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+hi] - l.%i\n, [%+hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+hi] - l.%i\n, [%+hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2852_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+hi] - l.%i\n, [%+hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+hi] - l.%i\n, [%+hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2853_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3hi] - l.%i\n, [%+3hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3hi] - l.%i\n, [%+3hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2854_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3hi] - l.%i\n, [%+3hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3hi] - l.%i\n, [%+3hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2855_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3hi] - l.%i\n, [%+3hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3hi] - l.%i\n, [%+3hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2856_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.0hi] - l.%i\n, [%+3.0hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.0hi] - l.%i\n, [%+3.0hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2857_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.0hi] - l.%i\n, [%+3.0hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.0hi] - l.%i\n, [%+3.0hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2858_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.0hi] - l.%i\n, [%+3.0hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.0hi] - l.%i\n, [%+3.0hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2859_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.5hi] - l.%i\n, [%+3.5hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.5hi] - l.%i\n, [%+3.5hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2860_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.5hi] - l.%i\n, [%+3.5hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.5hi] - l.%i\n, [%+3.5hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2861_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.5hi] - l.%i\n, [%+3.5hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.5hi] - l.%i\n, [%+3.5hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2862_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.15hi] - l.%i\n, [%+3.15hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.15hi] - l.%i\n, [%+3.15hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2863_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.15hi] - l.%i\n, [%+3.15hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.15hi] - l.%i\n, [%+3.15hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2864_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+3.15hi] - l.%i\n, [%+3.15hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+3.15hi] - l.%i\n, [%+3.15hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2865_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15hi] - l.%i\n, [%+15hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15hi] - l.%i\n, [%+15hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2866_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15hi] - l.%i\n, [%+15hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15hi] - l.%i\n, [%+15hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2867_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15hi] - l.%i\n, [%+15hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15hi] - l.%i\n, [%+15hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2868_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.0hi] - l.%i\n, [%+15.0hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.0hi] - l.%i\n, [%+15.0hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2869_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.0hi] - l.%i\n, [%+15.0hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.0hi] - l.%i\n, [%+15.0hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2870_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.0hi] - l.%i\n, [%+15.0hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.0hi] - l.%i\n, [%+15.0hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2871_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.5hi] - l.%i\n, [%+15.5hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.5hi] - l.%i\n, [%+15.5hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2872_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.5hi] - l.%i\n, [%+15.5hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.5hi] - l.%i\n, [%+15.5hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2873_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.5hi] - l.%i\n, [%+15.5hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.5hi] - l.%i\n, [%+15.5hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2874_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.20hi] - l.%i\n, [%+15.20hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.20hi] - l.%i\n, [%+15.20hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2875_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.20hi] - l.%i\n, [%+15.20hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.20hi] - l.%i\n, [%+15.20hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2876_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%+15.20hi] - l.%i\n, [%+15.20hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%+15.20hi] - l.%i\n, [%+15.20hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2877_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% hi] - l.%i\n, [% hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% hi] - l.%i\n, [% hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2878_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% hi] - l.%i\n, [% hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% hi] - l.%i\n, [% hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2879_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% hi] - l.%i\n, [% hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% hi] - l.%i\n, [% hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2880_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3hi] - l.%i\n, [% 3hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3hi] - l.%i\n, [% 3hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2881_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3hi] - l.%i\n, [% 3hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3hi] - l.%i\n, [% 3hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2882_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3hi] - l.%i\n, [% 3hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3hi] - l.%i\n, [% 3hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2883_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.0hi] - l.%i\n, [% 3.0hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.0hi] - l.%i\n, [% 3.0hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2884_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.0hi] - l.%i\n, [% 3.0hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.0hi] - l.%i\n, [% 3.0hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2885_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.0hi] - l.%i\n, [% 3.0hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.0hi] - l.%i\n, [% 3.0hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2886_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.2hi] - l.%i\n, [% 3.2hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.2hi] - l.%i\n, [% 3.2hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2887_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.2hi] - l.%i\n, [% 3.2hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.2hi] - l.%i\n, [% 3.2hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2888_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.2hi] - l.%i\n, [% 3.2hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.2hi] - l.%i\n, [% 3.2hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2889_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.5hi] - l.%i\n, [% 3.5hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.5hi] - l.%i\n, [% 3.5hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2890_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.5hi] - l.%i\n, [% 3.5hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.5hi] - l.%i\n, [% 3.5hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2891_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.5hi] - l.%i\n, [% 3.5hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.5hi] - l.%i\n, [% 3.5hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2892_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.15hi] - l.%i\n, [% 3.15hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.15hi] - l.%i\n, [% 3.15hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2893_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.15hi] - l.%i\n, [% 3.15hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.15hi] - l.%i\n, [% 3.15hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2894_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 3.15hi] - l.%i\n, [% 3.15hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 3.15hi] - l.%i\n, [% 3.15hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2895_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15hi] - l.%i\n, [% 15hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15hi] - l.%i\n, [% 15hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2896_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15hi] - l.%i\n, [% 15hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15hi] - l.%i\n, [% 15hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2897_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15hi] - l.%i\n, [% 15hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15hi] - l.%i\n, [% 15hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2898_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15.0hi] - l.%i\n, [% 15.0hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15.0hi] - l.%i\n, [% 15.0hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2899_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15.0hi] - l.%i\n, [% 15.0hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15.0hi] - l.%i\n, [% 15.0hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2900_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15.0hi] - l.%i\n, [% 15.0hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15.0hi] - l.%i\n, [% 15.0hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2904_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15.20hi] - l.%i\n, [% 15.20hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15.20hi] - l.%i\n, [% 15.20hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2905_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15.20hi] - l.%i\n, [% 15.20hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15.20hi] - l.%i\n, [% 15.20hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_2906_i)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%% 15.20hi] - l.%i\n, [% 15.20hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%% 15.20hi] - l.%i\n, [% 15.20hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3013)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+i] - l.%i\n, [%-+i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+i] - l.%i\n, [%-+i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3014)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+i] - l.%i\n, [%-+i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+i] - l.%i\n, [%-+i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3015)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+i] - l.%i\n, [%-+i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+i] - l.%i\n, [%-+i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3016)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3i] - l.%i\n, [%-+3i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3i] - l.%i\n, [%-+3i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3017)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3i] - l.%i\n, [%-+3i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3i] - l.%i\n, [%-+3i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3018)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3i] - l.%i\n, [%-+3i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3i] - l.%i\n, [%-+3i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3019)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.0i] - l.%i\n, [%-+3.0i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.0i] - l.%i\n, [%-+3.0i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3020)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.0i] - l.%i\n, [%-+3.0i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.0i] - l.%i\n, [%-+3.0i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3021)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.0i] - l.%i\n, [%-+3.0i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.0i] - l.%i\n, [%-+3.0i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3021_2)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.2i] - l.%i\n, [%-+3.2i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.2i] - l.%i\n, [%-+3.2i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3022)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.2i] - l.%i\n, [%-+3.2i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.2i] - l.%i\n, [%-+3.2i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3023)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.2i] - l.%i\n, [%-+3.2i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.2i] - l.%i\n, [%-+3.2i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3024)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.5i] - l.%i\n, [%-+3.5i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.5i] - l.%i\n, [%-+3.5i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3025)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.5i] - l.%i\n, [%-+3.5i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.5i] - l.%i\n, [%-+3.5i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3026)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.5i] - l.%i\n, [%-+3.5i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.5i] - l.%i\n, [%-+3.5i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3027)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.15i] - l.%i\n, [%-+3.15i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.15i] - l.%i\n, [%-+3.15i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3028)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.15i] - l.%i\n, [%-+3.15i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.15i] - l.%i\n, [%-+3.15i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3029)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.15i] - l.%i\n, [%-+3.15i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.15i] - l.%i\n, [%-+3.15i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3030)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15i] - l.%i\n, [%-+15i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15i] - l.%i\n, [%-+15i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3031)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15i] - l.%i\n, [%-+15i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15i] - l.%i\n, [%-+15i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3032)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15i] - l.%i\n, [%-+15i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15i] - l.%i\n, [%-+15i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3033)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.0i] - l.%i\n, [%-+15.0i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.0i] - l.%i\n, [%-+15.0i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3034)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.0i] - l.%i\n, [%-+15.0i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.0i] - l.%i\n, [%-+15.0i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3035)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.0i] - l.%i\n, [%-+15.0i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.0i] - l.%i\n, [%-+15.0i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3036)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.5i] - l.%i\n, [%-+15.5i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.5i] - l.%i\n, [%-+15.5i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3037)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.5i] - l.%i\n, [%-+15.5i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.5i] - l.%i\n, [%-+15.5i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3038)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.5i] - l.%i\n, [%-+15.5i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.5i] - l.%i\n, [%-+15.5i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3039)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.20i] - l.%i\n, [%-+15.20i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.20i] - l.%i\n, [%-+15.20i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3040)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.20i] - l.%i\n, [%-+15.20i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.20i] - l.%i\n, [%-+15.20i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3041)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.20i] - l.%i\n, [%-+15.20i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.20i] - l.%i\n, [%-+15.20i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3072)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- i] - l.%i\n, [%- i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- i] - l.%i\n, [%- i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3073)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- i] - l.%i\n, [%- i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- i] - l.%i\n, [%- i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3074)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- i] - l.%i\n, [%- i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- i] - l.%i\n, [%- i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3075)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3i] - l.%i\n, [%- 3i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3i] - l.%i\n, [%- 3i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3076)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3i] - l.%i\n, [%- 3i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3i] - l.%i\n, [%- 3i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3077)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3i] - l.%i\n, [%- 3i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3i] - l.%i\n, [%- 3i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3078)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.0i] - l.%i\n, [%- 3.0i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.0i] - l.%i\n, [%- 3.0i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3079)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.0i] - l.%i\n, [%- 3.0i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.0i] - l.%i\n, [%- 3.0i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3080)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.0i] - l.%i\n, [%- 3.0i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.0i] - l.%i\n, [%- 3.0i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3081)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.2i] - l.%i\n, [%- 3.2i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.2i] - l.%i\n, [%- 3.2i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3082)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.2i] - l.%i\n, [%- 3.2i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.2i] - l.%i\n, [%- 3.2i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3083)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.2i] - l.%i\n, [%- 3.2i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.2i] - l.%i\n, [%- 3.2i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3084)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.5i] - l.%i\n, [%- 3.5i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.5i] - l.%i\n, [%- 3.5i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3085)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.5i] - l.%i\n, [%- 3.5i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.5i] - l.%i\n, [%- 3.5i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3086)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.5i] - l.%i\n, [%- 3.5i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.5i] - l.%i\n, [%- 3.5i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3087)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.15i] - l.%i\n, [%- 3.15i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.15i] - l.%i\n, [%- 3.15i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3088)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.15i] - l.%i\n, [%- 3.15i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.15i] - l.%i\n, [%- 3.15i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3089)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.15i] - l.%i\n, [%- 3.15i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.15i] - l.%i\n, [%- 3.15i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3090)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15i] - l.%i\n, [%- 15i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15i] - l.%i\n, [%- 15i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3091)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15i] - l.%i\n, [%- 15i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15i] - l.%i\n, [%- 15i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3092)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15i] - l.%i\n, [%- 15i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15i] - l.%i\n, [%- 15i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3093)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.0i] - l.%i\n, [%- 15.0i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.0i] - l.%i\n, [%- 15.0i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3094)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.0i] - l.%i\n, [%- 15.0i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.0i] - l.%i\n, [%- 15.0i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3095)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.0i] - l.%i\n, [%- 15.0i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.0i] - l.%i\n, [%- 15.0i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3096)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.5i] - l.%i\n, [%- 15.5i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.5i] - l.%i\n, [%- 15.5i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3097)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.5i] - l.%i\n, [%- 15.5i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.5i] - l.%i\n, [%- 15.5i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3098)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.5i] - l.%i\n, [%- 15.5i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.5i] - l.%i\n, [%- 15.5i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3099)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.20i] - l.%i\n, [%- 15.20i]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.20i] - l.%i\n, [%- 15.20i]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3100)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.20i] - l.%i\n, [%- 15.20i]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.20i] - l.%i\n, [%- 15.20i]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3101)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.20i] - l.%i\n, [%- 15.20i]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.20i] - l.%i\n, [%- 15.20i]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3132)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+hi] - l.%i\n, [%-+hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+hi] - l.%i\n, [%-+hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3133)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+hi] - l.%i\n, [%-+hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+hi] - l.%i\n, [%-+hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3134)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+hi] - l.%i\n, [%-+hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+hi] - l.%i\n, [%-+hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3135)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3hi] - l.%i\n, [%-+3hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3hi] - l.%i\n, [%-+3hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3136)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3hi] - l.%i\n, [%-+3hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3hi] - l.%i\n, [%-+3hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3137)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3hi] - l.%i\n, [%-+3hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3hi] - l.%i\n, [%-+3hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3138)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.0hi] - l.%i\n, [%-+3.0hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.0hi] - l.%i\n, [%-+3.0hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3139)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.0hi] - l.%i\n, [%-+3.0hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.0hi] - l.%i\n, [%-+3.0hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3140)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.0hi] - l.%i\n, [%-+3.0hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.0hi] - l.%i\n, [%-+3.0hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3141)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.2hi] - l.%i\n, [%-+3.2hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.2hi] - l.%i\n, [%-+3.2hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3142)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.2hi] - l.%i\n, [%-+3.2hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.2hi] - l.%i\n, [%-+3.2hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3143)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.2hi] - l.%i\n, [%-+3.2hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.2hi] - l.%i\n, [%-+3.2hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3144)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.5hi] - l.%i\n, [%-+3.5hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.5hi] - l.%i\n, [%-+3.5hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3145)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.5hi] - l.%i\n, [%-+3.5hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.5hi] - l.%i\n, [%-+3.5hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3146)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.5hi] - l.%i\n, [%-+3.5hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.5hi] - l.%i\n, [%-+3.5hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3147)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.15hi] - l.%i\n, [%-+3.15hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.15hi] - l.%i\n, [%-+3.15hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3148)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.15hi] - l.%i\n, [%-+3.15hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.15hi] - l.%i\n, [%-+3.15hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3149)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+3.15hi] - l.%i\n, [%-+3.15hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+3.15hi] - l.%i\n, [%-+3.15hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3150)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15hi] - l.%i\n, [%-+15hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15hi] - l.%i\n, [%-+15hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3151)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15hi] - l.%i\n, [%-+15hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15hi] - l.%i\n, [%-+15hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3152)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15hi] - l.%i\n, [%-+15hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15hi] - l.%i\n, [%-+15hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3153)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.0hi] - l.%i\n, [%-+15.0hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.0hi] - l.%i\n, [%-+15.0hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3154)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.0hi] - l.%i\n, [%-+15.0hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.0hi] - l.%i\n, [%-+15.0hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3155)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.0hi] - l.%i\n, [%-+15.0hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.0hi] - l.%i\n, [%-+15.0hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3156)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.5hi] - l.%i\n, [%-+15.5hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.5hi] - l.%i\n, [%-+15.5hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3157)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.5hi] - l.%i\n, [%-+15.5hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.5hi] - l.%i\n, [%-+15.5hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3158)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.5hi] - l.%i\n, [%-+15.5hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.5hi] - l.%i\n, [%-+15.5hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3159)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.20hi] - l.%i\n, [%-+15.20hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.20hi] - l.%i\n, [%-+15.20hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3160)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.20hi] - l.%i\n, [%-+15.20hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.20hi] - l.%i\n, [%-+15.20hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3161)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%-+15.20hi] - l.%i\n, [%-+15.20hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%-+15.20hi] - l.%i\n, [%-+15.20hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3192)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- hi] - l.%i\n, [%- hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- hi] - l.%i\n, [%- hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3193)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- hi] - l.%i\n, [%- hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- hi] - l.%i\n, [%- hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3194)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- hi] - l.%i\n, [%- hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- hi] - l.%i\n, [%- hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3195)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3hi] - l.%i\n, [%- 3hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3hi] - l.%i\n, [%- 3hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3196)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3hi] - l.%i\n, [%- 3hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3hi] - l.%i\n, [%- 3hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3197)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3hi] - l.%i\n, [%- 3hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3hi] - l.%i\n, [%- 3hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3198)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.0hi] - l.%i\n, [%- 3.0hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.0hi] - l.%i\n, [%- 3.0hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3199)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.0hi] - l.%i\n, [%- 3.0hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.0hi] - l.%i\n, [%- 3.0hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3200)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.0hi] - l.%i\n, [%- 3.0hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.0hi] - l.%i\n, [%- 3.0hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3201)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.2hi] - l.%i\n, [%- 3.2hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.2hi] - l.%i\n, [%- 3.2hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3202)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.2hi] - l.%i\n, [%- 3.2hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.2hi] - l.%i\n, [%- 3.2hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3203)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.2hi] - l.%i\n, [%- 3.2hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.2hi] - l.%i\n, [%- 3.2hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3204)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.5hi] - l.%i\n, [%- 3.5hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.5hi] - l.%i\n, [%- 3.5hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3205)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.5hi] - l.%i\n, [%- 3.5hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.5hi] - l.%i\n, [%- 3.5hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3206)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.5hi] - l.%i\n, [%- 3.5hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.5hi] - l.%i\n, [%- 3.5hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3207)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.15hi] - l.%i\n, [%- 3.15hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.15hi] - l.%i\n, [%- 3.15hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3208)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.15hi] - l.%i\n, [%- 3.15hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.15hi] - l.%i\n, [%- 3.15hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3209)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 3.15hi] - l.%i\n, [%- 3.15hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 3.15hi] - l.%i\n, [%- 3.15hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3210)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15hi] - l.%i\n, [%- 15hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15hi] - l.%i\n, [%- 15hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3211)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15hi] - l.%i\n, [%- 15hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15hi] - l.%i\n, [%- 15hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3212)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15hi] - l.%i\n, [%- 15hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15hi] - l.%i\n, [%- 15hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3213)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.0hi] - l.%i\n, [%- 15.0hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.0hi] - l.%i\n, [%- 15.0hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3214)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.0hi] - l.%i\n, [%- 15.0hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.0hi] - l.%i\n, [%- 15.0hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3215)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.0hi] - l.%i\n, [%- 15.0hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.0hi] - l.%i\n, [%- 15.0hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3216)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.5hi] - l.%i\n, [%- 15.5hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.5hi] - l.%i\n, [%- 15.5hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3217)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.5hi] - l.%i\n, [%- 15.5hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.5hi] - l.%i\n, [%- 15.5hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3218)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.5hi] - l.%i\n, [%- 15.5hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.5hi] - l.%i\n, [%- 15.5hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3219)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.20hi] - l.%i\n, [%- 15.20hi]", 0, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.20hi] - l.%i\n, [%- 15.20hi]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3220)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.20hi] - l.%i\n, [%- 15.20hi]", SHRT_MIN, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.20hi] - l.%i\n, [%- 15.20hi]", SHRT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_3221)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %i - [%%- 15.20hi] - l.%i\n, [%- 15.20hi]", SHRT_MAX, - 2, __LINE__);
sprintf(str1, "- %i - [%%- 15.20hi] - l.%i\n, [%- 15.20hi]", SHRT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4001)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%u] - l.%d\n, [%u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%u] - l.%d\n, [%u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4002)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%u] - l.%d\n, [%u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%u] - l.%d\n, [%u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4004)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3u] - l.%d\n, [%3u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3u] - l.%d\n, [%3u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4005)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3u] - l.%d\n, [%3u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3u] - l.%d\n, [%3u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4006)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3u] - l.%d\n, [%3u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3u] - l.%d\n, [%3u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4007)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.0u] - l.%d\n, [%3.0u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.0u] - l.%d\n, [%3.0u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4008)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.0u] - l.%d\n, [%3.0u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.0u] - l.%d\n, [%3.0u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4009)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.0u] - l.%d\n, [%3.0u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.0u] - l.%d\n, [%3.0u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4010)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.2u] - l.%d\n, [%3.2u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.2u] - l.%d\n, [%3.2u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4011)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.2u] - l.%d\n, [%3.2u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.2u] - l.%d\n, [%3.2u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4012)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.2u] - l.%d\n, [%3.2u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.2u] - l.%d\n, [%3.2u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4013)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.5u] - l.%d\n, [%3.5u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.5u] - l.%d\n, [%3.5u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4014)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.5u] - l.%d\n, [%3.5u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.5u] - l.%d\n, [%3.5u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4015)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.5u] - l.%d\n, [%3.5u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.5u] - l.%d\n, [%3.5u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4016)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.15u] - l.%d\n, [%3.15u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.15u] - l.%d\n, [%3.15u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4017)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.15u] - l.%d\n, [%3.15u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.15u] - l.%d\n, [%3.15u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4018)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%3.15u] - l.%d\n, [%3.15u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%3.15u] - l.%d\n, [%3.15u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4019)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15u] - l.%d\n, [%15u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15u] - l.%d\n, [%15u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4020)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15u] - l.%d\n, [%15u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15u] - l.%d\n, [%15u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4021)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15u] - l.%d\n, [%15u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15u] - l.%d\n, [%15u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4022)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.0u] - l.%d\n, [%15.0u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.0u] - l.%d\n, [%15.0u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4023)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.0u] - l.%d\n, [%15.0u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.0u] - l.%d\n, [%15.0u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4024)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.5u] - l.%d\n, [%15.5u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.5u] - l.%d\n, [%15.5u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4025)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.20u] - l.%d\n, [%15.20u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.20u] - l.%d\n, [%15.20u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4026)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.20u] - l.%d\n, [%15.20u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.20u] - l.%d\n, [%15.20u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4027)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%15.20u] - l.%d\n, [%15.20u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%15.20u] - l.%d\n, [%15.20u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4028)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-u] - l.%d\n, [%-u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-u] - l.%d\n, [%-u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4029)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-u] - l.%d\n, [%-u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-u] - l.%d\n, [%-u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4030)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-u] - l.%d\n, [%-u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-u] - l.%d\n, [%-u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4031)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3u] - l.%d\n, [%-3u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3u] - l.%d\n, [%-3u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4032)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3u] - l.%d\n, [%-3u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3u] - l.%d\n, [%-3u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4033)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3u] - l.%d\n, [%-3u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3u] - l.%d\n, [%-3u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4034)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.0u] - l.%d\n, [%-3.0u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.0u] - l.%d\n, [%-3.0u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4035)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.0u] - l.%d\n, [%-3.0u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.0u] - l.%d\n, [%-3.0u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4036)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.0u] - l.%d\n, [%-3.0u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.0u] - l.%d\n, [%-3.0u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4037)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.2u] - l.%d\n, [%-3.2u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.2u] - l.%d\n, [%-3.2u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4038)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.2u] - l.%d\n, [%-3.2u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.2u] - l.%d\n, [%-3.2u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4039)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.2u] - l.%d\n, [%-3.2u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.2u] - l.%d\n, [%-3.2u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4040)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.5u] - l.%d\n, [%-3.5u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.5u] - l.%d\n, [%-3.5u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4041)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.5u] - l.%d\n, [%-3.5u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.5u] - l.%d\n, [%-3.5u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4042)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.5u] - l.%d\n, [%-3.5u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.5u] - l.%d\n, [%-3.5u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4043)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.15u] - l.%d\n, [%-3.15u]", 0, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.15u] - l.%d\n, [%-3.15u]", 0, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4044)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.15u] - l.%d\n, [%-3.15u]", INT_MIN, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.15u] - l.%d\n, [%-3.15u]", INT_MIN, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST

START_TEST(sprintf_i_4045)
{
char str1[1024] = "";
char str2[1024] = "";
s21_sprintf(str2, "- %d - [%%-3.15u] - l.%d\n, [%-3.15u]", INT_MAX, - 2, __LINE__);
sprintf(str1, "- %d - [%%-3.15u] - l.%d\n, [%-3.15u]", INT_MAX, - 2, __LINE__ - 1);
ck_assert_str_eq(str1, str2);

}
END_TEST





// ###############################################################################################################################################


START_TEST(s21_sprintf_test_1) {
    char c[1590];
    char C[1590];
    ck_assert_int_eq(s21_sprintf(c, "%d", 15), sprintf(C, "%d", 15));
    ck_assert_pstr_eq(c, C);
    
}
END_TEST

START_TEST(s21_sprintf_test_2) {
    char c[1590];
    char C[1590];
    long long int b = 5;
    float a = 1234.6789;
    char x = 'w';
    const char format[] = "%-13.*lld %.6f %-2c %s !!!";
    ck_assert_int_eq(s21_sprintf(c, format, 6, b, a,  x, "qwerty"), \
                     sprintf(C, format, 6, b, a,  x, "qwerty"));
    ck_assert_pstr_eq(c, C);
}
END_TEST

START_TEST(s21_sprintf_test_3) {
    char c[1590];
    char C[1590];
    long double d = 12.32e30;
    long int li = -123456789;
    short int si = 123;
    int j = 0, J = 1;
    const char format[] = "%20.15ld %- 10hd %#+0.5Lg ..%.. ";
    ck_assert_int_eq(s21_sprintf(c, format, li, si, 19, d, &j), \
                     sprintf(C, "%20.15ld %- 10hd %#+0*.5Lg ..%n.. ", li, si, 19, d, &J));
    ck_assert_pstr_eq(c, C);
    ck_assert_int_eq(j, J);
}
END_TEST

START_TEST(s21_sprintf_test_4) {
    char c[1590];
    char C[1590];
    float ff = FLT_MAX, FF = FLT_MIN_10_EXP;
    unsigned int ui = 1239465;
    const char format[] = "%.*E %f %#15.4x";
    ck_assert_int_eq(s21_sprintf(c, format, 3, ff, FF, ui), sprintf(C, format, 3, ff, FF, ui));
    ck_assert_pstr_eq(c, C);
}
END_TEST

// START_TEST(s21_sprintf_test_5) {
//     char c[1590];
//     char C[1590];
//     char s[10] = "qwerЙuio";
//     float fff = 401.12634e-2;
//     float a = 1234.6789;
//     const char format[] = " -%12.15s %.2s %g %p";
//     ck_assert_int_eq(s21_sprintf(c, format, s, s, fff, &a), sprintf(C, format, s, s, fff, &a));
//     ck_assert_pstr_eq(c, C);
// }
// END_TEST

START_TEST(s21_sprintf_test_6) {
    char c[1590];
    char C[1590];
    const char format[] = " ";
    ck_assert_int_eq(s21_sprintf(c, format), sprintf(C, format));
    ck_assert_pstr_eq(c, C);

    
}
END_TEST

START_TEST(s21_sprintf_test_7) {
    char c[1590];
    char C[1590];
    float a = -123.09876544;
    double b = 0.00023;
    long double q = -33e-5;
    int k = 4;
    int l = 5;
    const char format[] = "qwe%f%-4.4lftr%#*.*Le";
    ck_assert_int_eq(s21_sprintf(c, format, a, b, k, l, q), sprintf(C, format, a, b, k, l, q));
    ck_assert_pstr_eq(c, C);
}
END_TEST

START_TEST(s21_sprintf_test_8) {
    char c[1590];
    char C[1590];
    float a = -123.09876544;
    double b = 0.0023;
    long double q = -36e-3;
    float w = 0;
    const char format[] = "%g%045lg %+.3Lg %#g";
    ck_assert_int_eq(s21_sprintf(c, format, a, b, q, w), sprintf(C, format, a, b, q, w));
    ck_assert_pstr_eq(c, C);
}
END_TEST

// START_TEST(s21_sprintf_test_9) {
//     char c[1590];
//     char C[1590];
//     unsigned short x = 9045;
//     char s[16] = "ç∂ƒe\n rty";
//     int n = 0, A = 0;
//     const char format[] = "%-13s  %*.*hX \n%n\n 7&";
//     ck_assert_int_eq(s21_sprintf(c, format, s, 11, 9, x, &n), \
//                      sprintf(C, "%-13s  %*.*hX \n%n\n 7&", s, 11, 9, x, &A));
//     ck_assert_pstr_eq(c, C);
//     ck_assert_int_eq(n, N);
// }
// END_TEST

START_TEST(s21_sprintf_test_10) {
    char c[1590];
    char C[1590];
    float d = -12.99999;
    long double ld = INFINITY;
    long double z = -0;
    const char format[] = "%.15f %.15Lf %+Lf";
    s21_sprintf(c, format, d, ld, z);
    sprintf(C, format, d, ld, z);
    ck_assert_pstr_eq(c, C);
    ck_assert_int_eq(s21_sprintf(c, format, d, ld, z), sprintf(C, format, d, ld, z));
}
END_TEST

START_TEST(s21_sprintf_test_11) {
    char t[1590];
    char T[1590];
    unsigned short int g = -123;
    unsigned int a = 1230;
    unsigned long int b = 123654;
    unsigned long long int c = 7;
    const char format[] = "%u%hu%lu%llu";
    int i = s21_sprintf(t, format, a, g, b, c);
    int I = sprintf(T, format, a, g, b, c);
    ck_assert_pstr_eq(t, T);
    ck_assert_int_eq(i, I);
}
END_TEST

START_TEST(s21_sprintf_test_12) {
    char t[1590];
    char T[1590];
    float f = -INFINITY, ff = -0, fff = NAN;
    double d = -40000000003e-0, dd = -0.003e+10;
    long double ld = -NAN, lld = -0;
    const char format[] = "%%%%%+6.5f%% %+f %+010.10lf %-+9.9lf %+07f %-+10f";
    int i = s21_sprintf(t, format, f, ff, d, dd, fff, f);
    int I = sprintf(T, format, f, ff, d, dd, fff, f);
    ck_assert_pstr_eq(t, T);
    ck_assert_int_eq(i, I);
}
END_TEST

START_TEST(s21_sprintf_test_13) {
    char t[1590];
    char T[1590];
    float a1 = 1e-1;
    float a2 = 2e-2;
    float a3 = 3e-3;
    float a4 = 4e-4;
    float a5 = 5e-5;
    float a6 = 6e-6;
    float a7 = 7e-7;
    float a8 = 8e-8;
    float a9 = 9e-1;
    float a10 = 10e-10;
    float a11 = 11e-11;
    float a12 = 12e-12;
    float a13 = 13e-13;
    float a14 = 14e-14;
    float a15 = 15e-15;
    float a16 = 16e-16;
    const char format[] = "%f %f %f %f %f %f %.7f %.8f%.8f %.9f %.10f %.12f %.13f %.14f %.15f %.16f";
    int i = s21_sprintf(t, format, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
    int I = sprintf(T, format, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
    ck_assert_pstr_eq(t, T);
    ck_assert_int_eq(i, I);
}
END_TEST

START_TEST(s21_sprintf_test_14) {
    char t[1590];
    char T[1590];
    double a1 = 1.01e-1;
    double a2 = 0.99e-2;
    double a3 = 3.33e-3;
    double a4 = 0.1e-4;
    double a5 = -12e-5;
    double a6 = 4e-6;
    double a7 = 4e-7;
    double a8 = 4e-8;
    const char format[] = "%lf %lf %lf %lf %lf %lf %lf %lf";
    int i = s21_sprintf(t, format, a1, a2, a3, a4, a5, a6, a7, a8);
    int I = sprintf(T, format, a1, a2, a3, a4, a5, a6, a7, a8);
    ck_assert_pstr_eq(t, T);
    ck_assert_int_eq(i, I);
}
END_TEST

// START_TEST(s21_sprintf_test_15) {
//     char t[1590];
//     char T[1590];
//     long double a1 = 87.78e1;
//     long double a2 = 99e2;
//     long double a3 = -33.33e3;
//     long double a4 = -100e4;
//     long double a5 = -1e5;
//     long double a6 = 3333e6;
//     long double a7 = 0.003e7;
//     long double a8 = 0.1001e8;
//     const char format[] = "%Lf %Lf %Lf %Lf %Lf %Lf %Lf %Lf";
//     int i = s21_sprintf(t, format, a1, a2, a3, a4, a5, a6, a7, a8);
//     int I = sprintf(T, format, a1, a2, a3, a4, a5, a6, a7, a8);
//     ck_assert_pstr_eq(t, T);
//     ck_assert_int_eq(i, I);
// }
// END_TEST

START_TEST(s21_sprintf_test_16) {
    char t[1590];
    char T[1590];
    float a1 = 0.101;
    float a2 = -1.00101;
    float a3 = 2.0202;
    float a4 = 0.0002002;
    float a5 = -11.0011;
    float a6 = 0.0000000101;
    float a7 = -100000;
    float a8 = 1000000;
    float a9 = 10000000;
    float a10 = 100000000;
    const char format[] = "%f %f %f %f %f %f %f %f %f %f";
    int i = s21_sprintf(t, format, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    int I = sprintf(T, format, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    ck_assert_pstr_eq(t, T);
    ck_assert_int_eq(i, I);
}
END_TEST

START_TEST(s21_sprintf_test_17) {
    char t[1590];
    char T[1590];
    float a1 = 9e1;
    float a2 = 8e2;
    float a3 = 7e3;
    float a4 = 6e4;
    float a5 = 5e5;
    float a6 = 4e6;
    float a7 = 3e7;
    float a8 = 2e8;
    float a9 = 1e9;
    float a10 = -1e10;
    float a11 = -2e11;
    float a12 = -3e12;
    float a13 = -4e13;
    float a14 = -5e14;
    float a15 = -7e15;
    float a16 = -8e16;
    const char format[] = "%f %f %f %f %f %f %f %f%f %f %f %f %f %f %f %f";
    int i = s21_sprintf(t, format, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
    int I = sprintf(T, format, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
    ck_assert_pstr_eq(t, T);
    ck_assert_int_eq(i, I);
}
END_TEST

START_TEST(s21_sprintf_test_18) {
    char t[1590];
    char T[1590];
    char *c = NULL;
    const char format[] = "%s %10s %7.10s %2.2s %-8s";
    int i = s21_sprintf(t, format, c, c, c, c, c);
    int I = sprintf(T, format, c, c, c, c, c);
    ck_assert_pstr_eq(t, T);
    ck_assert_int_eq(i, I);
}
END_TEST

START_TEST(s21_sprintf_test_19) {
    char t[1590];
    char T[1590];
    char c1[] = "1234\t456";
    char c2[] = "d\new";
    char c3[] = "qwerfdsa";
    char c4[] = "7777";
    char c5[] = "q\t\n\0";
    const char format[100] = "%s %11s %8.9s %3.2s %-166s";
    int i = s21_sprintf(t, format, c1, c2, c3, c4, c5);
    int I = sprintf(T, format, c1, c2, c3, c4, c5);
    ck_assert_pstr_eq(t, T);
    ck_assert_int_eq(i, I);
}
END_TEST

    // ###############################################################################################################################################

START_TEST(s21_sprintf_test) {
  char str[1000][1024] = {0};
  char s21_str[1000][1024] = {0};
  char test_str[1000][1024] = {
      "0",
      "1 %%|%c|%d|%i|%f|%s|%u\n",
      "2 %%|%5c|%6.4d|%9.2d|%3.7i|%3.8i|%9.5f|%10s|%4.5u\n",
      "3 %s|%9.5s|%5.9s|%i|%%\n",
      "4 %%|%-5c|%-6.4d|%-9.2d|%-3.7i|%-3.8i|%-9.5f|%-10s|%-4.5u\n",
      "5 %%|%+5c|%+8.4d|%+9.2d|%-3.7i|%-3.8i|%+9.5f|%+10s|%+4.1u\n",
      "6 %%|% 5c|% 8.4d|% 9.2d|% 3.7i|% 3.8i|% 9.5f|% 10s|% 4.2u\n",
      "7 %%|% 5c|% 8.4d|% 9.2d|% 3.7i|% 3.8i|% 9.5f|% 10s|% 4.2u\n",
      "8 cdifsu.*9%ccdifsu.*9%.4dcdifsu.*1",
      "9 cdifsu.*9%6.idifsu.*9%3.1fcdifsu.*1",
      "10 cdifsu.*9%sidifsu.*9%.3ucdifsu.*1",
      "11 LONG_MAX % 5d|% 8.4d|% 3.5d|%3.7d|%7.3d|%+3.8d|%+5.2d|%.0d|"
      "% .0d|%+0.0d|%ld|%hd|%-3.5d|%-5.3d|%-.0d|\n",
      "12 % 5c|% 8.4c|% 3.5c|%3.7c|%7.3c|%+3.8c|%+5.2c|%0.0c|% "
      "0.0c|%+.0c|%lc|%hc|%-3.5c|%-5.3c|%-.0c|\n",
      "13 %5.2hih_%2.5huu_%5.2hd_%9lil_%3ldd_%.lu.",
      "14 LONG_MIN % 5d|% 8.4d|% 3.5d|%3.7d|%7.3d|%+3.8d|%+5.2d|%.0d|"
      "% .0d|%+.0d|%ld|%hd|%-3.5d|%-5.3d|%-.0d|\n"};
  int test_number = 14;

  sprintf(str[1], test_str[1], 'A', 33333, -10, -15.34, "STRING", 20);
  s21_sprintf(s21_str[1], test_str[1], 'A', 33333, -10, -15.34, "STRING", 20);

  sprintf(str[2], test_str[2], 'A', 33333, -4444, -10, 10, -15.34, "STRING",
          20);
  s21_sprintf(s21_str[2], test_str[2], 'A', 33333, -4444, -10, 10, -15.34,
              "STRING", 20);

  sprintf(str[3], test_str[3], "stroka", "9.5str", "5.9stroka", 100);
  s21_sprintf(s21_str[3], test_str[3], "stroka", "9.5str", "5.9stroka", 100);

  sprintf(str[4], test_str[4], 'A', 33333, -4444, -10, 10, 15.34, "STRING", 20);
  s21_sprintf(s21_str[4], test_str[4], 'A', 33333, -4444, -10, 10, 15.34,
              "STRING", 20);

  sprintf(str[5], test_str[5], 'A', 33333, -4444, -10, 10, 15.34, "STRING", 20);
  s21_sprintf(s21_str[5], test_str[5], 'A', 33333, -4444, -10, 10, 15.34,
              "STRING", 20);

  sprintf(str[6], test_str[6], 'A', 33333, -4444, -10, 10, -15.34, "STRING",
          20);
  s21_sprintf(s21_str[6], test_str[6], 'A', 33333, -4444, -10, 10, -15.34,
              "STRING", 20);

  sprintf(str[7], test_str[7], 'A', 0, -0, -0, 0, -0.0, "STRING", 0);
  s21_sprintf(s21_str[7], test_str[7], 'A', 0, -0, -0, 0, -0.0, "STRING", 0);

  sprintf(str[8], test_str[8], 'z', 123);
  s21_sprintf(s21_str[8], test_str[8], 'z', 123);

  sprintf(str[9], test_str[9], 111, 1, 1.123);
  s21_sprintf(s21_str[9], test_str[9], 111, 1, 1.123);

  sprintf(str[10], test_str[10], "abc", 123);
  s21_sprintf(s21_str[10], test_str[10], "abc", 123);

  sprintf(str[11], test_str[11], LONG_MAX, LONG_MAX, LONG_MAX, LONG_MAX,
          LONG_MAX, LONG_MAX, LONG_MAX, LONG_MAX, LONG_MAX, LONG_MAX, LONG_MAX,
          LONG_MAX, LONG_MAX, LONG_MAX, LONG_MAX);
  s21_sprintf(s21_str[11], test_str[11], LONG_MAX, LONG_MAX, LONG_MAX, LONG_MAX,
              LONG_MAX, LONG_MAX, LONG_MAX, LONG_MAX, LONG_MAX, LONG_MAX,
              LONG_MAX, LONG_MAX, LONG_MAX, LONG_MAX, LONG_MAX);

  sprintf(str[12], test_str[12], 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
          'J', 'K', 'M', 'N', 'O', 'P');
  s21_sprintf(s21_str[12], test_str[12], 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
              'I', 'J', 'K', 'M', 'N', 'O', 'P');

  sprintf(str[13], test_str[13], (short)-123, (short)123, (short)-123,
          (long)-2147483648, (long)2147483647, (long)4294967295);
  s21_sprintf(s21_str[13], test_str[13], (short)-123, (short)123, (short)-123,
              (long)-2147483648, (long)2147483647, (long)4294967295);

  sprintf(str[14], test_str[14], LONG_MIN, LONG_MIN, LONG_MIN, LONG_MIN,
          LONG_MIN, LONG_MIN, LONG_MIN, LONG_MIN, LONG_MIN, LONG_MIN, LONG_MIN,
          LONG_MIN, LONG_MIN, LONG_MIN, LONG_MIN);
  s21_sprintf(s21_str[14], test_str[14], LONG_MIN, LONG_MIN, LONG_MIN, LONG_MIN,
              LONG_MIN, LONG_MIN, LONG_MIN, LONG_MIN, LONG_MIN, LONG_MIN,
              LONG_MIN, LONG_MIN, LONG_MIN, LONG_MIN, LONG_MIN);

  for (int i = 1; i < test_number; i++) ck_assert_str_eq(s21_str[i], str[i]);
}
END_TEST

START_TEST(s21_sprintf_test1) {
  char str1[1000];
  char str2[1000];
//   void *p = (void *)0x3456;
//   int n1, n2;
  int r1 = sprintf(str1, "%d|%s|%c|%i|%f|%u|%%|%s|", 25, "aboba", 'a', 123, 4325.23434, 12345u, "hello my friend");
  int r2 = s21_sprintf( str2, "%d|%s|%c|%i|%f|%u|%%|%s|", 25, "aboba", 'a', 123, 4325.23434, 12345u, "hello my friend");
  ck_assert_str_eq(str1, str2);
//   ck_assert_int_eq(n1, n2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test2) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "%+-25.3d%10.f|%015d", 252, 256.34, 15);
  int r2 =s21_sprintf(str2, "%+-25.3d%10.f|%015d", 252, 256.34, 15);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test3) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "str                      |%25.10s", "HELLOMYDEARFRIEND");
  int r2 = s21_sprintf(str2, "str                      |%25.10s", "HELLOMYDEARFRIEND");
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test4) {
  char str1[1000];
  char str2[1000];
//   void *p = (void *)43252342;
  int r1 = sprintf(str1, "%-15.20i%020u", 4567899, 43252342u);
  int r2 = s21_sprintf(str2, "%-15.20i%020u", 4567899, 43252342u);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);

  char str3[50];
  char str4[1000];
  int r3 = sprintf(str3, "%.0f", 25432.34345);
  int r4 = s21_sprintf(str4, "%.0f", 25432.34345);
  ck_assert_str_eq(str3, str4);
  ck_assert_int_eq(r3, r4);
}
END_TEST

START_TEST(s21_sprintf_test_d) {
  char str1[1000];
  char str2[1000];
  short h = 34;
  int r1 = sprintf(
      str1, "%-25.10d%-30.2d%10.12d%11d%d%.d%+-25.d%+10.2ld%-11.hd", 253, 335, 1234, 34, 25, 345, 666, 456789l, h);
  int r2 = s21_sprintf(
      str2, "%-25.10d%-30.2d%10.12d%11d%d%.d%+-25.d%+10.2ld%-11.hd", 253, 335, 1234, 34, 25, 345, 666, 456789l, h);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_i) {
  char str1[1000];
  char str2[1000];
  short h = 34;
  long l = 2353423523424;
  int r1 = sprintf(str1, "%+50.i%-10.20i%10.i%012i%.i%-10.i%+10.1li%.25hi", 34567, 225, 5230, 125, 456, 377, l, h);
  int r2 =
       s21_sprintf(str2, "%+50.i%-10.20i%10.i%012i%.i%-10.i%+10.1li%.25hi", 34567, 225, 5230, 125, 456, 377, l, h);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

// у cppcheck проблемы с wchar_t
START_TEST(s21_sprintf_test_c) {
    char str1[1000];
    char str2[1000];
    wchar_t c1 = 'T', c2 = 'Z';
    int r1 = sprintf(str1, "%10c%-10c%25c%-30c%25c%c%2c%c%lc%-50lc", 'a', 'e', 'f', 'R', 'Q', 'P', 'L', 'x', c1, c2);
    int r2 = s21_sprintf(str2, "%10c%-10c%25c%-30c%25c%c%2c%c%lc%-50lc",'a', 'e', 'f', 'R', 'Q', 'P', 'L', 'x', c1, c2);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_e) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "%+-20e|%010.*e|%-*.16e|%#025.10e|%*.*e|%*.15e|%#010.*e|%25.16e|",
      2543.43254, 10, 1012.34567, 15, -0.00123, 45678.342532, 10, 15, 11111.22,
      16, -3245.3425342, 16, -0.00123, 235423424.43252);
  int r2 = s21_sprintf(
      str2, "%+-20e|%010.*e|%-*.16e|%#025.10e|%*.*e|%*.15e|%#010.*e|%25.16e|",
      2543.43254, 10, 1012.34567, 15, -0.00123, 45678.342532, 10, 15, 11111.22,
      16, -3245.3425342, 16, -0.00123, 235423424.43252);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_E) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "%+-25.4E%25.*E%-*.10E%#02.E%*.*E%*.15E%*E%12.16E",
                   3456.4325, 10, 23452.43242, 5, -0.05234, 25.432523432, 10, 2,
                   53242.4242, 10, 456789.43242, 25, 1111122222.34567899,
                   2345678.23453242);
  int r2 = s21_sprintf(str2, "%+-25.4E%25.*E%-*.10E%#02.E%*.*E%*.15E%*E%12.16E",
                       3456.4325, 10, 23452.43242, 5, -0.05234, 25.432523432,
                       10, 2, 53242.4242, 10, 456789.43242, 25,
                       1111122222.34567899, 2345678.23453242);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_f) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "%+-10.5f%+10.2f%15.16f%+*.10f%*.16f%-10.*f%25.*f%25.f%#+10.f%*.*f", 2546.4324, 3452.4325, 5678.43256, 25, 456789.243242, 10, 3456789123.43245, 2, 12345.6788, 1, 34.4325432, 4325678.43242, 34567.2345432, 10, 2, 34567.43244);
  int r2 = s21_sprintf(
      str2, "%+-10.5f%+10.2f%15.16f%+*.10f%*.16f%-10.*f%25.*f%25.f%#+10.f%*.*f", 2546.4324, 3452.4325, 5678.43256, 25, 456789.243242, 10, 3456789123.43245, 2, 12345.6788, 1, 34.4325432, 4325678.43242, 34567.2345432, 10, 2, 34567.43244);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_o) {
  char str1[1000];
  char str2[1000];
  unsigned short h = 253;
  unsigned long l = 4325234324242l;
  int r1 = sprintf(str1, "%-25.10o%-10o%#-30.2o%#*.10o%#*.*o%25.*o%#.10ho%*lo",
                   12345, 6532, 43522, 10, 64342, 15, 2, 343, 6, 678, h, 10, l);
  int r2 =
      s21_sprintf(str2, "%-25.10o%-10o%#-30.2o%#*.10o%#*.*o%25.*o%#.10ho%*lo",
                  12345, 6532, 43522, 10, 64342, 15, 2, 343, 6, 678, h, 10, l);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_x) {
  char str1[1000];
  char str2[1000];
  unsigned short h = 345;
  unsigned long l = 52342353242l;
  int r1 = sprintf(str1,
                   "%x%-25x%#10x%#-10x%#10.5x%-25.34x%#-10.2x%*.*x%#*.10x%20.*"
                   "x%#10.*x%*.5hx%10.25lx",
                   235, 1234, 3456, 12345, 222234, 68432, 34567, 10, 15, 3452,
                   8, 23452, 10, 34254, 3, 33334, 10, h, l);
  int r2 = s21_sprintf(str2,
                       "%x%-25x%#10x%#-10x%#10.5x%-25.34x%#-10.2x%*.*x%#*.10x%"
                       "20.*x%#10.*x%*.5hx%10.25lx",
                       235, 1234, 3456, 12345, 222234, 68432, 34567, 10, 15,
                       3452, 8, 23452, 10, 34254, 3, 33334, 10, h, l);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_X) {
  char str1[1000];
  char str2[1000];
  unsigned short h = 234;
  unsigned long l = 4325243132l;
  int r1 = sprintf(str1,
                   "%X%-10X%15X%#-15X%#20.3X%-30.12X%#-12.3X%*.*X%#*.15X%21.*X%"
                   "#12.*X%*.8hx%14.12lX",
                   235, 1234, 3456, 12345, 222234, 68432, 34567, 10, 15, 3452,
                   8, 23452, 10, 34254, 3, 33334, 10, h, l);
  int r2 = s21_sprintf(str2,
                       "%X%-10X%15X%#-15X%#20.3X%-30.12X%#-12.3X%*.*X%#*.15X%"
                       "21.*X%#12.*X%*.8hx%14.12lX",
                       235, 1234, 3456, 12345, 222234, 68432, 34567, 10, 15,
                       3452, 8, 23452, 10, 34254, 3, 33334, 10, h, l);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_u) {
  char str1[1000];
  char str2[1000];
  unsigned short h = 115;
  unsigned long l = 123325242342l;
  int r1 =
      sprintf(str1, "%u%15u%-20u%010u%-15.10u%20.u%.u%.10u%-20.12lu%19hu",
              4321u, 34567u, 2342u, 12346u, 234542u, 234523u, 2345u, 2432u, l, h);
  int r2 = s21_sprintf(
      str2, "%u%15u%-20u%010u%-15.10u%20.u%.u%.10u%-20.12lu%19hu", 4321u, 34567u, 2342u, 12346u, 234542u, 234523u, 2345u, 2432u, l,
      h);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_s) {
  char str1[1000];
  char str2[1000];
  wchar_t s[10] = {'h', 'e', 'l', 'l', 'o'};
  int r1 =
      sprintf(str1, "%s|%23s|%-15s|%10.s|%15.2s|%16.s|%.s|%s|%15ls|%15.3ls", "aboba", "helloworld", "ABOBA", "ABOBBAAA", "AAABOBA", "QWERTY", "AAAAABOOOOOBAAA", "ABOBAAAAA", s, s);
  int r2 = s21_sprintf(str2, "%s|%23s|%-15s|%10.s|%15.2s|%16.s|%.s|%s|%15ls|%15.3ls", "aboba", "helloworld", "ABOBA", "ABOBBAAA", "AAABOBA", "QWERTY", "AAAAABOOOOOBAAA", "ABOBAAAAA", s, s);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_p) {
  char str1[1000];
  char str2[1000];
  void *p1 = (void *)0x123456789;
  void *p2 = (void *)4325234;
  void *p3 = (void *)0x123f324b;
  void *p4 = (void *)432520;
  int r1 = sprintf(str1, "%p%20p%-15p%10p%-15p%*p%10p%*p", p1, p2, p3, p4, p2,
                   10, p3, p1, 10, p4);
  int r2 = s21_sprintf(str2, "%p%20p%-15p%10p%-15p%*p%10p%*p", p1, p2, p3, p4,
                       p2, 10, p3, p1, 10, p4);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_percent1) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
  int r2 = s21_sprintf(str2, "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_g) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(
      str1, "%g%23g%-10g%015g%#10.5g%0#15.10g%+10.6g%#*.g%-10.*g%+#25.8g",
      2345.4324, 23445.2342, 1234.234242, 3456.3424, 0.00001234,
      -324234.234, 2345.4234, 5, 23456.4324, 9, 234567.43242, 0.0000034);
  int r2 = s21_sprintf(
      str2, "%g%23g%-10g%015g%#10.5g%0#15.10g%+10.6g%#*.g%-10.*g%+#25.8g",
      2345.4324, 23445.2342, 1234.234242, 3456.3424, 0.00001234,
      -324234.234, 2345.4234, 5, 23456.4324, 9, 234567.43242, 0.0000034);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(s21_sprintf_test_G) {
    char str1[1000];
    char str2[1000];
    int r1 = sprintf(
        str1,
        "%G%25G%#-15G%017G%#05.2G%#010.16G%+#8.6G%*.8G%#-10.*G%+#12.16G%*.*G",
        43242.43242, 123432.43242, 0000.1234, -34252.43242, 1234.5,
        111.432534243243242, 4324.43242, 25, -3213.43242, 16,
        -43.43242353242342, 111.24324242, 25, 5, 0.000000342);
    int r2 = s21_sprintf(
        str2,
        "%G%25G%#-15G%017G%#05.2G%#010.16G%+#8.6G%*.8G%#-10.*G%+#12.16G%*.*G",
        43242.43242, 123432.43242, 0000.1234, -34252.43242, 1234.5,
        111.432534243243242, 4324.43242, 25, -3213.43242, 16,
        -43.43242353242342, 111.24324242, 25, 5, 0.000000342);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(r1, r2);
}
END_TEST

START_TEST(printf_cTest) {
  short length = 100;
  char *str1 = calloc(length, sizeof(char));
  char *str2 = calloc(length, sizeof(char));
  int res1 = 0, res2 = 0;
  res1 = s21_sprintf(str1, "%c %c %c", ' ', '#', '@');
  res2 = sprintf(str2, "%c %c %c", ' ', '#', '@');
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(res1, res2);
  free(str1);
  free(str2);
}
END_TEST

START_TEST(printf_dTest) {
  short length = 100;
  char *str1 = calloc(length, sizeof(char));
  char *str2 = calloc(length, sizeof(char));
  int res1 = 0, res2 = 0;
  long int n = 3;
  res1 = s21_sprintf(str1, "%ld%.5d  % d   %+d %d%-2.d", n, 3, 2, 46, -53, 9);
  res2 = sprintf(str2, "%ld%.5d  % d   %+d %d%-2.d", n, 3, 2, 46, -53, 9);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(res1, res2);
  free(str1);
  free(str2);
}
END_TEST

START_TEST(printf_iTest) {
  short length = 100;
  char *str1 = calloc(length, sizeof(char));
  char *str2 = calloc(length, sizeof(char));
  int res1 = 0, res2 = 0;
  short int n = 11;
  res1 = s21_sprintf(str1, "%hi %.5i %i", n, -46, 57);
  res2 = sprintf(str2, "%hi %.5i %i", n, -46, 57);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(res1, res2);
  free(str1);
  free(str2);
}
END_TEST

START_TEST(printf_fTest) {
  short length = 100;
  char *str1 = calloc(length, sizeof(char));
  char *str2 = calloc(length, sizeof(char));
  int res1 = 0, res2 = 0;
//   long double n = -7.0004522;
//   res1 = s21_sprintf(str1, "%Lf", n);
//   res2 = sprintf(str2, "%Lf", n);
//   ck_assert_str_eq(str1, str2);
//   ck_assert_int_eq(res1, res2);
//   free(str1);
//   free(str2);

  str1 = calloc(length, sizeof(char));
  str2 = calloc(length, sizeof(char));

  double m = -7.000;
  res1 = s21_sprintf(str1, "%f", m);
  res2 = sprintf(str2, "%f", m);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(res1, res2);

  free(str1);
  free(str2);
}
END_TEST

START_TEST(printf_sTest) {
  short length = 100;
  char *str1 = calloc(length, sizeof(char));
  char *str2 = calloc(length, sizeof(char));
  int res1 = 0, res2 = 0;
  res1 = s21_sprintf(str1, "%.s %.3s %s", "Hello", " world", "!");
  res2 = sprintf(str2, "%.s %.3s %s", "Hello", " world", "!");
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(res1, res2);
  free(str1);
  free(str2);
}
END_TEST

START_TEST(printf_uTest) {
  short length = 100;
  char *str1 = calloc(length, sizeof(char));
  char *str2 = calloc(length, sizeof(char));
  int res1 = 0, res2 = 0;
  unsigned short n = 2;
  unsigned long m = 33;
  res1 = s21_sprintf(str1, "%hu %lu %u", n, m, (unsigned)58432322);
  res2 = sprintf(str2, "%hu %lu %u", n, m, (unsigned)58432322);
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(res1, res2);
  free(str1);
  free(str2);
}
END_TEST

// ###############################################################################################################################################



START_TEST(SPRINTF_FLOAT) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_FLOAT_PREC) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%.5f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_FLOAT_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_FLOAT_H_PREC) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5.5f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_FLOAT_MINUS) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%-5f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_FLOAT_MINUS_DIGIT) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%f";
  float f = -7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_FLOAT_SPACE) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "% f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_FLOAT_PLUS_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%+5f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_FLOAT_LONG) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%.16f";
  float f = 7.891235551512512321;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_DECIMAL) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%d";
  int d = 5;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_DECIMAL_PREC) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5d";
  int d = 5;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_DECIMAL_L) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%ld";
  long long d = LONG_MAX;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_DECIMAL_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%hd";
  int d = INT_MAX;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_DECIMAL_MINUS_DIGIT) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%d";
  int d = -5;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_DECIMAL_MINUS_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%-5d";
  int d = -5;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_DECIMAL_PLUS_DIGIT) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%+d";
  int d = 5;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_DECIMAL_SPACE) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "% d";
  int d = 5;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_UNSIGNED) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%u";
  unsigned int u = 5;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_UNSIGNED_MINUS_DIGIT) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%u";
  unsigned int u = -5;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_UNSIGNED_LONG) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%lu";
  unsigned long int u = ULONG_MAX;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_UNSIGNED_SHORT) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%hu";
  unsigned long int u = USHRT_MAX;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_UNSIGNED_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5u";
  unsigned int u = 5;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_UNSIGNED_MINUS_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%-5u";
  unsigned int u = 5;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_UNSIGNED_SPACE) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "% u";
  unsigned int u = 5;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_CHAR) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%c";
  char c = 'c';
  sprintf(result, format_str, c);
  s21_sprintf(result_s21, format_str, c);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_CHAR_DIGIT) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%c";
  int c = 48;
  sprintf(result, format_str, c);
  s21_sprintf(result_s21, format_str, c);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_CHAR_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5c";
  int c = 48;
  sprintf(result, format_str, c);
  s21_sprintf(result_s21, format_str, c);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_CHAR_MINUS_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%-5c";
  int c = 48;
  sprintf(result, format_str, c);
  s21_sprintf(result_s21, format_str, c);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_CHAR_SPACE) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "% c";
  int c = 48;
  sprintf(result, format_str, c);
  s21_sprintf(result_s21, format_str, c);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_STRING) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%s";
  char s[] = "ABOBA";
  sprintf(result, format_str, s);
  s21_sprintf(result_s21, format_str, s);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_STRING_SYMBOLS) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%s";
  char s[] = "A\nB\tO\vB\rA\0C";
  sprintf(result, format_str, s);
  s21_sprintf(result_s21, format_str, s);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_STRING_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5s";
  char s[] = "ABOBA";
  sprintf(result, format_str, s);
  s21_sprintf(result_s21, format_str, s);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_STRING_MINUS_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%-5s";
  char s[] = "ABOBA";
  sprintf(result, format_str, s);
  s21_sprintf(result_s21, format_str, s);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_STRING_SPACE) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "% s";
  char s[] = "ABOBA";
  sprintf(result, format_str, s);
  s21_sprintf(result_s21, format_str, s);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_I_DEC) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%i";
  int i = 5;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_I_OCTAL) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%i";
  int i = 05;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_I_HEX) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%i";
  int i = 0xF;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_I_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5i";
  int i = 05;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_I_MINUS_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%-5i";
  int i = 05;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_I_PLUS) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%+i";
  int i = 05;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_I_PLUS_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%+5i";
  int i = 05;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_I_SPACE) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "% i";
  int i = 05;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
} END_TEST

// ###############################################################################################################################################

START_TEST(s21_sprintf_d) {
  char* s21_test_str = (char*)malloc(sizeof(char) * 256);
  char* lib_test_str = (char*)malloc(sizeof(char) * 256);
  int min = -2147483648;
  int max = 2147483647;

  int lib_res = sprintf(lib_test_str, "|%d| |%d| |% d| |%+d| |%d| |%-5d| |%05d| |%+5d| |%5d| |%20.15d| |%+.0d| |%5.15d|\n", 12, 0, 12, max, min, 12, 12, 12, -12, 12, 12, -12);
  int s21_res = s21_sprintf(s21_test_str, "|%d| |%d| |% d| |%+d| |%d| |%-5d| |%05d| |%+5d| |%5d| |%20.15d| |%+.0d| |%5.15d|\n", 12, 0, 12, max, min, 12, 12, 12, -12, 12, 12, -12);

  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);

  free(s21_test_str);
  free(lib_test_str);
} END_TEST

START_TEST(s21_sprintf_i) {
  char* s21_test_str = (char*)malloc(sizeof(char) * 256);
  char* lib_test_str = (char*)malloc(sizeof(char) * 256);

  int lib_res = sprintf(lib_test_str, "|%i| |% i| |%+i| |%i| |%-5i| |%5i| |%+5i| |%5i|\n", 12, 12, 12, -12, 12, 12, 12, -12);
  int s21_res = s21_sprintf(s21_test_str, "|%i| |% i| |%+i| |%i| |%-5i| |%5i| |%+5i| |%5i|\n", 12, 12, 12, -12, 12, 12, 12, -12);

  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);

  free(s21_test_str);
  free(lib_test_str);
} END_TEST

START_TEST(s21_sprintf_star) {
	char* s21_test_str = (char*)malloc(sizeof(char) * 256);
	char* lib_test_str = (char*)malloc(sizeof(char) * 256);

	int lib_res = sprintf(lib_test_str, "%.d\n", 5);
	int s21_res = s21_sprintf(s21_test_str, "%.d\n", 5);

	ck_assert_str_eq(s21_test_str, lib_test_str);
	ck_assert_int_eq(s21_res, lib_res);

	free(s21_test_str);
	free(lib_test_str);
} END_TEST

START_TEST(s21_sprintf_u) {
  char* s21_test_str = (char*)malloc(sizeof(char) * 256);
  char* lib_test_str = (char*)malloc(sizeof(char) * 256);
	unsigned int u = 2147483647;
	unsigned int a = 0;
	unsigned int b = 102;
	unsigned int c = 12;
	unsigned int d = 120;
	unsigned int e = 1200;
	unsigned int f = 14895085;

	int lib_res = sprintf(lib_test_str, "|%u| |%u| |%u| |%-20u| |%u| |%07u| |%5u| |%.20u| |%-20.15u| |%u|\n",
												u, a, b, c, f, c, c, c, d, e);
  int s21_res = s21_sprintf(s21_test_str, "|%u| |%u| |%u| |%-20u| |%u| |%07u| |%5u| |%.20u| |%-20.15u| |%u|\n",
														u, a, b, c, f, c, c, c, d, e);

  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);

  free(s21_test_str);
  free(lib_test_str);
} END_TEST

START_TEST(s21_sprintf_f) {
  char* s21_test_str = (char*)malloc(sizeof(char) * 256);
  char* lib_test_str = (char*)malloc(sizeof(char) * 256);

  int lib_res = sprintf(lib_test_str, "|%f| |% f| |%+f| |%f| |%-8f| |%8f| |%+8f| |%8f|\n", 0.020, 0.020, 0.020, -0.020, 0.020, 0.020, 0.020, -0.020);
  int s21_res = s21_sprintf(s21_test_str, "|%f| |% f| |%+f| |%f| |%-8f| |%8f| |%+8f| |%8f|\n", 0.020, 0.020, 0.020, -0.020, 0.020, 0.020, 0.020, -0.020);

  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);

  free(s21_test_str);
  free(lib_test_str);
} END_TEST

// START_TEST(s21_sprintf_eE) {
//   char* s21_test_str = (char*)malloc(sizeof(char) * 256);
//   char* lib_test_str = (char*)malloc(sizeof(char) * 256);

//   int lib_res = sprintf(lib_test_str, "|%e| |% E| |%+e| |%E| |%-8e| |%08E| |%+08E| |%08e|\n", 0.020, 0.020, 0.020, -344.020, 344.020, 344.020, 344.020, -344.020);
//   int s21_res = s21_sprintf(s21_test_str, "|%e| |% E| |%+e| |%E| |%-8e| |%08E| |%+08E| |%08e|\n", 0.020, 0.020, 0.020, -344.020, 344.020, 344.020, 344.020, -344.020);

//   ck_assert_str_eq(s21_test_str, lib_test_str);
//   ck_assert_int_eq(s21_res, lib_res);

//   free(s21_test_str);
//   free(lib_test_str);
// } END_TEST

// START_TEST(s21_sprintf_o) {
//   char* s21_test_str = (char*)malloc(sizeof(char) * 256);
//   char* lib_test_str = (char*)malloc(sizeof(char) * 256);
//   int i = 2147483647;

//   int lib_res = sprintf(lib_test_str, "|%o| |%#o| |%#o| |%o| |%8o| |%#015o| |%-15o| |%#-15o|\n", 286546, 0, i, 286546, 286546, 286546, 286546, 286546);
//   int s21_res = s21_sprintf(s21_test_str, "|%o| |%#o| |%#o| |%o| |%8o| |%#015o| |%-15o| |%#-15o|\n", 286546, 0, i, 286546, 286546, 286546, 286546, 286546);

//   ck_assert_str_eq(s21_test_str, lib_test_str);
//   ck_assert_int_eq(s21_res, lib_res);

//   free(s21_test_str);
//   free(lib_test_str);
// } END_TEST


// START_TEST(s21_sprintf_xX) {
//   char* s21_test_str = (char*)malloc(sizeof(char) * 256);
//   char* lib_test_str = (char*)malloc(sizeof(char) * 256);
//   int i = 2147483647;

//   int lib_res = sprintf(lib_test_str, "|%x| |%#x| |%012x| |%x| |%-8X| |%08X| |%#08X| |%#20X|\n", 286546, 0, i, 286546, 286546, 286546, 286546, 286546);
//   int s21_res = s21_sprintf(s21_test_str, "|%x| |%#x| |%012x| |%x| |%-8X| |%08X| |%#08X| |%#20X|\n", 286546, 0, i, 286546, 286546, 286546, 286546, 286546);

//   ck_assert_str_eq(s21_test_str, lib_test_str);
//   ck_assert_int_eq(s21_res, lib_res);

//   free(s21_test_str);
//   free(lib_test_str);
// } END_TEST

// START_TEST(s21_sprintf_gG) {
// 	char* s21_test_str = (char*)malloc(sizeof(char) * 256);
// 	char* lib_test_str = (char*)malloc(sizeof(char) * 256);
// 	int lib_res = sprintf(lib_test_str, "|%.2g| |%12.4G| |%-15.5g| |%+5.15g| |%015.13g| |%#15.3g| |%+#10.3G| |%10.0G| |%10.0G|",
// 					45333.200000, 123245.21324, 1.21324, 0.0, -123245.21324, 453.205, 453.205, 453.205, 453.205);
// 	int s21_res = s21_sprintf(s21_test_str, "|%.2g| |%12.4G| |%-15.5g| |%+5.15g| |%015.13g| |%#15.3g| |%+#10.3G| |%10.0G| |%10.0G|",
// 							45333.200000, 123245.21324, 1.21324, 0.0, -123245.21324, 453.205, 453.205, 453.205, 453.205);

// 	ck_assert_str_eq(s21_test_str, lib_test_str);
// 	ck_assert_int_eq(s21_res, lib_res);

// 	free(s21_test_str);
// 	free(lib_test_str);
// } END_TEST

// START_TEST(s21_sprintf_p) {
//   char* s21_test_str = (char*)malloc(sizeof(char) * 256);
//   char* lib_test_str = (char*)malloc(sizeof(char) * 256);
//   int i = 2147483647;
//   int a;
//   int b;
//   char c;

//   int lib_res = sprintf(lib_test_str, "|%p| |%20p| |%p| |%-15p| |%p|\n", &i, &a, &b, &c, &i);
//   int s21_res = s21_sprintf(s21_test_str, "|%p| |%20p| |%p| |%-15p| |%p|\n", &i, &a, &b, &c, &i);

//   ck_assert_str_eq(s21_test_str, lib_test_str);
//   ck_assert_int_eq(s21_res, lib_res);

//   free(s21_test_str);
//   free(lib_test_str);
// } END_TEST

START_TEST(s21_sprintf_s) {
  char* s21_test_str = (char*)malloc(sizeof(char) * 256);
  char* lib_test_str = (char*)malloc(sizeof(char) * 256);

  int lib_res = sprintf(lib_test_str, "|%20s| |%-20s| |%5.0s| |%.1s|\n", "Hi", "My", "Hi", "My");
  int s21_res = s21_sprintf(s21_test_str, "|%20s| |%-20s| |%5.0s| |%.1s|\n", "Hi", "My", "Hi", "My");

  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);

  free(s21_test_str);
  free(lib_test_str);
} END_TEST

START_TEST(s21_sprintf_h) {
	char* s21_test_str = (char*)malloc(sizeof(char) * 256);
	char* lib_test_str = (char*)malloc(sizeof(char) * 256);

	short i = 0;
	short a = 32767;
	unsigned short b = 65535;
	unsigned long c = 4294967295;
	int lib_res = sprintf(lib_test_str, "|%hi| |%hd| |%hu|", i, a, i);
	int s21_res = s21_sprintf(s21_test_str, "|%hi| |%hd| |%hu|",i, a, i);

	ck_assert_str_eq(s21_test_str, lib_test_str);
	ck_assert_int_eq(s21_res, lib_res);

	free(s21_test_str);
	free(lib_test_str);
} END_TEST

START_TEST(s21_sprintf_l) {
	char* s21_test_str = (char*)malloc(sizeof(char) * 256);
	char* lib_test_str = (char*)malloc(sizeof(char) * 256);
	long i = LONG_MAX;
	long a = LONG_MIN;
	unsigned long b = 4294967295;
	int lib_res = sprintf(lib_test_str, "|%li| |%ld| |%lu|",i, a, b, b);
	int s21_res = s21_sprintf(s21_test_str, "|%li| |%ld| |%lu|",i, a, b);

	ck_assert_str_eq(s21_test_str, lib_test_str);
	ck_assert_int_eq(s21_res, lib_res);

	free(s21_test_str);
	free(lib_test_str);
} END_TEST

// START_TEST(s21_sprintf_L) {
// 	char* s21_test_str = (char*)malloc(sizeof(char) * 256);
// 	char* lib_test_str = (char*)malloc(sizeof(char) * 256);

// 	long double i = 12345675.12345678;

// 	int lib_res = sprintf(lib_test_str, "|%Le| |%LE| |%Lf| |%Lg| |%LG| ",i, i, i, i, i);
// 	int s21_res = s21_sprintf(s21_test_str, "|%Le| |%LE| |%Lf| |%Lg| |%LG| ",i, i, i, i, i);

// 	ck_assert_str_eq(s21_test_str, lib_test_str);
// 	ck_assert_int_eq(s21_res, lib_res);

// 	free(s21_test_str);
// 	free(lib_test_str);
// } END_TEST

// START_TEST(s21_sprintf_n) {
//   char* s21_test_str = (char*)malloc(sizeof(char) * 256);
//   char* lib_test_str = (char*)malloc(sizeof(char) * 256);
//   int size_s211;
//   int size_lib1;
// 	int size_s212;
// 	int size_lib2;
// 	int size_s213;
// 	int size_lib3;

//   int s21_res = s21_sprintf(s21_test_str, "%nHel%%lo%n world%n\n", &size_s211, &size_s212, &size_s213);
// 	int lib_res = sprintf(lib_test_str, "%nHel%%lo%n world%n\n", &size_lib1, &size_lib2, &size_lib3);

//   ck_assert_int_eq(size_s211, size_lib1);
//   ck_assert_int_eq(size_s212, size_lib2);
//   ck_assert_int_eq(size_s213, size_lib3);
//   ck_assert_str_eq(s21_test_str, lib_test_str);
//    ck_assert_int_eq(s21_res, lib_res);
//   free(s21_test_str);
//   free(lib_test_str);
// } END_TEST

START_TEST(s21_sprintf_diu_whith_str) {
  char* s21_test_str = (char*)malloc(sizeof(char) * 256);
  char* lib_test_str = (char*)malloc(sizeof(char) * 256);

  long number = 100000000;
	short number1 = 5;
  int lib_res = sprintf(lib_test_str,
    "%d Hello, %10u it's a great % hd, %-10i, %d, %+10d, %ld\n", 0, 1, number1, 3, -4, 5, number);
  int s21_res = s21_sprintf(s21_test_str,
    "%d Hello, %10u it's a great % hd, %-10i, %d, %+10d, %ld\n", 0, 1, number1, 3, -4, 5, number);

  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);

  free(s21_test_str);
  free(lib_test_str);
} END_TEST

START_TEST(s21_sprintf_cs) {
  char* s21_test_str = (char*)malloc(sizeof(char) * 256);
  char* lib_test_str = (char*)malloc(sizeof(char) * 256);

  char* str0 = "User";
  char* str1 = "";
  int lib_res = sprintf(lib_test_str, "Hello, %-13s, i%c, %s a great day!", str0, 't', str1);
  int s21_res = s21_sprintf(s21_test_str, "Hello, %-13s, i%c, %s a great day!", str0, 't', str1);

  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);

  free(s21_test_str);
  free(lib_test_str);
} END_TEST

START_TEST(s21_sprintf_f_with_str) {
  char* s21_test_str = (char*)malloc(sizeof(char) * 512);
  char* lib_test_str = (char*)malloc(sizeof(char) * 512);

  int lib_res = sprintf(lib_test_str, "Hello%.10f, my %.2f, beautiful %+10.f,world %-5.3f", 0.2, 0.12345, 0.3, -0.23246);
  int s21_res = s21_sprintf(s21_test_str, "Hello%.10f, my %.2f, beautiful %+10.f,world %-5.3f", 0.2, 0.12345, 0.3, -0.23246);

  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);

  free(s21_test_str);
  free(lib_test_str);
} END_TEST

START_TEST(s21_sprintf_empty) {
  char* s21_test_str = (char*)malloc(sizeof(char) * 512);
  char* lib_test_str = (char*)malloc(sizeof(char) * 512);

  int lib_res = sprintf(lib_test_str, "%c", '\0');
  int s21_res = s21_sprintf(s21_test_str, "%c", '\0');

  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);

  free(s21_test_str);
  free(lib_test_str);
} END_TEST




// ###############################################################################################################################################

Suite *suite_sprintf() {
    Suite *s25;
    TCase *tc1_1;
    s25 = suite_create("s21_SPRINTF");
    tc1_1 = tcase_create("case_sprintf");






tcase_add_test(tc1_1, s21_sprintf_test_1__);
tcase_add_test(tc1_1, s21_sprintf_test_2__);
tcase_add_test(tc1_1, s21_sprintf_test_3__);
tcase_add_test(tc1_1, s21_sprintf_test_4__);
tcase_add_test(tc1_1, s21_sprintf_test_5__);
tcase_add_test(tc1_1, s21_sprintf_test_6__);
tcase_add_test(tc1_1, s21_sprintf_test_7__);
tcase_add_test(tc1_1, s21_sprintf_test_8__);
tcase_add_test(tc1_1, s21_sprintf_test_9__);
tcase_add_test(tc1_1, s21_sprintf_test_10__);
tcase_add_test(tc1_1, s21_sprintf_test_11__);
tcase_add_test(tc1_1, s21_sprintf_test_12__);
tcase_add_test(tc1_1, s21_sprintf_test_13__);
tcase_add_test(tc1_1, s21_sprintf_test_14__);
tcase_add_test(tc1_1, s21_sprintf_test_15__);
tcase_add_test(tc1_1, s21_sprintf_test_16__);
tcase_add_test(tc1_1, s21_sprintf_test_17__);
tcase_add_test(tc1_1, s21_sprintf_test_18__);
tcase_add_test(tc1_1, s21_sprintf_test_19__);
tcase_add_test(tc1_1, s21_sprintf_test_20__);
tcase_add_test(tc1_1, s21_sprintf_test_21__);
tcase_add_test(tc1_1, s21_sprintf_test_22__);
tcase_add_test(tc1_1, s21_sprintf_test_23__);
tcase_add_test(tc1_1, s21_sprintf_test_24__);
tcase_add_test(tc1_1, s21_sprintf_test_25__);
tcase_add_test(tc1_1, s21_sprintf_test_26__);
tcase_add_test(tc1_1, s21_sprintf_test_27__);
tcase_add_test(tc1_1, s21_sprintf_test_28__);
tcase_add_test(tc1_1, s21_sprintf_test_29__);
tcase_add_test(tc1_1, s21_sprintf_test_30__);
tcase_add_test(tc1_1, s21_sprintf_test_31__);
tcase_add_test(tc1_1, s21_sprintf_test_32__);
tcase_add_test(tc1_1, s21_sprintf_test_33__);
tcase_add_test(tc1_1, s21_sprintf_test_34__);
tcase_add_test(tc1_1, s21_sprintf_test_35__);
tcase_add_test(tc1_1, s21_sprintf_test_36__);
tcase_add_test(tc1_1, s21_sprintf_test_37__);
tcase_add_test(tc1_1, s21_sprintf_test_38__);
tcase_add_test(tc1_1, s21_sprintf_test_39__);
tcase_add_test(tc1_1, s21_sprintf_test_40__);
tcase_add_test(tc1_1, s21_sprintf_test_41__);
tcase_add_test(tc1_1, s21_sprintf_test_42__);
tcase_add_test(tc1_1, s21_sprintf_test_43__);
tcase_add_test(tc1_1, s21_sprintf_test_44__);
tcase_add_test(tc1_1, s21_sprintf_test_45__);
tcase_add_test(tc1_1, s21_sprintf_test_46__);
tcase_add_test(tc1_1, s21_sprintf_test_47__);
tcase_add_test(tc1_1, s21_sprintf_test_48__);
tcase_add_test(tc1_1, s21_sprintf_test_49__);
tcase_add_test(tc1_1, s21_sprintf_test_50__);
tcase_add_test(tc1_1, s21_sprintf_test_51__);
tcase_add_test(tc1_1, s21_sprintf_test_52__);
tcase_add_test(tc1_1, s21_sprintf_test_53__);
tcase_add_test(tc1_1, s21_sprintf_test_54__);
tcase_add_test(tc1_1, s21_sprintf_test_55__);
tcase_add_test(tc1_1, s21_sprintf_test_56__);
tcase_add_test(tc1_1, s21_sprintf_test_57__);
tcase_add_test(tc1_1, s21_sprintf_test_58__);
tcase_add_test(tc1_1, s21_sprintf_test_59__);
tcase_add_test(tc1_1, s21_sprintf_test_60__);
tcase_add_test(tc1_1, s21_sprintf_test_61__);
tcase_add_test(tc1_1, s21_sprintf_test_62__);
tcase_add_test(tc1_1, s21_sprintf_test_63__);
tcase_add_test(tc1_1, s21_sprintf_test_64__);
tcase_add_test(tc1_1, s21_sprintf_test_65__);
tcase_add_test(tc1_1, s21_sprintf_test_66__);
tcase_add_test(tc1_1, s21_sprintf_test_67__);
tcase_add_test(tc1_1, s21_sprintf_test_68__);
tcase_add_test(tc1_1, s21_sprintf_test_69__);
tcase_add_test(tc1_1, s21_sprintf_test_70__);
tcase_add_test(tc1_1, s21_sprintf_test_71__);
tcase_add_test(tc1_1, s21_sprintf_test_72__);
tcase_add_test(tc1_1, s21_sprintf_test_73__);
tcase_add_test(tc1_1, s21_sprintf_test_74__);
tcase_add_test(tc1_1, s21_sprintf_test_75__);
tcase_add_test(tc1_1, s21_sprintf_test_76__);
tcase_add_test(tc1_1, s21_sprintf_test_77__);
tcase_add_test(tc1_1, s21_sprintf_test_78__);
tcase_add_test(tc1_1, s21_sprintf_test_79__);
tcase_add_test(tc1_1, s21_sprintf_test_80__);
tcase_add_test(tc1_1, s21_sprintf_test_81__);
tcase_add_test(tc1_1, s21_sprintf_test_82__);
tcase_add_test(tc1_1, s21_sprintf_test_83__);
tcase_add_test(tc1_1, s21_sprintf_test_84__);
tcase_add_test(tc1_1, s21_sprintf_test_85__);
tcase_add_test(tc1_1, s21_sprintf_test_86__);
tcase_add_test(tc1_1, s21_sprintf_test_87__);
tcase_add_test(tc1_1, s21_sprintf_test_88__);
tcase_add_test(tc1_1, s21_sprintf_test_89__);
tcase_add_test(tc1_1, s21_sprintf_test_90__);
tcase_add_test(tc1_1, s21_sprintf_test_91__);
tcase_add_test(tc1_1, s21_sprintf_test_92__);
tcase_add_test(tc1_1, s21_sprintf_test_93__);
tcase_add_test(tc1_1, s21_sprintf_test_94__);
tcase_add_test(tc1_1, s21_sprintf_test_95__);
tcase_add_test(tc1_1, s21_sprintf_test_96__);
tcase_add_test(tc1_1, s21_sprintf_test_97__);
tcase_add_test(tc1_1, s21_sprintf_test_98__);
tcase_add_test(tc1_1, s21_sprintf_test_99__);
tcase_add_test(tc1_1, s21_sprintf_test_100__);
tcase_add_test(tc1_1, s21_sprintf_test_101__);
tcase_add_test(tc1_1, s21_sprintf_test_102__);
tcase_add_test(tc1_1, s21_sprintf_test_103__);
tcase_add_test(tc1_1, s21_sprintf_test_104__);
tcase_add_test(tc1_1, s21_sprintf_test_105__);
tcase_add_test(tc1_1, s21_sprintf_test_106__);
tcase_add_test(tc1_1, s21_sprintf_test_107__);
tcase_add_test(tc1_1, s21_sprintf_test_108__);
tcase_add_test(tc1_1, s21_sprintf_test_109__);
tcase_add_test(tc1_1, s21_sprintf_test_110__);
tcase_add_test(tc1_1, s21_sprintf_test_111__);
tcase_add_test(tc1_1, s21_sprintf_test_112__);
tcase_add_test(tc1_1, s21_sprintf_test_113__);
tcase_add_test(tc1_1, s21_sprintf_test_114__);
tcase_add_test(tc1_1, s21_sprintf_test_115__);
tcase_add_test(tc1_1, s21_sprintf_test_116__);
tcase_add_test(tc1_1, s21_sprintf_test_117__);
tcase_add_test(tc1_1, s21_sprintf_test_118__);
tcase_add_test(tc1_1, s21_sprintf_test_119__);
tcase_add_test(tc1_1, s21_sprintf_test_120__);
tcase_add_test(tc1_1, s21_sprintf_test_121__);
tcase_add_test(tc1_1, s21_sprintf_test_122__);
tcase_add_test(tc1_1, s21_sprintf_test_123__);
tcase_add_test(tc1_1, s21_sprintf_test_124__);
tcase_add_test(tc1_1, s21_sprintf_test_125__);
tcase_add_test(tc1_1, s21_sprintf_test_126__);
tcase_add_test(tc1_1, s21_sprintf_test_127__);
tcase_add_test(tc1_1, s21_sprintf_test_128__);
tcase_add_test(tc1_1, s21_sprintf_test_129__);
tcase_add_test(tc1_1, s21_sprintf_test_130__);
tcase_add_test(tc1_1, s21_sprintf_test_131__);
tcase_add_test(tc1_1, s21_sprintf_test_132__);
tcase_add_test(tc1_1, s21_sprintf_test_133__);
tcase_add_test(tc1_1, s21_sprintf_test_134__);
tcase_add_test(tc1_1, s21_sprintf_test_135__);
tcase_add_test(tc1_1, s21_sprintf_test_136__);
tcase_add_test(tc1_1, s21_sprintf_test_137__);
tcase_add_test(tc1_1, s21_sprintf_test_138__);
tcase_add_test(tc1_1, s21_sprintf_test_139__);
tcase_add_test(tc1_1, s21_sprintf_test_140__);
tcase_add_test(tc1_1, s21_sprintf_test_141__);
tcase_add_test(tc1_1, s21_sprintf_test_142__);
tcase_add_test(tc1_1, s21_sprintf_test_143__);
tcase_add_test(tc1_1, s21_sprintf_test_144__);
tcase_add_test(tc1_1, s21_sprintf_test_145__);
tcase_add_test(tc1_1, s21_sprintf_test_146__);
tcase_add_test(tc1_1, s21_sprintf_test_147__);
tcase_add_test(tc1_1, s21_sprintf_test_148__);
tcase_add_test(tc1_1, s21_sprintf_test_149__);
tcase_add_test(tc1_1, s21_sprintf_test_150__);
tcase_add_test(tc1_1, s21_sprintf_test_151__);
tcase_add_test(tc1_1, s21_sprintf_test_152__);
tcase_add_test(tc1_1, s21_sprintf_test_153__);
tcase_add_test(tc1_1, s21_sprintf_test_154__);
tcase_add_test(tc1_1, s21_sprintf_test_155__);
tcase_add_test(tc1_1, s21_sprintf_test_156__);
tcase_add_test(tc1_1, s21_sprintf_test_157__);
tcase_add_test(tc1_1, s21_sprintf_test_158__);
tcase_add_test(tc1_1, s21_sprintf_test_159__);
tcase_add_test(tc1_1, s21_sprintf_test_160__);
tcase_add_test(tc1_1, s21_sprintf_test_161__);
tcase_add_test(tc1_1, s21_sprintf_test_162__);
tcase_add_test(tc1_1, s21_sprintf_test_163__);
tcase_add_test(tc1_1, s21_sprintf_test_164__);
tcase_add_test(tc1_1, s21_sprintf_test_165__);
tcase_add_test(tc1_1, s21_sprintf_test_166__);
tcase_add_test(tc1_1, s21_sprintf_test_167__);
tcase_add_test(tc1_1, s21_sprintf_test_168__);
tcase_add_test(tc1_1, s21_sprintf_test_169__);
tcase_add_test(tc1_1, s21_sprintf_test_170__);
tcase_add_test(tc1_1, s21_sprintf_test_171__);
tcase_add_test(tc1_1, s21_sprintf_test_172__);
tcase_add_test(tc1_1, s21_sprintf_test_173__);
tcase_add_test(tc1_1, s21_sprintf_test_174__);
tcase_add_test(tc1_1, s21_sprintf_test_175__);
tcase_add_test(tc1_1, s21_sprintf_test_176__);
tcase_add_test(tc1_1, s21_sprintf_test_177__);
tcase_add_test(tc1_1, s21_sprintf_test_178__);
tcase_add_test(tc1_1, s21_sprintf_test_179__);
tcase_add_test(tc1_1, s21_sprintf_test_180__);
tcase_add_test(tc1_1, s21_sprintf_test_181__);
tcase_add_test(tc1_1, s21_sprintf_test_182__);
tcase_add_test(tc1_1, s21_sprintf_test_183__);
tcase_add_test(tc1_1, s21_sprintf_test_184__);
tcase_add_test(tc1_1, s21_sprintf_test_185__);
tcase_add_test(tc1_1, s21_sprintf_test_186__);
tcase_add_test(tc1_1, s21_sprintf_test_187__);
tcase_add_test(tc1_1, s21_sprintf_test_188__);
tcase_add_test(tc1_1, s21_sprintf_test_189__);
tcase_add_test(tc1_1, s21_sprintf_test_190__);
tcase_add_test(tc1_1, s21_sprintf_test_191__);
tcase_add_test(tc1_1, s21_sprintf_test_192__);
tcase_add_test(tc1_1, s21_sprintf_test_193__);
tcase_add_test(tc1_1, s21_sprintf_test_194__);
tcase_add_test(tc1_1, s21_sprintf_test_195__);
tcase_add_test(tc1_1, s21_sprintf_test_196__);
tcase_add_test(tc1_1, s21_sprintf_test_197__);
tcase_add_test(tc1_1, s21_sprintf_test_198__);
tcase_add_test(tc1_1, s21_sprintf_test_199__);
tcase_add_test(tc1_1, s21_sprintf_test_200__);
tcase_add_test(tc1_1, s21_sprintf_test_201__);
tcase_add_test(tc1_1, s21_sprintf_test_202__);
tcase_add_test(tc1_1, s21_sprintf_test_203__);
tcase_add_test(tc1_1, s21_sprintf_test_204__);
tcase_add_test(tc1_1, s21_sprintf_test_205__);
tcase_add_test(tc1_1, s21_sprintf_test_206__);
tcase_add_test(tc1_1, s21_sprintf_test_207__);
tcase_add_test(tc1_1, s21_sprintf_test_208__);
tcase_add_test(tc1_1, s21_sprintf_test_209__);
tcase_add_test(tc1_1, s21_sprintf_test_210__);
tcase_add_test(tc1_1, s21_sprintf_test_211__);
tcase_add_test(tc1_1, s21_sprintf_test_212__);
tcase_add_test(tc1_1, s21_sprintf_test_213__);
tcase_add_test(tc1_1, s21_sprintf_test_214__);
tcase_add_test(tc1_1, s21_sprintf_test_215__);
tcase_add_test(tc1_1, s21_sprintf_test_216__);
tcase_add_test(tc1_1, s21_sprintf_test_217__);
tcase_add_test(tc1_1, s21_sprintf_test_218__);
tcase_add_test(tc1_1, s21_sprintf_test_219__);
tcase_add_test(tc1_1, s21_sprintf_test_220__);
tcase_add_test(tc1_1, s21_sprintf_test_221__);
tcase_add_test(tc1_1, s21_sprintf_test_222__);
tcase_add_test(tc1_1, s21_sprintf_test_223__);
tcase_add_test(tc1_1, s21_sprintf_test_224__);
tcase_add_test(tc1_1, s21_sprintf_test_225__);
tcase_add_test(tc1_1, s21_sprintf_test_226__);
tcase_add_test(tc1_1, s21_sprintf_test_227__);
tcase_add_test(tc1_1, s21_sprintf_test_228__);
tcase_add_test(tc1_1, s21_sprintf_test_229__);
tcase_add_test(tc1_1, s21_sprintf_test_230__);
tcase_add_test(tc1_1, s21_sprintf_test_231__);
tcase_add_test(tc1_1, s21_sprintf_test_232__);
tcase_add_test(tc1_1, s21_sprintf_test_233__);
tcase_add_test(tc1_1, s21_sprintf_test_234__);
tcase_add_test(tc1_1, s21_sprintf_test_235__);
tcase_add_test(tc1_1, s21_sprintf_test_236__);
tcase_add_test(tc1_1, s21_sprintf_test_237__);
tcase_add_test(tc1_1, s21_sprintf_test_238__);
tcase_add_test(tc1_1, s21_sprintf_test_239__);
tcase_add_test(tc1_1, s21_sprintf_test_240__);
tcase_add_test(tc1_1, s21_sprintf_test_241__);
tcase_add_test(tc1_1, s21_sprintf_test_242__);
tcase_add_test(tc1_1, s21_sprintf_test_243__);
tcase_add_test(tc1_1, s21_sprintf_test_244__);
tcase_add_test(tc1_1, s21_sprintf_test_245__);
tcase_add_test(tc1_1, s21_sprintf_test_246__);
tcase_add_test(tc1_1, s21_sprintf_test_247__);
tcase_add_test(tc1_1, s21_sprintf_test_248__);
tcase_add_test(tc1_1, s21_sprintf_test_249__);
tcase_add_test(tc1_1, s21_sprintf_test_250__);
tcase_add_test(tc1_1, s21_sprintf_test_251__);
tcase_add_test(tc1_1, s21_sprintf_test_252__);
tcase_add_test(tc1_1, s21_sprintf_test_253__);
tcase_add_test(tc1_1, s21_sprintf_test_254__);
tcase_add_test(tc1_1, s21_sprintf_test_255__);
tcase_add_test(tc1_1, s21_sprintf_test_256__);
tcase_add_test(tc1_1, s21_sprintf_test_257__);
tcase_add_test(tc1_1, s21_sprintf_test_258__);
tcase_add_test(tc1_1, s21_sprintf_test_259__);
tcase_add_test(tc1_1, s21_sprintf_test_260__);
tcase_add_test(tc1_1, s21_sprintf_test_261__);
tcase_add_test(tc1_1, s21_sprintf_test_262__);
tcase_add_test(tc1_1, s21_sprintf_test_263__);
tcase_add_test(tc1_1, s21_sprintf_test_264__);
tcase_add_test(tc1_1, s21_sprintf_test_265__);
tcase_add_test(tc1_1, s21_sprintf_test_266__);
tcase_add_test(tc1_1, s21_sprintf_test_267__);
tcase_add_test(tc1_1, s21_sprintf_test_268__);
tcase_add_test(tc1_1, s21_sprintf_test_269__);
tcase_add_test(tc1_1, s21_sprintf_test_270__);
tcase_add_test(tc1_1, s21_sprintf_test_271__);
tcase_add_test(tc1_1, s21_sprintf_test_272__);
tcase_add_test(tc1_1, s21_sprintf_test_273__);
tcase_add_test(tc1_1, s21_sprintf_test_274__);
tcase_add_test(tc1_1, s21_sprintf_test_275__);
tcase_add_test(tc1_1, s21_sprintf_test_276__);
tcase_add_test(tc1_1, s21_sprintf_test_277__);
tcase_add_test(tc1_1, s21_sprintf_test_278__);
tcase_add_test(tc1_1, s21_sprintf_test_279__);
tcase_add_test(tc1_1, s21_sprintf_test_280__);
tcase_add_test(tc1_1, s21_sprintf_test_281__);
tcase_add_test(tc1_1, s21_sprintf_test_282__);
tcase_add_test(tc1_1, s21_sprintf_test_283__);
tcase_add_test(tc1_1, s21_sprintf_test_284__);
tcase_add_test(tc1_1, s21_sprintf_test_285__);
tcase_add_test(tc1_1, s21_sprintf_test_286__);
tcase_add_test(tc1_1, s21_sprintf_test_287__);
tcase_add_test(tc1_1, s21_sprintf_test_288__);
tcase_add_test(tc1_1, s21_sprintf_test_289__);
tcase_add_test(tc1_1, s21_sprintf_test_290__);
tcase_add_test(tc1_1, s21_sprintf_test_291__);
tcase_add_test(tc1_1, s21_sprintf_test_292__);
tcase_add_test(tc1_1, s21_sprintf_test_293__);
tcase_add_test(tc1_1, s21_sprintf_test_294__);
tcase_add_test(tc1_1, s21_sprintf_test_295__);
tcase_add_test(tc1_1, s21_sprintf_test_296__);
tcase_add_test(tc1_1, s21_sprintf_test_297__);
tcase_add_test(tc1_1, s21_sprintf_test_298__);
tcase_add_test(tc1_1, s21_sprintf_test_299__);
tcase_add_test(tc1_1, s21_sprintf_test_300__);
tcase_add_test(tc1_1, s21_sprintf_test_301__);
tcase_add_test(tc1_1, s21_sprintf_test_302__);
tcase_add_test(tc1_1, s21_sprintf_test_303__);
tcase_add_test(tc1_1, s21_sprintf_test_304__);
tcase_add_test(tc1_1, s21_sprintf_test_305__);
tcase_add_test(tc1_1, s21_sprintf_test_306__);
tcase_add_test(tc1_1, s21_sprintf_test_307__);
tcase_add_test(tc1_1, s21_sprintf_test_308__);
tcase_add_test(tc1_1, s21_sprintf_test_309__);
tcase_add_test(tc1_1, s21_sprintf_test_310__);
tcase_add_test(tc1_1, s21_sprintf_test_311__);
tcase_add_test(tc1_1, s21_sprintf_test_312__);
tcase_add_test(tc1_1, s21_sprintf_test_313__);
tcase_add_test(tc1_1, s21_sprintf_test_314__);
tcase_add_test(tc1_1, s21_sprintf_test_315__);
tcase_add_test(tc1_1, s21_sprintf_test_316__);
tcase_add_test(tc1_1, s21_sprintf_test_317__);
tcase_add_test(tc1_1, s21_sprintf_test_318__);
tcase_add_test(tc1_1, s21_sprintf_test_319__);
tcase_add_test(tc1_1, s21_sprintf_test_320__);
tcase_add_test(tc1_1, s21_sprintf_test_321__);
tcase_add_test(tc1_1, s21_sprintf_test_322__);
tcase_add_test(tc1_1, s21_sprintf_test_323__);
tcase_add_test(tc1_1, s21_sprintf_test_324__);
tcase_add_test(tc1_1, s21_sprintf_test_325__);
tcase_add_test(tc1_1, s21_sprintf_test_326__);
tcase_add_test(tc1_1, s21_sprintf_test_327__);
tcase_add_test(tc1_1, s21_sprintf_test_328__);
tcase_add_test(tc1_1, s21_sprintf_test_329__);
tcase_add_test(tc1_1, s21_sprintf_test_330__);
tcase_add_test(tc1_1, s21_sprintf_test_331__);
tcase_add_test(tc1_1, s21_sprintf_test_332__);
tcase_add_test(tc1_1, s21_sprintf_test_333__);
tcase_add_test(tc1_1, s21_sprintf_test_334__);
tcase_add_test(tc1_1, s21_sprintf_test_335__);
tcase_add_test(tc1_1, s21_sprintf_test_336__);
tcase_add_test(tc1_1, s21_sprintf_test_337__);
tcase_add_test(tc1_1, s21_sprintf_test_338__);
tcase_add_test(tc1_1, s21_sprintf_test_339__);
tcase_add_test(tc1_1, s21_sprintf_test_340__);
tcase_add_test(tc1_1, s21_sprintf_test_341__);
tcase_add_test(tc1_1, s21_sprintf_test_342__);
tcase_add_test(tc1_1, s21_sprintf_test_343__);
tcase_add_test(tc1_1, s21_sprintf_test_344__);
tcase_add_test(tc1_1, s21_sprintf_test_345__);
tcase_add_test(tc1_1, s21_sprintf_test_346__);
tcase_add_test(tc1_1, s21_sprintf_test_347__);
tcase_add_test(tc1_1, s21_sprintf_test_348__);
tcase_add_test(tc1_1, s21_sprintf_test_349__);
tcase_add_test(tc1_1, s21_sprintf_test_350__);
tcase_add_test(tc1_1, s21_sprintf_test_351__);
tcase_add_test(tc1_1, s21_sprintf_test_352__);
tcase_add_test(tc1_1, s21_sprintf_test_353__);
tcase_add_test(tc1_1, s21_sprintf_test_354__);
tcase_add_test(tc1_1, s21_sprintf_test_355__);
tcase_add_test(tc1_1, s21_sprintf_test_356__);
tcase_add_test(tc1_1, s21_sprintf_test_357__);
tcase_add_test(tc1_1, s21_sprintf_test_358__);
tcase_add_test(tc1_1, s21_sprintf_test_359__);
tcase_add_test(tc1_1, s21_sprintf_test_360__);
tcase_add_test(tc1_1, s21_sprintf_test_361__);
tcase_add_test(tc1_1, s21_sprintf_test_362__);
tcase_add_test(tc1_1, s21_sprintf_test_363__);
tcase_add_test(tc1_1, s21_sprintf_test_364__);
tcase_add_test(tc1_1, s21_sprintf_test_365__);
tcase_add_test(tc1_1, s21_sprintf_test_366__);
tcase_add_test(tc1_1, s21_sprintf_test_367__);
tcase_add_test(tc1_1, s21_sprintf_test_368__);
tcase_add_test(tc1_1, s21_sprintf_test_369__);
tcase_add_test(tc1_1, s21_sprintf_test_370__);
tcase_add_test(tc1_1, s21_sprintf_test_371__);
tcase_add_test(tc1_1, s21_sprintf_test_372__);
tcase_add_test(tc1_1, s21_sprintf_test_373__);
tcase_add_test(tc1_1, s21_sprintf_test_374__);
tcase_add_test(tc1_1, s21_sprintf_test_375__);
tcase_add_test(tc1_1, s21_sprintf_test_376__);
tcase_add_test(tc1_1, s21_sprintf_test_377__);
tcase_add_test(tc1_1, s21_sprintf_test_378__);
tcase_add_test(tc1_1, s21_sprintf_test_379__);
tcase_add_test(tc1_1, s21_sprintf_test_380__);
tcase_add_test(tc1_1, s21_sprintf_test_381__);
tcase_add_test(tc1_1, s21_sprintf_test_382__);
tcase_add_test(tc1_1, s21_sprintf_test_383__);
tcase_add_test(tc1_1, s21_sprintf_test_384__);
tcase_add_test(tc1_1, s21_sprintf_test_385__);
tcase_add_test(tc1_1, s21_sprintf_test_386__);
tcase_add_test(tc1_1, s21_sprintf_test_387__);
tcase_add_test(tc1_1, s21_sprintf_test_388__);
tcase_add_test(tc1_1, s21_sprintf_test_389__);
tcase_add_test(tc1_1, s21_sprintf_test_390__);
tcase_add_test(tc1_1, s21_sprintf_test_391__);
tcase_add_test(tc1_1, s21_sprintf_test_392__);
tcase_add_test(tc1_1, s21_sprintf_test_393__);
tcase_add_test(tc1_1, s21_sprintf_test_394__);
tcase_add_test(tc1_1, s21_sprintf_test_395__);
tcase_add_test(tc1_1, s21_sprintf_test_396__);
tcase_add_test(tc1_1, s21_sprintf_test_397__);
tcase_add_test(tc1_1, s21_sprintf_test_398__);
tcase_add_test(tc1_1, s21_sprintf_test_399__);
tcase_add_test(tc1_1, s21_sprintf_test_400__);
tcase_add_test(tc1_1, s21_sprintf_test_401__);
tcase_add_test(tc1_1, s21_sprintf_test_402__);
tcase_add_test(tc1_1, s21_sprintf_test_403__);
tcase_add_test(tc1_1, s21_sprintf_test_404__);
tcase_add_test(tc1_1, s21_sprintf_test_405__);
tcase_add_test(tc1_1, s21_sprintf_test_406__);
tcase_add_test(tc1_1, s21_sprintf_test_407__);
tcase_add_test(tc1_1, s21_sprintf_test_408__);
tcase_add_test(tc1_1, s21_sprintf_test_409__);
tcase_add_test(tc1_1, s21_sprintf_test_410__);
tcase_add_test(tc1_1, s21_sprintf_test_411__);
tcase_add_test(tc1_1, s21_sprintf_test_412__);
tcase_add_test(tc1_1, s21_sprintf_test_413__);
tcase_add_test(tc1_1, s21_sprintf_test_414__);
tcase_add_test(tc1_1, s21_sprintf_test_415__);
tcase_add_test(tc1_1, s21_sprintf_test_416__);
tcase_add_test(tc1_1, s21_sprintf_test_417__);
tcase_add_test(tc1_1, s21_sprintf_test_418__);
tcase_add_test(tc1_1, s21_sprintf_test_419__);
tcase_add_test(tc1_1, s21_sprintf_test_420__);
tcase_add_test(tc1_1, s21_sprintf_test_421__);
tcase_add_test(tc1_1, s21_sprintf_test_422__);
tcase_add_test(tc1_1, s21_sprintf_test_423__);
tcase_add_test(tc1_1, s21_sprintf_test_424__);
tcase_add_test(tc1_1, s21_sprintf_test_425__);
tcase_add_test(tc1_1, s21_sprintf_test_426__);
tcase_add_test(tc1_1, s21_sprintf_test_427__);
tcase_add_test(tc1_1, s21_sprintf_test_428__);
tcase_add_test(tc1_1, s21_sprintf_test_429__);
tcase_add_test(tc1_1, s21_sprintf_test_430__);
tcase_add_test(tc1_1, s21_sprintf_test_431__);
tcase_add_test(tc1_1, s21_sprintf_test_432__);
tcase_add_test(tc1_1, s21_sprintf_test_433__);
tcase_add_test(tc1_1, s21_sprintf_test_434__);
tcase_add_test(tc1_1, s21_sprintf_test_435__);
tcase_add_test(tc1_1, s21_sprintf_test_436__);
tcase_add_test(tc1_1, s21_sprintf_test_437__);
tcase_add_test(tc1_1, s21_sprintf_test_438__);
tcase_add_test(tc1_1, s21_sprintf_test_439__);
tcase_add_test(tc1_1, s21_sprintf_test_440__);
tcase_add_test(tc1_1, s21_sprintf_test_441__);
tcase_add_test(tc1_1, s21_sprintf_test_442__);
tcase_add_test(tc1_1, s21_sprintf_test_443__);
tcase_add_test(tc1_1, s21_sprintf_test_444__);
tcase_add_test(tc1_1, s21_sprintf_test_445__);
tcase_add_test(tc1_1, s21_sprintf_test_446__);
tcase_add_test(tc1_1, s21_sprintf_test_447__);
tcase_add_test(tc1_1, s21_sprintf_test_448__);
tcase_add_test(tc1_1, s21_sprintf_test_449__);
tcase_add_test(tc1_1, s21_sprintf_test_450__);
tcase_add_test(tc1_1, s21_sprintf_test_451__);
tcase_add_test(tc1_1, s21_sprintf_test_452__);
tcase_add_test(tc1_1, s21_sprintf_test_453__);
tcase_add_test(tc1_1, s21_sprintf_test_454__);
tcase_add_test(tc1_1, s21_sprintf_test_455__);
tcase_add_test(tc1_1, s21_sprintf_test_456__);
tcase_add_test(tc1_1, s21_sprintf_test_457__);
tcase_add_test(tc1_1, s21_sprintf_test_458__);
tcase_add_test(tc1_1, s21_sprintf_test_459__);
tcase_add_test(tc1_1, s21_sprintf_test_460__);
tcase_add_test(tc1_1, s21_sprintf_test_461__);
tcase_add_test(tc1_1, s21_sprintf_test_462__);
tcase_add_test(tc1_1, s21_sprintf_test_463__);
tcase_add_test(tc1_1, s21_sprintf_test_464__);
tcase_add_test(tc1_1, s21_sprintf_test_465__);
tcase_add_test(tc1_1, s21_sprintf_test_466__);
tcase_add_test(tc1_1, s21_sprintf_test_467__);
tcase_add_test(tc1_1, s21_sprintf_test_468__);
tcase_add_test(tc1_1, s21_sprintf_test_469__);
tcase_add_test(tc1_1, s21_sprintf_test_470__);
tcase_add_test(tc1_1, s21_sprintf_test_471__);
tcase_add_test(tc1_1, s21_sprintf_test_472__);
tcase_add_test(tc1_1, s21_sprintf_test_473__);
tcase_add_test(tc1_1, s21_sprintf_test_474__);
tcase_add_test(tc1_1, s21_sprintf_test_475__);
tcase_add_test(tc1_1, s21_sprintf_test_476__);
tcase_add_test(tc1_1, s21_sprintf_test_477__);
tcase_add_test(tc1_1, s21_sprintf_test_478__);
tcase_add_test(tc1_1, s21_sprintf_test_479__);
tcase_add_test(tc1_1, s21_sprintf_test_480__);
tcase_add_test(tc1_1, s21_sprintf_test_481__);
tcase_add_test(tc1_1, s21_sprintf_test_482__);
tcase_add_test(tc1_1, s21_sprintf_test_483__);
tcase_add_test(tc1_1, s21_sprintf_test_484__);
tcase_add_test(tc1_1, s21_sprintf_test_485__);
tcase_add_test(tc1_1, s21_sprintf_test_486__);
tcase_add_test(tc1_1, s21_sprintf_test_487__);
tcase_add_test(tc1_1, s21_sprintf_test_488__);
tcase_add_test(tc1_1, s21_sprintf_test_489__);
tcase_add_test(tc1_1, s21_sprintf_test_490__);
tcase_add_test(tc1_1, s21_sprintf_test_491__);
tcase_add_test(tc1_1, s21_sprintf_test_492__);
tcase_add_test(tc1_1, s21_sprintf_test_493__);
tcase_add_test(tc1_1, s21_sprintf_test_494__);
tcase_add_test(tc1_1, s21_sprintf_test_495__);
tcase_add_test(tc1_1, s21_sprintf_test_496__);
tcase_add_test(tc1_1, s21_sprintf_test_497__);
tcase_add_test(tc1_1, s21_sprintf_test_498__);
tcase_add_test(tc1_1, s21_sprintf_test_499__);
tcase_add_test(tc1_1, s21_sprintf_test_500__);
tcase_add_test(tc1_1, s21_sprintf_test_501__);
tcase_add_test(tc1_1, s21_sprintf_test_502__);
tcase_add_test(tc1_1, s21_sprintf_test_503__);
tcase_add_test(tc1_1, s21_sprintf_test_504__);
tcase_add_test(tc1_1, s21_sprintf_test_505__);
tcase_add_test(tc1_1, s21_sprintf_test_506__);
tcase_add_test(tc1_1, s21_sprintf_test_507__);
tcase_add_test(tc1_1, s21_sprintf_test_508__);
tcase_add_test(tc1_1, s21_sprintf_test_509__);
tcase_add_test(tc1_1, s21_sprintf_test_510__);
tcase_add_test(tc1_1, s21_sprintf_test_511__);
tcase_add_test(tc1_1, s21_sprintf_test_512__);
tcase_add_test(tc1_1, s21_sprintf_test_513__);
tcase_add_test(tc1_1, s21_sprintf_test_514__);
tcase_add_test(tc1_1, s21_sprintf_test_515__);
tcase_add_test(tc1_1, s21_sprintf_test_516__);
tcase_add_test(tc1_1, s21_sprintf_test_517__);
tcase_add_test(tc1_1, s21_sprintf_test_518__);
tcase_add_test(tc1_1, s21_sprintf_test_519__);
tcase_add_test(tc1_1, s21_sprintf_test_520__);
tcase_add_test(tc1_1, s21_sprintf_test_521__);
tcase_add_test(tc1_1, s21_sprintf_test_522__);
tcase_add_test(tc1_1, s21_sprintf_test_523__);
tcase_add_test(tc1_1, s21_sprintf_test_524__);
tcase_add_test(tc1_1, s21_sprintf_test_525__);
tcase_add_test(tc1_1, s21_sprintf_test_526__);
tcase_add_test(tc1_1, s21_sprintf_test_527__);
tcase_add_test(tc1_1, s21_sprintf_test_528__);
tcase_add_test(tc1_1, s21_sprintf_test_529__);
tcase_add_test(tc1_1, s21_sprintf_test_530__);
tcase_add_test(tc1_1, s21_sprintf_test_531__);
tcase_add_test(tc1_1, s21_sprintf_test_532__);
tcase_add_test(tc1_1, s21_sprintf_test_533__);
tcase_add_test(tc1_1, s21_sprintf_test_534__);
tcase_add_test(tc1_1, s21_sprintf_test_535__);
tcase_add_test(tc1_1, s21_sprintf_test_536__);
tcase_add_test(tc1_1, s21_sprintf_test_537__);
tcase_add_test(tc1_1, s21_sprintf_test_538__);
tcase_add_test(tc1_1, s21_sprintf_test_539__);
tcase_add_test(tc1_1, s21_sprintf_test_540__);
tcase_add_test(tc1_1, s21_sprintf_test_541__);
tcase_add_test(tc1_1, s21_sprintf_test_542__);
tcase_add_test(tc1_1, s21_sprintf_test_543__);
tcase_add_test(tc1_1, s21_sprintf_test_544__);
tcase_add_test(tc1_1, s21_sprintf_test_545__);
tcase_add_test(tc1_1, s21_sprintf_test_546__);
tcase_add_test(tc1_1, s21_sprintf_test_547__);
tcase_add_test(tc1_1, s21_sprintf_test_548__);
tcase_add_test(tc1_1, s21_sprintf_test_549__);
tcase_add_test(tc1_1, s21_sprintf_test_550__);
tcase_add_test(tc1_1, s21_sprintf_test_551__);
tcase_add_test(tc1_1, s21_sprintf_test_552__);
tcase_add_test(tc1_1, s21_sprintf_test_553__);
tcase_add_test(tc1_1, s21_sprintf_test_554__);
tcase_add_test(tc1_1, s21_sprintf_test_555__);
tcase_add_test(tc1_1, s21_sprintf_test_556__);
tcase_add_test(tc1_1, s21_sprintf_test_557__);
tcase_add_test(tc1_1, s21_sprintf_test_558__);
tcase_add_test(tc1_1, s21_sprintf_test_559__);
tcase_add_test(tc1_1, s21_sprintf_test_560__);
tcase_add_test(tc1_1, s21_sprintf_test_561__);
tcase_add_test(tc1_1, s21_sprintf_test_562__);
tcase_add_test(tc1_1, s21_sprintf_test_563__);
tcase_add_test(tc1_1, s21_sprintf_test_564__);
tcase_add_test(tc1_1, s21_sprintf_test_565__);
tcase_add_test(tc1_1, s21_sprintf_test_566__);
tcase_add_test(tc1_1, s21_sprintf_test_567__);
tcase_add_test(tc1_1, s21_sprintf_test_568__);
tcase_add_test(tc1_1, s21_sprintf_test_569__);
tcase_add_test(tc1_1, s21_sprintf_test_570__);
tcase_add_test(tc1_1, s21_sprintf_test_571__);
tcase_add_test(tc1_1, s21_sprintf_test_572__);
tcase_add_test(tc1_1, s21_sprintf_test_573__);
tcase_add_test(tc1_1, s21_sprintf_test_574__);
tcase_add_test(tc1_1, s21_sprintf_test_575__);
tcase_add_test(tc1_1, s21_sprintf_test_576__);
tcase_add_test(tc1_1, s21_sprintf_test_577__);
tcase_add_test(tc1_1, s21_sprintf_test_578__);
tcase_add_test(tc1_1, s21_sprintf_test_579__);
tcase_add_test(tc1_1, s21_sprintf_test_580__);
tcase_add_test(tc1_1, s21_sprintf_test_581__);
tcase_add_test(tc1_1, s21_sprintf_test_582__);
tcase_add_test(tc1_1, s21_sprintf_test_583__);
tcase_add_test(tc1_1, s21_sprintf_test_584__);
tcase_add_test(tc1_1, s21_sprintf_test_585__);
tcase_add_test(tc1_1, s21_sprintf_test_586__);
tcase_add_test(tc1_1, s21_sprintf_test_587__);
tcase_add_test(tc1_1, s21_sprintf_test_588__);
tcase_add_test(tc1_1, s21_sprintf_test_589__);
tcase_add_test(tc1_1, s21_sprintf_test_590__);
tcase_add_test(tc1_1, s21_sprintf_test_591__);
tcase_add_test(tc1_1, s21_sprintf_test_592__);
tcase_add_test(tc1_1, s21_sprintf_test_593__);
tcase_add_test(tc1_1, s21_sprintf_test_594__);
tcase_add_test(tc1_1, s21_sprintf_test_595__);
tcase_add_test(tc1_1, s21_sprintf_test_596__);
tcase_add_test(tc1_1, s21_sprintf_test_597__);
tcase_add_test(tc1_1, s21_sprintf_test_598__);
tcase_add_test(tc1_1, s21_sprintf_test_599__);
tcase_add_test(tc1_1, s21_sprintf_test_600__);
tcase_add_test(tc1_1, s21_sprintf_test_601__);
tcase_add_test(tc1_1, s21_sprintf_test_602__);
tcase_add_test(tc1_1, s21_sprintf_test_603__);
tcase_add_test(tc1_1, s21_sprintf_test_604__);
tcase_add_test(tc1_1, s21_sprintf_test_605__);
tcase_add_test(tc1_1, s21_sprintf_test_606__);
tcase_add_test(tc1_1, s21_sprintf_test_607__);
tcase_add_test(tc1_1, s21_sprintf_test_608__);
tcase_add_test(tc1_1, s21_sprintf_test_609__);
tcase_add_test(tc1_1, s21_sprintf_test_610__);
tcase_add_test(tc1_1, s21_sprintf_test_611__);
tcase_add_test(tc1_1, s21_sprintf_test_612__);
tcase_add_test(tc1_1, s21_sprintf_test_613__);
tcase_add_test(tc1_1, s21_sprintf_test_614__);
tcase_add_test(tc1_1, s21_sprintf_test_615__);
tcase_add_test(tc1_1, s21_sprintf_test_616__);
tcase_add_test(tc1_1, s21_sprintf_test_617__);
tcase_add_test(tc1_1, s21_sprintf_test_618__);
tcase_add_test(tc1_1, s21_sprintf_test_619__);
tcase_add_test(tc1_1, s21_sprintf_test_620__);
tcase_add_test(tc1_1, s21_sprintf_test_621__);
tcase_add_test(tc1_1, s21_sprintf_test_622__);
tcase_add_test(tc1_1, s21_sprintf_test_623__);
tcase_add_test(tc1_1, s21_sprintf_test_624__);
tcase_add_test(tc1_1, s21_sprintf_test_625__);
tcase_add_test(tc1_1, s21_sprintf_test_626__);
tcase_add_test(tc1_1, s21_sprintf_test_627__);
tcase_add_test(tc1_1, s21_sprintf_test_628__);
tcase_add_test(tc1_1, s21_sprintf_test_629__);
tcase_add_test(tc1_1, s21_sprintf_test_630__);
tcase_add_test(tc1_1, s21_sprintf_test_631__);
tcase_add_test(tc1_1, s21_sprintf_test_632__);
tcase_add_test(tc1_1, s21_sprintf_test_633__);
tcase_add_test(tc1_1, s21_sprintf_test_634__);
tcase_add_test(tc1_1, s21_sprintf_test_635__);
tcase_add_test(tc1_1, s21_sprintf_test_636__);
tcase_add_test(tc1_1, s21_sprintf_test_637__);
tcase_add_test(tc1_1, s21_sprintf_test_638__);
tcase_add_test(tc1_1, s21_sprintf_test_639__);
tcase_add_test(tc1_1, s21_sprintf_test_640__);
tcase_add_test(tc1_1, s21_sprintf_test_641__);
tcase_add_test(tc1_1, s21_sprintf_test_642__);
tcase_add_test(tc1_1, s21_sprintf_test_643__);
tcase_add_test(tc1_1, s21_sprintf_test_644__);
tcase_add_test(tc1_1, s21_sprintf_test_645__);
tcase_add_test(tc1_1, s21_sprintf_test_646__);
tcase_add_test(tc1_1, s21_sprintf_test_647__);
tcase_add_test(tc1_1, s21_sprintf_test_648__);
tcase_add_test(tc1_1, s21_sprintf_test_649__);
tcase_add_test(tc1_1, s21_sprintf_test_650__);
tcase_add_test(tc1_1, s21_sprintf_test_651__);
tcase_add_test(tc1_1, s21_sprintf_test_652__);
tcase_add_test(tc1_1, s21_sprintf_test_653__);
tcase_add_test(tc1_1, s21_sprintf_test_654__);
tcase_add_test(tc1_1, s21_sprintf_test_655__);
tcase_add_test(tc1_1, s21_sprintf_test_656__);
tcase_add_test(tc1_1, s21_sprintf_test_657__);
tcase_add_test(tc1_1, s21_sprintf_test_658__);
tcase_add_test(tc1_1, s21_sprintf_test_659__);
tcase_add_test(tc1_1, s21_sprintf_test_660__);
tcase_add_test(tc1_1, s21_sprintf_test_661__);
tcase_add_test(tc1_1, s21_sprintf_test_662__);
tcase_add_test(tc1_1, s21_sprintf_test_663__);
tcase_add_test(tc1_1, s21_sprintf_test_664__);
tcase_add_test(tc1_1, s21_sprintf_test_665__);
tcase_add_test(tc1_1, s21_sprintf_test_666__);
tcase_add_test(tc1_1, s21_sprintf_test_667__);
tcase_add_test(tc1_1, s21_sprintf_test_668__);
tcase_add_test(tc1_1, s21_sprintf_test_669__);
tcase_add_test(tc1_1, s21_sprintf_test_670__);
tcase_add_test(tc1_1, s21_sprintf_test_671__);
tcase_add_test(tc1_1, s21_sprintf_test_672__);
tcase_add_test(tc1_1, s21_sprintf_test_673__);
tcase_add_test(tc1_1, s21_sprintf_test_674__);
tcase_add_test(tc1_1, s21_sprintf_test_675__);
tcase_add_test(tc1_1, s21_sprintf_test_676__);
tcase_add_test(tc1_1, s21_sprintf_test_677__);
tcase_add_test(tc1_1, s21_sprintf_test_678__);
tcase_add_test(tc1_1, s21_sprintf_test_679__);
tcase_add_test(tc1_1, s21_sprintf_test_680__);
tcase_add_test(tc1_1, s21_sprintf_test_681__);
tcase_add_test(tc1_1, s21_sprintf_test_682__);
tcase_add_test(tc1_1, s21_sprintf_test_683__);
tcase_add_test(tc1_1, s21_sprintf_test_684__);
tcase_add_test(tc1_1, s21_sprintf_test_685__);
tcase_add_test(tc1_1, s21_sprintf_test_686__);
tcase_add_test(tc1_1, s21_sprintf_test_687__);
tcase_add_test(tc1_1, s21_sprintf_test_688__);
tcase_add_test(tc1_1, s21_sprintf_test_689__);
tcase_add_test(tc1_1, s21_sprintf_test_690__);
tcase_add_test(tc1_1, s21_sprintf_test_691__);
tcase_add_test(tc1_1, s21_sprintf_test_692__);
tcase_add_test(tc1_1, s21_sprintf_test_693__);
tcase_add_test(tc1_1, s21_sprintf_test_694__);
tcase_add_test(tc1_1, s21_sprintf_test_695__);
tcase_add_test(tc1_1, s21_sprintf_test_696__);
tcase_add_test(tc1_1, s21_sprintf_test_697__);
tcase_add_test(tc1_1, s21_sprintf_test_698__);
tcase_add_test(tc1_1, s21_sprintf_test_699__);
tcase_add_test(tc1_1, s21_sprintf_test_700__);
tcase_add_test(tc1_1, s21_sprintf_test_701__);
tcase_add_test(tc1_1, s21_sprintf_test_702__);
tcase_add_test(tc1_1, s21_sprintf_test_703__);
tcase_add_test(tc1_1, s21_sprintf_test_704__);
tcase_add_test(tc1_1, s21_sprintf_test_705__);
tcase_add_test(tc1_1, s21_sprintf_test_706__);
tcase_add_test(tc1_1, s21_sprintf_test_707__);
tcase_add_test(tc1_1, s21_sprintf_test_708__);
tcase_add_test(tc1_1, s21_sprintf_test_709__);
tcase_add_test(tc1_1, s21_sprintf_test_710__);
tcase_add_test(tc1_1, s21_sprintf_test_711__);
tcase_add_test(tc1_1, s21_sprintf_test_712__);
tcase_add_test(tc1_1, s21_sprintf_test_713__);
tcase_add_test(tc1_1, s21_sprintf_test_714__);
tcase_add_test(tc1_1, s21_sprintf_test_715__);
tcase_add_test(tc1_1, s21_sprintf_test_716__);
tcase_add_test(tc1_1, s21_sprintf_test_717__);
tcase_add_test(tc1_1, s21_sprintf_test_718__);
tcase_add_test(tc1_1, s21_sprintf_test_719__);
tcase_add_test(tc1_1, s21_sprintf_test_720__);
tcase_add_test(tc1_1, s21_sprintf_test_721__);
tcase_add_test(tc1_1, s21_sprintf_test_722__);
tcase_add_test(tc1_1, s21_sprintf_test_723__);
tcase_add_test(tc1_1, s21_sprintf_test_724__);
tcase_add_test(tc1_1, s21_sprintf_test_725__);
tcase_add_test(tc1_1, s21_sprintf_test_726__);
tcase_add_test(tc1_1, s21_sprintf_test_727__);
tcase_add_test(tc1_1, s21_sprintf_test_728__);
tcase_add_test(tc1_1, s21_sprintf_test_729__);
tcase_add_test(tc1_1, s21_sprintf_test_730__);
tcase_add_test(tc1_1, s21_sprintf_test_731__);
tcase_add_test(tc1_1, s21_sprintf_test_732__);
tcase_add_test(tc1_1, s21_sprintf_test_733__);
tcase_add_test(tc1_1, s21_sprintf_test_734__);
tcase_add_test(tc1_1, s21_sprintf_test_735__);
tcase_add_test(tc1_1, s21_sprintf_test_736__);
tcase_add_test(tc1_1, s21_sprintf_test_737__);
tcase_add_test(tc1_1, s21_sprintf_test_738__);
tcase_add_test(tc1_1, s21_sprintf_test_739__);
tcase_add_test(tc1_1, s21_sprintf_test_740__);
tcase_add_test(tc1_1, s21_sprintf_test_741__);
tcase_add_test(tc1_1, s21_sprintf_test_742__);
tcase_add_test(tc1_1, s21_sprintf_test_743__);
tcase_add_test(tc1_1, s21_sprintf_test_744__);
tcase_add_test(tc1_1, s21_sprintf_test_745__);
tcase_add_test(tc1_1, s21_sprintf_test_746__);
tcase_add_test(tc1_1, s21_sprintf_test_747__);
tcase_add_test(tc1_1, s21_sprintf_test_748__);
tcase_add_test(tc1_1, s21_sprintf_test_749__);
tcase_add_test(tc1_1, s21_sprintf_test_750__);
tcase_add_test(tc1_1, s21_sprintf_test_751__);
tcase_add_test(tc1_1, s21_sprintf_test_752__);
tcase_add_test(tc1_1, s21_sprintf_test_753__);
tcase_add_test(tc1_1, s21_sprintf_test_754__);
tcase_add_test(tc1_1, s21_sprintf_test_755__);
tcase_add_test(tc1_1, s21_sprintf_test_756__);
tcase_add_test(tc1_1, s21_sprintf_test_757__);
tcase_add_test(tc1_1, s21_sprintf_test_758__);
tcase_add_test(tc1_1, s21_sprintf_test_759__);
tcase_add_test(tc1_1, s21_sprintf_test_760__);
tcase_add_test(tc1_1, s21_sprintf_test_761__);
tcase_add_test(tc1_1, s21_sprintf_test_762__);
tcase_add_test(tc1_1, s21_sprintf_test_763__);
tcase_add_test(tc1_1, s21_sprintf_test_764__);
tcase_add_test(tc1_1, s21_sprintf_test_765__);
tcase_add_test(tc1_1, s21_sprintf_test_766__);
tcase_add_test(tc1_1, s21_sprintf_test_767__);
tcase_add_test(tc1_1, s21_sprintf_test_768__);
tcase_add_test(tc1_1, s21_sprintf_test_769__);
tcase_add_test(tc1_1, s21_sprintf_test_770__);
tcase_add_test(tc1_1, s21_sprintf_test_771__);
tcase_add_test(tc1_1, s21_sprintf_test_772__);
tcase_add_test(tc1_1, s21_sprintf_test_773__);
tcase_add_test(tc1_1, s21_sprintf_test_774__);
tcase_add_test(tc1_1, s21_sprintf_test_775__);
tcase_add_test(tc1_1, s21_sprintf_test_776__);
tcase_add_test(tc1_1, s21_sprintf_test_777__);
tcase_add_test(tc1_1, s21_sprintf_test_778__);
tcase_add_test(tc1_1, s21_sprintf_test_779__);
tcase_add_test(tc1_1, s21_sprintf_test_780__);
tcase_add_test(tc1_1, s21_sprintf_test_781__);
tcase_add_test(tc1_1, s21_sprintf_test_782__);
tcase_add_test(tc1_1, s21_sprintf_test_783__);
tcase_add_test(tc1_1, s21_sprintf_test_784__);
tcase_add_test(tc1_1, s21_sprintf_test_785__);
tcase_add_test(tc1_1, s21_sprintf_test_786__);
tcase_add_test(tc1_1, s21_sprintf_test_787__);
tcase_add_test(tc1_1, s21_sprintf_test_788__);
tcase_add_test(tc1_1, s21_sprintf_test_789__);
tcase_add_test(tc1_1, s21_sprintf_test_790__);
tcase_add_test(tc1_1, s21_sprintf_test_791__);
tcase_add_test(tc1_1, s21_sprintf_test_792__);
tcase_add_test(tc1_1, s21_sprintf_test_793__);
tcase_add_test(tc1_1, s21_sprintf_test_794__);
tcase_add_test(tc1_1, s21_sprintf_test_795__);
tcase_add_test(tc1_1, s21_sprintf_test_796__);
tcase_add_test(tc1_1, s21_sprintf_test_797__);
tcase_add_test(tc1_1, s21_sprintf_test_798__);
tcase_add_test(tc1_1, s21_sprintf_test_799__);
tcase_add_test(tc1_1, s21_sprintf_test_800__);
tcase_add_test(tc1_1, s21_sprintf_test_801__);
tcase_add_test(tc1_1, s21_sprintf_test_802__);
tcase_add_test(tc1_1, s21_sprintf_test_803__);
tcase_add_test(tc1_1, s21_sprintf_test_804__);
tcase_add_test(tc1_1, s21_sprintf_test_805__);
tcase_add_test(tc1_1, s21_sprintf_test_806__);
tcase_add_test(tc1_1, s21_sprintf_test_807__);
tcase_add_test(tc1_1, s21_sprintf_test_808__);
tcase_add_test(tc1_1, s21_sprintf_test_809__);
tcase_add_test(tc1_1, s21_sprintf_test_810__);
tcase_add_test(tc1_1, s21_sprintf_test_811__);
tcase_add_test(tc1_1, s21_sprintf_test_812__);
tcase_add_test(tc1_1, s21_sprintf_test_813__);
tcase_add_test(tc1_1, s21_sprintf_test_814__);
tcase_add_test(tc1_1, s21_sprintf_test_815__);
tcase_add_test(tc1_1, s21_sprintf_test_816__);
tcase_add_test(tc1_1, s21_sprintf_test_817__);
tcase_add_test(tc1_1, s21_sprintf_test_818__);
tcase_add_test(tc1_1, s21_sprintf_test_819__);
tcase_add_test(tc1_1, s21_sprintf_test_820__);
tcase_add_test(tc1_1, s21_sprintf_test_821__);
tcase_add_test(tc1_1, s21_sprintf_test_822__);
tcase_add_test(tc1_1, s21_sprintf_test_823__);
tcase_add_test(tc1_1, s21_sprintf_test_824__);
tcase_add_test(tc1_1, s21_sprintf_test_825__);
tcase_add_test(tc1_1, s21_sprintf_test_826__);
tcase_add_test(tc1_1, s21_sprintf_test_827__);
tcase_add_test(tc1_1, s21_sprintf_test_828__);
tcase_add_test(tc1_1, s21_sprintf_test_829__);
tcase_add_test(tc1_1, s21_sprintf_test_830__);
tcase_add_test(tc1_1, s21_sprintf_test_831__);
tcase_add_test(tc1_1, s21_sprintf_test_832__);
tcase_add_test(tc1_1, s21_sprintf_test_833__);
tcase_add_test(tc1_1, s21_sprintf_test_834__);
tcase_add_test(tc1_1, s21_sprintf_test_835__);
tcase_add_test(tc1_1, s21_sprintf_test_836__);
tcase_add_test(tc1_1, s21_sprintf_test_837__);
tcase_add_test(tc1_1, s21_sprintf_test_838__);
tcase_add_test(tc1_1, s21_sprintf_test_839__);
tcase_add_test(tc1_1, s21_sprintf_test_840__);
tcase_add_test(tc1_1, s21_sprintf_test_841__);
tcase_add_test(tc1_1, s21_sprintf_test_842__);
tcase_add_test(tc1_1, s21_sprintf_test_843__);
tcase_add_test(tc1_1, s21_sprintf_test_844__);
tcase_add_test(tc1_1, s21_sprintf_test_845__);
tcase_add_test(tc1_1, s21_sprintf_test_846__);
tcase_add_test(tc1_1, s21_sprintf_test_847__);
tcase_add_test(tc1_1, s21_sprintf_test_848__);
tcase_add_test(tc1_1, s21_sprintf_test_849__);
tcase_add_test(tc1_1, s21_sprintf_test_850__);
tcase_add_test(tc1_1, s21_sprintf_test_851__);
tcase_add_test(tc1_1, s21_sprintf_test_852__);
tcase_add_test(tc1_1, s21_sprintf_test_853__);
tcase_add_test(tc1_1, s21_sprintf_test_854__);
tcase_add_test(tc1_1, s21_sprintf_test_855__);
tcase_add_test(tc1_1, s21_sprintf_test_856__);
tcase_add_test(tc1_1, s21_sprintf_test_857__);
tcase_add_test(tc1_1, s21_sprintf_test_858__);
tcase_add_test(tc1_1, s21_sprintf_test_859__);
tcase_add_test(tc1_1, s21_sprintf_test_860__);
tcase_add_test(tc1_1, s21_sprintf_test_861__);
tcase_add_test(tc1_1, s21_sprintf_test_862__);
tcase_add_test(tc1_1, s21_sprintf_test_863__);
tcase_add_test(tc1_1, s21_sprintf_test_864__);
tcase_add_test(tc1_1, s21_sprintf_test_865__);
tcase_add_test(tc1_1, s21_sprintf_test_866__);
tcase_add_test(tc1_1, s21_sprintf_test_867__);
tcase_add_test(tc1_1, s21_sprintf_test_868__);
tcase_add_test(tc1_1, s21_sprintf_test_869__);
tcase_add_test(tc1_1, s21_sprintf_test_870__);
tcase_add_test(tc1_1, s21_sprintf_test_871__);
tcase_add_test(tc1_1, s21_sprintf_test_872__);
tcase_add_test(tc1_1, s21_sprintf_test_873__);
tcase_add_test(tc1_1, s21_sprintf_test_874__);
tcase_add_test(tc1_1, s21_sprintf_test_875__);
tcase_add_test(tc1_1, s21_sprintf_test_876__);
tcase_add_test(tc1_1, s21_sprintf_test_877__);
tcase_add_test(tc1_1, s21_sprintf_test_878__);
tcase_add_test(tc1_1, s21_sprintf_test_879__);
tcase_add_test(tc1_1, s21_sprintf_test_880__);
tcase_add_test(tc1_1, s21_sprintf_test_881__);
tcase_add_test(tc1_1, s21_sprintf_test_882__);
tcase_add_test(tc1_1, s21_sprintf_test_883__);
tcase_add_test(tc1_1, s21_sprintf_test_884__);
tcase_add_test(tc1_1, s21_sprintf_test_885__);
tcase_add_test(tc1_1, s21_sprintf_test_886__);
tcase_add_test(tc1_1, s21_sprintf_test_887__);
tcase_add_test(tc1_1, s21_sprintf_test_888__);
tcase_add_test(tc1_1, s21_sprintf_test_889__);
tcase_add_test(tc1_1, s21_sprintf_test_890__);
tcase_add_test(tc1_1, s21_sprintf_test_891__);
tcase_add_test(tc1_1, s21_sprintf_test_892__);
tcase_add_test(tc1_1, s21_sprintf_test_893__);
tcase_add_test(tc1_1, s21_sprintf_test_894__);
tcase_add_test(tc1_1, s21_sprintf_test_895__);
tcase_add_test(tc1_1, s21_sprintf_test_896__);
tcase_add_test(tc1_1, s21_sprintf_test_897__);
tcase_add_test(tc1_1, s21_sprintf_test_898__);
tcase_add_test(tc1_1, s21_sprintf_test_899__);
tcase_add_test(tc1_1, s21_sprintf_test_900__);
tcase_add_test(tc1_1, s21_sprintf_test_901__);
tcase_add_test(tc1_1, s21_sprintf_test_902__);
tcase_add_test(tc1_1, s21_sprintf_test_903__);
tcase_add_test(tc1_1, s21_sprintf_test_904__);
tcase_add_test(tc1_1, s21_sprintf_test_905__);
tcase_add_test(tc1_1, s21_sprintf_test_906__);
tcase_add_test(tc1_1, s21_sprintf_test_907__);
tcase_add_test(tc1_1, s21_sprintf_test_908__);
tcase_add_test(tc1_1, s21_sprintf_test_909__);
tcase_add_test(tc1_1, s21_sprintf_test_910__);
tcase_add_test(tc1_1, s21_sprintf_test_911__);
tcase_add_test(tc1_1, s21_sprintf_test_912__);
tcase_add_test(tc1_1, s21_sprintf_test_913__);
tcase_add_test(tc1_1, s21_sprintf_test_914__);
tcase_add_test(tc1_1, s21_sprintf_test_915__);
tcase_add_test(tc1_1, s21_sprintf_test_916__);
tcase_add_test(tc1_1, s21_sprintf_test_917__);
tcase_add_test(tc1_1, s21_sprintf_test_918__);
tcase_add_test(tc1_1, s21_sprintf_test_919__);
tcase_add_test(tc1_1, s21_sprintf_test_920__);
tcase_add_test(tc1_1, s21_sprintf_test_921__);
tcase_add_test(tc1_1, s21_sprintf_test_922__);
tcase_add_test(tc1_1, s21_sprintf_test_923__);
tcase_add_test(tc1_1, s21_sprintf_test_924__);
tcase_add_test(tc1_1, s21_sprintf_test_925__);
tcase_add_test(tc1_1, s21_sprintf_test_926__);
tcase_add_test(tc1_1, s21_sprintf_test_927__);
tcase_add_test(tc1_1, s21_sprintf_test_928__);
tcase_add_test(tc1_1, s21_sprintf_test_929__);
tcase_add_test(tc1_1, s21_sprintf_test_930__);
tcase_add_test(tc1_1, s21_sprintf_test_931__);
tcase_add_test(tc1_1, s21_sprintf_test_932__);
tcase_add_test(tc1_1, s21_sprintf_test_933__);
tcase_add_test(tc1_1, s21_sprintf_test_934__);
tcase_add_test(tc1_1, s21_sprintf_test_935__);
tcase_add_test(tc1_1, s21_sprintf_test_936__);
tcase_add_test(tc1_1, s21_sprintf_test_937__);
tcase_add_test(tc1_1, s21_sprintf_test_938__);
tcase_add_test(tc1_1, s21_sprintf_test_939__);
tcase_add_test(tc1_1, s21_sprintf_test_940__);
tcase_add_test(tc1_1, s21_sprintf_test_941__);
tcase_add_test(tc1_1, s21_sprintf_test_942__);
tcase_add_test(tc1_1, s21_sprintf_test_943__);
tcase_add_test(tc1_1, s21_sprintf_test_944__);
tcase_add_test(tc1_1, s21_sprintf_test_945__);
tcase_add_test(tc1_1, s21_sprintf_test_946__);
tcase_add_test(tc1_1, s21_sprintf_test_947__);
tcase_add_test(tc1_1, s21_sprintf_test_948__);
tcase_add_test(tc1_1, s21_sprintf_test_949__);
tcase_add_test(tc1_1, s21_sprintf_test_950__);
tcase_add_test(tc1_1, s21_sprintf_test_951__);
tcase_add_test(tc1_1, s21_sprintf_test_952__);
tcase_add_test(tc1_1, s21_sprintf_test_953__);
tcase_add_test(tc1_1, s21_sprintf_test_954__);
tcase_add_test(tc1_1, s21_sprintf_test_955__);
tcase_add_test(tc1_1, s21_sprintf_test_956__);
tcase_add_test(tc1_1, s21_sprintf_test_957__);
tcase_add_test(tc1_1, s21_sprintf_test_958__);
tcase_add_test(tc1_1, s21_sprintf_test_959__);
tcase_add_test(tc1_1, s21_sprintf_test_960__);
tcase_add_test(tc1_1, s21_sprintf_test_961__);
tcase_add_test(tc1_1, s21_sprintf_test_962__);
tcase_add_test(tc1_1, s21_sprintf_test_963__);
tcase_add_test(tc1_1, s21_sprintf_test_964__);
tcase_add_test(tc1_1, s21_sprintf_test_965__);
tcase_add_test(tc1_1, s21_sprintf_test_966__);
tcase_add_test(tc1_1, s21_sprintf_test_967__);
tcase_add_test(tc1_1, s21_sprintf_test_968__);
tcase_add_test(tc1_1, s21_sprintf_test_969__);
tcase_add_test(tc1_1, s21_sprintf_test_970__);
tcase_add_test(tc1_1, s21_sprintf_test_971__);
tcase_add_test(tc1_1, s21_sprintf_test_972__);
tcase_add_test(tc1_1, s21_sprintf_test_973__);
tcase_add_test(tc1_1, s21_sprintf_test_974__);
tcase_add_test(tc1_1, s21_sprintf_test_975__);
tcase_add_test(tc1_1, s21_sprintf_test_976__);
tcase_add_test(tc1_1, s21_sprintf_test_977__);
tcase_add_test(tc1_1, s21_sprintf_test_978__);
tcase_add_test(tc1_1, s21_sprintf_test_979__);
tcase_add_test(tc1_1, s21_sprintf_test_980__);
tcase_add_test(tc1_1, s21_sprintf_test_981__);
tcase_add_test(tc1_1, s21_sprintf_test_982__);
tcase_add_test(tc1_1, s21_sprintf_test_983__);
tcase_add_test(tc1_1, s21_sprintf_test_984__);
tcase_add_test(tc1_1, s21_sprintf_test_985__);
tcase_add_test(tc1_1, s21_sprintf_test_986__);
tcase_add_test(tc1_1, s21_sprintf_test_987__);
tcase_add_test(tc1_1, s21_sprintf_test_988__);
tcase_add_test(tc1_1, s21_sprintf_test_989__);
tcase_add_test(tc1_1, s21_sprintf_test_990__);
tcase_add_test(tc1_1, s21_sprintf_test_991__);
tcase_add_test(tc1_1, s21_sprintf_test_992__);
tcase_add_test(tc1_1, s21_sprintf_test_993__);
tcase_add_test(tc1_1, s21_sprintf_test_994__);
tcase_add_test(tc1_1, s21_sprintf_test_995__);
tcase_add_test(tc1_1, s21_sprintf_test_996__);
tcase_add_test(tc1_1, s21_sprintf_test_997__);
tcase_add_test(tc1_1, s21_sprintf_test_998__);
tcase_add_test(tc1_1, s21_sprintf_test_999__);
tcase_add_test(tc1_1, s21_sprintf_test_1000__);
tcase_add_test(tc1_1, s21_sprintf_test_1001__);
tcase_add_test(tc1_1, s21_sprintf_test_1002__);
tcase_add_test(tc1_1, s21_sprintf_test_1003__);
tcase_add_test(tc1_1, s21_sprintf_test_1004__);
tcase_add_test(tc1_1, s21_sprintf_test_1005__);
tcase_add_test(tc1_1, s21_sprintf_test_1006__);
tcase_add_test(tc1_1, s21_sprintf_test_1007__);
tcase_add_test(tc1_1, s21_sprintf_test_1008__);
tcase_add_test(tc1_1, s21_sprintf_test_1009__);
tcase_add_test(tc1_1, s21_sprintf_test_1010__);
tcase_add_test(tc1_1, s21_sprintf_test_1011__);
tcase_add_test(tc1_1, s21_sprintf_test_1012__);
tcase_add_test(tc1_1, s21_sprintf_test_1013__);
tcase_add_test(tc1_1, s21_sprintf_test_1014__);
tcase_add_test(tc1_1, s21_sprintf_test_1015__);
tcase_add_test(tc1_1, s21_sprintf_test_1016__);
tcase_add_test(tc1_1, s21_sprintf_test_1017__);
tcase_add_test(tc1_1, s21_sprintf_test_1018__);
tcase_add_test(tc1_1, s21_sprintf_test_1019__);
tcase_add_test(tc1_1, s21_sprintf_test_1020__);
tcase_add_test(tc1_1, s21_sprintf_test_1021__);
tcase_add_test(tc1_1, s21_sprintf_test_1022__);
tcase_add_test(tc1_1, s21_sprintf_test_1023__);
tcase_add_test(tc1_1, s21_sprintf_test_1024__);
tcase_add_test(tc1_1, s21_sprintf_test_1025__);
tcase_add_test(tc1_1, s21_sprintf_test_1026__);
tcase_add_test(tc1_1, s21_sprintf_test_1027__);
tcase_add_test(tc1_1, s21_sprintf_test_1028__);
tcase_add_test(tc1_1, s21_sprintf_test_1029__);
tcase_add_test(tc1_1, s21_sprintf_test_1030__);
tcase_add_test(tc1_1, s21_sprintf_test_1031__);
tcase_add_test(tc1_1, s21_sprintf_test_1032__);
tcase_add_test(tc1_1, s21_sprintf_test_1033__);
tcase_add_test(tc1_1, s21_sprintf_test_1034__);
tcase_add_test(tc1_1, s21_sprintf_test_1035__);
tcase_add_test(tc1_1, s21_sprintf_test_1036__);
tcase_add_test(tc1_1, s21_sprintf_test_1037__);
tcase_add_test(tc1_1, s21_sprintf_test_1038__);
tcase_add_test(tc1_1, s21_sprintf_test_1039__);
tcase_add_test(tc1_1, s21_sprintf_test_1040__);
tcase_add_test(tc1_1, s21_sprintf_test_1041__);
tcase_add_test(tc1_1, s21_sprintf_test_1042__);
tcase_add_test(tc1_1, s21_sprintf_test_1043__);
tcase_add_test(tc1_1, s21_sprintf_test_1044__);
tcase_add_test(tc1_1, s21_sprintf_test_1045__);
tcase_add_test(tc1_1, s21_sprintf_test_1046__);
tcase_add_test(tc1_1, s21_sprintf_test_1047__);
tcase_add_test(tc1_1, s21_sprintf_test_1048__);
tcase_add_test(tc1_1, s21_sprintf_test_1049__);
tcase_add_test(tc1_1, s21_sprintf_test_1050__);
tcase_add_test(tc1_1, s21_sprintf_test_1051__);
tcase_add_test(tc1_1, s21_sprintf_test_1052__);
tcase_add_test(tc1_1, s21_sprintf_test_1053__);
tcase_add_test(tc1_1, s21_sprintf_test_1054__);
tcase_add_test(tc1_1, s21_sprintf_test_1055__);
tcase_add_test(tc1_1, s21_sprintf_test_1056__);
tcase_add_test(tc1_1, s21_sprintf_test_1057__);
tcase_add_test(tc1_1, s21_sprintf_test_1058__);
tcase_add_test(tc1_1, s21_sprintf_test_1059__);
tcase_add_test(tc1_1, s21_sprintf_test_1060__);
tcase_add_test(tc1_1, s21_sprintf_test_1061__);
tcase_add_test(tc1_1, s21_sprintf_test_1062__);
tcase_add_test(tc1_1, s21_sprintf_test_1063__);
tcase_add_test(tc1_1, s21_sprintf_test_1064__);
tcase_add_test(tc1_1, s21_sprintf_test_1065__);
tcase_add_test(tc1_1, s21_sprintf_test_1066__);
tcase_add_test(tc1_1, s21_sprintf_test_1067__);
tcase_add_test(tc1_1, s21_sprintf_test_1068__);
tcase_add_test(tc1_1, s21_sprintf_test_1069__);
tcase_add_test(tc1_1, s21_sprintf_test_1070__);
tcase_add_test(tc1_1, s21_sprintf_test_1071__);
tcase_add_test(tc1_1, s21_sprintf_test_1072__);
tcase_add_test(tc1_1, s21_sprintf_test_1073__);
tcase_add_test(tc1_1, s21_sprintf_test_1074__);
tcase_add_test(tc1_1, s21_sprintf_test_1075__);
tcase_add_test(tc1_1, s21_sprintf_test_1076__);
tcase_add_test(tc1_1, s21_sprintf_test_1077__);
tcase_add_test(tc1_1, s21_sprintf_test_1078__);
tcase_add_test(tc1_1, s21_sprintf_test_1079__);
tcase_add_test(tc1_1, s21_sprintf_test_1080__);
tcase_add_test(tc1_1, s21_sprintf_test_1081__);
tcase_add_test(tc1_1, s21_sprintf_test_1082__);
tcase_add_test(tc1_1, s21_sprintf_test_1083__);
tcase_add_test(tc1_1, s21_sprintf_test_1084__);
tcase_add_test(tc1_1, s21_sprintf_test_1085__);
tcase_add_test(tc1_1, s21_sprintf_test_1086__);
tcase_add_test(tc1_1, s21_sprintf_test_1087__);
tcase_add_test(tc1_1, s21_sprintf_test_1088__);
tcase_add_test(tc1_1, s21_sprintf_test_1089__);
tcase_add_test(tc1_1, s21_sprintf_test_1090__);
tcase_add_test(tc1_1, s21_sprintf_test_1091__);
tcase_add_test(tc1_1, s21_sprintf_test_1092__);
tcase_add_test(tc1_1, s21_sprintf_test_1093__);
tcase_add_test(tc1_1, s21_sprintf_test_1094__);
tcase_add_test(tc1_1, s21_sprintf_test_1095__);
tcase_add_test(tc1_1, s21_sprintf_test_1096__);
tcase_add_test(tc1_1, s21_sprintf_test_1097__);
tcase_add_test(tc1_1, s21_sprintf_test_1098__);
tcase_add_test(tc1_1, s21_sprintf_test_1099__);
tcase_add_test(tc1_1, s21_sprintf_test_1100__);
tcase_add_test(tc1_1, s21_sprintf_test_1101__);
tcase_add_test(tc1_1, s21_sprintf_test_1102__);
tcase_add_test(tc1_1, s21_sprintf_test_1103__);
tcase_add_test(tc1_1, s21_sprintf_test_1104__);
tcase_add_test(tc1_1, s21_sprintf_test_1105__);
tcase_add_test(tc1_1, s21_sprintf_test_1106__);
tcase_add_test(tc1_1, s21_sprintf_test_1107__);
tcase_add_test(tc1_1, s21_sprintf_test_1108__);
tcase_add_test(tc1_1, s21_sprintf_test_1109__);
tcase_add_test(tc1_1, s21_sprintf_test_1110__);
tcase_add_test(tc1_1, s21_sprintf_test_1111__);
tcase_add_test(tc1_1, s21_sprintf_test_1112__);
tcase_add_test(tc1_1, s21_sprintf_test_1113__);
tcase_add_test(tc1_1, s21_sprintf_test_1114__);
tcase_add_test(tc1_1, s21_sprintf_test_1115__);
tcase_add_test(tc1_1, s21_sprintf_test_1116__);
tcase_add_test(tc1_1, s21_sprintf_test_1117__);
tcase_add_test(tc1_1, s21_sprintf_test_1118__);
tcase_add_test(tc1_1, s21_sprintf_test_1119__);
tcase_add_test(tc1_1, s21_sprintf_test_1120__);
tcase_add_test(tc1_1, s21_sprintf_test_1121__);
tcase_add_test(tc1_1, s21_sprintf_test_1122__);
tcase_add_test(tc1_1, s21_sprintf_test_1123__);
tcase_add_test(tc1_1, s21_sprintf_test_1124__);
tcase_add_test(tc1_1, s21_sprintf_test_1125__);
tcase_add_test(tc1_1, s21_sprintf_test_1126__);
tcase_add_test(tc1_1, s21_sprintf_test_1127__);
tcase_add_test(tc1_1, s21_sprintf_test_1128__);
tcase_add_test(tc1_1, s21_sprintf_test_1129__);
tcase_add_test(tc1_1, s21_sprintf_test_1130__);
tcase_add_test(tc1_1, s21_sprintf_test_1131__);
tcase_add_test(tc1_1, s21_sprintf_test_1132__);
tcase_add_test(tc1_1, s21_sprintf_test_1133__);
tcase_add_test(tc1_1, s21_sprintf_test_1134__);
tcase_add_test(tc1_1, s21_sprintf_test_1135__);
tcase_add_test(tc1_1, s21_sprintf_test_1136__);
tcase_add_test(tc1_1, s21_sprintf_test_1137__);
tcase_add_test(tc1_1, s21_sprintf_test_1138__);
tcase_add_test(tc1_1, s21_sprintf_test_1139__);
tcase_add_test(tc1_1, s21_sprintf_test_1140__);
tcase_add_test(tc1_1, s21_sprintf_test_1141__);
tcase_add_test(tc1_1, s21_sprintf_test_1142__);
tcase_add_test(tc1_1, s21_sprintf_test_1143__);
tcase_add_test(tc1_1, s21_sprintf_test_1144__);
tcase_add_test(tc1_1, s21_sprintf_test_1145__);
tcase_add_test(tc1_1, s21_sprintf_test_1146__);
tcase_add_test(tc1_1, s21_sprintf_test_1147__);
tcase_add_test(tc1_1, s21_sprintf_test_1148__);
tcase_add_test(tc1_1, s21_sprintf_test_1149__);
tcase_add_test(tc1_1, s21_sprintf_test_1150__);
tcase_add_test(tc1_1, s21_sprintf_test_1151__);
tcase_add_test(tc1_1, s21_sprintf_test_1152__);
tcase_add_test(tc1_1, s21_sprintf_test_1153__);
tcase_add_test(tc1_1, s21_sprintf_test_1154__);
tcase_add_test(tc1_1, s21_sprintf_test_1155__);
tcase_add_test(tc1_1, s21_sprintf_test_1156__);
tcase_add_test(tc1_1, s21_sprintf_test_1157__);
tcase_add_test(tc1_1, s21_sprintf_test_1158__);
tcase_add_test(tc1_1, s21_sprintf_test_1159__);
tcase_add_test(tc1_1, s21_sprintf_test_1160__);
tcase_add_test(tc1_1, s21_sprintf_test_1161__);
tcase_add_test(tc1_1, s21_sprintf_test_1162__);
tcase_add_test(tc1_1, s21_sprintf_test_1163__);
tcase_add_test(tc1_1, s21_sprintf_test_1164__);
tcase_add_test(tc1_1, s21_sprintf_test_1165__);
tcase_add_test(tc1_1, s21_sprintf_test_1166__);
tcase_add_test(tc1_1, s21_sprintf_test_1167__);
tcase_add_test(tc1_1, s21_sprintf_test_1168__);
tcase_add_test(tc1_1, s21_sprintf_test_1169__);
tcase_add_test(tc1_1, s21_sprintf_test_1170__);
tcase_add_test(tc1_1, s21_sprintf_test_1171__);
tcase_add_test(tc1_1, s21_sprintf_test_1172__);
tcase_add_test(tc1_1, s21_sprintf_test_1173__);
tcase_add_test(tc1_1, s21_sprintf_test_1174__);
tcase_add_test(tc1_1, s21_sprintf_test_1175__);
tcase_add_test(tc1_1, s21_sprintf_test_1176__);
tcase_add_test(tc1_1, s21_sprintf_test_1177__);
tcase_add_test(tc1_1, s21_sprintf_test_1178__);
tcase_add_test(tc1_1, s21_sprintf_test_1179__);
tcase_add_test(tc1_1, s21_sprintf_test_1180__);
tcase_add_test(tc1_1, s21_sprintf_test_1181__);
tcase_add_test(tc1_1, s21_sprintf_test_1182__);
tcase_add_test(tc1_1, s21_sprintf_test_1183__);
tcase_add_test(tc1_1, s21_sprintf_test_1184__);
tcase_add_test(tc1_1, s21_sprintf_test_1185__);
tcase_add_test(tc1_1, s21_sprintf_test_1186__);
tcase_add_test(tc1_1, s21_sprintf_test_1187__);
tcase_add_test(tc1_1, s21_sprintf_test_1188__);
tcase_add_test(tc1_1, s21_sprintf_test_1189__);
tcase_add_test(tc1_1, s21_sprintf_test_1190__);
tcase_add_test(tc1_1, s21_sprintf_test_1191__);
tcase_add_test(tc1_1, s21_sprintf_test_1192__);
tcase_add_test(tc1_1, s21_sprintf_test_1193__);
tcase_add_test(tc1_1, s21_sprintf_test_1194__);
tcase_add_test(tc1_1, s21_sprintf_test_1195__);
tcase_add_test(tc1_1, s21_sprintf_test_1196__);
tcase_add_test(tc1_1, s21_sprintf_test_1197__);
tcase_add_test(tc1_1, s21_sprintf_test_1198__);
tcase_add_test(tc1_1, s21_sprintf_test_1199__);
tcase_add_test(tc1_1, s21_sprintf_test_1200__);
tcase_add_test(tc1_1, s21_sprintf_test_1201__);
tcase_add_test(tc1_1, s21_sprintf_test_1202__);
tcase_add_test(tc1_1, s21_sprintf_test_1203__);
tcase_add_test(tc1_1, s21_sprintf_test_1204__);
tcase_add_test(tc1_1, s21_sprintf_test_1205__);
tcase_add_test(tc1_1, s21_sprintf_test_1206__);
tcase_add_test(tc1_1, s21_sprintf_test_1207__);
tcase_add_test(tc1_1, s21_sprintf_test_1208__);
tcase_add_test(tc1_1, s21_sprintf_test_1209__);
tcase_add_test(tc1_1, s21_sprintf_test_1210__);
tcase_add_test(tc1_1, s21_sprintf_test_1211__);
tcase_add_test(tc1_1, s21_sprintf_test_1212__);
tcase_add_test(tc1_1, s21_sprintf_test_1213__);
tcase_add_test(tc1_1, s21_sprintf_test_1214__);
tcase_add_test(tc1_1, s21_sprintf_test_1215__);
tcase_add_test(tc1_1, s21_sprintf_test_1216__);
tcase_add_test(tc1_1, s21_sprintf_test_1217__);
tcase_add_test(tc1_1, s21_sprintf_test_1218__);
tcase_add_test(tc1_1, s21_sprintf_test_1219__);
tcase_add_test(tc1_1, s21_sprintf_test_1220__);
tcase_add_test(tc1_1, s21_sprintf_test_1221__);
tcase_add_test(tc1_1, s21_sprintf_test_1222__);
tcase_add_test(tc1_1, s21_sprintf_test_1223__);
tcase_add_test(tc1_1, s21_sprintf_test_1224__);
tcase_add_test(tc1_1, s21_sprintf_test_1225__);
tcase_add_test(tc1_1, s21_sprintf_test_1226__);
tcase_add_test(tc1_1, s21_sprintf_test_1227__);
tcase_add_test(tc1_1, s21_sprintf_test_1228__);
tcase_add_test(tc1_1, s21_sprintf_test_1229__);
tcase_add_test(tc1_1, s21_sprintf_test_1230__);
tcase_add_test(tc1_1, s21_sprintf_test_1231__);
tcase_add_test(tc1_1, s21_sprintf_test_1232__);
tcase_add_test(tc1_1, s21_sprintf_test_1233__);
tcase_add_test(tc1_1, s21_sprintf_test_1234__);
tcase_add_test(tc1_1, s21_sprintf_test_1235__);
tcase_add_test(tc1_1, s21_sprintf_test_1236__);
tcase_add_test(tc1_1, s21_sprintf_test_1237__);
tcase_add_test(tc1_1, s21_sprintf_test_1238__);
tcase_add_test(tc1_1, s21_sprintf_test_1239__);
tcase_add_test(tc1_1, s21_sprintf_test_1240__);
tcase_add_test(tc1_1, s21_sprintf_test_1241__);
tcase_add_test(tc1_1, s21_sprintf_test_1242__);
tcase_add_test(tc1_1, s21_sprintf_test_1243__);
tcase_add_test(tc1_1, s21_sprintf_test_1244__);
tcase_add_test(tc1_1, s21_sprintf_test_1245__);
tcase_add_test(tc1_1, s21_sprintf_test_1246__);
tcase_add_test(tc1_1, s21_sprintf_test_1247__);
tcase_add_test(tc1_1, s21_sprintf_test_1248__);
tcase_add_test(tc1_1, s21_sprintf_test_1249__);
tcase_add_test(tc1_1, s21_sprintf_test_1250__);
tcase_add_test(tc1_1, s21_sprintf_test_1251__);
tcase_add_test(tc1_1, s21_sprintf_test_1252__);
tcase_add_test(tc1_1, s21_sprintf_test_1253__);
tcase_add_test(tc1_1, s21_sprintf_test_1254__);
tcase_add_test(tc1_1, s21_sprintf_test_1255__);
tcase_add_test(tc1_1, s21_sprintf_test_1256__);
tcase_add_test(tc1_1, s21_sprintf_test_1257__);
tcase_add_test(tc1_1, s21_sprintf_test_1258__);
tcase_add_test(tc1_1, s21_sprintf_test_1259__);
tcase_add_test(tc1_1, s21_sprintf_test_1260__);
tcase_add_test(tc1_1, s21_sprintf_test_1261__);
tcase_add_test(tc1_1, s21_sprintf_test_1262__);
tcase_add_test(tc1_1, s21_sprintf_test_1263__);
tcase_add_test(tc1_1, s21_sprintf_test_1264__);
tcase_add_test(tc1_1, s21_sprintf_test_1265__);
tcase_add_test(tc1_1, s21_sprintf_test_1266__);
tcase_add_test(tc1_1, s21_sprintf_test_1267__);
tcase_add_test(tc1_1, s21_sprintf_test_1268__);
tcase_add_test(tc1_1, s21_sprintf_test_1269__);
tcase_add_test(tc1_1, s21_sprintf_test_1270__);
tcase_add_test(tc1_1, s21_sprintf_test_1271__);
tcase_add_test(tc1_1, s21_sprintf_test_1272__);
tcase_add_test(tc1_1, s21_sprintf_test_1273__);
tcase_add_test(tc1_1, s21_sprintf_test_1274__);
tcase_add_test(tc1_1, s21_sprintf_test_1275__);
tcase_add_test(tc1_1, s21_sprintf_test_1276__);
tcase_add_test(tc1_1, s21_sprintf_test_1277__);
tcase_add_test(tc1_1, s21_sprintf_test_1278__);
tcase_add_test(tc1_1, s21_sprintf_test_1279__);
tcase_add_test(tc1_1, s21_sprintf_test_1280__);
tcase_add_test(tc1_1, s21_sprintf_test_1281__);
tcase_add_test(tc1_1, s21_sprintf_test_1282__);
tcase_add_test(tc1_1, s21_sprintf_test_1283__);
tcase_add_test(tc1_1, s21_sprintf_test_1284__);
tcase_add_test(tc1_1, s21_sprintf_test_1285__);
tcase_add_test(tc1_1, s21_sprintf_test_1286__);
tcase_add_test(tc1_1, s21_sprintf_test_1287__);
tcase_add_test(tc1_1, s21_sprintf_test_1288__);
tcase_add_test(tc1_1, s21_sprintf_test_1289__);
tcase_add_test(tc1_1, s21_sprintf_test_1290__);
tcase_add_test(tc1_1, s21_sprintf_test_1291__);
tcase_add_test(tc1_1, s21_sprintf_test_1292__);
tcase_add_test(tc1_1, s21_sprintf_test_1293__);
tcase_add_test(tc1_1, s21_sprintf_test_1294__);
tcase_add_test(tc1_1, s21_sprintf_test_1295__);
tcase_add_test(tc1_1, s21_sprintf_test_1296__);
tcase_add_test(tc1_1, s21_sprintf_test_1297__);
tcase_add_test(tc1_1, s21_sprintf_test_1298__);
tcase_add_test(tc1_1, s21_sprintf_test_1299__);
tcase_add_test(tc1_1, s21_sprintf_test_1300__);
tcase_add_test(tc1_1, s21_sprintf_test_1301__);
tcase_add_test(tc1_1, s21_sprintf_test_1302__);
tcase_add_test(tc1_1, s21_sprintf_test_1303__);
tcase_add_test(tc1_1, s21_sprintf_test_1304__);
tcase_add_test(tc1_1, s21_sprintf_test_1305__);
tcase_add_test(tc1_1, s21_sprintf_test_1306__);
tcase_add_test(tc1_1, s21_sprintf_test_1307__);
tcase_add_test(tc1_1, s21_sprintf_test_1308__);
tcase_add_test(tc1_1, s21_sprintf_test_1309__);
tcase_add_test(tc1_1, s21_sprintf_test_1310__);
tcase_add_test(tc1_1, s21_sprintf_test_1311__);
tcase_add_test(tc1_1, s21_sprintf_test_1312__);
tcase_add_test(tc1_1, s21_sprintf_test_1313__);
tcase_add_test(tc1_1, s21_sprintf_test_1314__);
tcase_add_test(tc1_1, s21_sprintf_test_1315__);
tcase_add_test(tc1_1, s21_sprintf_test_1316__);
tcase_add_test(tc1_1, s21_sprintf_test_1317__);
tcase_add_test(tc1_1, s21_sprintf_test_1318__);
tcase_add_test(tc1_1, s21_sprintf_test_1319__);
tcase_add_test(tc1_1, s21_sprintf_test_1320__);
tcase_add_test(tc1_1, s21_sprintf_test_1321__);
tcase_add_test(tc1_1, s21_sprintf_test_1322__);
tcase_add_test(tc1_1, s21_sprintf_test_1323__);
tcase_add_test(tc1_1, s21_sprintf_test_1324__);
tcase_add_test(tc1_1, s21_sprintf_test_1325__);
tcase_add_test(tc1_1, s21_sprintf_test_1326__);
tcase_add_test(tc1_1, s21_sprintf_test_1327__);
tcase_add_test(tc1_1, s21_sprintf_test_1328__);
tcase_add_test(tc1_1, s21_sprintf_test_1329__);
tcase_add_test(tc1_1, s21_sprintf_test_1330__);
tcase_add_test(tc1_1, s21_sprintf_test_1331__);
tcase_add_test(tc1_1, s21_sprintf_test_1332__);
tcase_add_test(tc1_1, s21_sprintf_test_1333__);
tcase_add_test(tc1_1, s21_sprintf_test_1334__);
tcase_add_test(tc1_1, s21_sprintf_test_1335__);
tcase_add_test(tc1_1, s21_sprintf_test_1336__);
tcase_add_test(tc1_1, s21_sprintf_test_1337__);
tcase_add_test(tc1_1, s21_sprintf_test_1338__);
tcase_add_test(tc1_1, s21_sprintf_test_1339__);
tcase_add_test(tc1_1, s21_sprintf_test_1340__);
tcase_add_test(tc1_1, s21_sprintf_test_1341__);
tcase_add_test(tc1_1, s21_sprintf_test_1342__);
tcase_add_test(tc1_1, s21_sprintf_test_1343__);
tcase_add_test(tc1_1, s21_sprintf_test_1344__);
tcase_add_test(tc1_1, s21_sprintf_test_1345__);
tcase_add_test(tc1_1, s21_sprintf_test_1346__);
tcase_add_test(tc1_1, s21_sprintf_test_1347__);
tcase_add_test(tc1_1, s21_sprintf_test_1348__);
tcase_add_test(tc1_1, s21_sprintf_test_1349__);
tcase_add_test(tc1_1, s21_sprintf_test_1350__);
tcase_add_test(tc1_1, s21_sprintf_test_1351__);
tcase_add_test(tc1_1, s21_sprintf_test_1352__);
tcase_add_test(tc1_1, s21_sprintf_test_1353__);
tcase_add_test(tc1_1, s21_sprintf_test_1354__);
tcase_add_test(tc1_1, s21_sprintf_test_1355__);
tcase_add_test(tc1_1, s21_sprintf_test_1356__);
tcase_add_test(tc1_1, s21_sprintf_test_1357__);
tcase_add_test(tc1_1, s21_sprintf_test_1358__);
tcase_add_test(tc1_1, s21_sprintf_test_1359__);
tcase_add_test(tc1_1, s21_sprintf_test_1360__);
tcase_add_test(tc1_1, s21_sprintf_test_1361__);
tcase_add_test(tc1_1, s21_sprintf_test_1362__);
tcase_add_test(tc1_1, s21_sprintf_test_1363__);
tcase_add_test(tc1_1, s21_sprintf_test_1364__);
tcase_add_test(tc1_1, s21_sprintf_test_1365__);
tcase_add_test(tc1_1, s21_sprintf_test_1366__);
tcase_add_test(tc1_1, s21_sprintf_test_1367__);
tcase_add_test(tc1_1, s21_sprintf_test_1368__);
tcase_add_test(tc1_1, s21_sprintf_test_1369__);
tcase_add_test(tc1_1, s21_sprintf_test_1370__);
tcase_add_test(tc1_1, s21_sprintf_test_1371__);
tcase_add_test(tc1_1, s21_sprintf_test_1372__);
tcase_add_test(tc1_1, s21_sprintf_test_1373__);
tcase_add_test(tc1_1, s21_sprintf_test_1374__);
tcase_add_test(tc1_1, s21_sprintf_test_1375__);
tcase_add_test(tc1_1, s21_sprintf_test_1376__);
tcase_add_test(tc1_1, s21_sprintf_test_1377__);
tcase_add_test(tc1_1, s21_sprintf_test_1378__);
tcase_add_test(tc1_1, s21_sprintf_test_1379__);
tcase_add_test(tc1_1, s21_sprintf_test_1380__);
tcase_add_test(tc1_1, s21_sprintf_test_1381__);
tcase_add_test(tc1_1, s21_sprintf_test_1382__);
tcase_add_test(tc1_1, s21_sprintf_test_1383__);
tcase_add_test(tc1_1, s21_sprintf_test_1384__);
tcase_add_test(tc1_1, s21_sprintf_test_1385__);
tcase_add_test(tc1_1, s21_sprintf_test_1386__);
tcase_add_test(tc1_1, s21_sprintf_test_1387__);
tcase_add_test(tc1_1, s21_sprintf_test_1388__);
tcase_add_test(tc1_1, s21_sprintf_test_1389__);
tcase_add_test(tc1_1, s21_sprintf_test_1390__);
tcase_add_test(tc1_1, s21_sprintf_test_1391__);
tcase_add_test(tc1_1, s21_sprintf_test_1392__);
tcase_add_test(tc1_1, s21_sprintf_test_1393__);
tcase_add_test(tc1_1, s21_sprintf_test_1394__);
tcase_add_test(tc1_1, s21_sprintf_test_1395__);
tcase_add_test(tc1_1, s21_sprintf_test_1396__);
tcase_add_test(tc1_1, s21_sprintf_test_1397__);
tcase_add_test(tc1_1, s21_sprintf_test_1398__);
tcase_add_test(tc1_1, s21_sprintf_test_1399__);
tcase_add_test(tc1_1, s21_sprintf_test_1400__);
tcase_add_test(tc1_1, s21_sprintf_test_1401__);
tcase_add_test(tc1_1, s21_sprintf_test_1402__);
tcase_add_test(tc1_1, s21_sprintf_test_1403__);
tcase_add_test(tc1_1, s21_sprintf_test_1404__);
tcase_add_test(tc1_1, s21_sprintf_test_1405__);
tcase_add_test(tc1_1, s21_sprintf_test_1406__);
tcase_add_test(tc1_1, s21_sprintf_test_1407__);
tcase_add_test(tc1_1, s21_sprintf_test_1408__);
tcase_add_test(tc1_1, s21_sprintf_test_1409__);
tcase_add_test(tc1_1, s21_sprintf_test_1410__);
tcase_add_test(tc1_1, s21_sprintf_test_1411__);
tcase_add_test(tc1_1, s21_sprintf_test_1412__);
tcase_add_test(tc1_1, s21_sprintf_test_1413__);
tcase_add_test(tc1_1, s21_sprintf_test_1414__);
tcase_add_test(tc1_1, s21_sprintf_test_1415__);
tcase_add_test(tc1_1, s21_sprintf_test_1416__);
tcase_add_test(tc1_1, s21_sprintf_test_1417__);
tcase_add_test(tc1_1, s21_sprintf_test_1418__);
tcase_add_test(tc1_1, s21_sprintf_test_1419__);
tcase_add_test(tc1_1, s21_sprintf_test_1420__);
tcase_add_test(tc1_1, s21_sprintf_test_1421__);
tcase_add_test(tc1_1, s21_sprintf_test_1422__);
tcase_add_test(tc1_1, s21_sprintf_test_1423__);
tcase_add_test(tc1_1, s21_sprintf_test_1424__);
tcase_add_test(tc1_1, s21_sprintf_test_1425__);
tcase_add_test(tc1_1, s21_sprintf_test_1426__);
tcase_add_test(tc1_1, s21_sprintf_test_1427__);
tcase_add_test(tc1_1, s21_sprintf_test_1428__);
tcase_add_test(tc1_1, s21_sprintf_test_1429__);
tcase_add_test(tc1_1, s21_sprintf_test_1430__);
tcase_add_test(tc1_1, s21_sprintf_test_1431__);
tcase_add_test(tc1_1, s21_sprintf_test_1432__);
tcase_add_test(tc1_1, s21_sprintf_test_1433__);
tcase_add_test(tc1_1, s21_sprintf_test_1434__);
tcase_add_test(tc1_1, s21_sprintf_test_1435__);
tcase_add_test(tc1_1, s21_sprintf_test_1436__);
tcase_add_test(tc1_1, s21_sprintf_test_1437__);
tcase_add_test(tc1_1, s21_sprintf_test_1438__);
tcase_add_test(tc1_1, s21_sprintf_test_1439__);
tcase_add_test(tc1_1, s21_sprintf_test_1440__);
tcase_add_test(tc1_1, s21_sprintf_test_1441__);
tcase_add_test(tc1_1, s21_sprintf_test_1442__);
tcase_add_test(tc1_1, s21_sprintf_test_1443__);
tcase_add_test(tc1_1, s21_sprintf_test_1444__);
tcase_add_test(tc1_1, s21_sprintf_test_1445__);
tcase_add_test(tc1_1, s21_sprintf_test_1446__);
tcase_add_test(tc1_1, s21_sprintf_test_1447__);
tcase_add_test(tc1_1, s21_sprintf_test_1448__);
tcase_add_test(tc1_1, s21_sprintf_test_1449__);
tcase_add_test(tc1_1, s21_sprintf_test_1450__);
tcase_add_test(tc1_1, s21_sprintf_test_1451__);
tcase_add_test(tc1_1, s21_sprintf_test_1452__);
tcase_add_test(tc1_1, s21_sprintf_test_1453__);
tcase_add_test(tc1_1, s21_sprintf_test_1454__);
tcase_add_test(tc1_1, s21_sprintf_test_1455__);
tcase_add_test(tc1_1, s21_sprintf_test_1456__);
tcase_add_test(tc1_1, s21_sprintf_test_1457__);
tcase_add_test(tc1_1, s21_sprintf_test_1458__);
tcase_add_test(tc1_1, s21_sprintf_test_1459__);
tcase_add_test(tc1_1, s21_sprintf_test_1460__);
tcase_add_test(tc1_1, s21_sprintf_test_1461__);
tcase_add_test(tc1_1, s21_sprintf_test_1462__);
tcase_add_test(tc1_1, s21_sprintf_test_1463__);
tcase_add_test(tc1_1, s21_sprintf_test_1464__);
tcase_add_test(tc1_1, s21_sprintf_test_1465__);
tcase_add_test(tc1_1, s21_sprintf_test_1466__);
tcase_add_test(tc1_1, s21_sprintf_test_1467__);
tcase_add_test(tc1_1, s21_sprintf_test_1468__);
tcase_add_test(tc1_1, s21_sprintf_test_1469__);
tcase_add_test(tc1_1, s21_sprintf_test_1470__);
tcase_add_test(tc1_1, s21_sprintf_test_1471__);
tcase_add_test(tc1_1, s21_sprintf_test_1472__);
tcase_add_test(tc1_1, s21_sprintf_test_1473__);
tcase_add_test(tc1_1, s21_sprintf_test_1474__);
tcase_add_test(tc1_1, s21_sprintf_test_1475__);
tcase_add_test(tc1_1, s21_sprintf_test_1476__);
tcase_add_test(tc1_1, s21_sprintf_test_1477__);
tcase_add_test(tc1_1, s21_sprintf_test_1478__);
tcase_add_test(tc1_1, s21_sprintf_test_1479__);
tcase_add_test(tc1_1, s21_sprintf_test_1480__);
tcase_add_test(tc1_1, s21_sprintf_test_1481__);
tcase_add_test(tc1_1, s21_sprintf_test_1482__);
tcase_add_test(tc1_1, s21_sprintf_test_1483__);
tcase_add_test(tc1_1, s21_sprintf_test_1484__);
tcase_add_test(tc1_1, s21_sprintf_test_1485__);
tcase_add_test(tc1_1, s21_sprintf_test_1486__);
tcase_add_test(tc1_1, s21_sprintf_test_1487__);
tcase_add_test(tc1_1, s21_sprintf_test_1488__);
tcase_add_test(tc1_1, s21_sprintf_test_1489__);
tcase_add_test(tc1_1, s21_sprintf_test_1490__);
tcase_add_test(tc1_1, s21_sprintf_test_1491__);
tcase_add_test(tc1_1, s21_sprintf_test_1492__);
tcase_add_test(tc1_1, s21_sprintf_test_1493__);
tcase_add_test(tc1_1, s21_sprintf_test_1494__);
tcase_add_test(tc1_1, s21_sprintf_test_1495__);
tcase_add_test(tc1_1, s21_sprintf_test_1496__);
tcase_add_test(tc1_1, s21_sprintf_test_1497__);
tcase_add_test(tc1_1, s21_sprintf_test_1498__);
tcase_add_test(tc1_1, s21_sprintf_test_1499__);
tcase_add_test(tc1_1, s21_sprintf_test_1500__);
tcase_add_test(tc1_1, s21_sprintf_test_1501__);
tcase_add_test(tc1_1, s21_sprintf_test_1502__);
tcase_add_test(tc1_1, s21_sprintf_test_1503__);
tcase_add_test(tc1_1, s21_sprintf_test_1504__);
tcase_add_test(tc1_1, s21_sprintf_test_1505__);
tcase_add_test(tc1_1, s21_sprintf_test_1506__);
tcase_add_test(tc1_1, s21_sprintf_test_1507__);
tcase_add_test(tc1_1, s21_sprintf_test_1508__);
tcase_add_test(tc1_1, s21_sprintf_test_1509__);
tcase_add_test(tc1_1, s21_sprintf_test_1510__);
tcase_add_test(tc1_1, s21_sprintf_test_1511__);
tcase_add_test(tc1_1, s21_sprintf_test_1512__);
tcase_add_test(tc1_1, s21_sprintf_test_1513__);
tcase_add_test(tc1_1, s21_sprintf_test_1514__);
tcase_add_test(tc1_1, s21_sprintf_test_1515__);
tcase_add_test(tc1_1, s21_sprintf_test_1516__);
tcase_add_test(tc1_1, s21_sprintf_test_1517__);
tcase_add_test(tc1_1, s21_sprintf_test_1518__);
tcase_add_test(tc1_1, s21_sprintf_test_1519__);
tcase_add_test(tc1_1, s21_sprintf_test_1520__);
tcase_add_test(tc1_1, s21_sprintf_test_1521__);
tcase_add_test(tc1_1, s21_sprintf_test_1522__);
tcase_add_test(tc1_1, s21_sprintf_test_1523__);
tcase_add_test(tc1_1, s21_sprintf_test_1524__);
tcase_add_test(tc1_1, s21_sprintf_test_1525__);
tcase_add_test(tc1_1, s21_sprintf_test_1526__);
tcase_add_test(tc1_1, s21_sprintf_test_1527__);
tcase_add_test(tc1_1, s21_sprintf_test_1528__);
tcase_add_test(tc1_1, s21_sprintf_test_1529__);
tcase_add_test(tc1_1, s21_sprintf_test_1530__);
tcase_add_test(tc1_1, s21_sprintf_test_1531__);
tcase_add_test(tc1_1, s21_sprintf_test_1532__);
tcase_add_test(tc1_1, s21_sprintf_test_1533__);
tcase_add_test(tc1_1, s21_sprintf_test_1534__);
tcase_add_test(tc1_1, s21_sprintf_test_1535__);
tcase_add_test(tc1_1, s21_sprintf_test_1536__);
tcase_add_test(tc1_1, s21_sprintf_test_1537__);
tcase_add_test(tc1_1, s21_sprintf_test_1538__);
tcase_add_test(tc1_1, s21_sprintf_test_1539__);
tcase_add_test(tc1_1, s21_sprintf_test_1540__);
tcase_add_test(tc1_1, s21_sprintf_test_1541__);
tcase_add_test(tc1_1, s21_sprintf_test_1542__);
tcase_add_test(tc1_1, s21_sprintf_test_1543__);
tcase_add_test(tc1_1, s21_sprintf_test_1544__);
tcase_add_test(tc1_1, s21_sprintf_test_1545__);
tcase_add_test(tc1_1, s21_sprintf_test_1546__);
tcase_add_test(tc1_1, s21_sprintf_test_1547__);
tcase_add_test(tc1_1, s21_sprintf_test_1548__);
tcase_add_test(tc1_1, s21_sprintf_test_1549__);
tcase_add_test(tc1_1, s21_sprintf_test_1550__);
tcase_add_test(tc1_1, s21_sprintf_test_1551__);
tcase_add_test(tc1_1, s21_sprintf_test_1552__);
tcase_add_test(tc1_1, s21_sprintf_test_1553__);
tcase_add_test(tc1_1, s21_sprintf_test_1554__);
tcase_add_test(tc1_1, s21_sprintf_test_1555__);
tcase_add_test(tc1_1, s21_sprintf_test_1556__);
tcase_add_test(tc1_1, s21_sprintf_test_1557__);
tcase_add_test(tc1_1, s21_sprintf_test_1558__);
tcase_add_test(tc1_1, s21_sprintf_test_1559__);
tcase_add_test(tc1_1, s21_sprintf_test_1560__);
tcase_add_test(tc1_1, s21_sprintf_test_1561__);
tcase_add_test(tc1_1, s21_sprintf_test_1562__);
tcase_add_test(tc1_1, s21_sprintf_test_1563__);
tcase_add_test(tc1_1, s21_sprintf_test_1564__);
tcase_add_test(tc1_1, s21_sprintf_test_1565__);
tcase_add_test(tc1_1, s21_sprintf_test_1566__);
tcase_add_test(tc1_1, s21_sprintf_test_1567__);
tcase_add_test(tc1_1, s21_sprintf_test_1568__);
tcase_add_test(tc1_1, s21_sprintf_test_1569__);
tcase_add_test(tc1_1, s21_sprintf_test_1570__);
tcase_add_test(tc1_1, s21_sprintf_test_1571__);
tcase_add_test(tc1_1, s21_sprintf_test_1572__);
tcase_add_test(tc1_1, s21_sprintf_test_1573__);
tcase_add_test(tc1_1, s21_sprintf_test_1574__);
tcase_add_test(tc1_1, s21_sprintf_test_1575__);
tcase_add_test(tc1_1, s21_sprintf_test_1576__);
tcase_add_test(tc1_1, s21_sprintf_test_1577__);
tcase_add_test(tc1_1, s21_sprintf_test_1578__);
tcase_add_test(tc1_1, s21_sprintf_test_1579__);
tcase_add_test(tc1_1, s21_sprintf_test_1580__);
tcase_add_test(tc1_1, s21_sprintf_test_1581__);
tcase_add_test(tc1_1, s21_sprintf_test_1582__);
tcase_add_test(tc1_1, s21_sprintf_test_1583__);
tcase_add_test(tc1_1, s21_sprintf_test_1584__);
tcase_add_test(tc1_1, s21_sprintf_test_1585__);
tcase_add_test(tc1_1, s21_sprintf_test_1586__);
tcase_add_test(tc1_1, s21_sprintf_test_1587__);
tcase_add_test(tc1_1, s21_sprintf_test_1588__);
tcase_add_test(tc1_1, s21_sprintf_test_1589__);
tcase_add_test(tc1_1, s21_sprintf_test_1590__);
tcase_add_test(tc1_1, s21_sprintf_test_1591__);
tcase_add_test(tc1_1, s21_sprintf_test_1592__);
tcase_add_test(tc1_1, s21_sprintf_test_1593__);
tcase_add_test(tc1_1, s21_sprintf_test_1594__);
tcase_add_test(tc1_1, s21_sprintf_test_1595__);
tcase_add_test(tc1_1, s21_sprintf_test_1596__);
tcase_add_test(tc1_1, s21_sprintf_test_1597__);
tcase_add_test(tc1_1, s21_sprintf_test_1598__);
tcase_add_test(tc1_1, s21_sprintf_test_1599__);
tcase_add_test(tc1_1, s21_sprintf_test_1600__);
tcase_add_test(tc1_1, s21_sprintf_test_1601__);
tcase_add_test(tc1_1, s21_sprintf_test_1602__);
tcase_add_test(tc1_1, s21_sprintf_test_1603__);
tcase_add_test(tc1_1, s21_sprintf_test_1604__);
tcase_add_test(tc1_1, s21_sprintf_test_1605__);
tcase_add_test(tc1_1, s21_sprintf_test_1606__);
tcase_add_test(tc1_1, s21_sprintf_test_1607__);
tcase_add_test(tc1_1, s21_sprintf_test_1608__);
tcase_add_test(tc1_1, s21_sprintf_test_1609__);
tcase_add_test(tc1_1, s21_sprintf_test_1610__);
tcase_add_test(tc1_1, s21_sprintf_test_1611__);
tcase_add_test(tc1_1, s21_sprintf_test_1612__);
tcase_add_test(tc1_1, s21_sprintf_test_1613__);
tcase_add_test(tc1_1, s21_sprintf_test_1614__);
tcase_add_test(tc1_1, s21_sprintf_test_1615__);
tcase_add_test(tc1_1, s21_sprintf_test_1616__);
tcase_add_test(tc1_1, s21_sprintf_test_1617__);
tcase_add_test(tc1_1, s21_sprintf_test_1618__);
tcase_add_test(tc1_1, s21_sprintf_test_1619__);
tcase_add_test(tc1_1, s21_sprintf_test_1620__);
tcase_add_test(tc1_1, s21_sprintf_test_1621__);
tcase_add_test(tc1_1, s21_sprintf_test_1622__);
tcase_add_test(tc1_1, s21_sprintf_test_1623__);
tcase_add_test(tc1_1, s21_sprintf_test_1624__);
tcase_add_test(tc1_1, s21_sprintf_test_1625__);
tcase_add_test(tc1_1, s21_sprintf_test_1626__);
tcase_add_test(tc1_1, s21_sprintf_test_1627__);
tcase_add_test(tc1_1, s21_sprintf_test_1628__);
tcase_add_test(tc1_1, s21_sprintf_test_1629__);
tcase_add_test(tc1_1, s21_sprintf_test_1630__);
tcase_add_test(tc1_1, s21_sprintf_test_1631__);
tcase_add_test(tc1_1, s21_sprintf_test_1632__);
tcase_add_test(tc1_1, s21_sprintf_test_1633__);
tcase_add_test(tc1_1, s21_sprintf_test_1634__);
tcase_add_test(tc1_1, s21_sprintf_test_1635__);
tcase_add_test(tc1_1, s21_sprintf_test_1636__);
tcase_add_test(tc1_1, s21_sprintf_test_1637__);
tcase_add_test(tc1_1, s21_sprintf_test_1638__);
tcase_add_test(tc1_1, s21_sprintf_test_1639__);
tcase_add_test(tc1_1, s21_sprintf_test_1640__);
tcase_add_test(tc1_1, s21_sprintf_test_1641__);
tcase_add_test(tc1_1, s21_sprintf_test_1642__);
tcase_add_test(tc1_1, s21_sprintf_test_1643__);
tcase_add_test(tc1_1, s21_sprintf_test_1644__);
tcase_add_test(tc1_1, s21_sprintf_test_1645__);
tcase_add_test(tc1_1, s21_sprintf_test_1646__);
tcase_add_test(tc1_1, s21_sprintf_test_1647__);
tcase_add_test(tc1_1, s21_sprintf_test_1648__);
tcase_add_test(tc1_1, s21_sprintf_test_1649__);
tcase_add_test(tc1_1, s21_sprintf_test_1650__);
tcase_add_test(tc1_1, s21_sprintf_test_1651__);
tcase_add_test(tc1_1, s21_sprintf_test_1652__);
tcase_add_test(tc1_1, s21_sprintf_test_1653__);
tcase_add_test(tc1_1, s21_sprintf_test_1654__);
tcase_add_test(tc1_1, s21_sprintf_test_1655__);
tcase_add_test(tc1_1, s21_sprintf_test_1656__);
tcase_add_test(tc1_1, s21_sprintf_test_1657__);
tcase_add_test(tc1_1, s21_sprintf_test_1658__);
tcase_add_test(tc1_1, s21_sprintf_test_1659__);
tcase_add_test(tc1_1, s21_sprintf_test_1660__);
tcase_add_test(tc1_1, s21_sprintf_test_1661__);
tcase_add_test(tc1_1, s21_sprintf_test_1662__);
tcase_add_test(tc1_1, s21_sprintf_test_1663__);
tcase_add_test(tc1_1, s21_sprintf_test_1664__);
tcase_add_test(tc1_1, s21_sprintf_test_1665__);
tcase_add_test(tc1_1, s21_sprintf_test_1666__);
tcase_add_test(tc1_1, s21_sprintf_test_1667__);
tcase_add_test(tc1_1, s21_sprintf_test_1668__);
tcase_add_test(tc1_1, s21_sprintf_test_1669__);
tcase_add_test(tc1_1, s21_sprintf_test_1670__);
tcase_add_test(tc1_1, s21_sprintf_test_1671__);
tcase_add_test(tc1_1, s21_sprintf_test_1672__);
tcase_add_test(tc1_1, s21_sprintf_test_1673__);
tcase_add_test(tc1_1, s21_sprintf_test_1674__);
tcase_add_test(tc1_1, s21_sprintf_test_1675__);
tcase_add_test(tc1_1, s21_sprintf_test_1676__);
tcase_add_test(tc1_1, s21_sprintf_test_1677__);
tcase_add_test(tc1_1, s21_sprintf_test_1678__);
tcase_add_test(tc1_1, s21_sprintf_test_1679__);
tcase_add_test(tc1_1, s21_sprintf_test_1680__);
tcase_add_test(tc1_1, s21_sprintf_test_1681__);
tcase_add_test(tc1_1, s21_sprintf_test_1682__);
tcase_add_test(tc1_1, s21_sprintf_test_1683__);
tcase_add_test(tc1_1, s21_sprintf_test_1684__);
tcase_add_test(tc1_1, s21_sprintf_test_1685__);
tcase_add_test(tc1_1, s21_sprintf_test_1686__);
tcase_add_test(tc1_1, s21_sprintf_test_1687__);
tcase_add_test(tc1_1, s21_sprintf_test_1688__);
tcase_add_test(tc1_1, s21_sprintf_test_1689__);
tcase_add_test(tc1_1, s21_sprintf_test_1690__);
tcase_add_test(tc1_1, s21_sprintf_test_1691__);
tcase_add_test(tc1_1, s21_sprintf_test_1692__);
tcase_add_test(tc1_1, s21_sprintf_test_1693__);
tcase_add_test(tc1_1, s21_sprintf_test_1694__);
tcase_add_test(tc1_1, s21_sprintf_test_1695__);
tcase_add_test(tc1_1, s21_sprintf_test_1696__);
tcase_add_test(tc1_1, s21_sprintf_test_1697__);
tcase_add_test(tc1_1, s21_sprintf_test_1698__);
tcase_add_test(tc1_1, s21_sprintf_test_1699__);
tcase_add_test(tc1_1, s21_sprintf_test_1700__);
tcase_add_test(tc1_1, s21_sprintf_test_1701__);
tcase_add_test(tc1_1, s21_sprintf_test_1702__);
tcase_add_test(tc1_1, s21_sprintf_test_1703__);
tcase_add_test(tc1_1, s21_sprintf_test_1704__);
tcase_add_test(tc1_1, s21_sprintf_test_1705__);
tcase_add_test(tc1_1, s21_sprintf_test_1706__);
tcase_add_test(tc1_1, s21_sprintf_test_1707__);
tcase_add_test(tc1_1, s21_sprintf_test_1708__);
tcase_add_test(tc1_1, s21_sprintf_test_1709__);
tcase_add_test(tc1_1, s21_sprintf_test_1710__);
tcase_add_test(tc1_1, s21_sprintf_test_1711__);
tcase_add_test(tc1_1, s21_sprintf_test_1712__);
tcase_add_test(tc1_1, s21_sprintf_test_1713__);
tcase_add_test(tc1_1, s21_sprintf_test_1714__);
tcase_add_test(tc1_1, s21_sprintf_test_1715__);
tcase_add_test(tc1_1, s21_sprintf_test_1716__);
tcase_add_test(tc1_1, s21_sprintf_test_1717__);
tcase_add_test(tc1_1, s21_sprintf_test_1718__);
tcase_add_test(tc1_1, s21_sprintf_test_1719__);
tcase_add_test(tc1_1, s21_sprintf_test_1720__);
tcase_add_test(tc1_1, s21_sprintf_test_1721__);
tcase_add_test(tc1_1, s21_sprintf_test_1722__);
tcase_add_test(tc1_1, s21_sprintf_test_1723__);
tcase_add_test(tc1_1, s21_sprintf_test_1724__);
tcase_add_test(tc1_1, s21_sprintf_test_1725__);
tcase_add_test(tc1_1, s21_sprintf_test_1726__);
tcase_add_test(tc1_1, s21_sprintf_test_1727__);
tcase_add_test(tc1_1, s21_sprintf_test_1728__);
tcase_add_test(tc1_1, s21_sprintf_test_1729__);
tcase_add_test(tc1_1, s21_sprintf_test_1730__);
tcase_add_test(tc1_1, s21_sprintf_test_1731__);
tcase_add_test(tc1_1, s21_sprintf_test_1732__);
tcase_add_test(tc1_1, s21_sprintf_test_1733__);
tcase_add_test(tc1_1, s21_sprintf_test_1734__);
tcase_add_test(tc1_1, s21_sprintf_test_1735__);
tcase_add_test(tc1_1, s21_sprintf_test_1736__);
tcase_add_test(tc1_1, s21_sprintf_test_1737__);
tcase_add_test(tc1_1, s21_sprintf_test_1738__);
tcase_add_test(tc1_1, s21_sprintf_test_1739__);
tcase_add_test(tc1_1, s21_sprintf_test_1740__);
tcase_add_test(tc1_1, s21_sprintf_test_1741__);
tcase_add_test(tc1_1, s21_sprintf_test_1742__);
tcase_add_test(tc1_1, s21_sprintf_test_1743__);
tcase_add_test(tc1_1, s21_sprintf_test_1744__);
tcase_add_test(tc1_1, s21_sprintf_test_1745__);
tcase_add_test(tc1_1, s21_sprintf_test_1746__);
tcase_add_test(tc1_1, s21_sprintf_test_1747__);
tcase_add_test(tc1_1, s21_sprintf_test_1748__);
tcase_add_test(tc1_1, s21_sprintf_test_1749__);
tcase_add_test(tc1_1, s21_sprintf_test_1750__);
tcase_add_test(tc1_1, s21_sprintf_test_1751__);
tcase_add_test(tc1_1, s21_sprintf_test_1752__);
tcase_add_test(tc1_1, s21_sprintf_test_1753__);
tcase_add_test(tc1_1, s21_sprintf_test_1754__);
tcase_add_test(tc1_1, s21_sprintf_test_1755__);
tcase_add_test(tc1_1, s21_sprintf_test_1756__);
tcase_add_test(tc1_1, s21_sprintf_test_1757__);
tcase_add_test(tc1_1, s21_sprintf_test_1758__);
tcase_add_test(tc1_1, s21_sprintf_test_1759__);
tcase_add_test(tc1_1, s21_sprintf_test_1760__);
tcase_add_test(tc1_1, s21_sprintf_test_1761__);
tcase_add_test(tc1_1, s21_sprintf_test_1762__);
tcase_add_test(tc1_1, s21_sprintf_test_1763__);
tcase_add_test(tc1_1, s21_sprintf_test_1764__);
tcase_add_test(tc1_1, s21_sprintf_test_1765__);
tcase_add_test(tc1_1, s21_sprintf_test_1766__);
tcase_add_test(tc1_1, s21_sprintf_test_1767__);
tcase_add_test(tc1_1, s21_sprintf_test_1768__);
tcase_add_test(tc1_1, s21_sprintf_test_1769__);
tcase_add_test(tc1_1, s21_sprintf_test_1770__);
tcase_add_test(tc1_1, s21_sprintf_test_1771__);
tcase_add_test(tc1_1, s21_sprintf_test_1772__);
tcase_add_test(tc1_1, s21_sprintf_test_1773__);
tcase_add_test(tc1_1, s21_sprintf_test_1774__);
tcase_add_test(tc1_1, s21_sprintf_test_1775__);
tcase_add_test(tc1_1, s21_sprintf_test_1776__);
tcase_add_test(tc1_1, s21_sprintf_test_1777__);
tcase_add_test(tc1_1, s21_sprintf_test_1778__);
tcase_add_test(tc1_1, s21_sprintf_test_1779__);
tcase_add_test(tc1_1, s21_sprintf_test_1780__);
tcase_add_test(tc1_1, s21_sprintf_test_1781__);
tcase_add_test(tc1_1, s21_sprintf_test_1782__);
tcase_add_test(tc1_1, s21_sprintf_test_1783__);
tcase_add_test(tc1_1, s21_sprintf_test_1784__);
tcase_add_test(tc1_1, s21_sprintf_test_1785__);
tcase_add_test(tc1_1, s21_sprintf_test_1786__);
tcase_add_test(tc1_1, s21_sprintf_test_1787__);
tcase_add_test(tc1_1, s21_sprintf_test_1788__);
tcase_add_test(tc1_1, s21_sprintf_test_1789__);
tcase_add_test(tc1_1, s21_sprintf_test_1790__);
tcase_add_test(tc1_1, s21_sprintf_test_1791__);
tcase_add_test(tc1_1, s21_sprintf_test_1792__);
tcase_add_test(tc1_1, s21_sprintf_test_1793__);
tcase_add_test(tc1_1, s21_sprintf_test_1794__);
tcase_add_test(tc1_1, s21_sprintf_test_1795__);
tcase_add_test(tc1_1, s21_sprintf_test_1796__);
tcase_add_test(tc1_1, s21_sprintf_test_1797__);
tcase_add_test(tc1_1, s21_sprintf_test_1798__);
tcase_add_test(tc1_1, s21_sprintf_test_1799__);
tcase_add_test(tc1_1, s21_sprintf_test_1800__);
tcase_add_test(tc1_1, s21_sprintf_test_1801__);
tcase_add_test(tc1_1, s21_sprintf_test_1802__);
tcase_add_test(tc1_1, s21_sprintf_test_1803__);
tcase_add_test(tc1_1, s21_sprintf_test_1804__);
tcase_add_test(tc1_1, s21_sprintf_test_1805__);
tcase_add_test(tc1_1, s21_sprintf_test_1806__);
tcase_add_test(tc1_1, s21_sprintf_test_1807__);
tcase_add_test(tc1_1, s21_sprintf_test_1808__);
tcase_add_test(tc1_1, s21_sprintf_test_1809__);
tcase_add_test(tc1_1, s21_sprintf_test_1810__);
tcase_add_test(tc1_1, s21_sprintf_test_1811__);
tcase_add_test(tc1_1, s21_sprintf_test_1812__);
tcase_add_test(tc1_1, s21_sprintf_test_1813__);
tcase_add_test(tc1_1, s21_sprintf_test_1814__);
tcase_add_test(tc1_1, s21_sprintf_test_1815__);
tcase_add_test(tc1_1, s21_sprintf_test_1816__);
tcase_add_test(tc1_1, s21_sprintf_test_1817__);
tcase_add_test(tc1_1, s21_sprintf_test_1818__);
tcase_add_test(tc1_1, s21_sprintf_test_1819__);
tcase_add_test(tc1_1, s21_sprintf_test_1820__);
tcase_add_test(tc1_1, s21_sprintf_test_1821__);
tcase_add_test(tc1_1, s21_sprintf_test_1822__);
tcase_add_test(tc1_1, s21_sprintf_test_1823__);
tcase_add_test(tc1_1, s21_sprintf_test_1824__);
tcase_add_test(tc1_1, s21_sprintf_test_1825__);
tcase_add_test(tc1_1, s21_sprintf_test_1826__);
tcase_add_test(tc1_1, s21_sprintf_test_1827__);
tcase_add_test(tc1_1, s21_sprintf_test_1828__);
tcase_add_test(tc1_1, s21_sprintf_test_1829__);
tcase_add_test(tc1_1, s21_sprintf_test_1830__);
tcase_add_test(tc1_1, s21_sprintf_test_1831__);
tcase_add_test(tc1_1, s21_sprintf_test_1832__);
tcase_add_test(tc1_1, s21_sprintf_test_1833__);
tcase_add_test(tc1_1, s21_sprintf_test_1834__);
tcase_add_test(tc1_1, s21_sprintf_test_1835__);
tcase_add_test(tc1_1, s21_sprintf_test_1836__);
tcase_add_test(tc1_1, s21_sprintf_test_1837__);
tcase_add_test(tc1_1, s21_sprintf_test_1838__);
tcase_add_test(tc1_1, s21_sprintf_test_1839__);
tcase_add_test(tc1_1, s21_sprintf_test_1840__);
tcase_add_test(tc1_1, s21_sprintf_test_1841__);
tcase_add_test(tc1_1, s21_sprintf_test_1842__);
tcase_add_test(tc1_1, s21_sprintf_test_1843__);
tcase_add_test(tc1_1, s21_sprintf_test_1844__);
tcase_add_test(tc1_1, s21_sprintf_test_1845__);
tcase_add_test(tc1_1, s21_sprintf_test_1846__);
tcase_add_test(tc1_1, s21_sprintf_test_1847__);
tcase_add_test(tc1_1, s21_sprintf_test_1848__);
tcase_add_test(tc1_1, s21_sprintf_test_1849__);
tcase_add_test(tc1_1, s21_sprintf_test_1850__);
tcase_add_test(tc1_1, s21_sprintf_test_1851__);
tcase_add_test(tc1_1, s21_sprintf_test_1852__);
tcase_add_test(tc1_1, s21_sprintf_test_1853__);
tcase_add_test(tc1_1, s21_sprintf_test_1854__);
tcase_add_test(tc1_1, s21_sprintf_test_1855__);
tcase_add_test(tc1_1, s21_sprintf_test_1856__);
tcase_add_test(tc1_1, s21_sprintf_test_1857__);
tcase_add_test(tc1_1, s21_sprintf_test_1858__);
tcase_add_test(tc1_1, s21_sprintf_test_1859__);
tcase_add_test(tc1_1, s21_sprintf_test_1860__);
tcase_add_test(tc1_1, s21_sprintf_test_1861__);
tcase_add_test(tc1_1, s21_sprintf_test_1862__);
tcase_add_test(tc1_1, s21_sprintf_test_1863__);
tcase_add_test(tc1_1, s21_sprintf_test_1864__);
tcase_add_test(tc1_1, s21_sprintf_test_1865__);
tcase_add_test(tc1_1, s21_sprintf_test_1866__);
tcase_add_test(tc1_1, s21_sprintf_test_1867__);
tcase_add_test(tc1_1, s21_sprintf_test_1868__);
tcase_add_test(tc1_1, s21_sprintf_test_1869__);
tcase_add_test(tc1_1, s21_sprintf_test_1870__);
tcase_add_test(tc1_1, s21_sprintf_test_1871__);
tcase_add_test(tc1_1, s21_sprintf_test_1872__);
tcase_add_test(tc1_1, s21_sprintf_test_1873__);
tcase_add_test(tc1_1, s21_sprintf_test_1874__);
tcase_add_test(tc1_1, s21_sprintf_test_1875__);
tcase_add_test(tc1_1, s21_sprintf_test_1876__);
tcase_add_test(tc1_1, s21_sprintf_test_1877__);
tcase_add_test(tc1_1, s21_sprintf_test_1878__);
tcase_add_test(tc1_1, s21_sprintf_test_1879__);
tcase_add_test(tc1_1, s21_sprintf_test_1880__);
tcase_add_test(tc1_1, s21_sprintf_test_1881__);
tcase_add_test(tc1_1, s21_sprintf_test_1882__);
tcase_add_test(tc1_1, s21_sprintf_test_1883__);
tcase_add_test(tc1_1, s21_sprintf_test_1884__);
tcase_add_test(tc1_1, s21_sprintf_test_1885__);
tcase_add_test(tc1_1, s21_sprintf_test_1886__);
tcase_add_test(tc1_1, s21_sprintf_test_1887__);
tcase_add_test(tc1_1, s21_sprintf_test_1888__);
tcase_add_test(tc1_1, s21_sprintf_test_1889__);
tcase_add_test(tc1_1, s21_sprintf_test_1890__);
tcase_add_test(tc1_1, s21_sprintf_test_1891__);
tcase_add_test(tc1_1, s21_sprintf_test_1892__);
tcase_add_test(tc1_1, s21_sprintf_test_1893__);
tcase_add_test(tc1_1, s21_sprintf_test_1894__);
tcase_add_test(tc1_1, s21_sprintf_test_1895__);
tcase_add_test(tc1_1, s21_sprintf_test_1896__);
tcase_add_test(tc1_1, s21_sprintf_test_1897__);
tcase_add_test(tc1_1, s21_sprintf_test_1898__);
tcase_add_test(tc1_1, s21_sprintf_test_1899__);
tcase_add_test(tc1_1, s21_sprintf_test_1900__);
tcase_add_test(tc1_1, s21_sprintf_test_1901__);
tcase_add_test(tc1_1, s21_sprintf_test_1902__);
tcase_add_test(tc1_1, s21_sprintf_test_1903__);
tcase_add_test(tc1_1, s21_sprintf_test_1904__);
tcase_add_test(tc1_1, s21_sprintf_test_1905__);
tcase_add_test(tc1_1, s21_sprintf_test_1906__);
tcase_add_test(tc1_1, s21_sprintf_test_1907__);
tcase_add_test(tc1_1, s21_sprintf_test_1908__);
tcase_add_test(tc1_1, s21_sprintf_test_1909__);
tcase_add_test(tc1_1, s21_sprintf_test_1910__);
tcase_add_test(tc1_1, s21_sprintf_test_1911__);
tcase_add_test(tc1_1, s21_sprintf_test_1912__);
tcase_add_test(tc1_1, s21_sprintf_test_1913__);
tcase_add_test(tc1_1, s21_sprintf_test_1914__);
tcase_add_test(tc1_1, s21_sprintf_test_1915__);
tcase_add_test(tc1_1, s21_sprintf_test_1916__);
tcase_add_test(tc1_1, s21_sprintf_test_1917__);
tcase_add_test(tc1_1, s21_sprintf_test_1918__);
tcase_add_test(tc1_1, s21_sprintf_test_1919__);
tcase_add_test(tc1_1, s21_sprintf_test_1920__);
tcase_add_test(tc1_1, s21_sprintf_test_1921__);
tcase_add_test(tc1_1, s21_sprintf_test_1922__);
tcase_add_test(tc1_1, s21_sprintf_test_1923__);
tcase_add_test(tc1_1, s21_sprintf_test_1924__);
tcase_add_test(tc1_1, s21_sprintf_test_1925__);
tcase_add_test(tc1_1, s21_sprintf_test_1926__);
tcase_add_test(tc1_1, s21_sprintf_test_1927__);
tcase_add_test(tc1_1, s21_sprintf_test_1928__);
tcase_add_test(tc1_1, s21_sprintf_test_1929__);
tcase_add_test(tc1_1, s21_sprintf_test_1930__);
tcase_add_test(tc1_1, s21_sprintf_test_1931__);
tcase_add_test(tc1_1, s21_sprintf_test_1932__);
tcase_add_test(tc1_1, s21_sprintf_test_1933__);
tcase_add_test(tc1_1, s21_sprintf_test_1934__);
tcase_add_test(tc1_1, s21_sprintf_test_1935__);
tcase_add_test(tc1_1, s21_sprintf_test_1936__);
tcase_add_test(tc1_1, s21_sprintf_test_1937__);
tcase_add_test(tc1_1, s21_sprintf_test_1938__);
tcase_add_test(tc1_1, s21_sprintf_test_1939__);
tcase_add_test(tc1_1, s21_sprintf_test_1940__);
tcase_add_test(tc1_1, s21_sprintf_test_1941__);
tcase_add_test(tc1_1, s21_sprintf_test_1942__);
tcase_add_test(tc1_1, s21_sprintf_test_1943__);
tcase_add_test(tc1_1, s21_sprintf_test_1944__);
tcase_add_test(tc1_1, s21_sprintf_test_1945__);
tcase_add_test(tc1_1, s21_sprintf_test_1946__);
tcase_add_test(tc1_1, s21_sprintf_test_1947__);
tcase_add_test(tc1_1, s21_sprintf_test_1948__);
tcase_add_test(tc1_1, s21_sprintf_test_1949__);
tcase_add_test(tc1_1, s21_sprintf_test_1950__);
tcase_add_test(tc1_1, s21_sprintf_test_1951__);
tcase_add_test(tc1_1, s21_sprintf_test_1952__);
tcase_add_test(tc1_1, s21_sprintf_test_1953__);
tcase_add_test(tc1_1, s21_sprintf_test_1954__);
tcase_add_test(tc1_1, s21_sprintf_test_1955__);
tcase_add_test(tc1_1, s21_sprintf_test_1956__);
tcase_add_test(tc1_1, s21_sprintf_test_1957__);
tcase_add_test(tc1_1, s21_sprintf_test_1958__);
tcase_add_test(tc1_1, s21_sprintf_test_1959__);
tcase_add_test(tc1_1, s21_sprintf_test_1960__);
tcase_add_test(tc1_1, s21_sprintf_test_1961__);
tcase_add_test(tc1_1, s21_sprintf_test_1962__);
tcase_add_test(tc1_1, s21_sprintf_test_1963__);
tcase_add_test(tc1_1, s21_sprintf_test_1964__);
tcase_add_test(tc1_1, s21_sprintf_test_1965__);
tcase_add_test(tc1_1, s21_sprintf_test_1966__);
tcase_add_test(tc1_1, s21_sprintf_test_1967__);
tcase_add_test(tc1_1, s21_sprintf_test_1968__);
tcase_add_test(tc1_1, s21_sprintf_test_1969__);
tcase_add_test(tc1_1, s21_sprintf_test_1970__);
tcase_add_test(tc1_1, s21_sprintf_test_1971__);
tcase_add_test(tc1_1, s21_sprintf_test_1972__);
tcase_add_test(tc1_1, s21_sprintf_test_1973__);
tcase_add_test(tc1_1, s21_sprintf_test_1974__);
tcase_add_test(tc1_1, s21_sprintf_test_1975__);
tcase_add_test(tc1_1, s21_sprintf_test_1976__);
tcase_add_test(tc1_1, s21_sprintf_test_1977__);
tcase_add_test(tc1_1, s21_sprintf_test_1978__);
tcase_add_test(tc1_1, s21_sprintf_test_1979__);
tcase_add_test(tc1_1, s21_sprintf_test_1980__);
tcase_add_test(tc1_1, s21_sprintf_test_1981__);
tcase_add_test(tc1_1, s21_sprintf_test_1982__);
tcase_add_test(tc1_1, s21_sprintf_test_1983__);
tcase_add_test(tc1_1, s21_sprintf_test_1984__);
tcase_add_test(tc1_1, s21_sprintf_test_1985__);
tcase_add_test(tc1_1, s21_sprintf_test_1986__);
tcase_add_test(tc1_1, s21_sprintf_test_1987__);
tcase_add_test(tc1_1, s21_sprintf_test_1988__);
tcase_add_test(tc1_1, s21_sprintf_test_1989__);
tcase_add_test(tc1_1, s21_sprintf_test_1990__);
tcase_add_test(tc1_1, s21_sprintf_test_1991__);
tcase_add_test(tc1_1, s21_sprintf_test_1992__);
tcase_add_test(tc1_1, s21_sprintf_test_1993__);
tcase_add_test(tc1_1, s21_sprintf_test_1994__);
tcase_add_test(tc1_1, s21_sprintf_test_1995__);
tcase_add_test(tc1_1, s21_sprintf_test_1996__);
tcase_add_test(tc1_1, s21_sprintf_test_1997__);
tcase_add_test(tc1_1, s21_sprintf_test_1998__);
tcase_add_test(tc1_1, s21_sprintf_test_1999__);
tcase_add_test(tc1_1, s21_sprintf_test_2000__);
tcase_add_test(tc1_1, s21_sprintf_test_2001__);
tcase_add_test(tc1_1, s21_sprintf_test_2002__);
tcase_add_test(tc1_1, s21_sprintf_test_2003__);
tcase_add_test(tc1_1, s21_sprintf_test_2004__);
tcase_add_test(tc1_1, s21_sprintf_test_2005__);
tcase_add_test(tc1_1, s21_sprintf_test_2006__);
tcase_add_test(tc1_1, s21_sprintf_test_2007__);
tcase_add_test(tc1_1, s21_sprintf_test_2008__);
tcase_add_test(tc1_1, s21_sprintf_test_2009__);
tcase_add_test(tc1_1, s21_sprintf_test_2010__);
tcase_add_test(tc1_1, s21_sprintf_test_2011__);
tcase_add_test(tc1_1, s21_sprintf_test_2012__);
tcase_add_test(tc1_1, s21_sprintf_test_2013__);
tcase_add_test(tc1_1, s21_sprintf_test_2014__);
tcase_add_test(tc1_1, s21_sprintf_test_2015__);
tcase_add_test(tc1_1, s21_sprintf_test_2016__);
tcase_add_test(tc1_1, s21_sprintf_test_2017__);
tcase_add_test(tc1_1, s21_sprintf_test_2018__);
tcase_add_test(tc1_1, s21_sprintf_test_2019__);
tcase_add_test(tc1_1, s21_sprintf_test_2020__);
tcase_add_test(tc1_1, s21_sprintf_test_2021__);
tcase_add_test(tc1_1, s21_sprintf_test_2022__);
tcase_add_test(tc1_1, s21_sprintf_test_2023__);
tcase_add_test(tc1_1, s21_sprintf_test_2024__);
tcase_add_test(tc1_1, s21_sprintf_test_2025__);
tcase_add_test(tc1_1, s21_sprintf_test_2026__);
tcase_add_test(tc1_1, s21_sprintf_test_2027__);
tcase_add_test(tc1_1, s21_sprintf_test_2028__);
tcase_add_test(tc1_1, s21_sprintf_test_2029__);
tcase_add_test(tc1_1, s21_sprintf_test_2030__);
tcase_add_test(tc1_1, s21_sprintf_test_2031__);
tcase_add_test(tc1_1, s21_sprintf_test_2032__);
tcase_add_test(tc1_1, s21_sprintf_test_2033__);
tcase_add_test(tc1_1, s21_sprintf_test_2034__);
tcase_add_test(tc1_1, s21_sprintf_test_2035__);
tcase_add_test(tc1_1, s21_sprintf_test_2036__);
tcase_add_test(tc1_1, s21_sprintf_test_2037__);
tcase_add_test(tc1_1, s21_sprintf_test_2038__);
tcase_add_test(tc1_1, s21_sprintf_test_2039__);
tcase_add_test(tc1_1, s21_sprintf_test_2040__);
tcase_add_test(tc1_1, s21_sprintf_test_2041__);
tcase_add_test(tc1_1, s21_sprintf_test_2042__);
tcase_add_test(tc1_1, s21_sprintf_test_2043__);
tcase_add_test(tc1_1, s21_sprintf_test_2044__);
tcase_add_test(tc1_1, s21_sprintf_test_2045__);
tcase_add_test(tc1_1, s21_sprintf_test_2046__);
tcase_add_test(tc1_1, s21_sprintf_test_2047__);
tcase_add_test(tc1_1, s21_sprintf_test_2048__);
tcase_add_test(tc1_1, s21_sprintf_test_2049__);
tcase_add_test(tc1_1, s21_sprintf_test_2050__);
tcase_add_test(tc1_1, s21_sprintf_test_2051__);
tcase_add_test(tc1_1, s21_sprintf_test_2052__);
tcase_add_test(tc1_1, s21_sprintf_test_2053__);
tcase_add_test(tc1_1, s21_sprintf_test_2054__);
tcase_add_test(tc1_1, s21_sprintf_test_2055__);
tcase_add_test(tc1_1, s21_sprintf_test_2056__);
tcase_add_test(tc1_1, s21_sprintf_test_2057__);
tcase_add_test(tc1_1, s21_sprintf_test_2058__);
tcase_add_test(tc1_1, s21_sprintf_test_2059__);
tcase_add_test(tc1_1, s21_sprintf_test_2060__);
tcase_add_test(tc1_1, s21_sprintf_test_2061__);
tcase_add_test(tc1_1, s21_sprintf_test_2062__);
tcase_add_test(tc1_1, s21_sprintf_test_2063__);
tcase_add_test(tc1_1, s21_sprintf_test_2064__);
tcase_add_test(tc1_1, s21_sprintf_test_2065__);
tcase_add_test(tc1_1, s21_sprintf_test_2066__);
tcase_add_test(tc1_1, s21_sprintf_test_2067__);
tcase_add_test(tc1_1, s21_sprintf_test_2068__);
tcase_add_test(tc1_1, s21_sprintf_test_2069__);
tcase_add_test(tc1_1, s21_sprintf_test_2070__);
tcase_add_test(tc1_1, s21_sprintf_test_2071__);
tcase_add_test(tc1_1, s21_sprintf_test_2072__);
tcase_add_test(tc1_1, s21_sprintf_test_2073__);
tcase_add_test(tc1_1, s21_sprintf_test_2074__);
tcase_add_test(tc1_1, s21_sprintf_test_2075__);
tcase_add_test(tc1_1, s21_sprintf_test_2076__);
tcase_add_test(tc1_1, s21_sprintf_test_2077__);
tcase_add_test(tc1_1, s21_sprintf_test_2078__);
tcase_add_test(tc1_1, s21_sprintf_test_2079__);
tcase_add_test(tc1_1, s21_sprintf_test_2080__);
tcase_add_test(tc1_1, s21_sprintf_test_2081__);
tcase_add_test(tc1_1, s21_sprintf_test_2082__);
tcase_add_test(tc1_1, s21_sprintf_test_2083__);
tcase_add_test(tc1_1, s21_sprintf_test_2084__);
tcase_add_test(tc1_1, s21_sprintf_test_2085__);
tcase_add_test(tc1_1, s21_sprintf_test_2086__);
tcase_add_test(tc1_1, s21_sprintf_test_2087__);
tcase_add_test(tc1_1, s21_sprintf_test_2088__);
tcase_add_test(tc1_1, s21_sprintf_test_2089__);
tcase_add_test(tc1_1, s21_sprintf_test_2090__);
tcase_add_test(tc1_1, s21_sprintf_test_2091__);
tcase_add_test(tc1_1, s21_sprintf_test_2092__);
tcase_add_test(tc1_1, s21_sprintf_test_2093__);
tcase_add_test(tc1_1, s21_sprintf_test_2094__);
tcase_add_test(tc1_1, s21_sprintf_test_2095__);
tcase_add_test(tc1_1, s21_sprintf_test_2096__);
tcase_add_test(tc1_1, s21_sprintf_test_2097__);
tcase_add_test(tc1_1, s21_sprintf_test_2098__);
tcase_add_test(tc1_1, s21_sprintf_test_2099__);
tcase_add_test(tc1_1, s21_sprintf_test_2100__);
tcase_add_test(tc1_1, s21_sprintf_test_2101__);
tcase_add_test(tc1_1, s21_sprintf_test_2102__);
tcase_add_test(tc1_1, s21_sprintf_test_2103__);
tcase_add_test(tc1_1, s21_sprintf_test_2104__);
tcase_add_test(tc1_1, s21_sprintf_test_2105__);
tcase_add_test(tc1_1, s21_sprintf_test_2106__);
tcase_add_test(tc1_1, s21_sprintf_test_2107__);
tcase_add_test(tc1_1, s21_sprintf_test_2108__);
tcase_add_test(tc1_1, s21_sprintf_test_2109__);
tcase_add_test(tc1_1, s21_sprintf_test_2110__);
tcase_add_test(tc1_1, s21_sprintf_test_2111__);
tcase_add_test(tc1_1, s21_sprintf_test_2112__);
tcase_add_test(tc1_1, s21_sprintf_test_2113__);
tcase_add_test(tc1_1, s21_sprintf_test_2114__);
tcase_add_test(tc1_1, s21_sprintf_test_2115__);
tcase_add_test(tc1_1, s21_sprintf_test_2116__);
tcase_add_test(tc1_1, s21_sprintf_test_2117__);
tcase_add_test(tc1_1, s21_sprintf_test_2118__);
tcase_add_test(tc1_1, s21_sprintf_test_2119__);
tcase_add_test(tc1_1, s21_sprintf_test_2120__);
tcase_add_test(tc1_1, s21_sprintf_test_2121__);
tcase_add_test(tc1_1, s21_sprintf_test_2122__);
tcase_add_test(tc1_1, s21_sprintf_test_2123__);
tcase_add_test(tc1_1, s21_sprintf_test_2124__);
tcase_add_test(tc1_1, s21_sprintf_test_2125__);
tcase_add_test(tc1_1, s21_sprintf_test_2126__);
tcase_add_test(tc1_1, s21_sprintf_test_2127__);
tcase_add_test(tc1_1, s21_sprintf_test_2128__);
tcase_add_test(tc1_1, s21_sprintf_test_2129__);
tcase_add_test(tc1_1, s21_sprintf_test_2130__);
tcase_add_test(tc1_1, s21_sprintf_test_2131__);
tcase_add_test(tc1_1, s21_sprintf_test_2132__);
tcase_add_test(tc1_1, s21_sprintf_test_2133__);
tcase_add_test(tc1_1, s21_sprintf_test_2134__);
tcase_add_test(tc1_1, s21_sprintf_test_2135__);
tcase_add_test(tc1_1, s21_sprintf_test_2136__);
tcase_add_test(tc1_1, s21_sprintf_test_2137__);
tcase_add_test(tc1_1, s21_sprintf_test_2138__);
tcase_add_test(tc1_1, s21_sprintf_test_2139__);
tcase_add_test(tc1_1, s21_sprintf_test_2140__);
tcase_add_test(tc1_1, s21_sprintf_test_2141__);
tcase_add_test(tc1_1, s21_sprintf_test_2142__);
tcase_add_test(tc1_1, s21_sprintf_test_2143__);
tcase_add_test(tc1_1, s21_sprintf_test_2144__);
tcase_add_test(tc1_1, s21_sprintf_test_2145__);
tcase_add_test(tc1_1, s21_sprintf_test_2146__);
tcase_add_test(tc1_1, s21_sprintf_test_2147__);
tcase_add_test(tc1_1, s21_sprintf_test_2148__);
tcase_add_test(tc1_1, s21_sprintf_test_2149__);
tcase_add_test(tc1_1, s21_sprintf_test_2150__);
tcase_add_test(tc1_1, s21_sprintf_test_2151__);
tcase_add_test(tc1_1, s21_sprintf_test_2152__);
tcase_add_test(tc1_1, s21_sprintf_test_2153__);
tcase_add_test(tc1_1, s21_sprintf_test_2154__);
tcase_add_test(tc1_1, s21_sprintf_test_2155__);
tcase_add_test(tc1_1, s21_sprintf_test_2156__);
tcase_add_test(tc1_1, s21_sprintf_test_2157__);
tcase_add_test(tc1_1, s21_sprintf_test_2158__);
tcase_add_test(tc1_1, s21_sprintf_test_2159__);
tcase_add_test(tc1_1, s21_sprintf_test_2160__);
tcase_add_test(tc1_1, s21_sprintf_test_2161__);
tcase_add_test(tc1_1, s21_sprintf_test_2162__);
tcase_add_test(tc1_1, s21_sprintf_test_2163__);
tcase_add_test(tc1_1, s21_sprintf_test_2164__);
tcase_add_test(tc1_1, s21_sprintf_test_2165__);
tcase_add_test(tc1_1, s21_sprintf_test_2166__);
tcase_add_test(tc1_1, s21_sprintf_test_2167__);
tcase_add_test(tc1_1, s21_sprintf_test_2168__);
tcase_add_test(tc1_1, s21_sprintf_test_2169__);
tcase_add_test(tc1_1, s21_sprintf_test_2170__);
tcase_add_test(tc1_1, s21_sprintf_test_2171__);
tcase_add_test(tc1_1, s21_sprintf_test_2172__);
tcase_add_test(tc1_1, s21_sprintf_test_2173__);
tcase_add_test(tc1_1, s21_sprintf_test_2174__);
tcase_add_test(tc1_1, s21_sprintf_test_2175__);
tcase_add_test(tc1_1, s21_sprintf_test_2176__);
tcase_add_test(tc1_1, s21_sprintf_test_2177__);
tcase_add_test(tc1_1, s21_sprintf_test_2178__);
tcase_add_test(tc1_1, s21_sprintf_test_2179__);
tcase_add_test(tc1_1, s21_sprintf_test_2180__);
tcase_add_test(tc1_1, s21_sprintf_test_2181__);
tcase_add_test(tc1_1, s21_sprintf_test_2182__);
tcase_add_test(tc1_1, s21_sprintf_test_2183__);
tcase_add_test(tc1_1, s21_sprintf_test_2184__);
tcase_add_test(tc1_1, s21_sprintf_test_2185__);
tcase_add_test(tc1_1, s21_sprintf_test_2186__);
tcase_add_test(tc1_1, s21_sprintf_test_2187__);
tcase_add_test(tc1_1, s21_sprintf_test_2188__);
tcase_add_test(tc1_1, s21_sprintf_test_2189__);
tcase_add_test(tc1_1, s21_sprintf_test_2190__);
tcase_add_test(tc1_1, s21_sprintf_test_2191__);
tcase_add_test(tc1_1, s21_sprintf_test_2192__);
tcase_add_test(tc1_1, s21_sprintf_test_2193__);
tcase_add_test(tc1_1, s21_sprintf_test_2194__);
tcase_add_test(tc1_1, s21_sprintf_test_2195__);
tcase_add_test(tc1_1, s21_sprintf_test_2196__);
tcase_add_test(tc1_1, s21_sprintf_test_2197__);
tcase_add_test(tc1_1, s21_sprintf_test_2198__);
tcase_add_test(tc1_1, s21_sprintf_test_2199__);
tcase_add_test(tc1_1, s21_sprintf_test_2200__);
tcase_add_test(tc1_1, s21_sprintf_test_2201__);
tcase_add_test(tc1_1, s21_sprintf_test_2202__);
tcase_add_test(tc1_1, s21_sprintf_test_2203__);
tcase_add_test(tc1_1, s21_sprintf_test_2204__);
tcase_add_test(tc1_1, s21_sprintf_test_2205__);
tcase_add_test(tc1_1, s21_sprintf_test_2206__);
tcase_add_test(tc1_1, s21_sprintf_test_2207__);
tcase_add_test(tc1_1, s21_sprintf_test_2208__);
tcase_add_test(tc1_1, s21_sprintf_test_2209__);
tcase_add_test(tc1_1, s21_sprintf_test_2210__);
tcase_add_test(tc1_1, s21_sprintf_test_2211__);
tcase_add_test(tc1_1, s21_sprintf_test_2212__);
tcase_add_test(tc1_1, s21_sprintf_test_2213__);
tcase_add_test(tc1_1, s21_sprintf_test_2214__);
tcase_add_test(tc1_1, s21_sprintf_test_2215__);
tcase_add_test(tc1_1, s21_sprintf_test_2216__);
tcase_add_test(tc1_1, s21_sprintf_test_2217__);
tcase_add_test(tc1_1, s21_sprintf_test_2218__);
tcase_add_test(tc1_1, s21_sprintf_test_2219__);
tcase_add_test(tc1_1, s21_sprintf_test_2220__);
tcase_add_test(tc1_1, s21_sprintf_test_2221__);
tcase_add_test(tc1_1, s21_sprintf_test_2222__);
tcase_add_test(tc1_1, s21_sprintf_test_2223__);
tcase_add_test(tc1_1, s21_sprintf_test_2224__);
tcase_add_test(tc1_1, s21_sprintf_test_2225__);
tcase_add_test(tc1_1, s21_sprintf_test_2226__);
tcase_add_test(tc1_1, s21_sprintf_test_2227__);
tcase_add_test(tc1_1, s21_sprintf_test_2228__);
tcase_add_test(tc1_1, s21_sprintf_test_2229__);
tcase_add_test(tc1_1, s21_sprintf_test_2230__);
tcase_add_test(tc1_1, s21_sprintf_test_2231__);
tcase_add_test(tc1_1, s21_sprintf_test_2232__);
tcase_add_test(tc1_1, s21_sprintf_test_2233__);
tcase_add_test(tc1_1, s21_sprintf_test_2234__);
tcase_add_test(tc1_1, s21_sprintf_test_2235__);
tcase_add_test(tc1_1, s21_sprintf_test_2236__);
tcase_add_test(tc1_1, s21_sprintf_test_2237__);
tcase_add_test(tc1_1, s21_sprintf_test_2238__);
tcase_add_test(tc1_1, s21_sprintf_test_2239__);
tcase_add_test(tc1_1, s21_sprintf_test_2240__);
tcase_add_test(tc1_1, s21_sprintf_test_2241__);
tcase_add_test(tc1_1, s21_sprintf_test_2242__);
tcase_add_test(tc1_1, s21_sprintf_test_2243__);
tcase_add_test(tc1_1, s21_sprintf_test_2244__);
tcase_add_test(tc1_1, s21_sprintf_test_2245__);
tcase_add_test(tc1_1, s21_sprintf_test_2246__);
tcase_add_test(tc1_1, s21_sprintf_test_2247__);
tcase_add_test(tc1_1, s21_sprintf_test_2248__);
tcase_add_test(tc1_1, s21_sprintf_test_2249__);
tcase_add_test(tc1_1, s21_sprintf_test_2250__);
tcase_add_test(tc1_1, s21_sprintf_test_2251__);
tcase_add_test(tc1_1, s21_sprintf_test_2252__);
tcase_add_test(tc1_1, s21_sprintf_test_2253__);
tcase_add_test(tc1_1, s21_sprintf_test_2254__);
tcase_add_test(tc1_1, s21_sprintf_test_2255__);
tcase_add_test(tc1_1, s21_sprintf_test_2256__);
tcase_add_test(tc1_1, s21_sprintf_test_2257__);
tcase_add_test(tc1_1, s21_sprintf_test_2258__);
tcase_add_test(tc1_1, s21_sprintf_test_2259__);
tcase_add_test(tc1_1, s21_sprintf_test_2260__);
tcase_add_test(tc1_1, s21_sprintf_test_2261__);
tcase_add_test(tc1_1, s21_sprintf_test_2262__);
tcase_add_test(tc1_1, s21_sprintf_test_2263__);
tcase_add_test(tc1_1, s21_sprintf_test_2264__);
tcase_add_test(tc1_1, s21_sprintf_test_2265__);
tcase_add_test(tc1_1, s21_sprintf_test_2266__);
tcase_add_test(tc1_1, s21_sprintf_test_2267__);
tcase_add_test(tc1_1, s21_sprintf_test_2268__);
tcase_add_test(tc1_1, s21_sprintf_test_2269__);
tcase_add_test(tc1_1, s21_sprintf_test_2270__);
tcase_add_test(tc1_1, s21_sprintf_test_2271__);
tcase_add_test(tc1_1, s21_sprintf_test_2272__);
tcase_add_test(tc1_1, s21_sprintf_test_2273__);
tcase_add_test(tc1_1, s21_sprintf_test_2274__);
tcase_add_test(tc1_1, s21_sprintf_test_2275__);
tcase_add_test(tc1_1, s21_sprintf_test_2276__);
tcase_add_test(tc1_1, s21_sprintf_test_2277__);
tcase_add_test(tc1_1, s21_sprintf_test_2278__);
tcase_add_test(tc1_1, s21_sprintf_test_2279__);
tcase_add_test(tc1_1, s21_sprintf_test_2280__);
tcase_add_test(tc1_1, s21_sprintf_test_2281__);
tcase_add_test(tc1_1, s21_sprintf_test_2282__);
tcase_add_test(tc1_1, s21_sprintf_test_2283__);
tcase_add_test(tc1_1, s21_sprintf_test_2284__);
tcase_add_test(tc1_1, s21_sprintf_test_2285__);
tcase_add_test(tc1_1, s21_sprintf_test_2286__);
tcase_add_test(tc1_1, s21_sprintf_test_2287__);
tcase_add_test(tc1_1, s21_sprintf_test_2288__);
tcase_add_test(tc1_1, s21_sprintf_test_2289__);
tcase_add_test(tc1_1, s21_sprintf_test_2290__);
tcase_add_test(tc1_1, s21_sprintf_test_2291__);
tcase_add_test(tc1_1, s21_sprintf_test_2292__);
tcase_add_test(tc1_1, s21_sprintf_test_2293__);
tcase_add_test(tc1_1, s21_sprintf_test_2294__);
tcase_add_test(tc1_1, s21_sprintf_test_2295__);
tcase_add_test(tc1_1, s21_sprintf_test_2296__);
tcase_add_test(tc1_1, s21_sprintf_test_2297__);
tcase_add_test(tc1_1, s21_sprintf_test_2298__);
tcase_add_test(tc1_1, s21_sprintf_test_2299__);
tcase_add_test(tc1_1, s21_sprintf_test_2300__);
tcase_add_test(tc1_1, s21_sprintf_test_2301__);
tcase_add_test(tc1_1, s21_sprintf_test_2302__);
tcase_add_test(tc1_1, s21_sprintf_test_2303__);
tcase_add_test(tc1_1, s21_sprintf_test_2304__);
tcase_add_test(tc1_1, s21_sprintf_test_2305__);
tcase_add_test(tc1_1, s21_sprintf_test_2306__);
tcase_add_test(tc1_1, s21_sprintf_test_2307__);
tcase_add_test(tc1_1, s21_sprintf_test_2308__);
tcase_add_test(tc1_1, s21_sprintf_test_2309__);
tcase_add_test(tc1_1, s21_sprintf_test_2310__);
tcase_add_test(tc1_1, s21_sprintf_test_2311__);
tcase_add_test(tc1_1, s21_sprintf_test_2312__);
tcase_add_test(tc1_1, s21_sprintf_test_2313__);
tcase_add_test(tc1_1, s21_sprintf_test_2314__);
tcase_add_test(tc1_1, s21_sprintf_test_2315__);
tcase_add_test(tc1_1, s21_sprintf_test_2316__);
tcase_add_test(tc1_1, s21_sprintf_test_2317__);
tcase_add_test(tc1_1, s21_sprintf_test_2318__);
tcase_add_test(tc1_1, s21_sprintf_test_2319__);
tcase_add_test(tc1_1, s21_sprintf_test_2320__);
tcase_add_test(tc1_1, s21_sprintf_test_2321__);
tcase_add_test(tc1_1, s21_sprintf_test_2322__);
tcase_add_test(tc1_1, s21_sprintf_test_2323__);
tcase_add_test(tc1_1, s21_sprintf_test_2324__);
tcase_add_test(tc1_1, s21_sprintf_test_2325__);
tcase_add_test(tc1_1, s21_sprintf_test_2326__);
tcase_add_test(tc1_1, s21_sprintf_test_2327__);
tcase_add_test(tc1_1, s21_sprintf_test_2328__);
tcase_add_test(tc1_1, s21_sprintf_test_2329__);
tcase_add_test(tc1_1, s21_sprintf_test_2330__);
tcase_add_test(tc1_1, s21_sprintf_test_2331__);
tcase_add_test(tc1_1, s21_sprintf_test_2332__);
tcase_add_test(tc1_1, s21_sprintf_test_2333__);
tcase_add_test(tc1_1, s21_sprintf_test_2334__);
tcase_add_test(tc1_1, s21_sprintf_test_2335__);
tcase_add_test(tc1_1, s21_sprintf_test_2336__);
tcase_add_test(tc1_1, s21_sprintf_test_2337__);
tcase_add_test(tc1_1, s21_sprintf_test_2338__);
tcase_add_test(tc1_1, s21_sprintf_test_2339__);
tcase_add_test(tc1_1, s21_sprintf_test_2340__);
tcase_add_test(tc1_1, s21_sprintf_test_2341__);
tcase_add_test(tc1_1, s21_sprintf_test_2342__);
tcase_add_test(tc1_1, s21_sprintf_test_2343__);
tcase_add_test(tc1_1, s21_sprintf_test_2344__);
tcase_add_test(tc1_1, s21_sprintf_test_2345__);
tcase_add_test(tc1_1, s21_sprintf_test_2346__);
tcase_add_test(tc1_1, s21_sprintf_test_2347__);
tcase_add_test(tc1_1, s21_sprintf_test_2348__);
tcase_add_test(tc1_1, s21_sprintf_test_2349__);
tcase_add_test(tc1_1, s21_sprintf_test_2350__);
tcase_add_test(tc1_1, s21_sprintf_test_2351__);
tcase_add_test(tc1_1, s21_sprintf_test_2352__);
tcase_add_test(tc1_1, s21_sprintf_test_2353__);
tcase_add_test(tc1_1, s21_sprintf_test_2354__);
tcase_add_test(tc1_1, s21_sprintf_test_2355__);
tcase_add_test(tc1_1, s21_sprintf_test_2356__);
tcase_add_test(tc1_1, s21_sprintf_test_2357__);
tcase_add_test(tc1_1, s21_sprintf_test_2358__);
tcase_add_test(tc1_1, s21_sprintf_test_2359__);
tcase_add_test(tc1_1, s21_sprintf_test_2360__);
tcase_add_test(tc1_1, s21_sprintf_test_2361__);
tcase_add_test(tc1_1, s21_sprintf_test_2362__);
tcase_add_test(tc1_1, s21_sprintf_test_2363__);
tcase_add_test(tc1_1, s21_sprintf_test_2364__);
tcase_add_test(tc1_1, s21_sprintf_test_2365__);
tcase_add_test(tc1_1, s21_sprintf_test_2366__);
tcase_add_test(tc1_1, s21_sprintf_test_2367__);
tcase_add_test(tc1_1, s21_sprintf_test_2368__);
tcase_add_test(tc1_1, s21_sprintf_test_2369__);
tcase_add_test(tc1_1, s21_sprintf_test_2370__);
tcase_add_test(tc1_1, s21_sprintf_test_2371__);
tcase_add_test(tc1_1, s21_sprintf_test_2372__);
tcase_add_test(tc1_1, s21_sprintf_test_2373__);
tcase_add_test(tc1_1, s21_sprintf_test_2374__);
tcase_add_test(tc1_1, s21_sprintf_test_2375__);
tcase_add_test(tc1_1, s21_sprintf_test_2376__);
tcase_add_test(tc1_1, s21_sprintf_test_2377__);
tcase_add_test(tc1_1, s21_sprintf_test_2378__);
tcase_add_test(tc1_1, s21_sprintf_test_2379__);
tcase_add_test(tc1_1, s21_sprintf_test_2380__);
tcase_add_test(tc1_1, s21_sprintf_test_2381__);
tcase_add_test(tc1_1, s21_sprintf_test_2382__);
tcase_add_test(tc1_1, s21_sprintf_test_2383__);
tcase_add_test(tc1_1, s21_sprintf_test_2384__);
tcase_add_test(tc1_1, s21_sprintf_test_2385__);
tcase_add_test(tc1_1, s21_sprintf_test_2386__);
tcase_add_test(tc1_1, s21_sprintf_test_2387__);
tcase_add_test(tc1_1, s21_sprintf_test_2388__);
tcase_add_test(tc1_1, s21_sprintf_test_2389__);
tcase_add_test(tc1_1, s21_sprintf_test_2390__);
tcase_add_test(tc1_1, s21_sprintf_test_2391__);
tcase_add_test(tc1_1, s21_sprintf_test_2392__);
tcase_add_test(tc1_1, s21_sprintf_test_2393__);
tcase_add_test(tc1_1, s21_sprintf_test_2394__);
tcase_add_test(tc1_1, s21_sprintf_test_2395__);
tcase_add_test(tc1_1, s21_sprintf_test_2396__);
tcase_add_test(tc1_1, s21_sprintf_test_2397__);
tcase_add_test(tc1_1, s21_sprintf_test_2398__);
tcase_add_test(tc1_1, s21_sprintf_test_2399__);
tcase_add_test(tc1_1, s21_sprintf_test_2400__);
tcase_add_test(tc1_1, s21_sprintf_test_2401__);
tcase_add_test(tc1_1, s21_sprintf_test_2402__);
tcase_add_test(tc1_1, s21_sprintf_test_2403__);
tcase_add_test(tc1_1, s21_sprintf_test_2404__);
tcase_add_test(tc1_1, s21_sprintf_test_2405__);
tcase_add_test(tc1_1, s21_sprintf_test_2406__);
tcase_add_test(tc1_1, s21_sprintf_test_2407__);
tcase_add_test(tc1_1, s21_sprintf_test_2408__);
tcase_add_test(tc1_1, s21_sprintf_test_2409__);
tcase_add_test(tc1_1, s21_sprintf_test_2410__);
tcase_add_test(tc1_1, s21_sprintf_test_2411__);
tcase_add_test(tc1_1, s21_sprintf_test_2412__);
tcase_add_test(tc1_1, s21_sprintf_test_2413__);
tcase_add_test(tc1_1, s21_sprintf_test_2414__);
tcase_add_test(tc1_1, s21_sprintf_test_2415__);
tcase_add_test(tc1_1, s21_sprintf_test_2416__);
tcase_add_test(tc1_1, s21_sprintf_test_2417__);
tcase_add_test(tc1_1, s21_sprintf_test_2418__);
tcase_add_test(tc1_1, s21_sprintf_test_2419__);
tcase_add_test(tc1_1, s21_sprintf_test_2420__);
tcase_add_test(tc1_1, s21_sprintf_test_2421__);
tcase_add_test(tc1_1, s21_sprintf_test_2422__);
tcase_add_test(tc1_1, s21_sprintf_test_2423__);
tcase_add_test(tc1_1, s21_sprintf_test_2424__);
tcase_add_test(tc1_1, s21_sprintf_test_2425__);
tcase_add_test(tc1_1, s21_sprintf_test_2426__);
tcase_add_test(tc1_1, s21_sprintf_test_2427__);
tcase_add_test(tc1_1, s21_sprintf_test_2428__);
tcase_add_test(tc1_1, s21_sprintf_test_2429__);
tcase_add_test(tc1_1, s21_sprintf_test_2430__);
tcase_add_test(tc1_1, s21_sprintf_test_2431__);
tcase_add_test(tc1_1, s21_sprintf_test_2432__);
tcase_add_test(tc1_1, s21_sprintf_test_2433__);
tcase_add_test(tc1_1, s21_sprintf_test_2434__);
tcase_add_test(tc1_1, s21_sprintf_test_2435__);
tcase_add_test(tc1_1, s21_sprintf_test_2436__);
tcase_add_test(tc1_1, s21_sprintf_test_2437__);
tcase_add_test(tc1_1, s21_sprintf_test_2438__);
tcase_add_test(tc1_1, s21_sprintf_test_2439__);
tcase_add_test(tc1_1, s21_sprintf_test_2440__);
tcase_add_test(tc1_1, s21_sprintf_test_2441__);
tcase_add_test(tc1_1, s21_sprintf_test_2442__);
tcase_add_test(tc1_1, s21_sprintf_test_2443__);
tcase_add_test(tc1_1, s21_sprintf_test_2444__);
tcase_add_test(tc1_1, s21_sprintf_test_2445__);
tcase_add_test(tc1_1, s21_sprintf_test_2446__);
tcase_add_test(tc1_1, s21_sprintf_test_2447__);
tcase_add_test(tc1_1, s21_sprintf_test_2448__);
tcase_add_test(tc1_1, s21_sprintf_test_2449__);
tcase_add_test(tc1_1, s21_sprintf_test_2450__);
tcase_add_test(tc1_1, s21_sprintf_test_2451__);
tcase_add_test(tc1_1, s21_sprintf_test_2452__);
tcase_add_test(tc1_1, s21_sprintf_test_2453__);
tcase_add_test(tc1_1, s21_sprintf_test_2454__);
tcase_add_test(tc1_1, s21_sprintf_test_2455__);
tcase_add_test(tc1_1, s21_sprintf_test_2456__);
tcase_add_test(tc1_1, s21_sprintf_test_2457__);
tcase_add_test(tc1_1, s21_sprintf_test_2458__);
tcase_add_test(tc1_1, s21_sprintf_test_2459__);
tcase_add_test(tc1_1, s21_sprintf_test_2460__);
tcase_add_test(tc1_1, s21_sprintf_test_2461__);
tcase_add_test(tc1_1, s21_sprintf_test_2462__);
tcase_add_test(tc1_1, s21_sprintf_test_2463__);
tcase_add_test(tc1_1, s21_sprintf_test_2464__);
tcase_add_test(tc1_1, s21_sprintf_test_2465__);
tcase_add_test(tc1_1, s21_sprintf_test_2466__);
tcase_add_test(tc1_1, s21_sprintf_test_2467__);
tcase_add_test(tc1_1, s21_sprintf_test_2468__);
tcase_add_test(tc1_1, s21_sprintf_test_2469__);
tcase_add_test(tc1_1, s21_sprintf_test_2470__);
tcase_add_test(tc1_1, s21_sprintf_test_2471__);
tcase_add_test(tc1_1, s21_sprintf_test_2472__);
tcase_add_test(tc1_1, s21_sprintf_test_2473__);
tcase_add_test(tc1_1, s21_sprintf_test_2474__);
tcase_add_test(tc1_1, s21_sprintf_test_2475__);
tcase_add_test(tc1_1, s21_sprintf_test_2476__);
tcase_add_test(tc1_1, s21_sprintf_test_2477__);
tcase_add_test(tc1_1, s21_sprintf_test_2478__);
tcase_add_test(tc1_1, s21_sprintf_test_2479__);
tcase_add_test(tc1_1, s21_sprintf_test_2480__);
tcase_add_test(tc1_1, s21_sprintf_test_2481__);
tcase_add_test(tc1_1, s21_sprintf_test_2482__);
tcase_add_test(tc1_1, s21_sprintf_test_2483__);
tcase_add_test(tc1_1, s21_sprintf_test_2484__);
tcase_add_test(tc1_1, s21_sprintf_test_2485__);
tcase_add_test(tc1_1, s21_sprintf_test_2486__);
tcase_add_test(tc1_1, s21_sprintf_test_2487__);
tcase_add_test(tc1_1, s21_sprintf_test_2488__);
tcase_add_test(tc1_1, s21_sprintf_test_2489__);
tcase_add_test(tc1_1, s21_sprintf_test_2490__);
tcase_add_test(tc1_1, s21_sprintf_test_2491__);
tcase_add_test(tc1_1, s21_sprintf_test_2492__);
tcase_add_test(tc1_1, s21_sprintf_test_2493__);
tcase_add_test(tc1_1, s21_sprintf_test_2494__);
tcase_add_test(tc1_1, s21_sprintf_test_2495__);
tcase_add_test(tc1_1, s21_sprintf_test_2496__);
tcase_add_test(tc1_1, s21_sprintf_test_2497__);
tcase_add_test(tc1_1, s21_sprintf_test_2498__);
tcase_add_test(tc1_1, s21_sprintf_test_2499__);
tcase_add_test(tc1_1, s21_sprintf_test_2500__);
tcase_add_test(tc1_1, s21_sprintf_test_2501__);
tcase_add_test(tc1_1, s21_sprintf_test_2502__);
tcase_add_test(tc1_1, s21_sprintf_test_2503__);
tcase_add_test(tc1_1, s21_sprintf_test_2504__);
tcase_add_test(tc1_1, s21_sprintf_test_2505__);
tcase_add_test(tc1_1, s21_sprintf_test_2506__);
tcase_add_test(tc1_1, s21_sprintf_test_2507__);
tcase_add_test(tc1_1, s21_sprintf_test_2508__);
tcase_add_test(tc1_1, s21_sprintf_test_2509__);
tcase_add_test(tc1_1, s21_sprintf_test_2510__);
tcase_add_test(tc1_1, s21_sprintf_test_2511__);
tcase_add_test(tc1_1, s21_sprintf_test_2512__);
tcase_add_test(tc1_1, s21_sprintf_test_2513__);
tcase_add_test(tc1_1, s21_sprintf_test_2514__);
tcase_add_test(tc1_1, s21_sprintf_test_2515__);
tcase_add_test(tc1_1, s21_sprintf_test_2516__);
tcase_add_test(tc1_1, s21_sprintf_test_2517__);
tcase_add_test(tc1_1, s21_sprintf_test_2518__);
tcase_add_test(tc1_1, s21_sprintf_test_2519__);
tcase_add_test(tc1_1, s21_sprintf_test_2520__);
tcase_add_test(tc1_1, s21_sprintf_test_2521__);
tcase_add_test(tc1_1, s21_sprintf_test_2522__);
tcase_add_test(tc1_1, s21_sprintf_test_2523__);
tcase_add_test(tc1_1, s21_sprintf_test_2524__);
tcase_add_test(tc1_1, s21_sprintf_test_2525__);
tcase_add_test(tc1_1, s21_sprintf_test_2526__);
tcase_add_test(tc1_1, s21_sprintf_test_2527__);
tcase_add_test(tc1_1, s21_sprintf_test_2528__);
tcase_add_test(tc1_1, s21_sprintf_test_2529__);
tcase_add_test(tc1_1, s21_sprintf_test_2530__);
tcase_add_test(tc1_1, s21_sprintf_test_2531__);
tcase_add_test(tc1_1, s21_sprintf_test_2532__);
tcase_add_test(tc1_1, s21_sprintf_test_2533__);
tcase_add_test(tc1_1, s21_sprintf_test_2534__);
tcase_add_test(tc1_1, s21_sprintf_test_2535__);
tcase_add_test(tc1_1, s21_sprintf_test_2536__);
tcase_add_test(tc1_1, s21_sprintf_test_2537__);
tcase_add_test(tc1_1, s21_sprintf_test_2538__);
tcase_add_test(tc1_1, s21_sprintf_test_2539__);
tcase_add_test(tc1_1, s21_sprintf_test_2540__);
tcase_add_test(tc1_1, s21_sprintf_test_2541__);
tcase_add_test(tc1_1, s21_sprintf_test_2542__);
tcase_add_test(tc1_1, s21_sprintf_test_2543__);
tcase_add_test(tc1_1, s21_sprintf_test_2544__);
tcase_add_test(tc1_1, s21_sprintf_test_2545__);
tcase_add_test(tc1_1, s21_sprintf_test_2546__);
tcase_add_test(tc1_1, s21_sprintf_test_2547__);
tcase_add_test(tc1_1, s21_sprintf_test_2548__);
tcase_add_test(tc1_1, s21_sprintf_test_2549__);
tcase_add_test(tc1_1, s21_sprintf_test_2550__);
tcase_add_test(tc1_1, s21_sprintf_test_2551__);
tcase_add_test(tc1_1, s21_sprintf_test_2552__);
tcase_add_test(tc1_1, s21_sprintf_test_2553__);
tcase_add_test(tc1_1, s21_sprintf_test_2554__);
tcase_add_test(tc1_1, s21_sprintf_test_2555__);
tcase_add_test(tc1_1, s21_sprintf_test_2556__);
tcase_add_test(tc1_1, s21_sprintf_test_2557__);
tcase_add_test(tc1_1, s21_sprintf_test_2558__);
tcase_add_test(tc1_1, s21_sprintf_test_2559__);
tcase_add_test(tc1_1, s21_sprintf_test_2560__);
tcase_add_test(tc1_1, s21_sprintf_test_2561__);
tcase_add_test(tc1_1, s21_sprintf_test_2562__);
tcase_add_test(tc1_1, s21_sprintf_test_2563__);
tcase_add_test(tc1_1, s21_sprintf_test_2564__);
tcase_add_test(tc1_1, s21_sprintf_test_2565__);
tcase_add_test(tc1_1, s21_sprintf_test_2566__);
tcase_add_test(tc1_1, s21_sprintf_test_2567__);
tcase_add_test(tc1_1, s21_sprintf_test_2568__);
tcase_add_test(tc1_1, s21_sprintf_test_2569__);
tcase_add_test(tc1_1, s21_sprintf_test_2570__);
tcase_add_test(tc1_1, s21_sprintf_test_2571__);
tcase_add_test(tc1_1, s21_sprintf_test_2572__);
tcase_add_test(tc1_1, s21_sprintf_test_2573__);
tcase_add_test(tc1_1, s21_sprintf_test_2574__);
tcase_add_test(tc1_1, s21_sprintf_test_2575__);
tcase_add_test(tc1_1, s21_sprintf_test_2576__);
tcase_add_test(tc1_1, s21_sprintf_test_2577__);
tcase_add_test(tc1_1, s21_sprintf_test_2578__);
tcase_add_test(tc1_1, s21_sprintf_test_2579__);
tcase_add_test(tc1_1, s21_sprintf_test_2580__);
tcase_add_test(tc1_1, s21_sprintf_test_2581__);
tcase_add_test(tc1_1, s21_sprintf_test_2582__);
tcase_add_test(tc1_1, s21_sprintf_test_2583__);
tcase_add_test(tc1_1, s21_sprintf_test_2584__);
tcase_add_test(tc1_1, s21_sprintf_test_2585__);
tcase_add_test(tc1_1, s21_sprintf_test_2586__);
tcase_add_test(tc1_1, s21_sprintf_test_2587__);
tcase_add_test(tc1_1, s21_sprintf_test_2588__);
tcase_add_test(tc1_1, s21_sprintf_test_2589__);
tcase_add_test(tc1_1, s21_sprintf_test_2590__);
tcase_add_test(tc1_1, s21_sprintf_test_2591__);
tcase_add_test(tc1_1, s21_sprintf_test_2592__);
tcase_add_test(tc1_1, s21_sprintf_test_2593__);
tcase_add_test(tc1_1, s21_sprintf_test_2594__);
tcase_add_test(tc1_1, s21_sprintf_test_2595__);
tcase_add_test(tc1_1, s21_sprintf_test_2596__);
tcase_add_test(tc1_1, s21_sprintf_test_2597__);
tcase_add_test(tc1_1, s21_sprintf_test_2598__);
tcase_add_test(tc1_1, s21_sprintf_test_2599__);
tcase_add_test(tc1_1, s21_sprintf_test_2600__);
tcase_add_test(tc1_1, s21_sprintf_test_2601__);
tcase_add_test(tc1_1, s21_sprintf_test_2602__);
tcase_add_test(tc1_1, s21_sprintf_test_2603__);
tcase_add_test(tc1_1, s21_sprintf_test_2604__);
tcase_add_test(tc1_1, s21_sprintf_test_2605__);
tcase_add_test(tc1_1, s21_sprintf_test_2606__);
tcase_add_test(tc1_1, s21_sprintf_test_2607__);
tcase_add_test(tc1_1, s21_sprintf_test_2608__);
tcase_add_test(tc1_1, s21_sprintf_test_2609__);
tcase_add_test(tc1_1, s21_sprintf_test_2610__);
tcase_add_test(tc1_1, s21_sprintf_test_2611__);
tcase_add_test(tc1_1, s21_sprintf_test_2612__);
tcase_add_test(tc1_1, s21_sprintf_test_2613__);
tcase_add_test(tc1_1, s21_sprintf_test_2614__);
tcase_add_test(tc1_1, s21_sprintf_test_2615__);
tcase_add_test(tc1_1, s21_sprintf_test_2616__);
tcase_add_test(tc1_1, s21_sprintf_test_2617__);
tcase_add_test(tc1_1, s21_sprintf_test_2618__);
tcase_add_test(tc1_1, s21_sprintf_test_2619__);
tcase_add_test(tc1_1, s21_sprintf_test_2620__);
tcase_add_test(tc1_1, s21_sprintf_test_2621__);
tcase_add_test(tc1_1, s21_sprintf_test_2622__);
tcase_add_test(tc1_1, s21_sprintf_test_2623__);
tcase_add_test(tc1_1, s21_sprintf_test_2624__);
tcase_add_test(tc1_1, s21_sprintf_test_2625__);
tcase_add_test(tc1_1, s21_sprintf_test_2626__);
tcase_add_test(tc1_1, s21_sprintf_test_2627__);
tcase_add_test(tc1_1, s21_sprintf_test_2628__);
tcase_add_test(tc1_1, s21_sprintf_test_2629__);
tcase_add_test(tc1_1, s21_sprintf_test_2630__);
tcase_add_test(tc1_1, s21_sprintf_test_2631__);
tcase_add_test(tc1_1, s21_sprintf_test_2632__);
tcase_add_test(tc1_1, s21_sprintf_test_2633__);
tcase_add_test(tc1_1, s21_sprintf_test_2634__);
tcase_add_test(tc1_1, s21_sprintf_test_2635__);
tcase_add_test(tc1_1, s21_sprintf_test_2636__);
tcase_add_test(tc1_1, s21_sprintf_test_2637__);
tcase_add_test(tc1_1, s21_sprintf_test_2638__);
tcase_add_test(tc1_1, s21_sprintf_test_2639__);
tcase_add_test(tc1_1, s21_sprintf_test_2640__);
tcase_add_test(tc1_1, s21_sprintf_test_2641__);
tcase_add_test(tc1_1, s21_sprintf_test_2642__);
tcase_add_test(tc1_1, s21_sprintf_test_2643__);
tcase_add_test(tc1_1, s21_sprintf_test_2644__);
tcase_add_test(tc1_1, s21_sprintf_test_2645__);
tcase_add_test(tc1_1, s21_sprintf_test_2646__);
tcase_add_test(tc1_1, s21_sprintf_test_2647__);
tcase_add_test(tc1_1, s21_sprintf_test_2648__);
tcase_add_test(tc1_1, s21_sprintf_test_2649__);
tcase_add_test(tc1_1, s21_sprintf_test_2650__);
tcase_add_test(tc1_1, s21_sprintf_test_2651__);
tcase_add_test(tc1_1, s21_sprintf_test_2652__);
tcase_add_test(tc1_1, s21_sprintf_test_2653__);
tcase_add_test(tc1_1, s21_sprintf_test_2654__);
tcase_add_test(tc1_1, s21_sprintf_test_2655__);
tcase_add_test(tc1_1, s21_sprintf_test_2656__);
tcase_add_test(tc1_1, s21_sprintf_test_2657__);
tcase_add_test(tc1_1, s21_sprintf_test_2658__);
tcase_add_test(tc1_1, s21_sprintf_test_2659__);
tcase_add_test(tc1_1, s21_sprintf_test_2660__);
tcase_add_test(tc1_1, s21_sprintf_test_2661__);
tcase_add_test(tc1_1, s21_sprintf_test_2662__);
tcase_add_test(tc1_1, s21_sprintf_test_2663__);
tcase_add_test(tc1_1, s21_sprintf_test_2664__);
tcase_add_test(tc1_1, s21_sprintf_test_2665__);
tcase_add_test(tc1_1, s21_sprintf_test_2666__);
tcase_add_test(tc1_1, s21_sprintf_test_2667__);
tcase_add_test(tc1_1, s21_sprintf_test_2668__);
tcase_add_test(tc1_1, s21_sprintf_test_2669__);
tcase_add_test(tc1_1, s21_sprintf_test_2670__);
tcase_add_test(tc1_1, s21_sprintf_test_2671__);
tcase_add_test(tc1_1, s21_sprintf_test_2672__);
tcase_add_test(tc1_1, s21_sprintf_test_2673__);
tcase_add_test(tc1_1, s21_sprintf_test_2674__);
tcase_add_test(tc1_1, s21_sprintf_test_2675__);
tcase_add_test(tc1_1, s21_sprintf_test_2676__);
tcase_add_test(tc1_1, s21_sprintf_test_2677__);
tcase_add_test(tc1_1, s21_sprintf_test_2678__);
tcase_add_test(tc1_1, s21_sprintf_test_2679__);
tcase_add_test(tc1_1, s21_sprintf_test_2680__);
tcase_add_test(tc1_1, s21_sprintf_test_2681__);
tcase_add_test(tc1_1, s21_sprintf_test_2682__);
tcase_add_test(tc1_1, s21_sprintf_test_2683__);
tcase_add_test(tc1_1, s21_sprintf_test_2684__);
tcase_add_test(tc1_1, s21_sprintf_test_2685__);
tcase_add_test(tc1_1, s21_sprintf_test_2686__);
tcase_add_test(tc1_1, s21_sprintf_test_2687__);
tcase_add_test(tc1_1, s21_sprintf_test_2688__);
tcase_add_test(tc1_1, s21_sprintf_test_2689__);
tcase_add_test(tc1_1, s21_sprintf_test_2690__);
tcase_add_test(tc1_1, s21_sprintf_test_2691__);
tcase_add_test(tc1_1, s21_sprintf_test_2692__);
tcase_add_test(tc1_1, s21_sprintf_test_2693__);
tcase_add_test(tc1_1, s21_sprintf_test_2694__);
tcase_add_test(tc1_1, s21_sprintf_test_2695__);
tcase_add_test(tc1_1, s21_sprintf_test_2696__);
tcase_add_test(tc1_1, s21_sprintf_test_2697__);
tcase_add_test(tc1_1, s21_sprintf_test_2698__);
tcase_add_test(tc1_1, s21_sprintf_test_2699__);
tcase_add_test(tc1_1, s21_sprintf_test_2700__);
tcase_add_test(tc1_1, s21_sprintf_test_2701__);
tcase_add_test(tc1_1, s21_sprintf_test_2702__);
tcase_add_test(tc1_1, s21_sprintf_test_2703__);
tcase_add_test(tc1_1, s21_sprintf_test_2704__);
tcase_add_test(tc1_1, s21_sprintf_test_2705__);
tcase_add_test(tc1_1, s21_sprintf_test_2706__);
tcase_add_test(tc1_1, s21_sprintf_test_2707__);
tcase_add_test(tc1_1, s21_sprintf_test_2708__);
tcase_add_test(tc1_1, s21_sprintf_test_2709__);
tcase_add_test(tc1_1, s21_sprintf_test_2710__);
tcase_add_test(tc1_1, s21_sprintf_test_2711__);
tcase_add_test(tc1_1, s21_sprintf_test_2712__);
tcase_add_test(tc1_1, s21_sprintf_test_2713__);
tcase_add_test(tc1_1, s21_sprintf_test_2714__);
tcase_add_test(tc1_1, s21_sprintf_test_2715__);
tcase_add_test(tc1_1, s21_sprintf_test_2716__);
tcase_add_test(tc1_1, s21_sprintf_test_2717__);
tcase_add_test(tc1_1, s21_sprintf_test_2718__);
tcase_add_test(tc1_1, s21_sprintf_test_2719__);
tcase_add_test(tc1_1, s21_sprintf_test_2720__);
tcase_add_test(tc1_1, s21_sprintf_test_2721__);
tcase_add_test(tc1_1, s21_sprintf_test_2722__);
tcase_add_test(tc1_1, s21_sprintf_test_2723__);
tcase_add_test(tc1_1, s21_sprintf_test_2724__);
tcase_add_test(tc1_1, s21_sprintf_test_2725__);
tcase_add_test(tc1_1, s21_sprintf_test_2726__);
tcase_add_test(tc1_1, s21_sprintf_test_2727__);
tcase_add_test(tc1_1, s21_sprintf_test_2728__);
tcase_add_test(tc1_1, s21_sprintf_test_2729__);
tcase_add_test(tc1_1, s21_sprintf_test_2730__);
tcase_add_test(tc1_1, s21_sprintf_test_2731__);
tcase_add_test(tc1_1, s21_sprintf_test_2732__);
tcase_add_test(tc1_1, s21_sprintf_test_2733__);
tcase_add_test(tc1_1, s21_sprintf_test_2734__);
tcase_add_test(tc1_1, s21_sprintf_test_2735__);
tcase_add_test(tc1_1, s21_sprintf_test_2736__);
tcase_add_test(tc1_1, s21_sprintf_test_2737__);
tcase_add_test(tc1_1, s21_sprintf_test_2738__);
tcase_add_test(tc1_1, s21_sprintf_test_2739__);
tcase_add_test(tc1_1, s21_sprintf_test_2740__);
tcase_add_test(tc1_1, s21_sprintf_test_2741__);
tcase_add_test(tc1_1, s21_sprintf_test_2742__);
tcase_add_test(tc1_1, s21_sprintf_test_2743__);
tcase_add_test(tc1_1, s21_sprintf_test_2744__);
tcase_add_test(tc1_1, s21_sprintf_test_2745__);
tcase_add_test(tc1_1, s21_sprintf_test_2746__);
tcase_add_test(tc1_1, s21_sprintf_test_2747__);
tcase_add_test(tc1_1, s21_sprintf_test_2748__);
tcase_add_test(tc1_1, s21_sprintf_test_2749__);
tcase_add_test(tc1_1, s21_sprintf_test_2750__);
tcase_add_test(tc1_1, s21_sprintf_test_2751__);
tcase_add_test(tc1_1, s21_sprintf_test_2752__);
tcase_add_test(tc1_1, s21_sprintf_test_2753__);
tcase_add_test(tc1_1, s21_sprintf_test_2754__);
tcase_add_test(tc1_1, s21_sprintf_test_2755__);
tcase_add_test(tc1_1, s21_sprintf_test_2756__);
tcase_add_test(tc1_1, s21_sprintf_test_2757__);
tcase_add_test(tc1_1, s21_sprintf_test_2758__);
tcase_add_test(tc1_1, s21_sprintf_test_2759__);
tcase_add_test(tc1_1, s21_sprintf_test_2760__);
tcase_add_test(tc1_1, s21_sprintf_test_2761__);
tcase_add_test(tc1_1, s21_sprintf_test_2762__);
tcase_add_test(tc1_1, s21_sprintf_test_2763__);
tcase_add_test(tc1_1, s21_sprintf_test_2764__);
tcase_add_test(tc1_1, s21_sprintf_test_2765__);
tcase_add_test(tc1_1, s21_sprintf_test_2766__);
tcase_add_test(tc1_1, s21_sprintf_test_2767__);
tcase_add_test(tc1_1, s21_sprintf_test_2768__);
tcase_add_test(tc1_1, s21_sprintf_test_2769__);
tcase_add_test(tc1_1, s21_sprintf_test_2770__);
tcase_add_test(tc1_1, s21_sprintf_test_2771__);
tcase_add_test(tc1_1, s21_sprintf_test_2772__);
tcase_add_test(tc1_1, s21_sprintf_test_2773__);
tcase_add_test(tc1_1, s21_sprintf_test_2774__);
tcase_add_test(tc1_1, s21_sprintf_test_2775__);
tcase_add_test(tc1_1, s21_sprintf_test_2776__);
tcase_add_test(tc1_1, s21_sprintf_test_2777__);
tcase_add_test(tc1_1, s21_sprintf_test_2778__);
tcase_add_test(tc1_1, s21_sprintf_test_2779__);
tcase_add_test(tc1_1, s21_sprintf_test_2780__);
tcase_add_test(tc1_1, s21_sprintf_test_2781__);
tcase_add_test(tc1_1, s21_sprintf_test_2782__);
tcase_add_test(tc1_1, s21_sprintf_test_2783__);
tcase_add_test(tc1_1, s21_sprintf_test_2784__);
tcase_add_test(tc1_1, s21_sprintf_test_2785__);
tcase_add_test(tc1_1, s21_sprintf_test_2786__);
tcase_add_test(tc1_1, s21_sprintf_test_2787__);
tcase_add_test(tc1_1, s21_sprintf_test_2788__);
tcase_add_test(tc1_1, s21_sprintf_test_2789__);
tcase_add_test(tc1_1, s21_sprintf_test_2790__);
tcase_add_test(tc1_1, s21_sprintf_test_2791__);
tcase_add_test(tc1_1, s21_sprintf_test_2792__);
tcase_add_test(tc1_1, s21_sprintf_test_2793__);
tcase_add_test(tc1_1, s21_sprintf_test_2794__);
tcase_add_test(tc1_1, s21_sprintf_test_2795__);
tcase_add_test(tc1_1, s21_sprintf_test_2796__);
tcase_add_test(tc1_1, s21_sprintf_test_2797__);
tcase_add_test(tc1_1, s21_sprintf_test_2798__);
tcase_add_test(tc1_1, s21_sprintf_test_2799__);
tcase_add_test(tc1_1, s21_sprintf_test_2800__);
tcase_add_test(tc1_1, s21_sprintf_test_2801__);
tcase_add_test(tc1_1, s21_sprintf_test_2802__);
tcase_add_test(tc1_1, s21_sprintf_test_2803__);
tcase_add_test(tc1_1, s21_sprintf_test_2804__);
tcase_add_test(tc1_1, s21_sprintf_test_2805__);
tcase_add_test(tc1_1, s21_sprintf_test_2806__);
tcase_add_test(tc1_1, s21_sprintf_test_2807__);
tcase_add_test(tc1_1, s21_sprintf_test_2808__);
tcase_add_test(tc1_1, s21_sprintf_test_2809__);
tcase_add_test(tc1_1, s21_sprintf_test_2810__);
tcase_add_test(tc1_1, s21_sprintf_test_2811__);
tcase_add_test(tc1_1, s21_sprintf_test_2812__);
tcase_add_test(tc1_1, s21_sprintf_test_2813__);
tcase_add_test(tc1_1, s21_sprintf_test_2814__);
tcase_add_test(tc1_1, s21_sprintf_test_2815__);
tcase_add_test(tc1_1, s21_sprintf_test_2816__);
tcase_add_test(tc1_1, s21_sprintf_test_2817__);
tcase_add_test(tc1_1, s21_sprintf_test_2818__);
tcase_add_test(tc1_1, s21_sprintf_test_2819__);
tcase_add_test(tc1_1, s21_sprintf_test_2820__);
tcase_add_test(tc1_1, s21_sprintf_test_2821__);
tcase_add_test(tc1_1, s21_sprintf_test_2822__);
tcase_add_test(tc1_1, s21_sprintf_test_2823__);
tcase_add_test(tc1_1, s21_sprintf_test_2824__);
tcase_add_test(tc1_1, s21_sprintf_test_2825__);
tcase_add_test(tc1_1, s21_sprintf_test_2826__);
tcase_add_test(tc1_1, s21_sprintf_test_2827__);
tcase_add_test(tc1_1, s21_sprintf_test_2828__);
tcase_add_test(tc1_1, s21_sprintf_test_2829__);
tcase_add_test(tc1_1, s21_sprintf_test_2830__);
tcase_add_test(tc1_1, s21_sprintf_test_2831__);
tcase_add_test(tc1_1, s21_sprintf_test_2832__);
tcase_add_test(tc1_1, s21_sprintf_test_2833__);
tcase_add_test(tc1_1, s21_sprintf_test_2834__);
tcase_add_test(tc1_1, s21_sprintf_test_2835__);
tcase_add_test(tc1_1, s21_sprintf_test_2836__);
tcase_add_test(tc1_1, s21_sprintf_test_2837__);
tcase_add_test(tc1_1, s21_sprintf_test_2838__);
tcase_add_test(tc1_1, s21_sprintf_test_2839__);
tcase_add_test(tc1_1, s21_sprintf_test_2840__);
tcase_add_test(tc1_1, s21_sprintf_test_2841__);
tcase_add_test(tc1_1, s21_sprintf_test_2842__);
tcase_add_test(tc1_1, s21_sprintf_test_2843__);
tcase_add_test(tc1_1, s21_sprintf_test_2844__);
tcase_add_test(tc1_1, s21_sprintf_test_2845__);
tcase_add_test(tc1_1, s21_sprintf_test_2846__);
tcase_add_test(tc1_1, s21_sprintf_test_2847__);
tcase_add_test(tc1_1, s21_sprintf_test_2848__);
tcase_add_test(tc1_1, s21_sprintf_test_2849__);
tcase_add_test(tc1_1, s21_sprintf_test_2850__);
tcase_add_test(tc1_1, s21_sprintf_test_2851__);
tcase_add_test(tc1_1, s21_sprintf_test_2852__);
tcase_add_test(tc1_1, s21_sprintf_test_2853__);
tcase_add_test(tc1_1, s21_sprintf_test_2854__);
tcase_add_test(tc1_1, s21_sprintf_test_2855__);
tcase_add_test(tc1_1, s21_sprintf_test_2856__);
tcase_add_test(tc1_1, s21_sprintf_test_2857__);
tcase_add_test(tc1_1, s21_sprintf_test_2858__);
tcase_add_test(tc1_1, s21_sprintf_test_2859__);
tcase_add_test(tc1_1, s21_sprintf_test_2860__);
tcase_add_test(tc1_1, s21_sprintf_test_2861__);
tcase_add_test(tc1_1, s21_sprintf_test_2862__);
tcase_add_test(tc1_1, s21_sprintf_test_2863__);
tcase_add_test(tc1_1, s21_sprintf_test_2864__);
tcase_add_test(tc1_1, s21_sprintf_test_2865__);
tcase_add_test(tc1_1, s21_sprintf_test_2866__);
tcase_add_test(tc1_1, s21_sprintf_test_2867__);
tcase_add_test(tc1_1, s21_sprintf_test_2868__);
tcase_add_test(tc1_1, s21_sprintf_test_2869__);
tcase_add_test(tc1_1, s21_sprintf_test_2870__);
tcase_add_test(tc1_1, s21_sprintf_test_2871__);
tcase_add_test(tc1_1, s21_sprintf_test_2872__);
tcase_add_test(tc1_1, s21_sprintf_test_2873__);
tcase_add_test(tc1_1, s21_sprintf_test_2874__);
tcase_add_test(tc1_1, s21_sprintf_test_2875__);
tcase_add_test(tc1_1, s21_sprintf_test_2876__);
tcase_add_test(tc1_1, s21_sprintf_test_2877__);
tcase_add_test(tc1_1, s21_sprintf_test_2878__);
tcase_add_test(tc1_1, s21_sprintf_test_2879__);
tcase_add_test(tc1_1, s21_sprintf_test_2880__);
tcase_add_test(tc1_1, s21_sprintf_test_2881__);
tcase_add_test(tc1_1, s21_sprintf_test_2882__);
tcase_add_test(tc1_1, s21_sprintf_test_2883__);
tcase_add_test(tc1_1, s21_sprintf_test_2884__);
tcase_add_test(tc1_1, s21_sprintf_test_2885__);
tcase_add_test(tc1_1, s21_sprintf_test_2886__);
tcase_add_test(tc1_1, s21_sprintf_test_2887__);
tcase_add_test(tc1_1, s21_sprintf_test_2888__);
tcase_add_test(tc1_1, s21_sprintf_test_2889__);
tcase_add_test(tc1_1, s21_sprintf_test_2890__);
tcase_add_test(tc1_1, s21_sprintf_test_2891__);
tcase_add_test(tc1_1, s21_sprintf_test_2892__);
tcase_add_test(tc1_1, s21_sprintf_test_2893__);
tcase_add_test(tc1_1, s21_sprintf_test_2894__);
tcase_add_test(tc1_1, s21_sprintf_test_2895__);
tcase_add_test(tc1_1, s21_sprintf_test_2896__);
tcase_add_test(tc1_1, s21_sprintf_test_2897__);
tcase_add_test(tc1_1, s21_sprintf_test_2898__);
tcase_add_test(tc1_1, s21_sprintf_test_2899__);
tcase_add_test(tc1_1, s21_sprintf_test_2900__);
tcase_add_test(tc1_1, s21_sprintf_test_2901__);
tcase_add_test(tc1_1, s21_sprintf_test_2902__);
tcase_add_test(tc1_1, s21_sprintf_test_2903__);
tcase_add_test(tc1_1, s21_sprintf_test_2904__);
tcase_add_test(tc1_1, s21_sprintf_test_2905__);
tcase_add_test(tc1_1, s21_sprintf_test_2906__);
tcase_add_test(tc1_1, s21_sprintf_test_2907__);
tcase_add_test(tc1_1, s21_sprintf_test_2908__);
tcase_add_test(tc1_1, s21_sprintf_test_2909__);
tcase_add_test(tc1_1, s21_sprintf_test_2910__);
tcase_add_test(tc1_1, s21_sprintf_test_2911__);
tcase_add_test(tc1_1, s21_sprintf_test_2912__);
tcase_add_test(tc1_1, s21_sprintf_test_2913__);
tcase_add_test(tc1_1, s21_sprintf_test_2914__);
tcase_add_test(tc1_1, s21_sprintf_test_2915__);
tcase_add_test(tc1_1, s21_sprintf_test_2916__);
tcase_add_test(tc1_1, s21_sprintf_test_2917__);
tcase_add_test(tc1_1, s21_sprintf_test_2918__);
tcase_add_test(tc1_1, s21_sprintf_test_2919__);
tcase_add_test(tc1_1, s21_sprintf_test_2920__);
tcase_add_test(tc1_1, s21_sprintf_test_2921__);
tcase_add_test(tc1_1, s21_sprintf_test_2922__);
tcase_add_test(tc1_1, s21_sprintf_test_2923__);
tcase_add_test(tc1_1, s21_sprintf_test_2924__);
tcase_add_test(tc1_1, s21_sprintf_test_2925__);
tcase_add_test(tc1_1, s21_sprintf_test_2926__);
tcase_add_test(tc1_1, s21_sprintf_test_2927__);
tcase_add_test(tc1_1, s21_sprintf_test_2928__);
tcase_add_test(tc1_1, s21_sprintf_test_2929__);
tcase_add_test(tc1_1, s21_sprintf_test_2930__);
tcase_add_test(tc1_1, s21_sprintf_test_2931__);
tcase_add_test(tc1_1, s21_sprintf_test_2932__);
tcase_add_test(tc1_1, s21_sprintf_test_2933__);
tcase_add_test(tc1_1, s21_sprintf_test_2934__);
tcase_add_test(tc1_1, s21_sprintf_test_2935__);
tcase_add_test(tc1_1, s21_sprintf_test_2936__);
tcase_add_test(tc1_1, s21_sprintf_test_2937__);
tcase_add_test(tc1_1, s21_sprintf_test_2938__);
tcase_add_test(tc1_1, s21_sprintf_test_2939__);
tcase_add_test(tc1_1, s21_sprintf_test_2940__);
tcase_add_test(tc1_1, s21_sprintf_test_2941__);
tcase_add_test(tc1_1, s21_sprintf_test_2942__);
tcase_add_test(tc1_1, s21_sprintf_test_2943__);
tcase_add_test(tc1_1, s21_sprintf_test_2944__);
tcase_add_test(tc1_1, s21_sprintf_test_2945__);
tcase_add_test(tc1_1, s21_sprintf_test_2946__);
tcase_add_test(tc1_1, s21_sprintf_test_2947__);
tcase_add_test(tc1_1, s21_sprintf_test_2948__);
tcase_add_test(tc1_1, s21_sprintf_test_2949__);
tcase_add_test(tc1_1, s21_sprintf_test_2950__);
tcase_add_test(tc1_1, s21_sprintf_test_2951__);
tcase_add_test(tc1_1, s21_sprintf_test_2952__);
tcase_add_test(tc1_1, s21_sprintf_test_2953__);
tcase_add_test(tc1_1, s21_sprintf_test_2954__);
tcase_add_test(tc1_1, s21_sprintf_test_2955__);
tcase_add_test(tc1_1, s21_sprintf_test_2956__);
tcase_add_test(tc1_1, s21_sprintf_test_2957__);
tcase_add_test(tc1_1, s21_sprintf_test_2958__);
tcase_add_test(tc1_1, s21_sprintf_test_2959__);
tcase_add_test(tc1_1, s21_sprintf_test_2960__);
tcase_add_test(tc1_1, s21_sprintf_test_2961__);
tcase_add_test(tc1_1, s21_sprintf_test_2962__);
tcase_add_test(tc1_1, s21_sprintf_test_2963__);
tcase_add_test(tc1_1, s21_sprintf_test_2964__);
tcase_add_test(tc1_1, s21_sprintf_test_2965__);
tcase_add_test(tc1_1, s21_sprintf_test_2966__);
tcase_add_test(tc1_1, s21_sprintf_test_2967__);
tcase_add_test(tc1_1, s21_sprintf_test_2968__);
tcase_add_test(tc1_1, s21_sprintf_test_2969__);
tcase_add_test(tc1_1, s21_sprintf_test_2970__);
tcase_add_test(tc1_1, s21_sprintf_test_2971__);
tcase_add_test(tc1_1, s21_sprintf_test_2972__);
tcase_add_test(tc1_1, s21_sprintf_test_2973__);
tcase_add_test(tc1_1, s21_sprintf_test_2974__);
tcase_add_test(tc1_1, s21_sprintf_test_2975__);
tcase_add_test(tc1_1, s21_sprintf_test_2976__);
tcase_add_test(tc1_1, s21_sprintf_test_2977__);
tcase_add_test(tc1_1, s21_sprintf_test_2978__);
tcase_add_test(tc1_1, s21_sprintf_test_2979__);
tcase_add_test(tc1_1, s21_sprintf_test_2980__);
tcase_add_test(tc1_1, s21_sprintf_test_2981__);
tcase_add_test(tc1_1, s21_sprintf_test_2982__);
tcase_add_test(tc1_1, s21_sprintf_test_2983__);
tcase_add_test(tc1_1, s21_sprintf_test_2984__);
tcase_add_test(tc1_1, s21_sprintf_test_2985__);
tcase_add_test(tc1_1, s21_sprintf_test_2986__);
tcase_add_test(tc1_1, s21_sprintf_test_2987__);
tcase_add_test(tc1_1, s21_sprintf_test_2988__);
tcase_add_test(tc1_1, s21_sprintf_test_2989__);
tcase_add_test(tc1_1, s21_sprintf_test_2990__);
tcase_add_test(tc1_1, s21_sprintf_test_2991__);
tcase_add_test(tc1_1, s21_sprintf_test_2992__);
tcase_add_test(tc1_1, s21_sprintf_test_2993__);
tcase_add_test(tc1_1, s21_sprintf_test_2994__);
tcase_add_test(tc1_1, s21_sprintf_test_2995__);
tcase_add_test(tc1_1, s21_sprintf_test_2996__);
tcase_add_test(tc1_1, s21_sprintf_test_2997__);
tcase_add_test(tc1_1, s21_sprintf_test_2998__);
tcase_add_test(tc1_1, s21_sprintf_test_2999__);
tcase_add_test(tc1_1, s21_sprintf_test_3000__);
tcase_add_test(tc1_1, s21_sprintf_test_3001__);
tcase_add_test(tc1_1, s21_sprintf_test_3002__);
tcase_add_test(tc1_1, s21_sprintf_test_3003__);
tcase_add_test(tc1_1, s21_sprintf_test_3004__);
tcase_add_test(tc1_1, s21_sprintf_test_3005__);
tcase_add_test(tc1_1, s21_sprintf_test_3006__);
tcase_add_test(tc1_1, s21_sprintf_test_3007__);
tcase_add_test(tc1_1, s21_sprintf_test_3008__);
tcase_add_test(tc1_1, s21_sprintf_test_3009__);
tcase_add_test(tc1_1, s21_sprintf_test_3010__);
tcase_add_test(tc1_1, s21_sprintf_test_3011__);
tcase_add_test(tc1_1, s21_sprintf_test_3012__);
tcase_add_test(tc1_1, s21_sprintf_test_3013__);
tcase_add_test(tc1_1, s21_sprintf_test_3014__);
tcase_add_test(tc1_1, s21_sprintf_test_3015__);
tcase_add_test(tc1_1, s21_sprintf_test_3016__);
tcase_add_test(tc1_1, s21_sprintf_test_3017__);
tcase_add_test(tc1_1, s21_sprintf_test_3018__);
tcase_add_test(tc1_1, s21_sprintf_test_3019__);
tcase_add_test(tc1_1, s21_sprintf_test_3020__);
tcase_add_test(tc1_1, s21_sprintf_test_3021__);
tcase_add_test(tc1_1, s21_sprintf_test_3022__);
tcase_add_test(tc1_1, s21_sprintf_test_3023__);
tcase_add_test(tc1_1, s21_sprintf_test_3024__);
tcase_add_test(tc1_1, s21_sprintf_test_3025__);
tcase_add_test(tc1_1, s21_sprintf_test_3026__);
tcase_add_test(tc1_1, s21_sprintf_test_3027__);
tcase_add_test(tc1_1, s21_sprintf_test_3028__);
tcase_add_test(tc1_1, s21_sprintf_test_3029__);
tcase_add_test(tc1_1, s21_sprintf_test_3030__);
tcase_add_test(tc1_1, s21_sprintf_test_3031__);
tcase_add_test(tc1_1, s21_sprintf_test_3032__);
tcase_add_test(tc1_1, s21_sprintf_test_3033__);
tcase_add_test(tc1_1, s21_sprintf_test_3034__);
tcase_add_test(tc1_1, s21_sprintf_test_3035__);
tcase_add_test(tc1_1, s21_sprintf_test_3036__);
tcase_add_test(tc1_1, s21_sprintf_test_3037__);
tcase_add_test(tc1_1, s21_sprintf_test_3038__);
tcase_add_test(tc1_1, s21_sprintf_test_3039__);
tcase_add_test(tc1_1, s21_sprintf_test_3040__);
tcase_add_test(tc1_1, s21_sprintf_test_3041__);
tcase_add_test(tc1_1, s21_sprintf_test_3042__);
tcase_add_test(tc1_1, s21_sprintf_test_3043__);
tcase_add_test(tc1_1, s21_sprintf_test_3044__);
tcase_add_test(tc1_1, s21_sprintf_test_3045__);
tcase_add_test(tc1_1, s21_sprintf_test_3046__);
tcase_add_test(tc1_1, s21_sprintf_test_3047__);
tcase_add_test(tc1_1, s21_sprintf_test_3048__);
tcase_add_test(tc1_1, s21_sprintf_test_3049__);
tcase_add_test(tc1_1, s21_sprintf_test_3050__);
tcase_add_test(tc1_1, s21_sprintf_test_3051__);
tcase_add_test(tc1_1, s21_sprintf_test_3052__);
tcase_add_test(tc1_1, s21_sprintf_test_3053__);
tcase_add_test(tc1_1, s21_sprintf_test_3054__);
tcase_add_test(tc1_1, s21_sprintf_test_3055__);
tcase_add_test(tc1_1, s21_sprintf_test_3056__);
tcase_add_test(tc1_1, s21_sprintf_test_3057__);
tcase_add_test(tc1_1, s21_sprintf_test_3058__);
tcase_add_test(tc1_1, s21_sprintf_test_3059__);
tcase_add_test(tc1_1, s21_sprintf_test_3060__);
tcase_add_test(tc1_1, s21_sprintf_test_3061__);
tcase_add_test(tc1_1, s21_sprintf_test_3062__);
tcase_add_test(tc1_1, s21_sprintf_test_3063__);
tcase_add_test(tc1_1, s21_sprintf_test_3064__);
tcase_add_test(tc1_1, s21_sprintf_test_3065__);
tcase_add_test(tc1_1, s21_sprintf_test_3066__);
tcase_add_test(tc1_1, s21_sprintf_test_3067__);
tcase_add_test(tc1_1, s21_sprintf_test_3068__);
tcase_add_test(tc1_1, s21_sprintf_test_3069__);
tcase_add_test(tc1_1, s21_sprintf_test_3070__);
tcase_add_test(tc1_1, s21_sprintf_test_3071__);
tcase_add_test(tc1_1, s21_sprintf_test_3072__);
tcase_add_test(tc1_1, s21_sprintf_test_3073__);
tcase_add_test(tc1_1, s21_sprintf_test_3074__);
tcase_add_test(tc1_1, s21_sprintf_test_3075__);
tcase_add_test(tc1_1, s21_sprintf_test_3076__);
tcase_add_test(tc1_1, s21_sprintf_test_3077__);
tcase_add_test(tc1_1, s21_sprintf_test_3078__);
tcase_add_test(tc1_1, s21_sprintf_test_3079__);
tcase_add_test(tc1_1, s21_sprintf_test_3080__);
tcase_add_test(tc1_1, s21_sprintf_test_3081__);
tcase_add_test(tc1_1, s21_sprintf_test_3082__);
tcase_add_test(tc1_1, s21_sprintf_test_3083__);
tcase_add_test(tc1_1, s21_sprintf_test_3084__);
tcase_add_test(tc1_1, s21_sprintf_test_3085__);
tcase_add_test(tc1_1, s21_sprintf_test_3086__);
tcase_add_test(tc1_1, s21_sprintf_test_3087__);
tcase_add_test(tc1_1, s21_sprintf_test_3088__);
tcase_add_test(tc1_1, s21_sprintf_test_3089__);
tcase_add_test(tc1_1, s21_sprintf_test_3090__);
tcase_add_test(tc1_1, s21_sprintf_test_3091__);
tcase_add_test(tc1_1, s21_sprintf_test_3092__);
tcase_add_test(tc1_1, s21_sprintf_test_3093__);
tcase_add_test(tc1_1, s21_sprintf_test_3094__);
tcase_add_test(tc1_1, s21_sprintf_test_3095__);
tcase_add_test(tc1_1, s21_sprintf_test_3096__);
tcase_add_test(tc1_1, s21_sprintf_test_3097__);
tcase_add_test(tc1_1, s21_sprintf_test_3098__);
tcase_add_test(tc1_1, s21_sprintf_test_3099__);
tcase_add_test(tc1_1, s21_sprintf_test_3100__);
tcase_add_test(tc1_1, s21_sprintf_test_3101__);
tcase_add_test(tc1_1, s21_sprintf_test_3102__);
tcase_add_test(tc1_1, s21_sprintf_test_3103__);
tcase_add_test(tc1_1, s21_sprintf_test_3104__);
tcase_add_test(tc1_1, s21_sprintf_test_3105__);
tcase_add_test(tc1_1, s21_sprintf_test_3106__);
tcase_add_test(tc1_1, s21_sprintf_test_3107__);
tcase_add_test(tc1_1, s21_sprintf_test_3108__);
tcase_add_test(tc1_1, s21_sprintf_test_3109__);
tcase_add_test(tc1_1, s21_sprintf_test_3110__);
tcase_add_test(tc1_1, s21_sprintf_test_3111__);
tcase_add_test(tc1_1, s21_sprintf_test_3112__);
tcase_add_test(tc1_1, s21_sprintf_test_3113__);
tcase_add_test(tc1_1, s21_sprintf_test_3114__);
tcase_add_test(tc1_1, s21_sprintf_test_3115__);
tcase_add_test(tc1_1, s21_sprintf_test_3116__);
tcase_add_test(tc1_1, s21_sprintf_test_3117__);
tcase_add_test(tc1_1, s21_sprintf_test_3118__);
tcase_add_test(tc1_1, s21_sprintf_test_3119__);
tcase_add_test(tc1_1, s21_sprintf_test_3120__);
tcase_add_test(tc1_1, s21_sprintf_test_3121__);
tcase_add_test(tc1_1, s21_sprintf_test_3122__);
tcase_add_test(tc1_1, s21_sprintf_test_3123__);
tcase_add_test(tc1_1, s21_sprintf_test_3124__);
tcase_add_test(tc1_1, s21_sprintf_test_3125__);
tcase_add_test(tc1_1, s21_sprintf_test_3126__);
tcase_add_test(tc1_1, s21_sprintf_test_3127__);
tcase_add_test(tc1_1, s21_sprintf_test_3128__);
tcase_add_test(tc1_1, s21_sprintf_test_3129__);
tcase_add_test(tc1_1, s21_sprintf_test_3130__);
tcase_add_test(tc1_1, s21_sprintf_test_3131__);
tcase_add_test(tc1_1, s21_sprintf_test_3132__);
tcase_add_test(tc1_1, s21_sprintf_test_3133__);
tcase_add_test(tc1_1, s21_sprintf_test_3134__);
tcase_add_test(tc1_1, s21_sprintf_test_3135__);
tcase_add_test(tc1_1, s21_sprintf_test_3136__);
tcase_add_test(tc1_1, s21_sprintf_test_3137__);
tcase_add_test(tc1_1, s21_sprintf_test_3138__);
tcase_add_test(tc1_1, s21_sprintf_test_3139__);
tcase_add_test(tc1_1, s21_sprintf_test_3140__);
tcase_add_test(tc1_1, s21_sprintf_test_3141__);
tcase_add_test(tc1_1, s21_sprintf_test_3142__);
tcase_add_test(tc1_1, s21_sprintf_test_3143__);
tcase_add_test(tc1_1, s21_sprintf_test_3144__);
tcase_add_test(tc1_1, s21_sprintf_test_3145__);
tcase_add_test(tc1_1, s21_sprintf_test_3146__);
tcase_add_test(tc1_1, s21_sprintf_test_3147__);
tcase_add_test(tc1_1, s21_sprintf_test_3148__);
tcase_add_test(tc1_1, s21_sprintf_test_3149__);
tcase_add_test(tc1_1, s21_sprintf_test_3150__);
tcase_add_test(tc1_1, s21_sprintf_test_3151__);
tcase_add_test(tc1_1, s21_sprintf_test_3152__);
tcase_add_test(tc1_1, s21_sprintf_test_3153__);
tcase_add_test(tc1_1, s21_sprintf_test_3154__);
tcase_add_test(tc1_1, s21_sprintf_test_3155__);
tcase_add_test(tc1_1, s21_sprintf_test_3156__);
tcase_add_test(tc1_1, s21_sprintf_test_3157__);
tcase_add_test(tc1_1, s21_sprintf_test_3158__);
tcase_add_test(tc1_1, s21_sprintf_test_3159__);
tcase_add_test(tc1_1, s21_sprintf_test_3160__);
tcase_add_test(tc1_1, s21_sprintf_test_3161__);
tcase_add_test(tc1_1, s21_sprintf_test_3162__);
tcase_add_test(tc1_1, s21_sprintf_test_3163__);
tcase_add_test(tc1_1, s21_sprintf_test_3164__);
tcase_add_test(tc1_1, s21_sprintf_test_3165__);
tcase_add_test(tc1_1, s21_sprintf_test_3166__);
tcase_add_test(tc1_1, s21_sprintf_test_3167__);
tcase_add_test(tc1_1, s21_sprintf_test_3168__);
tcase_add_test(tc1_1, s21_sprintf_test_3169__);
tcase_add_test(tc1_1, s21_sprintf_test_3170__);
tcase_add_test(tc1_1, s21_sprintf_test_3171__);
tcase_add_test(tc1_1, s21_sprintf_test_3172__);
tcase_add_test(tc1_1, s21_sprintf_test_3173__);
tcase_add_test(tc1_1, s21_sprintf_test_3174__);
tcase_add_test(tc1_1, s21_sprintf_test_3175__);
tcase_add_test(tc1_1, s21_sprintf_test_3176__);
tcase_add_test(tc1_1, s21_sprintf_test_3177__);
tcase_add_test(tc1_1, s21_sprintf_test_3178__);
tcase_add_test(tc1_1, s21_sprintf_test_3179__);
tcase_add_test(tc1_1, s21_sprintf_test_3180__);
tcase_add_test(tc1_1, s21_sprintf_test_3181__);
tcase_add_test(tc1_1, s21_sprintf_test_3182__);
tcase_add_test(tc1_1, s21_sprintf_test_3183__);
tcase_add_test(tc1_1, s21_sprintf_test_3184__);
tcase_add_test(tc1_1, s21_sprintf_test_3185__);
tcase_add_test(tc1_1, s21_sprintf_test_3186__);
tcase_add_test(tc1_1, s21_sprintf_test_3187__);
tcase_add_test(tc1_1, s21_sprintf_test_3188__);
tcase_add_test(tc1_1, s21_sprintf_test_3189__);
tcase_add_test(tc1_1, s21_sprintf_test_3190__);
tcase_add_test(tc1_1, s21_sprintf_test_3191__);
tcase_add_test(tc1_1, s21_sprintf_test_3192__);
tcase_add_test(tc1_1, s21_sprintf_test_3193__);
tcase_add_test(tc1_1, s21_sprintf_test_3194__);
tcase_add_test(tc1_1, s21_sprintf_test_3195__);
tcase_add_test(tc1_1, s21_sprintf_test_3196__);
tcase_add_test(tc1_1, s21_sprintf_test_3197__);
tcase_add_test(tc1_1, s21_sprintf_test_3198__);
tcase_add_test(tc1_1, s21_sprintf_test_3199__);
tcase_add_test(tc1_1, s21_sprintf_test_3200__);
tcase_add_test(tc1_1, s21_sprintf_test_3201__);
tcase_add_test(tc1_1, s21_sprintf_test_3202__);
tcase_add_test(tc1_1, s21_sprintf_test_3203__);
tcase_add_test(tc1_1, s21_sprintf_test_3204__);
tcase_add_test(tc1_1, s21_sprintf_test_3205__);
tcase_add_test(tc1_1, s21_sprintf_test_3206__);
tcase_add_test(tc1_1, s21_sprintf_test_3207__);
tcase_add_test(tc1_1, s21_sprintf_test_3208__);
tcase_add_test(tc1_1, s21_sprintf_test_3209__);
tcase_add_test(tc1_1, s21_sprintf_test_3210__);
tcase_add_test(tc1_1, s21_sprintf_test_3211__);
tcase_add_test(tc1_1, s21_sprintf_test_3212__);
tcase_add_test(tc1_1, s21_sprintf_test_3213__);
tcase_add_test(tc1_1, s21_sprintf_test_3214__);
tcase_add_test(tc1_1, s21_sprintf_test_3215__);
tcase_add_test(tc1_1, s21_sprintf_test_3216__);
tcase_add_test(tc1_1, s21_sprintf_test_3217__);
tcase_add_test(tc1_1, s21_sprintf_test_3218__);
tcase_add_test(tc1_1, s21_sprintf_test_3219__);
tcase_add_test(tc1_1, s21_sprintf_test_3220__);
tcase_add_test(tc1_1, s21_sprintf_test_3221__);
tcase_add_test(tc1_1, s21_sprintf_test_3222__);
tcase_add_test(tc1_1, s21_sprintf_test_3223__);
tcase_add_test(tc1_1, s21_sprintf_test_3224__);
tcase_add_test(tc1_1, s21_sprintf_test_3225__);
tcase_add_test(tc1_1, s21_sprintf_test_3226__);
tcase_add_test(tc1_1, s21_sprintf_test_3227__);
tcase_add_test(tc1_1, s21_sprintf_test_3228__);
tcase_add_test(tc1_1, s21_sprintf_test_3229__);
tcase_add_test(tc1_1, s21_sprintf_test_3230__);
tcase_add_test(tc1_1, s21_sprintf_test_3231__);
tcase_add_test(tc1_1, s21_sprintf_test_3232__);
tcase_add_test(tc1_1, s21_sprintf_test_3233__);
tcase_add_test(tc1_1, s21_sprintf_test_3234__);
tcase_add_test(tc1_1, s21_sprintf_test_3235__);
tcase_add_test(tc1_1, s21_sprintf_test_3236__);
tcase_add_test(tc1_1, s21_sprintf_test_3237__);
tcase_add_test(tc1_1, s21_sprintf_test_3238__);
tcase_add_test(tc1_1, s21_sprintf_test_3239__);
tcase_add_test(tc1_1, s21_sprintf_test_3240__);
tcase_add_test(tc1_1, s21_sprintf_test_3241__);
tcase_add_test(tc1_1, s21_sprintf_test_3242__);
tcase_add_test(tc1_1, s21_sprintf_test_3243__);
tcase_add_test(tc1_1, s21_sprintf_test_3244__);
tcase_add_test(tc1_1, s21_sprintf_test_3245__);
tcase_add_test(tc1_1, s21_sprintf_test_3246__);
tcase_add_test(tc1_1, s21_sprintf_test_3247__);
tcase_add_test(tc1_1, s21_sprintf_test_3248__);
tcase_add_test(tc1_1, s21_sprintf_test_3249__);
tcase_add_test(tc1_1, s21_sprintf_test_3250__);
tcase_add_test(tc1_1, s21_sprintf_test_3251__);
tcase_add_test(tc1_1, s21_sprintf_test_3252__);
tcase_add_test(tc1_1, s21_sprintf_test_3253__);
tcase_add_test(tc1_1, s21_sprintf_test_3254__);
tcase_add_test(tc1_1, s21_sprintf_test_3255__);
tcase_add_test(tc1_1, s21_sprintf_test_3256__);
tcase_add_test(tc1_1, s21_sprintf_test_3257__);
tcase_add_test(tc1_1, s21_sprintf_test_3258__);
tcase_add_test(tc1_1, s21_sprintf_test_3259__);
tcase_add_test(tc1_1, s21_sprintf_test_3260__);
tcase_add_test(tc1_1, s21_sprintf_test_3261__);
tcase_add_test(tc1_1, s21_sprintf_test_3262__);
tcase_add_test(tc1_1, s21_sprintf_test_3263__);
tcase_add_test(tc1_1, s21_sprintf_test_3264__);
tcase_add_test(tc1_1, s21_sprintf_test_3265__);
tcase_add_test(tc1_1, s21_sprintf_test_3266__);
tcase_add_test(tc1_1, s21_sprintf_test_3267__);
tcase_add_test(tc1_1, s21_sprintf_test_3268__);
tcase_add_test(tc1_1, s21_sprintf_test_3269__);
tcase_add_test(tc1_1, s21_sprintf_test_3270__);
tcase_add_test(tc1_1, s21_sprintf_test_3271__);
tcase_add_test(tc1_1, s21_sprintf_test_3272__);
tcase_add_test(tc1_1, s21_sprintf_test_3273__);
tcase_add_test(tc1_1, s21_sprintf_test_3274__);
tcase_add_test(tc1_1, s21_sprintf_test_3275__);
tcase_add_test(tc1_1, s21_sprintf_test_3276__);
tcase_add_test(tc1_1, s21_sprintf_test_3277__);
tcase_add_test(tc1_1, s21_sprintf_test_3278__);
tcase_add_test(tc1_1, s21_sprintf_test_3279__);
tcase_add_test(tc1_1, s21_sprintf_test_3280__);
tcase_add_test(tc1_1, s21_sprintf_test_3281__);
tcase_add_test(tc1_1, s21_sprintf_test_3282__);
tcase_add_test(tc1_1, s21_sprintf_test_3283__);
tcase_add_test(tc1_1, s21_sprintf_test_3284__);
tcase_add_test(tc1_1, s21_sprintf_test_3285__);
tcase_add_test(tc1_1, s21_sprintf_test_3286__);
tcase_add_test(tc1_1, s21_sprintf_test_3287__);
tcase_add_test(tc1_1, s21_sprintf_test_3288__);
tcase_add_test(tc1_1, s21_sprintf_test_3289__);
tcase_add_test(tc1_1, s21_sprintf_test_3290__);
tcase_add_test(tc1_1, s21_sprintf_test_3291__);
tcase_add_test(tc1_1, s21_sprintf_test_3292__);
tcase_add_test(tc1_1, s21_sprintf_test_3293__);
tcase_add_test(tc1_1, s21_sprintf_test_3294__);
tcase_add_test(tc1_1, s21_sprintf_test_3295__);
tcase_add_test(tc1_1, s21_sprintf_test_3296__);
tcase_add_test(tc1_1, s21_sprintf_test_3297__);
tcase_add_test(tc1_1, s21_sprintf_test_3298__);
tcase_add_test(tc1_1, s21_sprintf_test_3299__);
tcase_add_test(tc1_1, s21_sprintf_test_3300__);
tcase_add_test(tc1_1, s21_sprintf_test_3301__);
tcase_add_test(tc1_1, s21_sprintf_test_3302__);
tcase_add_test(tc1_1, s21_sprintf_test_3303__);
tcase_add_test(tc1_1, s21_sprintf_test_3304__);
tcase_add_test(tc1_1, s21_sprintf_test_3305__);
tcase_add_test(tc1_1, s21_sprintf_test_3306__);
tcase_add_test(tc1_1, s21_sprintf_test_3307__);
tcase_add_test(tc1_1, s21_sprintf_test_3308__);
tcase_add_test(tc1_1, s21_sprintf_test_3309__);
tcase_add_test(tc1_1, s21_sprintf_test_3310__);
tcase_add_test(tc1_1, s21_sprintf_test_3311__);
tcase_add_test(tc1_1, s21_sprintf_test_3312__);
tcase_add_test(tc1_1, s21_sprintf_test_3313__);
tcase_add_test(tc1_1, s21_sprintf_test_3314__);
tcase_add_test(tc1_1, s21_sprintf_test_3315__);
tcase_add_test(tc1_1, s21_sprintf_test_3316__);
tcase_add_test(tc1_1, s21_sprintf_test_3317__);
tcase_add_test(tc1_1, s21_sprintf_test_3318__);
tcase_add_test(tc1_1, s21_sprintf_test_3319__);
tcase_add_test(tc1_1, s21_sprintf_test_3320__);
tcase_add_test(tc1_1, s21_sprintf_test_3321__);
tcase_add_test(tc1_1, s21_sprintf_test_3322__);
tcase_add_test(tc1_1, s21_sprintf_test_3323__);
tcase_add_test(tc1_1, s21_sprintf_test_3324__);
tcase_add_test(tc1_1, s21_sprintf_test_3325__);
tcase_add_test(tc1_1, s21_sprintf_test_3326__);
tcase_add_test(tc1_1, s21_sprintf_test_3327__);
tcase_add_test(tc1_1, s21_sprintf_test_3328__);
tcase_add_test(tc1_1, s21_sprintf_test_3329__);
tcase_add_test(tc1_1, s21_sprintf_test_3330__);
tcase_add_test(tc1_1, s21_sprintf_test_3331__);
tcase_add_test(tc1_1, s21_sprintf_test_3332__);
tcase_add_test(tc1_1, s21_sprintf_test_3333__);
tcase_add_test(tc1_1, s21_sprintf_test_3334__);
tcase_add_test(tc1_1, s21_sprintf_test_3335__);
tcase_add_test(tc1_1, s21_sprintf_test_3336__);
tcase_add_test(tc1_1, s21_sprintf_test_3337__);
tcase_add_test(tc1_1, s21_sprintf_test_3338__);
tcase_add_test(tc1_1, s21_sprintf_test_3339__);
tcase_add_test(tc1_1, s21_sprintf_test_3340__);
tcase_add_test(tc1_1, s21_sprintf_test_3341__);
tcase_add_test(tc1_1, s21_sprintf_test_3342__);
tcase_add_test(tc1_1, s21_sprintf_test_3343__);
tcase_add_test(tc1_1, s21_sprintf_test_3344__);
tcase_add_test(tc1_1, s21_sprintf_test_3345__);
tcase_add_test(tc1_1, s21_sprintf_test_3346__);
tcase_add_test(tc1_1, s21_sprintf_test_3347__);
tcase_add_test(tc1_1, s21_sprintf_test_3348__);
tcase_add_test(tc1_1, s21_sprintf_test_3349__);
tcase_add_test(tc1_1, s21_sprintf_test_3350__);
tcase_add_test(tc1_1, s21_sprintf_test_3351__);
tcase_add_test(tc1_1, s21_sprintf_test_3352__);
tcase_add_test(tc1_1, s21_sprintf_test_3353__);
tcase_add_test(tc1_1, s21_sprintf_test_3354__);
tcase_add_test(tc1_1, s21_sprintf_test_3355__);
tcase_add_test(tc1_1, s21_sprintf_test_3356__);
tcase_add_test(tc1_1, s21_sprintf_test_3357__);
tcase_add_test(tc1_1, s21_sprintf_test_3358__);
tcase_add_test(tc1_1, s21_sprintf_test_3359__);
tcase_add_test(tc1_1, s21_sprintf_test_3360__);
tcase_add_test(tc1_1, s21_sprintf_test_3361__);
tcase_add_test(tc1_1, s21_sprintf_test_3362__);
tcase_add_test(tc1_1, s21_sprintf_test_3363__);
tcase_add_test(tc1_1, s21_sprintf_test_3364__);
tcase_add_test(tc1_1, s21_sprintf_test_3365__);
tcase_add_test(tc1_1, s21_sprintf_test_3366__);
tcase_add_test(tc1_1, s21_sprintf_test_3367__);
tcase_add_test(tc1_1, s21_sprintf_test_3368__);
tcase_add_test(tc1_1, s21_sprintf_test_3369__);
tcase_add_test(tc1_1, s21_sprintf_test_3370__);
tcase_add_test(tc1_1, s21_sprintf_test_3371__);
tcase_add_test(tc1_1, s21_sprintf_test_3372__);
tcase_add_test(tc1_1, s21_sprintf_test_3373__);
tcase_add_test(tc1_1, s21_sprintf_test_3374__);
tcase_add_test(tc1_1, s21_sprintf_test_3375__);
tcase_add_test(tc1_1, s21_sprintf_test_3376__);
tcase_add_test(tc1_1, s21_sprintf_test_3377__);
tcase_add_test(tc1_1, s21_sprintf_test_3378__);
tcase_add_test(tc1_1, s21_sprintf_test_3379__);
tcase_add_test(tc1_1, s21_sprintf_test_3380__);
tcase_add_test(tc1_1, s21_sprintf_test_3381__);
tcase_add_test(tc1_1, s21_sprintf_test_3382__);
tcase_add_test(tc1_1, s21_sprintf_test_3383__);
tcase_add_test(tc1_1, s21_sprintf_test_3384__);
tcase_add_test(tc1_1, s21_sprintf_test_3385__);
tcase_add_test(tc1_1, s21_sprintf_test_3386__);
tcase_add_test(tc1_1, s21_sprintf_test_3387__);
tcase_add_test(tc1_1, s21_sprintf_test_3388__);
tcase_add_test(tc1_1, s21_sprintf_test_3389__);
tcase_add_test(tc1_1, s21_sprintf_test_3390__);
tcase_add_test(tc1_1, s21_sprintf_test_3391__);
tcase_add_test(tc1_1, s21_sprintf_test_3392__);
tcase_add_test(tc1_1, s21_sprintf_test_3393__);
tcase_add_test(tc1_1, s21_sprintf_test_3394__);
tcase_add_test(tc1_1, s21_sprintf_test_3395__);
tcase_add_test(tc1_1, s21_sprintf_test_3396__);
tcase_add_test(tc1_1, s21_sprintf_test_3397__);
tcase_add_test(tc1_1, s21_sprintf_test_3398__);
tcase_add_test(tc1_1, s21_sprintf_test_3399__);
tcase_add_test(tc1_1, s21_sprintf_test_3400__);
tcase_add_test(tc1_1, s21_sprintf_test_3401__);
tcase_add_test(tc1_1, s21_sprintf_test_3402__);
tcase_add_test(tc1_1, s21_sprintf_test_3403__);
tcase_add_test(tc1_1, s21_sprintf_test_3404__);
tcase_add_test(tc1_1, s21_sprintf_test_3405__);
tcase_add_test(tc1_1, s21_sprintf_test_3406__);
tcase_add_test(tc1_1, s21_sprintf_test_3407__);
tcase_add_test(tc1_1, s21_sprintf_test_3408__);
tcase_add_test(tc1_1, s21_sprintf_test_3409__);
tcase_add_test(tc1_1, s21_sprintf_test_3410__);
tcase_add_test(tc1_1, s21_sprintf_test_3411__);
tcase_add_test(tc1_1, s21_sprintf_test_3412__);
tcase_add_test(tc1_1, s21_sprintf_test_3413__);
tcase_add_test(tc1_1, s21_sprintf_test_3414__);
tcase_add_test(tc1_1, s21_sprintf_test_3415__);
tcase_add_test(tc1_1, s21_sprintf_test_3416__);
tcase_add_test(tc1_1, s21_sprintf_test_3417__);
tcase_add_test(tc1_1, s21_sprintf_test_3418__);
tcase_add_test(tc1_1, s21_sprintf_test_3419__);
tcase_add_test(tc1_1, s21_sprintf_test_3420__);
tcase_add_test(tc1_1, s21_sprintf_test_3421__);
tcase_add_test(tc1_1, s21_sprintf_test_3422__);
tcase_add_test(tc1_1, s21_sprintf_test_3423__);
tcase_add_test(tc1_1, s21_sprintf_test_3424__);
tcase_add_test(tc1_1, s21_sprintf_test_3425__);
tcase_add_test(tc1_1, s21_sprintf_test_3426__);
tcase_add_test(tc1_1, s21_sprintf_test_3427__);
tcase_add_test(tc1_1, s21_sprintf_test_3428__);
tcase_add_test(tc1_1, s21_sprintf_test_3429__);
tcase_add_test(tc1_1, s21_sprintf_test_3430__);
tcase_add_test(tc1_1, s21_sprintf_test_3431__);
tcase_add_test(tc1_1, s21_sprintf_test_3432__);
tcase_add_test(tc1_1, s21_sprintf_test_3433__);
tcase_add_test(tc1_1, s21_sprintf_test_3434__);
tcase_add_test(tc1_1, s21_sprintf_test_3435__);
tcase_add_test(tc1_1, s21_sprintf_test_3436__);
tcase_add_test(tc1_1, s21_sprintf_test_3437__);
tcase_add_test(tc1_1, s21_sprintf_test_3438__);
tcase_add_test(tc1_1, s21_sprintf_test_3439__);
tcase_add_test(tc1_1, s21_sprintf_test_3440__);
tcase_add_test(tc1_1, s21_sprintf_test_3441__);
tcase_add_test(tc1_1, s21_sprintf_test_3442__);
tcase_add_test(tc1_1, s21_sprintf_test_3443__);
tcase_add_test(tc1_1, s21_sprintf_test_3444__);
tcase_add_test(tc1_1, s21_sprintf_test_3445__);
tcase_add_test(tc1_1, s21_sprintf_test_3446__);
tcase_add_test(tc1_1, s21_sprintf_test_3447__);
tcase_add_test(tc1_1, s21_sprintf_test_3448__);
tcase_add_test(tc1_1, s21_sprintf_test_3449__);
tcase_add_test(tc1_1, s21_sprintf_test_3450__);
tcase_add_test(tc1_1, s21_sprintf_test_3451__);
tcase_add_test(tc1_1, s21_sprintf_test_3452__);
tcase_add_test(tc1_1, s21_sprintf_test_3453__);
tcase_add_test(tc1_1, s21_sprintf_test_3454__);
tcase_add_test(tc1_1, s21_sprintf_test_3455__);
tcase_add_test(tc1_1, s21_sprintf_test_3456__);
tcase_add_test(tc1_1, s21_sprintf_test_3457__);
tcase_add_test(tc1_1, s21_sprintf_test_3458__);
tcase_add_test(tc1_1, s21_sprintf_test_3459__);
tcase_add_test(tc1_1, s21_sprintf_test_3460__);
tcase_add_test(tc1_1, s21_sprintf_test_3461__);
tcase_add_test(tc1_1, s21_sprintf_test_3462__);
tcase_add_test(tc1_1, s21_sprintf_test_3463__);
tcase_add_test(tc1_1, s21_sprintf_test_3464__);
tcase_add_test(tc1_1, s21_sprintf_test_3465__);
tcase_add_test(tc1_1, s21_sprintf_test_3466__);
tcase_add_test(tc1_1, s21_sprintf_test_3467__);
tcase_add_test(tc1_1, s21_sprintf_test_3468__);
tcase_add_test(tc1_1, s21_sprintf_test_3469__);
tcase_add_test(tc1_1, s21_sprintf_test_3470__);
tcase_add_test(tc1_1, s21_sprintf_test_3471__);
tcase_add_test(tc1_1, s21_sprintf_test_3472__);
tcase_add_test(tc1_1, s21_sprintf_test_3473__);
tcase_add_test(tc1_1, s21_sprintf_test_3474__);
tcase_add_test(tc1_1, s21_sprintf_test_3475__);
tcase_add_test(tc1_1, s21_sprintf_test_3476__);
tcase_add_test(tc1_1, s21_sprintf_test_3477__);
tcase_add_test(tc1_1, s21_sprintf_test_3478__);
tcase_add_test(tc1_1, s21_sprintf_test_3479__);
tcase_add_test(tc1_1, s21_sprintf_test_3480__);
tcase_add_test(tc1_1, s21_sprintf_test_3481__);
tcase_add_test(tc1_1, s21_sprintf_test_3482__);
tcase_add_test(tc1_1, s21_sprintf_test_3483__);
tcase_add_test(tc1_1, s21_sprintf_test_3484__);
tcase_add_test(tc1_1, s21_sprintf_test_3485__);
tcase_add_test(tc1_1, s21_sprintf_test_3486__);
tcase_add_test(tc1_1, s21_sprintf_test_3487__);
tcase_add_test(tc1_1, s21_sprintf_test_3488__);
tcase_add_test(tc1_1, s21_sprintf_test_3489__);
tcase_add_test(tc1_1, s21_sprintf_test_3490__);
tcase_add_test(tc1_1, s21_sprintf_test_3491__);
tcase_add_test(tc1_1, s21_sprintf_test_3492__);
tcase_add_test(tc1_1, s21_sprintf_test_3493__);
tcase_add_test(tc1_1, s21_sprintf_test_3494__);
tcase_add_test(tc1_1, s21_sprintf_test_3495__);
tcase_add_test(tc1_1, s21_sprintf_test_3496__);
tcase_add_test(tc1_1, s21_sprintf_test_3497__);
tcase_add_test(tc1_1, s21_sprintf_test_3498__);
tcase_add_test(tc1_1, s21_sprintf_test_3499__);
tcase_add_test(tc1_1, s21_sprintf_test_3500__);
tcase_add_test(tc1_1, s21_sprintf_test_3501__);
tcase_add_test(tc1_1, s21_sprintf_test_3502__);
tcase_add_test(tc1_1, s21_sprintf_test_3503__);
tcase_add_test(tc1_1, s21_sprintf_test_3504__);
tcase_add_test(tc1_1, s21_sprintf_test_3505__);
tcase_add_test(tc1_1, s21_sprintf_test_3506__);
tcase_add_test(tc1_1, s21_sprintf_test_3507__);
tcase_add_test(tc1_1, s21_sprintf_test_3508__);
tcase_add_test(tc1_1, s21_sprintf_test_3509__);
tcase_add_test(tc1_1, s21_sprintf_test_3510__);
tcase_add_test(tc1_1, s21_sprintf_test_3511__);
tcase_add_test(tc1_1, s21_sprintf_test_3512__);
tcase_add_test(tc1_1, s21_sprintf_test_3513__);
tcase_add_test(tc1_1, s21_sprintf_test_3514__);
tcase_add_test(tc1_1, s21_sprintf_test_3515__);
tcase_add_test(tc1_1, s21_sprintf_test_3516__);
tcase_add_test(tc1_1, s21_sprintf_test_3517__);
tcase_add_test(tc1_1, s21_sprintf_test_3518__);
tcase_add_test(tc1_1, s21_sprintf_test_3519__);
tcase_add_test(tc1_1, s21_sprintf_test_3520__);
tcase_add_test(tc1_1, s21_sprintf_test_3521__);
tcase_add_test(tc1_1, s21_sprintf_test_3522__);
tcase_add_test(tc1_1, s21_sprintf_test_3523__);
tcase_add_test(tc1_1, s21_sprintf_test_3524__);
tcase_add_test(tc1_1, s21_sprintf_test_3525__);
tcase_add_test(tc1_1, s21_sprintf_test_3526__);
tcase_add_test(tc1_1, s21_sprintf_test_3527__);
tcase_add_test(tc1_1, s21_sprintf_test_3528__);
tcase_add_test(tc1_1, s21_sprintf_test_3529__);
tcase_add_test(tc1_1, s21_sprintf_test_3530__);
tcase_add_test(tc1_1, s21_sprintf_test_3531__);
tcase_add_test(tc1_1, s21_sprintf_test_3532__);
tcase_add_test(tc1_1, s21_sprintf_test_3533__);
tcase_add_test(tc1_1, s21_sprintf_test_3534__);
tcase_add_test(tc1_1, s21_sprintf_test_3535__);
tcase_add_test(tc1_1, s21_sprintf_test_3536__);
tcase_add_test(tc1_1, s21_sprintf_test_3537__);
tcase_add_test(tc1_1, s21_sprintf_test_3538__);
tcase_add_test(tc1_1, s21_sprintf_test_3539__);
tcase_add_test(tc1_1, s21_sprintf_test_3540__);
tcase_add_test(tc1_1, s21_sprintf_test_3541__);
tcase_add_test(tc1_1, s21_sprintf_test_3542__);
tcase_add_test(tc1_1, s21_sprintf_test_3543__);
tcase_add_test(tc1_1, s21_sprintf_test_3544__);
tcase_add_test(tc1_1, s21_sprintf_test_3545__);
tcase_add_test(tc1_1, s21_sprintf_test_3546__);
tcase_add_test(tc1_1, s21_sprintf_test_3547__);
tcase_add_test(tc1_1, s21_sprintf_test_3548__);
tcase_add_test(tc1_1, s21_sprintf_test_3549__);
tcase_add_test(tc1_1, s21_sprintf_test_3550__);
tcase_add_test(tc1_1, s21_sprintf_test_3551__);
tcase_add_test(tc1_1, s21_sprintf_test_3552__);
tcase_add_test(tc1_1, s21_sprintf_test_3553__);
tcase_add_test(tc1_1, s21_sprintf_test_3554__);
tcase_add_test(tc1_1, s21_sprintf_test_3555__);
tcase_add_test(tc1_1, s21_sprintf_test_3556__);
tcase_add_test(tc1_1, s21_sprintf_test_3557__);
tcase_add_test(tc1_1, s21_sprintf_test_3558__);
tcase_add_test(tc1_1, s21_sprintf_test_3559__);
tcase_add_test(tc1_1, s21_sprintf_test_3560__);
tcase_add_test(tc1_1, s21_sprintf_test_3561__);
tcase_add_test(tc1_1, s21_sprintf_test_3562__);
tcase_add_test(tc1_1, s21_sprintf_test_3563__);
tcase_add_test(tc1_1, s21_sprintf_test_3564__);
tcase_add_test(tc1_1, s21_sprintf_test_3565__);
tcase_add_test(tc1_1, s21_sprintf_test_3566__);
tcase_add_test(tc1_1, s21_sprintf_test_3567__);
tcase_add_test(tc1_1, s21_sprintf_test_3568__);
tcase_add_test(tc1_1, s21_sprintf_test_3569__);
tcase_add_test(tc1_1, s21_sprintf_test_3570__);
tcase_add_test(tc1_1, s21_sprintf_test_3571__);
tcase_add_test(tc1_1, s21_sprintf_test_3572__);
tcase_add_test(tc1_1, s21_sprintf_test_3573__);
tcase_add_test(tc1_1, s21_sprintf_test_3574__);
tcase_add_test(tc1_1, s21_sprintf_test_3575__);
tcase_add_test(tc1_1, s21_sprintf_test_3576__);
tcase_add_test(tc1_1, s21_sprintf_test_3577__);
tcase_add_test(tc1_1, s21_sprintf_test_3578__);
tcase_add_test(tc1_1, s21_sprintf_test_3579__);
tcase_add_test(tc1_1, s21_sprintf_test_3580__);
tcase_add_test(tc1_1, s21_sprintf_test_3581__);
tcase_add_test(tc1_1, s21_sprintf_test_3582__);
tcase_add_test(tc1_1, s21_sprintf_test_3583__);
tcase_add_test(tc1_1, s21_sprintf_test_3584__);
tcase_add_test(tc1_1, s21_sprintf_test_3585__);
tcase_add_test(tc1_1, s21_sprintf_test_3586__);
tcase_add_test(tc1_1, s21_sprintf_test_3587__);
tcase_add_test(tc1_1, s21_sprintf_test_3588__);
tcase_add_test(tc1_1, s21_sprintf_test_3589__);
tcase_add_test(tc1_1, s21_sprintf_test_3590__);
tcase_add_test(tc1_1, s21_sprintf_test_3591__);
tcase_add_test(tc1_1, s21_sprintf_test_3592__);
tcase_add_test(tc1_1, s21_sprintf_test_3593__);
tcase_add_test(tc1_1, s21_sprintf_test_3594__);
tcase_add_test(tc1_1, s21_sprintf_test_3595__);
tcase_add_test(tc1_1, s21_sprintf_test_3596__);
tcase_add_test(tc1_1, s21_sprintf_test_3597__);
tcase_add_test(tc1_1, s21_sprintf_test_3598__);
tcase_add_test(tc1_1, s21_sprintf_test_3599__);
tcase_add_test(tc1_1, s21_sprintf_test_3600__);
tcase_add_test(tc1_1, s21_sprintf_test_3601__);
tcase_add_test(tc1_1, s21_sprintf_test_3602__);
tcase_add_test(tc1_1, s21_sprintf_test_3603__);
tcase_add_test(tc1_1, s21_sprintf_test_3604__);
tcase_add_test(tc1_1, s21_sprintf_test_3605__);
tcase_add_test(tc1_1, s21_sprintf_test_3606__);
tcase_add_test(tc1_1, s21_sprintf_test_3607__);
tcase_add_test(tc1_1, s21_sprintf_test_3608__);
tcase_add_test(tc1_1, s21_sprintf_test_3609__);
tcase_add_test(tc1_1, s21_sprintf_test_3610__);
tcase_add_test(tc1_1, s21_sprintf_test_3611__);
tcase_add_test(tc1_1, s21_sprintf_test_3612__);
tcase_add_test(tc1_1, s21_sprintf_test_3613__);
tcase_add_test(tc1_1, s21_sprintf_test_3614__);
tcase_add_test(tc1_1, s21_sprintf_test_3615__);
tcase_add_test(tc1_1, s21_sprintf_test_3616__);
tcase_add_test(tc1_1, s21_sprintf_test_3617__);
tcase_add_test(tc1_1, s21_sprintf_test_3618__);
tcase_add_test(tc1_1, s21_sprintf_test_3619__);
tcase_add_test(tc1_1, s21_sprintf_test_3620__);
tcase_add_test(tc1_1, s21_sprintf_test_3621__);
tcase_add_test(tc1_1, s21_sprintf_test_3622__);
tcase_add_test(tc1_1, s21_sprintf_test_3623__);
tcase_add_test(tc1_1, s21_sprintf_test_3624__);
tcase_add_test(tc1_1, s21_sprintf_test_3625__);
tcase_add_test(tc1_1, s21_sprintf_test_3626__);
tcase_add_test(tc1_1, s21_sprintf_test_3627__);
tcase_add_test(tc1_1, s21_sprintf_test_3628__);
tcase_add_test(tc1_1, s21_sprintf_test_3629__);
tcase_add_test(tc1_1, s21_sprintf_test_3630__);
tcase_add_test(tc1_1, s21_sprintf_test_3631__);
tcase_add_test(tc1_1, s21_sprintf_test_3632__);
tcase_add_test(tc1_1, s21_sprintf_test_3633__);
tcase_add_test(tc1_1, s21_sprintf_test_3634__);
tcase_add_test(tc1_1, s21_sprintf_test_3635__);
tcase_add_test(tc1_1, s21_sprintf_test_3636__);
tcase_add_test(tc1_1, s21_sprintf_test_3637__);
tcase_add_test(tc1_1, s21_sprintf_test_3638__);
tcase_add_test(tc1_1, s21_sprintf_test_3639__);
tcase_add_test(tc1_1, s21_sprintf_test_3640__);
tcase_add_test(tc1_1, s21_sprintf_test_3641__);
tcase_add_test(tc1_1, s21_sprintf_test_3642__);
tcase_add_test(tc1_1, s21_sprintf_test_3643__);
tcase_add_test(tc1_1, s21_sprintf_test_3644__);
tcase_add_test(tc1_1, s21_sprintf_test_3645__);
tcase_add_test(tc1_1, s21_sprintf_test_3646__);
tcase_add_test(tc1_1, s21_sprintf_test_3647__);
tcase_add_test(tc1_1, s21_sprintf_test_3648__);
tcase_add_test(tc1_1, s21_sprintf_test_3649__);
tcase_add_test(tc1_1, s21_sprintf_test_3650__);
tcase_add_test(tc1_1, s21_sprintf_test_3651__);
tcase_add_test(tc1_1, s21_sprintf_test_3652__);
tcase_add_test(tc1_1, s21_sprintf_test_3653__);
tcase_add_test(tc1_1, s21_sprintf_test_3654__);
tcase_add_test(tc1_1, s21_sprintf_test_3655__);
tcase_add_test(tc1_1, s21_sprintf_test_3656__);
tcase_add_test(tc1_1, s21_sprintf_test_3657__);
tcase_add_test(tc1_1, s21_sprintf_test_3658__);
tcase_add_test(tc1_1, s21_sprintf_test_3659__);
tcase_add_test(tc1_1, s21_sprintf_test_3660__);
tcase_add_test(tc1_1, s21_sprintf_test_3661__);
tcase_add_test(tc1_1, s21_sprintf_test_3662__);
tcase_add_test(tc1_1, s21_sprintf_test_3663__);
tcase_add_test(tc1_1, s21_sprintf_test_3664__);
tcase_add_test(tc1_1, s21_sprintf_test_3665__);
tcase_add_test(tc1_1, s21_sprintf_test_3666__);
tcase_add_test(tc1_1, s21_sprintf_test_3667__);
tcase_add_test(tc1_1, s21_sprintf_test_3668__);
tcase_add_test(tc1_1, s21_sprintf_test_3669__);
tcase_add_test(tc1_1, s21_sprintf_test_3670__);
tcase_add_test(tc1_1, s21_sprintf_test_3671__);
tcase_add_test(tc1_1, s21_sprintf_test_3672__);
tcase_add_test(tc1_1, s21_sprintf_test_3673__);
tcase_add_test(tc1_1, s21_sprintf_test_3674__);
tcase_add_test(tc1_1, s21_sprintf_test_3675__);
tcase_add_test(tc1_1, s21_sprintf_test_3676__);
tcase_add_test(tc1_1, s21_sprintf_test_3677__);
tcase_add_test(tc1_1, s21_sprintf_test_3678__);
tcase_add_test(tc1_1, s21_sprintf_test_3679__);
tcase_add_test(tc1_1, s21_sprintf_test_3680__);
tcase_add_test(tc1_1, s21_sprintf_test_3681__);
tcase_add_test(tc1_1, s21_sprintf_test_3682__);
tcase_add_test(tc1_1, s21_sprintf_test_3683__);
tcase_add_test(tc1_1, s21_sprintf_test_3684__);
tcase_add_test(tc1_1, s21_sprintf_test_3685__);
tcase_add_test(tc1_1, s21_sprintf_test_3686__);
tcase_add_test(tc1_1, s21_sprintf_test_3687__);
tcase_add_test(tc1_1, s21_sprintf_test_3688__);
tcase_add_test(tc1_1, s21_sprintf_test_3689__);
tcase_add_test(tc1_1, s21_sprintf_test_3690__);
tcase_add_test(tc1_1, s21_sprintf_test_3691__);
tcase_add_test(tc1_1, s21_sprintf_test_3692__);
tcase_add_test(tc1_1, s21_sprintf_test_3693__);
tcase_add_test(tc1_1, s21_sprintf_test_3694__);
tcase_add_test(tc1_1, s21_sprintf_test_3695__);
tcase_add_test(tc1_1, s21_sprintf_test_3696__);
tcase_add_test(tc1_1, s21_sprintf_test_3697__);
tcase_add_test(tc1_1, s21_sprintf_test_3698__);
tcase_add_test(tc1_1, s21_sprintf_test_3699__);
tcase_add_test(tc1_1, s21_sprintf_test_3700__);
tcase_add_test(tc1_1, s21_sprintf_test_3701__);
tcase_add_test(tc1_1, s21_sprintf_test_3702__);
tcase_add_test(tc1_1, s21_sprintf_test_3703__);
tcase_add_test(tc1_1, s21_sprintf_test_3704__);
tcase_add_test(tc1_1, s21_sprintf_test_3705__);
tcase_add_test(tc1_1, s21_sprintf_test_3706__);
tcase_add_test(tc1_1, s21_sprintf_test_3707__);
tcase_add_test(tc1_1, s21_sprintf_test_3708__);
tcase_add_test(tc1_1, s21_sprintf_test_3709__);
tcase_add_test(tc1_1, s21_sprintf_test_3710__);
tcase_add_test(tc1_1, s21_sprintf_test_3711__);
tcase_add_test(tc1_1, s21_sprintf_test_3712__);
tcase_add_test(tc1_1, s21_sprintf_test_3713__);
tcase_add_test(tc1_1, s21_sprintf_test_3714__);
tcase_add_test(tc1_1, s21_sprintf_test_3715__);
tcase_add_test(tc1_1, s21_sprintf_test_3716__);
tcase_add_test(tc1_1, s21_sprintf_test_3717__);
tcase_add_test(tc1_1, s21_sprintf_test_3718__);
tcase_add_test(tc1_1, s21_sprintf_test_3719__);
tcase_add_test(tc1_1, s21_sprintf_test_3720__);
tcase_add_test(tc1_1, s21_sprintf_test_3721__);
tcase_add_test(tc1_1, s21_sprintf_test_3722__);
tcase_add_test(tc1_1, s21_sprintf_test_3723__);
tcase_add_test(tc1_1, s21_sprintf_test_3724__);
tcase_add_test(tc1_1, s21_sprintf_test_3725__);
tcase_add_test(tc1_1, s21_sprintf_test_3726__);
tcase_add_test(tc1_1, s21_sprintf_test_3727__);
tcase_add_test(tc1_1, s21_sprintf_test_3728__);
tcase_add_test(tc1_1, s21_sprintf_test_3729__);
tcase_add_test(tc1_1, s21_sprintf_test_3730__);
tcase_add_test(tc1_1, s21_sprintf_test_3731__);
tcase_add_test(tc1_1, s21_sprintf_test_3732__);
tcase_add_test(tc1_1, s21_sprintf_test_3733__);
tcase_add_test(tc1_1, s21_sprintf_test_3734__);
tcase_add_test(tc1_1, s21_sprintf_test_3735__);
tcase_add_test(tc1_1, s21_sprintf_test_3736__);
tcase_add_test(tc1_1, s21_sprintf_test_3737__);
tcase_add_test(tc1_1, s21_sprintf_test_3738__);
tcase_add_test(tc1_1, s21_sprintf_test_3739__);
tcase_add_test(tc1_1, s21_sprintf_test_3740__);
tcase_add_test(tc1_1, s21_sprintf_test_3741__);
tcase_add_test(tc1_1, s21_sprintf_test_3742__);
tcase_add_test(tc1_1, s21_sprintf_test_3743__);
tcase_add_test(tc1_1, s21_sprintf_test_3744__);
tcase_add_test(tc1_1, s21_sprintf_test_3745__);
tcase_add_test(tc1_1, s21_sprintf_test_3746__);
tcase_add_test(tc1_1, s21_sprintf_test_3747__);
tcase_add_test(tc1_1, s21_sprintf_test_3748__);
tcase_add_test(tc1_1, s21_sprintf_test_3749__);
tcase_add_test(tc1_1, s21_sprintf_test_3750__);
tcase_add_test(tc1_1, s21_sprintf_test_3751__);
tcase_add_test(tc1_1, s21_sprintf_test_3752__);
tcase_add_test(tc1_1, s21_sprintf_test_3753__);
tcase_add_test(tc1_1, s21_sprintf_test_3754__);
tcase_add_test(tc1_1, s21_sprintf_test_3755__);
tcase_add_test(tc1_1, s21_sprintf_test_3756__);
tcase_add_test(tc1_1, s21_sprintf_test_3757__);
tcase_add_test(tc1_1, s21_sprintf_test_3758__);
tcase_add_test(tc1_1, s21_sprintf_test_3759__);
tcase_add_test(tc1_1, s21_sprintf_test_3760__);
tcase_add_test(tc1_1, s21_sprintf_test_3761__);
tcase_add_test(tc1_1, s21_sprintf_test_3762__);
tcase_add_test(tc1_1, s21_sprintf_test_3763__);
tcase_add_test(tc1_1, s21_sprintf_test_3764__);
tcase_add_test(tc1_1, s21_sprintf_test_3765__);
tcase_add_test(tc1_1, s21_sprintf_test_3766__);
tcase_add_test(tc1_1, s21_sprintf_test_3767__);
tcase_add_test(tc1_1, s21_sprintf_test_3768__);
tcase_add_test(tc1_1, s21_sprintf_test_3769__);
tcase_add_test(tc1_1, s21_sprintf_test_3770__);
tcase_add_test(tc1_1, s21_sprintf_test_3771__);
tcase_add_test(tc1_1, s21_sprintf_test_3772__);
tcase_add_test(tc1_1, s21_sprintf_test_3773__);
tcase_add_test(tc1_1, s21_sprintf_test_3774__);
tcase_add_test(tc1_1, s21_sprintf_test_3775__);
tcase_add_test(tc1_1, s21_sprintf_test_3776__);
tcase_add_test(tc1_1, s21_sprintf_test_3777__);
tcase_add_test(tc1_1, s21_sprintf_test_3778__);
tcase_add_test(tc1_1, s21_sprintf_test_3779__);
tcase_add_test(tc1_1, s21_sprintf_test_3780__);
tcase_add_test(tc1_1, s21_sprintf_test_3781__);
tcase_add_test(tc1_1, s21_sprintf_test_3782__);
tcase_add_test(tc1_1, s21_sprintf_test_3783__);
tcase_add_test(tc1_1, s21_sprintf_test_3784__);
tcase_add_test(tc1_1, s21_sprintf_test_3785__);
tcase_add_test(tc1_1, s21_sprintf_test_3786__);
tcase_add_test(tc1_1, s21_sprintf_test_3787__);
tcase_add_test(tc1_1, s21_sprintf_test_3788__);
tcase_add_test(tc1_1, s21_sprintf_test_3789__);
tcase_add_test(tc1_1, s21_sprintf_test_3790__);
tcase_add_test(tc1_1, s21_sprintf_test_3791__);
tcase_add_test(tc1_1, s21_sprintf_test_3792__);
tcase_add_test(tc1_1, s21_sprintf_test_3793__);
tcase_add_test(tc1_1, s21_sprintf_test_3794__);
tcase_add_test(tc1_1, s21_sprintf_test_3795__);
tcase_add_test(tc1_1, s21_sprintf_test_3796__);
tcase_add_test(tc1_1, s21_sprintf_test_3797__);
tcase_add_test(tc1_1, s21_sprintf_test_3798__);
tcase_add_test(tc1_1, s21_sprintf_test_3799__);
tcase_add_test(tc1_1, s21_sprintf_test_3800__);
tcase_add_test(tc1_1, s21_sprintf_test_3801__);
tcase_add_test(tc1_1, s21_sprintf_test_3802__);
tcase_add_test(tc1_1, s21_sprintf_test_3803__);
tcase_add_test(tc1_1, s21_sprintf_test_3804__);
tcase_add_test(tc1_1, s21_sprintf_test_3805__);
tcase_add_test(tc1_1, s21_sprintf_test_3806__);
tcase_add_test(tc1_1, s21_sprintf_test_3807__);
tcase_add_test(tc1_1, s21_sprintf_test_3808__);
tcase_add_test(tc1_1, s21_sprintf_test_3809__);
tcase_add_test(tc1_1, s21_sprintf_test_3810__);
tcase_add_test(tc1_1, s21_sprintf_test_3811__);
tcase_add_test(tc1_1, s21_sprintf_test_3812__);
tcase_add_test(tc1_1, s21_sprintf_test_3813__);
tcase_add_test(tc1_1, s21_sprintf_test_3814__);
tcase_add_test(tc1_1, s21_sprintf_test_3815__);
tcase_add_test(tc1_1, s21_sprintf_test_3816__);
tcase_add_test(tc1_1, s21_sprintf_test_3817__);
tcase_add_test(tc1_1, s21_sprintf_test_3818__);
tcase_add_test(tc1_1, s21_sprintf_test_3819__);
tcase_add_test(tc1_1, s21_sprintf_test_3820__);
tcase_add_test(tc1_1, s21_sprintf_test_3821__);
tcase_add_test(tc1_1, s21_sprintf_test_3822__);
tcase_add_test(tc1_1, s21_sprintf_test_3823__);
tcase_add_test(tc1_1, s21_sprintf_test_3824__);
tcase_add_test(tc1_1, s21_sprintf_test_3825__);
tcase_add_test(tc1_1, s21_sprintf_test_3826__);
tcase_add_test(tc1_1, s21_sprintf_test_3827__);
tcase_add_test(tc1_1, s21_sprintf_test_3828__);
tcase_add_test(tc1_1, s21_sprintf_test_3829__);
tcase_add_test(tc1_1, s21_sprintf_test_3830__);
tcase_add_test(tc1_1, s21_sprintf_test_3831__);
tcase_add_test(tc1_1, s21_sprintf_test_3832__);
tcase_add_test(tc1_1, s21_sprintf_test_3833__);
tcase_add_test(tc1_1, s21_sprintf_test_3834__);
tcase_add_test(tc1_1, s21_sprintf_test_3835__);
tcase_add_test(tc1_1, s21_sprintf_test_3836__);
tcase_add_test(tc1_1, s21_sprintf_test_3837__);
tcase_add_test(tc1_1, s21_sprintf_test_3838__);
tcase_add_test(tc1_1, s21_sprintf_test_3839__);
tcase_add_test(tc1_1, s21_sprintf_test_3840__);
tcase_add_test(tc1_1, s21_sprintf_test_3841__);
tcase_add_test(tc1_1, s21_sprintf_test_3842__);
tcase_add_test(tc1_1, s21_sprintf_test_3843__);
tcase_add_test(tc1_1, s21_sprintf_test_3844__);
tcase_add_test(tc1_1, s21_sprintf_test_3845__);
tcase_add_test(tc1_1, s21_sprintf_test_3846__);
tcase_add_test(tc1_1, s21_sprintf_test_3847__);
tcase_add_test(tc1_1, s21_sprintf_test_3848__);
tcase_add_test(tc1_1, s21_sprintf_test_3849__);
tcase_add_test(tc1_1, s21_sprintf_test_3850__);
tcase_add_test(tc1_1, s21_sprintf_test_3851__);
tcase_add_test(tc1_1, s21_sprintf_test_3852__);
tcase_add_test(tc1_1, s21_sprintf_test_3853__);
tcase_add_test(tc1_1, s21_sprintf_test_3854__);
tcase_add_test(tc1_1, s21_sprintf_test_3855__);
tcase_add_test(tc1_1, s21_sprintf_test_3856__);
tcase_add_test(tc1_1, s21_sprintf_test_3857__);
tcase_add_test(tc1_1, s21_sprintf_test_3858__);
tcase_add_test(tc1_1, s21_sprintf_test_3859__);
tcase_add_test(tc1_1, s21_sprintf_test_3860__);
tcase_add_test(tc1_1, s21_sprintf_test_3861__);
tcase_add_test(tc1_1, s21_sprintf_test_3862__);
tcase_add_test(tc1_1, s21_sprintf_test_3863__);
tcase_add_test(tc1_1, s21_sprintf_test_3864__);
tcase_add_test(tc1_1, s21_sprintf_test_3865__);
tcase_add_test(tc1_1, s21_sprintf_test_3866__);
tcase_add_test(tc1_1, s21_sprintf_test_3867__);
tcase_add_test(tc1_1, s21_sprintf_test_3868__);
tcase_add_test(tc1_1, s21_sprintf_test_3869__);
tcase_add_test(tc1_1, s21_sprintf_test_3870__);
tcase_add_test(tc1_1, s21_sprintf_test_3871__);
tcase_add_test(tc1_1, s21_sprintf_test_3872__);
tcase_add_test(tc1_1, s21_sprintf_test_3873__);
tcase_add_test(tc1_1, s21_sprintf_test_3874__);
tcase_add_test(tc1_1, s21_sprintf_test_3875__);
tcase_add_test(tc1_1, s21_sprintf_test_3876__);
tcase_add_test(tc1_1, s21_sprintf_test_3877__);
tcase_add_test(tc1_1, s21_sprintf_test_3878__);
tcase_add_test(tc1_1, s21_sprintf_test_3879__);
tcase_add_test(tc1_1, s21_sprintf_test_3880__);
tcase_add_test(tc1_1, s21_sprintf_test_3881__);
tcase_add_test(tc1_1, s21_sprintf_test_3882__);
tcase_add_test(tc1_1, s21_sprintf_test_3883__);
tcase_add_test(tc1_1, s21_sprintf_test_3884__);
tcase_add_test(tc1_1, s21_sprintf_test_3885__);
tcase_add_test(tc1_1, s21_sprintf_test_3886__);
tcase_add_test(tc1_1, s21_sprintf_test_3887__);
tcase_add_test(tc1_1, s21_sprintf_test_3888__);
tcase_add_test(tc1_1, s21_sprintf_test_3889__);
tcase_add_test(tc1_1, s21_sprintf_test_3890__);
tcase_add_test(tc1_1, s21_sprintf_test_3891__);
tcase_add_test(tc1_1, s21_sprintf_test_3892__);
tcase_add_test(tc1_1, s21_sprintf_test_3893__);
tcase_add_test(tc1_1, s21_sprintf_test_3894__);
tcase_add_test(tc1_1, s21_sprintf_test_3895__);
tcase_add_test(tc1_1, s21_sprintf_test_3896__);
tcase_add_test(tc1_1, s21_sprintf_test_3897__);
tcase_add_test(tc1_1, s21_sprintf_test_3898__);
tcase_add_test(tc1_1, s21_sprintf_test_3899__);
tcase_add_test(tc1_1, s21_sprintf_test_3900__);
tcase_add_test(tc1_1, s21_sprintf_test_3901__);
tcase_add_test(tc1_1, s21_sprintf_test_3902__);
tcase_add_test(tc1_1, s21_sprintf_test_3903__);
tcase_add_test(tc1_1, s21_sprintf_test_3904__);
tcase_add_test(tc1_1, s21_sprintf_test_3905__);
tcase_add_test(tc1_1, s21_sprintf_test_3906__);
tcase_add_test(tc1_1, s21_sprintf_test_3907__);
tcase_add_test(tc1_1, s21_sprintf_test_3908__);
tcase_add_test(tc1_1, s21_sprintf_test_3909__);
tcase_add_test(tc1_1, s21_sprintf_test_3910__);
tcase_add_test(tc1_1, s21_sprintf_test_3911__);
tcase_add_test(tc1_1, s21_sprintf_test_3912__);
tcase_add_test(tc1_1, s21_sprintf_test_3913__);
tcase_add_test(tc1_1, s21_sprintf_test_3914__);
tcase_add_test(tc1_1, s21_sprintf_test_3915__);
tcase_add_test(tc1_1, s21_sprintf_test_3916__);
tcase_add_test(tc1_1, s21_sprintf_test_3917__);
tcase_add_test(tc1_1, s21_sprintf_test_3918__);
tcase_add_test(tc1_1, s21_sprintf_test_3919__);
tcase_add_test(tc1_1, s21_sprintf_test_3920__);
tcase_add_test(tc1_1, s21_sprintf_test_3921__);
tcase_add_test(tc1_1, s21_sprintf_test_3922__);
tcase_add_test(tc1_1, s21_sprintf_test_3923__);
tcase_add_test(tc1_1, s21_sprintf_test_3924__);
tcase_add_test(tc1_1, s21_sprintf_test_3925__);
tcase_add_test(tc1_1, s21_sprintf_test_3926__);
tcase_add_test(tc1_1, s21_sprintf_test_3927__);
tcase_add_test(tc1_1, s21_sprintf_test_3928__);
tcase_add_test(tc1_1, s21_sprintf_test_3929__);
tcase_add_test(tc1_1, s21_sprintf_test_3930__);
tcase_add_test(tc1_1, s21_sprintf_test_3931__);
tcase_add_test(tc1_1, s21_sprintf_test_3932__);
tcase_add_test(tc1_1, s21_sprintf_test_3933__);
tcase_add_test(tc1_1, s21_sprintf_test_3934__);
tcase_add_test(tc1_1, s21_sprintf_test_3935__);
tcase_add_test(tc1_1, s21_sprintf_test_3936__);
tcase_add_test(tc1_1, s21_sprintf_test_3937__);
tcase_add_test(tc1_1, s21_sprintf_test_3938__);
tcase_add_test(tc1_1, s21_sprintf_test_3939__);
tcase_add_test(tc1_1, s21_sprintf_test_3940__);
tcase_add_test(tc1_1, s21_sprintf_test_3941__);
tcase_add_test(tc1_1, s21_sprintf_test_3942__);
tcase_add_test(tc1_1, s21_sprintf_test_3943__);
tcase_add_test(tc1_1, s21_sprintf_test_3944__);
tcase_add_test(tc1_1, s21_sprintf_test_3945__);
tcase_add_test(tc1_1, s21_sprintf_test_3946__);
tcase_add_test(tc1_1, s21_sprintf_test_3947__);
tcase_add_test(tc1_1, s21_sprintf_test_3948__);
tcase_add_test(tc1_1, s21_sprintf_test_3949__);
tcase_add_test(tc1_1, s21_sprintf_test_3950__);
tcase_add_test(tc1_1, s21_sprintf_test_3951__);
tcase_add_test(tc1_1, s21_sprintf_test_3952__);
tcase_add_test(tc1_1, s21_sprintf_test_3953__);
tcase_add_test(tc1_1, s21_sprintf_test_3954__);
tcase_add_test(tc1_1, s21_sprintf_test_3955__);
tcase_add_test(tc1_1, s21_sprintf_test_3956__);
tcase_add_test(tc1_1, s21_sprintf_test_3957__);
tcase_add_test(tc1_1, s21_sprintf_test_3958__);
tcase_add_test(tc1_1, s21_sprintf_test_3959__);
tcase_add_test(tc1_1, s21_sprintf_test_3960__);
tcase_add_test(tc1_1, s21_sprintf_test_3961__);
tcase_add_test(tc1_1, s21_sprintf_test_3962__);
tcase_add_test(tc1_1, s21_sprintf_test_3963__);
tcase_add_test(tc1_1, s21_sprintf_test_3964__);
tcase_add_test(tc1_1, s21_sprintf_test_3965__);
tcase_add_test(tc1_1, s21_sprintf_test_3966__);
tcase_add_test(tc1_1, s21_sprintf_test_3967__);
tcase_add_test(tc1_1, s21_sprintf_test_3968__);
tcase_add_test(tc1_1, s21_sprintf_test_3969__);
tcase_add_test(tc1_1, s21_sprintf_test_3970__);
tcase_add_test(tc1_1, s21_sprintf_test_3971__);
tcase_add_test(tc1_1, s21_sprintf_test_3972__);
tcase_add_test(tc1_1, s21_sprintf_test_3973__);
tcase_add_test(tc1_1, s21_sprintf_test_3974__);
tcase_add_test(tc1_1, s21_sprintf_test_3975__);
tcase_add_test(tc1_1, s21_sprintf_test_3976__);
tcase_add_test(tc1_1, s21_sprintf_test_3977__);
tcase_add_test(tc1_1, s21_sprintf_test_3978__);
tcase_add_test(tc1_1, s21_sprintf_test_3979__);
tcase_add_test(tc1_1, s21_sprintf_test_3980__);
tcase_add_test(tc1_1, s21_sprintf_test_3981__);
tcase_add_test(tc1_1, s21_sprintf_test_3982__);
tcase_add_test(tc1_1, s21_sprintf_test_3983__);
tcase_add_test(tc1_1, s21_sprintf_test_3984__);
tcase_add_test(tc1_1, s21_sprintf_test_3985__);
tcase_add_test(tc1_1, s21_sprintf_test_3986__);
tcase_add_test(tc1_1, s21_sprintf_test_3987__);
tcase_add_test(tc1_1, s21_sprintf_test_3988__);
tcase_add_test(tc1_1, s21_sprintf_test_3989__);
tcase_add_test(tc1_1, s21_sprintf_test_3990__);
tcase_add_test(tc1_1, s21_sprintf_test_3991__);
tcase_add_test(tc1_1, s21_sprintf_test_3992__);
tcase_add_test(tc1_1, s21_sprintf_test_3993__);
tcase_add_test(tc1_1, s21_sprintf_test_3994__);
tcase_add_test(tc1_1, s21_sprintf_test_3995__);
tcase_add_test(tc1_1, s21_sprintf_test_3996__);
tcase_add_test(tc1_1, s21_sprintf_test_3997__);
tcase_add_test(tc1_1, s21_sprintf_test_3998__);
tcase_add_test(tc1_1, s21_sprintf_test_3999__);
tcase_add_test(tc1_1, s21_sprintf_test_4000__);
tcase_add_test(tc1_1, s21_sprintf_test_4001__);
tcase_add_test(tc1_1, s21_sprintf_test_4002__);
tcase_add_test(tc1_1, s21_sprintf_test_4003__);
tcase_add_test(tc1_1, s21_sprintf_test_4004__);
tcase_add_test(tc1_1, s21_sprintf_test_4005__);
tcase_add_test(tc1_1, s21_sprintf_test_4006__);
tcase_add_test(tc1_1, s21_sprintf_test_4007__);
tcase_add_test(tc1_1, s21_sprintf_test_4008__);
tcase_add_test(tc1_1, s21_sprintf_test_4009__);
tcase_add_test(tc1_1, s21_sprintf_test_4010__);
tcase_add_test(tc1_1, s21_sprintf_test_4011__);
tcase_add_test(tc1_1, s21_sprintf_test_4012__);
tcase_add_test(tc1_1, s21_sprintf_test_4013__);
tcase_add_test(tc1_1, s21_sprintf_test_4014__);
tcase_add_test(tc1_1, s21_sprintf_test_4015__);
tcase_add_test(tc1_1, s21_sprintf_test_4016__);
tcase_add_test(tc1_1, s21_sprintf_test_4017__);
tcase_add_test(tc1_1, s21_sprintf_test_4018__);
tcase_add_test(tc1_1, s21_sprintf_test_4019__);
tcase_add_test(tc1_1, s21_sprintf_test_4020__);
tcase_add_test(tc1_1, s21_sprintf_test_4021__);
tcase_add_test(tc1_1, s21_sprintf_test_4022__);
tcase_add_test(tc1_1, s21_sprintf_test_4023__);
tcase_add_test(tc1_1, s21_sprintf_test_4024__);
tcase_add_test(tc1_1, s21_sprintf_test_4025__);
tcase_add_test(tc1_1, s21_sprintf_test_4026__);
tcase_add_test(tc1_1, s21_sprintf_test_4027__);
tcase_add_test(tc1_1, s21_sprintf_test_4028__);
tcase_add_test(tc1_1, s21_sprintf_test_4029__);
tcase_add_test(tc1_1, s21_sprintf_test_4030__);
tcase_add_test(tc1_1, s21_sprintf_test_4031__);
tcase_add_test(tc1_1, s21_sprintf_test_4032__);
tcase_add_test(tc1_1, s21_sprintf_test_4033__);
tcase_add_test(tc1_1, s21_sprintf_test_4034__);
tcase_add_test(tc1_1, s21_sprintf_test_4035__);
tcase_add_test(tc1_1, s21_sprintf_test_4036__);
tcase_add_test(tc1_1, s21_sprintf_test_4037__);
tcase_add_test(tc1_1, s21_sprintf_test_4038__);
tcase_add_test(tc1_1, s21_sprintf_test_4039__);
tcase_add_test(tc1_1, s21_sprintf_test_4040__);
tcase_add_test(tc1_1, s21_sprintf_test_4041__);
tcase_add_test(tc1_1, s21_sprintf_test_4042__);
tcase_add_test(tc1_1, s21_sprintf_test_4043__);
tcase_add_test(tc1_1, s21_sprintf_test_4044__);
tcase_add_test(tc1_1, s21_sprintf_test_4045__);
tcase_add_test(tc1_1, s21_sprintf_test_4046__);
tcase_add_test(tc1_1, s21_sprintf_test_4047__);
tcase_add_test(tc1_1, s21_sprintf_test_4048__);
tcase_add_test(tc1_1, s21_sprintf_test_4049__);
tcase_add_test(tc1_1, s21_sprintf_test_4050__);
tcase_add_test(tc1_1, s21_sprintf_test_4051__);
tcase_add_test(tc1_1, s21_sprintf_test_4052__);
tcase_add_test(tc1_1, s21_sprintf_test_4053__);
tcase_add_test(tc1_1, s21_sprintf_test_4054__);
tcase_add_test(tc1_1, s21_sprintf_test_4055__);
tcase_add_test(tc1_1, s21_sprintf_test_4056__);
tcase_add_test(tc1_1, s21_sprintf_test_4057__);
tcase_add_test(tc1_1, s21_sprintf_test_4058__);
tcase_add_test(tc1_1, s21_sprintf_test_4059__);
tcase_add_test(tc1_1, s21_sprintf_test_4060__);
tcase_add_test(tc1_1, s21_sprintf_test_4061__);
tcase_add_test(tc1_1, s21_sprintf_test_4062__);
tcase_add_test(tc1_1, s21_sprintf_test_4063__);
tcase_add_test(tc1_1, s21_sprintf_test_4064__);
tcase_add_test(tc1_1, s21_sprintf_test_4065__);
tcase_add_test(tc1_1, s21_sprintf_test_4066__);
tcase_add_test(tc1_1, s21_sprintf_test_4067__);
tcase_add_test(tc1_1, s21_sprintf_test_4068__);
tcase_add_test(tc1_1, s21_sprintf_test_4069__);
tcase_add_test(tc1_1, s21_sprintf_test_4070__);
tcase_add_test(tc1_1, s21_sprintf_test_4071__);
tcase_add_test(tc1_1, s21_sprintf_test_4072__);
tcase_add_test(tc1_1, s21_sprintf_test_4073__);
tcase_add_test(tc1_1, s21_sprintf_test_4074__);
tcase_add_test(tc1_1, s21_sprintf_test_4075__);
tcase_add_test(tc1_1, s21_sprintf_test_4076__);
tcase_add_test(tc1_1, s21_sprintf_test_4077__);
tcase_add_test(tc1_1, s21_sprintf_test_4078__);
tcase_add_test(tc1_1, s21_sprintf_test_4079__);
tcase_add_test(tc1_1, s21_sprintf_test_4080__);
tcase_add_test(tc1_1, s21_sprintf_test_4081__);
tcase_add_test(tc1_1, s21_sprintf_test_4082__);
tcase_add_test(tc1_1, s21_sprintf_test_4083__);
tcase_add_test(tc1_1, s21_sprintf_test_4084__);
tcase_add_test(tc1_1, s21_sprintf_test_4085__);
tcase_add_test(tc1_1, s21_sprintf_test_4086__);
tcase_add_test(tc1_1, s21_sprintf_test_4087__);
tcase_add_test(tc1_1, s21_sprintf_test_4088__);
tcase_add_test(tc1_1, s21_sprintf_test_4089__);
tcase_add_test(tc1_1, s21_sprintf_test_4090__);
tcase_add_test(tc1_1, s21_sprintf_test_4091__);
tcase_add_test(tc1_1, s21_sprintf_test_4092__);
tcase_add_test(tc1_1, s21_sprintf_test_4093__);
tcase_add_test(tc1_1, s21_sprintf_test_4094__);
tcase_add_test(tc1_1, s21_sprintf_test_4095__);
tcase_add_test(tc1_1, s21_sprintf_test_4096__);
tcase_add_test(tc1_1, s21_sprintf_test_4097__);
tcase_add_test(tc1_1, s21_sprintf_test_4098__);
tcase_add_test(tc1_1, s21_sprintf_test_4099__);
tcase_add_test(tc1_1, s21_sprintf_test_4100__);
tcase_add_test(tc1_1, s21_sprintf_test_4101__);
tcase_add_test(tc1_1, s21_sprintf_test_4102__);
tcase_add_test(tc1_1, s21_sprintf_test_4103__);
tcase_add_test(tc1_1, s21_sprintf_test_4104__);
tcase_add_test(tc1_1, s21_sprintf_test_4105__);
tcase_add_test(tc1_1, s21_sprintf_test_4106__);
tcase_add_test(tc1_1, s21_sprintf_test_4107__);
tcase_add_test(tc1_1, s21_sprintf_test_4108__);
tcase_add_test(tc1_1, s21_sprintf_test_4109__);
tcase_add_test(tc1_1, s21_sprintf_test_4110__);
tcase_add_test(tc1_1, s21_sprintf_test_4111__);
tcase_add_test(tc1_1, s21_sprintf_test_4112__);
tcase_add_test(tc1_1, s21_sprintf_test_4113__);
tcase_add_test(tc1_1, s21_sprintf_test_4114__);
tcase_add_test(tc1_1, s21_sprintf_test_4115__);
tcase_add_test(tc1_1, s21_sprintf_test_4116__);
tcase_add_test(tc1_1, s21_sprintf_test_4117__);
tcase_add_test(tc1_1, s21_sprintf_test_4118__);
tcase_add_test(tc1_1, s21_sprintf_test_4119__);
tcase_add_test(tc1_1, s21_sprintf_test_4120__);
tcase_add_test(tc1_1, s21_sprintf_test_4121__);
tcase_add_test(tc1_1, s21_sprintf_test_4122__);
tcase_add_test(tc1_1, s21_sprintf_test_4123__);
tcase_add_test(tc1_1, s21_sprintf_test_4124__);
tcase_add_test(tc1_1, s21_sprintf_test_4125__);
tcase_add_test(tc1_1, s21_sprintf_test_4126__);
tcase_add_test(tc1_1, s21_sprintf_test_4127__);
tcase_add_test(tc1_1, s21_sprintf_test_4128__);
tcase_add_test(tc1_1, s21_sprintf_test_4129__);
tcase_add_test(tc1_1, s21_sprintf_test_4130__);
tcase_add_test(tc1_1, s21_sprintf_test_4131__);
tcase_add_test(tc1_1, s21_sprintf_test_4132__);
tcase_add_test(tc1_1, s21_sprintf_test_4133__);
tcase_add_test(tc1_1, s21_sprintf_test_4134__);
tcase_add_test(tc1_1, s21_sprintf_test_4135__);
tcase_add_test(tc1_1, s21_sprintf_test_4136__);
tcase_add_test(tc1_1, s21_sprintf_test_4137__);
tcase_add_test(tc1_1, s21_sprintf_test_4138__);
tcase_add_test(tc1_1, s21_sprintf_test_4139__);
tcase_add_test(tc1_1, s21_sprintf_test_4140__);
tcase_add_test(tc1_1, s21_sprintf_test_4141__);
tcase_add_test(tc1_1, s21_sprintf_test_4142__);
tcase_add_test(tc1_1, s21_sprintf_test_4143__);
tcase_add_test(tc1_1, s21_sprintf_test_4144__);
tcase_add_test(tc1_1, s21_sprintf_test_4145__);
tcase_add_test(tc1_1, s21_sprintf_test_4146__);
tcase_add_test(tc1_1, s21_sprintf_test_4147__);
tcase_add_test(tc1_1, s21_sprintf_test_4148__);
tcase_add_test(tc1_1, s21_sprintf_test_4149__);
tcase_add_test(tc1_1, s21_sprintf_test_4150__);
tcase_add_test(tc1_1, s21_sprintf_test_4151__);
tcase_add_test(tc1_1, s21_sprintf_test_4152__);
tcase_add_test(tc1_1, s21_sprintf_test_4153__);
tcase_add_test(tc1_1, s21_sprintf_test_4154__);
tcase_add_test(tc1_1, s21_sprintf_test_4155__);
tcase_add_test(tc1_1, s21_sprintf_test_4156__);
tcase_add_test(tc1_1, s21_sprintf_test_4157__);
tcase_add_test(tc1_1, s21_sprintf_test_4158__);
tcase_add_test(tc1_1, s21_sprintf_test_4159__);
tcase_add_test(tc1_1, s21_sprintf_test_4160__);
tcase_add_test(tc1_1, s21_sprintf_test_4161__);
tcase_add_test(tc1_1, s21_sprintf_test_4162__);
tcase_add_test(tc1_1, s21_sprintf_test_4163__);
tcase_add_test(tc1_1, s21_sprintf_test_4164__);
tcase_add_test(tc1_1, s21_sprintf_test_4165__);
tcase_add_test(tc1_1, s21_sprintf_test_4166__);
tcase_add_test(tc1_1, s21_sprintf_test_4167__);
tcase_add_test(tc1_1, s21_sprintf_test_4168__);
tcase_add_test(tc1_1, s21_sprintf_test_4169__);
tcase_add_test(tc1_1, s21_sprintf_test_4170__);
tcase_add_test(tc1_1, s21_sprintf_test_4171__);
tcase_add_test(tc1_1, s21_sprintf_test_4172__);
tcase_add_test(tc1_1, s21_sprintf_test_4173__);
tcase_add_test(tc1_1, s21_sprintf_test_4174__);
tcase_add_test(tc1_1, s21_sprintf_test_4175__);
tcase_add_test(tc1_1, s21_sprintf_test_4176__);
tcase_add_test(tc1_1, s21_sprintf_test_4177__);
tcase_add_test(tc1_1, s21_sprintf_test_4178__);
tcase_add_test(tc1_1, s21_sprintf_test_4179__);
tcase_add_test(tc1_1, s21_sprintf_test_4180__);
tcase_add_test(tc1_1, s21_sprintf_test_4181__);
tcase_add_test(tc1_1, s21_sprintf_test_4182__);
tcase_add_test(tc1_1, s21_sprintf_test_4183__);
tcase_add_test(tc1_1, s21_sprintf_test_4184__);
tcase_add_test(tc1_1, s21_sprintf_test_4185__);
tcase_add_test(tc1_1, s21_sprintf_test_4186__);
tcase_add_test(tc1_1, s21_sprintf_test_4187__);
tcase_add_test(tc1_1, s21_sprintf_test_4188__);
tcase_add_test(tc1_1, s21_sprintf_test_4189__);
tcase_add_test(tc1_1, s21_sprintf_test_4190__);
tcase_add_test(tc1_1, s21_sprintf_test_4191__);
tcase_add_test(tc1_1, s21_sprintf_test_4192__);
tcase_add_test(tc1_1, s21_sprintf_test_4193__);
tcase_add_test(tc1_1, s21_sprintf_test_4194__);
tcase_add_test(tc1_1, s21_sprintf_test_4195__);
tcase_add_test(tc1_1, s21_sprintf_test_4196__);
tcase_add_test(tc1_1, s21_sprintf_test_4197__);
tcase_add_test(tc1_1, s21_sprintf_test_4198__);
tcase_add_test(tc1_1, s21_sprintf_test_4199__);
tcase_add_test(tc1_1, s21_sprintf_test_4200__);
tcase_add_test(tc1_1, s21_sprintf_test_4201__);
tcase_add_test(tc1_1, s21_sprintf_test_4202__);
tcase_add_test(tc1_1, s21_sprintf_test_4203__);
tcase_add_test(tc1_1, s21_sprintf_test_4204__);
tcase_add_test(tc1_1, s21_sprintf_test_4205__);
tcase_add_test(tc1_1, s21_sprintf_test_4206__);
tcase_add_test(tc1_1, s21_sprintf_test_4207__);
tcase_add_test(tc1_1, s21_sprintf_test_4208__);
tcase_add_test(tc1_1, s21_sprintf_test_4209__);
tcase_add_test(tc1_1, s21_sprintf_test_4210__);
tcase_add_test(tc1_1, s21_sprintf_test_4211__);
tcase_add_test(tc1_1, s21_sprintf_test_4212__);
tcase_add_test(tc1_1, s21_sprintf_test_4213__);
tcase_add_test(tc1_1, s21_sprintf_test_4214__);
tcase_add_test(tc1_1, s21_sprintf_test_4215__);
tcase_add_test(tc1_1, s21_sprintf_test_4216__);
tcase_add_test(tc1_1, s21_sprintf_test_4217__);
tcase_add_test(tc1_1, s21_sprintf_test_4218__);
tcase_add_test(tc1_1, s21_sprintf_test_4219__);
tcase_add_test(tc1_1, s21_sprintf_test_4220__);
tcase_add_test(tc1_1, s21_sprintf_test_4221__);
tcase_add_test(tc1_1, s21_sprintf_test_4222__);
tcase_add_test(tc1_1, s21_sprintf_test_4223__);
tcase_add_test(tc1_1, s21_sprintf_test_4224__);
tcase_add_test(tc1_1, s21_sprintf_test_4225__);
tcase_add_test(tc1_1, s21_sprintf_test_4226__);
tcase_add_test(tc1_1, s21_sprintf_test_4227__);
tcase_add_test(tc1_1, s21_sprintf_test_4228__);
tcase_add_test(tc1_1, s21_sprintf_test_4229__);
tcase_add_test(tc1_1, s21_sprintf_test_4230__);
tcase_add_test(tc1_1, s21_sprintf_test_4231__);
tcase_add_test(tc1_1, s21_sprintf_test_4232__);
tcase_add_test(tc1_1, s21_sprintf_test_4233__);
tcase_add_test(tc1_1, s21_sprintf_test_4234__);
tcase_add_test(tc1_1, s21_sprintf_test_4235__);
tcase_add_test(tc1_1, s21_sprintf_test_4236__);
tcase_add_test(tc1_1, s21_sprintf_test_4237__);
tcase_add_test(tc1_1, s21_sprintf_test_4238__);
tcase_add_test(tc1_1, s21_sprintf_test_4239__);
tcase_add_test(tc1_1, s21_sprintf_test_4240__);
tcase_add_test(tc1_1, s21_sprintf_test_4241__);
tcase_add_test(tc1_1, s21_sprintf_test_4242__);
tcase_add_test(tc1_1, s21_sprintf_test_4243__);
tcase_add_test(tc1_1, s21_sprintf_test_4244__);
tcase_add_test(tc1_1, s21_sprintf_test_4245__);
tcase_add_test(tc1_1, s21_sprintf_test_4246__);
tcase_add_test(tc1_1, s21_sprintf_test_4247__);
tcase_add_test(tc1_1, s21_sprintf_test_4248__);
tcase_add_test(tc1_1, s21_sprintf_test_4249__);
tcase_add_test(tc1_1, s21_sprintf_test_4250__);
tcase_add_test(tc1_1, s21_sprintf_test_4251__);
tcase_add_test(tc1_1, s21_sprintf_test_4252__);
tcase_add_test(tc1_1, s21_sprintf_test_4253__);
tcase_add_test(tc1_1, s21_sprintf_test_4254__);
tcase_add_test(tc1_1, s21_sprintf_test_4255__);
tcase_add_test(tc1_1, s21_sprintf_test_4256__);
tcase_add_test(tc1_1, s21_sprintf_test_4257__);
tcase_add_test(tc1_1, s21_sprintf_test_4258__);
tcase_add_test(tc1_1, s21_sprintf_test_4259__);
tcase_add_test(tc1_1, s21_sprintf_test_4260__);
tcase_add_test(tc1_1, s21_sprintf_test_4261__);
tcase_add_test(tc1_1, s21_sprintf_test_4262__);
tcase_add_test(tc1_1, s21_sprintf_test_4263__);
tcase_add_test(tc1_1, s21_sprintf_test_4264__);
tcase_add_test(tc1_1, s21_sprintf_test_4265__);
tcase_add_test(tc1_1, s21_sprintf_test_4266__);
tcase_add_test(tc1_1, s21_sprintf_test_4267__);
tcase_add_test(tc1_1, s21_sprintf_test_4268__);
tcase_add_test(tc1_1, s21_sprintf_test_4269__);
tcase_add_test(tc1_1, s21_sprintf_test_4270__);
tcase_add_test(tc1_1, s21_sprintf_test_4271__);
tcase_add_test(tc1_1, s21_sprintf_test_4272__);
tcase_add_test(tc1_1, s21_sprintf_test_4273__);
tcase_add_test(tc1_1, s21_sprintf_test_4274__);
tcase_add_test(tc1_1, s21_sprintf_test_4275__);
tcase_add_test(tc1_1, s21_sprintf_test_4276__);
tcase_add_test(tc1_1, s21_sprintf_test_4277__);
tcase_add_test(tc1_1, s21_sprintf_test_4278__);
tcase_add_test(tc1_1, s21_sprintf_test_4279__);
tcase_add_test(tc1_1, s21_sprintf_test_4280__);
tcase_add_test(tc1_1, s21_sprintf_test_4281__);
tcase_add_test(tc1_1, s21_sprintf_test_4282__);
tcase_add_test(tc1_1, s21_sprintf_test_4283__);
tcase_add_test(tc1_1, s21_sprintf_test_4284__);
tcase_add_test(tc1_1, s21_sprintf_test_4285__);
tcase_add_test(tc1_1, s21_sprintf_test_4286__);
tcase_add_test(tc1_1, s21_sprintf_test_4287__);
tcase_add_test(tc1_1, s21_sprintf_test_4288__);
tcase_add_test(tc1_1, s21_sprintf_test_4289__);
tcase_add_test(tc1_1, s21_sprintf_test_4290__);
tcase_add_test(tc1_1, s21_sprintf_test_4291__);
tcase_add_test(tc1_1, s21_sprintf_test_4292__);
tcase_add_test(tc1_1, s21_sprintf_test_4293__);
tcase_add_test(tc1_1, s21_sprintf_test_4294__);
tcase_add_test(tc1_1, s21_sprintf_test_4295__);
tcase_add_test(tc1_1, s21_sprintf_test_4296__);
tcase_add_test(tc1_1, s21_sprintf_test_4297__);
tcase_add_test(tc1_1, s21_sprintf_test_4298__);
tcase_add_test(tc1_1, s21_sprintf_test_4299__);
tcase_add_test(tc1_1, s21_sprintf_test_4300__);
tcase_add_test(tc1_1, s21_sprintf_test_4301__);
tcase_add_test(tc1_1, s21_sprintf_test_4302__);
tcase_add_test(tc1_1, s21_sprintf_test_4303__);
tcase_add_test(tc1_1, s21_sprintf_test_4304__);
tcase_add_test(tc1_1, s21_sprintf_test_4305__);
tcase_add_test(tc1_1, s21_sprintf_test_4306__);
tcase_add_test(tc1_1, s21_sprintf_test_4307__);
tcase_add_test(tc1_1, s21_sprintf_test_4308__);
tcase_add_test(tc1_1, s21_sprintf_test_4309__);
tcase_add_test(tc1_1, s21_sprintf_test_4310__);
tcase_add_test(tc1_1, s21_sprintf_test_4311__);
tcase_add_test(tc1_1, s21_sprintf_test_4312__);
tcase_add_test(tc1_1, s21_sprintf_test_4313__);
tcase_add_test(tc1_1, s21_sprintf_test_4314__);
tcase_add_test(tc1_1, s21_sprintf_test_4315__);
tcase_add_test(tc1_1, s21_sprintf_test_4316__);
tcase_add_test(tc1_1, s21_sprintf_test_4317__);
tcase_add_test(tc1_1, s21_sprintf_test_4318__);
tcase_add_test(tc1_1, s21_sprintf_test_4319__);
tcase_add_test(tc1_1, s21_sprintf_test_4320__);
tcase_add_test(tc1_1, s21_sprintf_test_4321__);
tcase_add_test(tc1_1, s21_sprintf_test_4322__);
tcase_add_test(tc1_1, s21_sprintf_test_4323__);
tcase_add_test(tc1_1, s21_sprintf_test_4324__);
tcase_add_test(tc1_1, s21_sprintf_test_4325__);
tcase_add_test(tc1_1, s21_sprintf_test_4326__);
tcase_add_test(tc1_1, s21_sprintf_test_4327__);
tcase_add_test(tc1_1, s21_sprintf_test_4328__);
tcase_add_test(tc1_1, s21_sprintf_test_4329__);
tcase_add_test(tc1_1, s21_sprintf_test_4330__);
tcase_add_test(tc1_1, s21_sprintf_test_4331__);
tcase_add_test(tc1_1, s21_sprintf_test_4332__);
tcase_add_test(tc1_1, s21_sprintf_test_4333__);
tcase_add_test(tc1_1, s21_sprintf_test_4334__);
tcase_add_test(tc1_1, s21_sprintf_test_4335__);
tcase_add_test(tc1_1, s21_sprintf_test_4336__);
tcase_add_test(tc1_1, s21_sprintf_test_4337__);
tcase_add_test(tc1_1, s21_sprintf_test_4338__);
tcase_add_test(tc1_1, s21_sprintf_test_4339__);
tcase_add_test(tc1_1, s21_sprintf_test_4340__);
tcase_add_test(tc1_1, s21_sprintf_test_4341__);
tcase_add_test(tc1_1, s21_sprintf_test_4342__);
tcase_add_test(tc1_1, s21_sprintf_test_4343__);
tcase_add_test(tc1_1, s21_sprintf_test_4344__);
tcase_add_test(tc1_1, s21_sprintf_test_4345__);
tcase_add_test(tc1_1, s21_sprintf_test_4346__);
tcase_add_test(tc1_1, s21_sprintf_test_4347__);
tcase_add_test(tc1_1, s21_sprintf_test_4348__);
tcase_add_test(tc1_1, s21_sprintf_test_4349__);
tcase_add_test(tc1_1, s21_sprintf_test_4350__);
tcase_add_test(tc1_1, s21_sprintf_test_4351__);
tcase_add_test(tc1_1, s21_sprintf_test_4352__);
tcase_add_test(tc1_1, s21_sprintf_test_4353__);
tcase_add_test(tc1_1, s21_sprintf_test_4354__);
tcase_add_test(tc1_1, s21_sprintf_test_4355__);
tcase_add_test(tc1_1, s21_sprintf_test_4356__);
tcase_add_test(tc1_1, s21_sprintf_test_4357__);
tcase_add_test(tc1_1, s21_sprintf_test_4358__);
tcase_add_test(tc1_1, s21_sprintf_test_4359__);
tcase_add_test(tc1_1, s21_sprintf_test_4360__);
tcase_add_test(tc1_1, s21_sprintf_test_4361__);
tcase_add_test(tc1_1, s21_sprintf_test_4362__);
tcase_add_test(tc1_1, s21_sprintf_test_4363__);
tcase_add_test(tc1_1, s21_sprintf_test_4364__);
tcase_add_test(tc1_1, s21_sprintf_test_4365__);
tcase_add_test(tc1_1, s21_sprintf_test_4366__);
tcase_add_test(tc1_1, s21_sprintf_test_4367__);
tcase_add_test(tc1_1, s21_sprintf_test_4368__);
tcase_add_test(tc1_1, s21_sprintf_test_4369__);
tcase_add_test(tc1_1, s21_sprintf_test_4370__);
tcase_add_test(tc1_1, s21_sprintf_test_4371__);
tcase_add_test(tc1_1, s21_sprintf_test_4372__);
tcase_add_test(tc1_1, s21_sprintf_test_4373__);
tcase_add_test(tc1_1, s21_sprintf_test_4374__);
tcase_add_test(tc1_1, s21_sprintf_test_4375__);
tcase_add_test(tc1_1, s21_sprintf_test_4376__);
tcase_add_test(tc1_1, s21_sprintf_test_4377__);
tcase_add_test(tc1_1, s21_sprintf_test_4378__);
tcase_add_test(tc1_1, s21_sprintf_test_4379__);
tcase_add_test(tc1_1, s21_sprintf_test_4380__);
tcase_add_test(tc1_1, s21_sprintf_test_4381__);
tcase_add_test(tc1_1, s21_sprintf_test_4382__);
tcase_add_test(tc1_1, s21_sprintf_test_4383__);
tcase_add_test(tc1_1, s21_sprintf_test_4384__);
tcase_add_test(tc1_1, s21_sprintf_test_4385__);
tcase_add_test(tc1_1, s21_sprintf_test_4386__);
tcase_add_test(tc1_1, s21_sprintf_test_4387__);
tcase_add_test(tc1_1, s21_sprintf_test_4388__);
tcase_add_test(tc1_1, s21_sprintf_test_4389__);
tcase_add_test(tc1_1, s21_sprintf_test_4390__);
tcase_add_test(tc1_1, s21_sprintf_test_4391__);
tcase_add_test(tc1_1, s21_sprintf_test_4392__);
tcase_add_test(tc1_1, s21_sprintf_test_4393__);
tcase_add_test(tc1_1, s21_sprintf_test_4394__);
tcase_add_test(tc1_1, s21_sprintf_test_4395__);
tcase_add_test(tc1_1, s21_sprintf_test_4396__);
tcase_add_test(tc1_1, s21_sprintf_test_4397__);
tcase_add_test(tc1_1, s21_sprintf_test_4398__);
tcase_add_test(tc1_1, s21_sprintf_test_4399__);
tcase_add_test(tc1_1, s21_sprintf_test_4400__);
tcase_add_test(tc1_1, s21_sprintf_test_4401__);
tcase_add_test(tc1_1, s21_sprintf_test_4402__);
tcase_add_test(tc1_1, s21_sprintf_test_4403__);
tcase_add_test(tc1_1, s21_sprintf_test_4404__);
tcase_add_test(tc1_1, s21_sprintf_test_4405__);
tcase_add_test(tc1_1, s21_sprintf_test_4406__);
tcase_add_test(tc1_1, s21_sprintf_test_4407__);
tcase_add_test(tc1_1, s21_sprintf_test_4408__);
tcase_add_test(tc1_1, s21_sprintf_test_4409__);
tcase_add_test(tc1_1, s21_sprintf_test_4410__);
tcase_add_test(tc1_1, s21_sprintf_test_4411__);
tcase_add_test(tc1_1, s21_sprintf_test_4412__);
tcase_add_test(tc1_1, s21_sprintf_test_4413__);
tcase_add_test(tc1_1, s21_sprintf_test_4414__);
tcase_add_test(tc1_1, s21_sprintf_test_4415__);
tcase_add_test(tc1_1, s21_sprintf_test_4416__);
tcase_add_test(tc1_1, s21_sprintf_test_4417__);
tcase_add_test(tc1_1, s21_sprintf_test_4418__);
tcase_add_test(tc1_1, s21_sprintf_test_4419__);
tcase_add_test(tc1_1, s21_sprintf_test_4420__);
tcase_add_test(tc1_1, s21_sprintf_test_4421__);
tcase_add_test(tc1_1, s21_sprintf_test_4422__);
tcase_add_test(tc1_1, s21_sprintf_test_4423__);
tcase_add_test(tc1_1, s21_sprintf_test_4424__);
tcase_add_test(tc1_1, s21_sprintf_test_4425__);
tcase_add_test(tc1_1, s21_sprintf_test_4426__);
tcase_add_test(tc1_1, s21_sprintf_test_4427__);
tcase_add_test(tc1_1, s21_sprintf_test_4428__);
tcase_add_test(tc1_1, s21_sprintf_test_4429__);
tcase_add_test(tc1_1, s21_sprintf_test_4430__);
tcase_add_test(tc1_1, s21_sprintf_test_4431__);
tcase_add_test(tc1_1, s21_sprintf_test_4432__);
tcase_add_test(tc1_1, s21_sprintf_test_4433__);
tcase_add_test(tc1_1, s21_sprintf_test_4434__);
tcase_add_test(tc1_1, s21_sprintf_test_4435__);
tcase_add_test(tc1_1, s21_sprintf_test_4436__);
tcase_add_test(tc1_1, s21_sprintf_test_4437__);
tcase_add_test(tc1_1, s21_sprintf_test_4438__);
tcase_add_test(tc1_1, s21_sprintf_test_4439__);
tcase_add_test(tc1_1, s21_sprintf_test_4440__);
tcase_add_test(tc1_1, s21_sprintf_test_4441__);
tcase_add_test(tc1_1, s21_sprintf_test_4442__);
tcase_add_test(tc1_1, s21_sprintf_test_4443__);
tcase_add_test(tc1_1, s21_sprintf_test_4444__);
tcase_add_test(tc1_1, s21_sprintf_test_4445__);
tcase_add_test(tc1_1, s21_sprintf_test_4446__);
tcase_add_test(tc1_1, s21_sprintf_test_4447__);
tcase_add_test(tc1_1, s21_sprintf_test_4448__);
tcase_add_test(tc1_1, s21_sprintf_test_4449__);
tcase_add_test(tc1_1, s21_sprintf_test_4450__);
tcase_add_test(tc1_1, s21_sprintf_test_4451__);
tcase_add_test(tc1_1, s21_sprintf_test_4452__);
tcase_add_test(tc1_1, s21_sprintf_test_4453__);
tcase_add_test(tc1_1, s21_sprintf_test_4454__);
tcase_add_test(tc1_1, s21_sprintf_test_4455__);
tcase_add_test(tc1_1, s21_sprintf_test_4456__);
tcase_add_test(tc1_1, s21_sprintf_test_4457__);
tcase_add_test(tc1_1, s21_sprintf_test_4458__);
tcase_add_test(tc1_1, s21_sprintf_test_4459__);
tcase_add_test(tc1_1, s21_sprintf_test_4460__);
tcase_add_test(tc1_1, s21_sprintf_test_4461__);
tcase_add_test(tc1_1, s21_sprintf_test_4462__);
tcase_add_test(tc1_1, s21_sprintf_test_4463__);
tcase_add_test(tc1_1, s21_sprintf_test_4464__);
tcase_add_test(tc1_1, s21_sprintf_test_4465__);
tcase_add_test(tc1_1, s21_sprintf_test_4466__);
tcase_add_test(tc1_1, s21_sprintf_test_4467__);
tcase_add_test(tc1_1, s21_sprintf_test_4468__);
tcase_add_test(tc1_1, s21_sprintf_test_4469__);
tcase_add_test(tc1_1, s21_sprintf_test_4470__);
tcase_add_test(tc1_1, s21_sprintf_test_4471__);
tcase_add_test(tc1_1, s21_sprintf_test_4472__);
tcase_add_test(tc1_1, s21_sprintf_test_4473__);
tcase_add_test(tc1_1, s21_sprintf_test_4474__);
tcase_add_test(tc1_1, s21_sprintf_test_4475__);
tcase_add_test(tc1_1, s21_sprintf_test_4476__);
tcase_add_test(tc1_1, s21_sprintf_test_4477__);
tcase_add_test(tc1_1, s21_sprintf_test_4478__);
tcase_add_test(tc1_1, s21_sprintf_test_4479__);
tcase_add_test(tc1_1, s21_sprintf_test_4480__);
tcase_add_test(tc1_1, s21_sprintf_test_4481__);
tcase_add_test(tc1_1, s21_sprintf_test_4482__);
tcase_add_test(tc1_1, s21_sprintf_test_4483__);
tcase_add_test(tc1_1, s21_sprintf_test_4484__);
tcase_add_test(tc1_1, s21_sprintf_test_4485__);
tcase_add_test(tc1_1, s21_sprintf_test_4486__);
tcase_add_test(tc1_1, s21_sprintf_test_4487__);
tcase_add_test(tc1_1, s21_sprintf_test_4488__);
tcase_add_test(tc1_1, s21_sprintf_test_4489__);
tcase_add_test(tc1_1, s21_sprintf_test_4490__);
tcase_add_test(tc1_1, s21_sprintf_test_4491__);
tcase_add_test(tc1_1, s21_sprintf_test_4492__);
tcase_add_test(tc1_1, s21_sprintf_test_4493__);
tcase_add_test(tc1_1, s21_sprintf_test_4494__);
tcase_add_test(tc1_1, s21_sprintf_test_4495__);
tcase_add_test(tc1_1, s21_sprintf_test_4496__);
tcase_add_test(tc1_1, s21_sprintf_test_4497__);
tcase_add_test(tc1_1, s21_sprintf_test_4498__);
tcase_add_test(tc1_1, s21_sprintf_test_4499__);
tcase_add_test(tc1_1, s21_sprintf_test_4500__);
tcase_add_test(tc1_1, s21_sprintf_test_4501__);
tcase_add_test(tc1_1, s21_sprintf_test_4502__);
tcase_add_test(tc1_1, s21_sprintf_test_4503__);
tcase_add_test(tc1_1, s21_sprintf_test_4504__);
tcase_add_test(tc1_1, s21_sprintf_test_4505__);
tcase_add_test(tc1_1, s21_sprintf_test_4506__);
tcase_add_test(tc1_1, s21_sprintf_test_4507__);
tcase_add_test(tc1_1, s21_sprintf_test_4508__);
tcase_add_test(tc1_1, s21_sprintf_test_4509__);
tcase_add_test(tc1_1, s21_sprintf_test_4510__);
tcase_add_test(tc1_1, s21_sprintf_test_4511__);
tcase_add_test(tc1_1, s21_sprintf_test_4512__);
tcase_add_test(tc1_1, s21_sprintf_test_4513__);
tcase_add_test(tc1_1, s21_sprintf_test_4514__);
tcase_add_test(tc1_1, s21_sprintf_test_4515__);
tcase_add_test(tc1_1, s21_sprintf_test_4516__);
tcase_add_test(tc1_1, s21_sprintf_test_4517__);
tcase_add_test(tc1_1, s21_sprintf_test_4518__);
tcase_add_test(tc1_1, s21_sprintf_test_4519__);
tcase_add_test(tc1_1, s21_sprintf_test_4520__);
tcase_add_test(tc1_1, s21_sprintf_test_4521__);
tcase_add_test(tc1_1, s21_sprintf_test_4522__);
tcase_add_test(tc1_1, s21_sprintf_test_4523__);
tcase_add_test(tc1_1, s21_sprintf_test_4524__);
tcase_add_test(tc1_1, s21_sprintf_test_4525__);
tcase_add_test(tc1_1, s21_sprintf_test_4526__);
tcase_add_test(tc1_1, s21_sprintf_test_4527__);
tcase_add_test(tc1_1, s21_sprintf_test_4528__);
tcase_add_test(tc1_1, s21_sprintf_test_4529__);
tcase_add_test(tc1_1, s21_sprintf_test_4530__);
tcase_add_test(tc1_1, s21_sprintf_test_4531__);
tcase_add_test(tc1_1, s21_sprintf_test_4532__);
tcase_add_test(tc1_1, s21_sprintf_test_4533__);
tcase_add_test(tc1_1, s21_sprintf_test_4534__);
tcase_add_test(tc1_1, s21_sprintf_test_4535__);
tcase_add_test(tc1_1, s21_sprintf_test_4536__);
tcase_add_test(tc1_1, s21_sprintf_test_4537__);
tcase_add_test(tc1_1, s21_sprintf_test_4538__);
tcase_add_test(tc1_1, s21_sprintf_test_4539__);
tcase_add_test(tc1_1, s21_sprintf_test_4540__);
tcase_add_test(tc1_1, s21_sprintf_test_4541__);
tcase_add_test(tc1_1, s21_sprintf_test_4542__);
tcase_add_test(tc1_1, s21_sprintf_test_4543__);
tcase_add_test(tc1_1, s21_sprintf_test_4544__);
tcase_add_test(tc1_1, s21_sprintf_test_4545__);
tcase_add_test(tc1_1, s21_sprintf_test_4546__);
tcase_add_test(tc1_1, s21_sprintf_test_4547__);
tcase_add_test(tc1_1, s21_sprintf_test_4548__);
tcase_add_test(tc1_1, s21_sprintf_test_4549__);
tcase_add_test(tc1_1, s21_sprintf_test_4550__);
tcase_add_test(tc1_1, s21_sprintf_test_4551__);
tcase_add_test(tc1_1, s21_sprintf_test_4552__);
tcase_add_test(tc1_1, s21_sprintf_test_4553__);
tcase_add_test(tc1_1, s21_sprintf_test_4554__);
tcase_add_test(tc1_1, s21_sprintf_test_4555__);
tcase_add_test(tc1_1, s21_sprintf_test_4556__);
tcase_add_test(tc1_1, s21_sprintf_test_4557__);
tcase_add_test(tc1_1, s21_sprintf_test_4558__);
tcase_add_test(tc1_1, s21_sprintf_test_4559__);
tcase_add_test(tc1_1, s21_sprintf_test_4560__);
tcase_add_test(tc1_1, s21_sprintf_test_4561__);
tcase_add_test(tc1_1, s21_sprintf_test_4562__);
tcase_add_test(tc1_1, s21_sprintf_test_4563__);
tcase_add_test(tc1_1, s21_sprintf_test_4564__);
tcase_add_test(tc1_1, s21_sprintf_test_4565__);
tcase_add_test(tc1_1, s21_sprintf_test_4566__);
tcase_add_test(tc1_1, s21_sprintf_test_4567__);
tcase_add_test(tc1_1, s21_sprintf_test_4568__);
tcase_add_test(tc1_1, s21_sprintf_test_4569__);
tcase_add_test(tc1_1, s21_sprintf_test_4570__);
tcase_add_test(tc1_1, s21_sprintf_test_4571__);
tcase_add_test(tc1_1, s21_sprintf_test_4572__);
tcase_add_test(tc1_1, s21_sprintf_test_4573__);
tcase_add_test(tc1_1, s21_sprintf_test_4574__);
tcase_add_test(tc1_1, s21_sprintf_test_4575__);
tcase_add_test(tc1_1, s21_sprintf_test_4576__);
tcase_add_test(tc1_1, s21_sprintf_test_4577__);
tcase_add_test(tc1_1, s21_sprintf_test_4578__);
tcase_add_test(tc1_1, s21_sprintf_test_4579__);
tcase_add_test(tc1_1, s21_sprintf_test_4580__);
tcase_add_test(tc1_1, s21_sprintf_test_4581__);
tcase_add_test(tc1_1, s21_sprintf_test_4582__);
tcase_add_test(tc1_1, s21_sprintf_test_4583__);
tcase_add_test(tc1_1, s21_sprintf_test_4584__);
tcase_add_test(tc1_1, s21_sprintf_test_4585__);
tcase_add_test(tc1_1, s21_sprintf_test_4586__);
tcase_add_test(tc1_1, s21_sprintf_test_4587__);
tcase_add_test(tc1_1, s21_sprintf_test_4588__);
tcase_add_test(tc1_1, s21_sprintf_test_4589__);
tcase_add_test(tc1_1, s21_sprintf_test_4590__);
tcase_add_test(tc1_1, s21_sprintf_test_4591__);
tcase_add_test(tc1_1, s21_sprintf_test_4592__);
tcase_add_test(tc1_1, s21_sprintf_test_4593__);
tcase_add_test(tc1_1, s21_sprintf_test_4594__);
tcase_add_test(tc1_1, s21_sprintf_test_4595__);
tcase_add_test(tc1_1, s21_sprintf_test_4596__);
tcase_add_test(tc1_1, s21_sprintf_test_4597__);
tcase_add_test(tc1_1, s21_sprintf_test_4598__);
tcase_add_test(tc1_1, s21_sprintf_test_4599__);
tcase_add_test(tc1_1, s21_sprintf_test_4600__);
tcase_add_test(tc1_1, s21_sprintf_test_4601__);
tcase_add_test(tc1_1, s21_sprintf_test_4602__);
tcase_add_test(tc1_1, s21_sprintf_test_4603__);
tcase_add_test(tc1_1, s21_sprintf_test_4604__);
tcase_add_test(tc1_1, s21_sprintf_test_4605__);
tcase_add_test(tc1_1, s21_sprintf_test_4606__);
tcase_add_test(tc1_1, s21_sprintf_test_4607__);
tcase_add_test(tc1_1, s21_sprintf_test_4608__);
tcase_add_test(tc1_1, s21_sprintf_test_4609__);
tcase_add_test(tc1_1, s21_sprintf_test_4610__);
tcase_add_test(tc1_1, s21_sprintf_test_4611__);
tcase_add_test(tc1_1, s21_sprintf_test_4612__);
tcase_add_test(tc1_1, s21_sprintf_test_4613__);
tcase_add_test(tc1_1, s21_sprintf_test_4614__);
tcase_add_test(tc1_1, s21_sprintf_test_4615__);
tcase_add_test(tc1_1, s21_sprintf_test_4616__);
tcase_add_test(tc1_1, s21_sprintf_test_4617__);
tcase_add_test(tc1_1, s21_sprintf_test_4618__);
tcase_add_test(tc1_1, s21_sprintf_test_4619__);
tcase_add_test(tc1_1, s21_sprintf_test_4620__);
tcase_add_test(tc1_1, s21_sprintf_test_4621__);
tcase_add_test(tc1_1, s21_sprintf_test_4622__);
tcase_add_test(tc1_1, s21_sprintf_test_4623__);
tcase_add_test(tc1_1, s21_sprintf_test_4624__);
tcase_add_test(tc1_1, s21_sprintf_test_4625__);
tcase_add_test(tc1_1, s21_sprintf_test_4626__);
tcase_add_test(tc1_1, s21_sprintf_test_4627__);
tcase_add_test(tc1_1, s21_sprintf_test_4628__);
tcase_add_test(tc1_1, s21_sprintf_test_4629__);
tcase_add_test(tc1_1, s21_sprintf_test_4630__);
tcase_add_test(tc1_1, s21_sprintf_test_4631__);
tcase_add_test(tc1_1, s21_sprintf_test_4632__);
tcase_add_test(tc1_1, s21_sprintf_test_4633__);
tcase_add_test(tc1_1, s21_sprintf_test_4634__);
tcase_add_test(tc1_1, s21_sprintf_test_4635__);
tcase_add_test(tc1_1, s21_sprintf_test_4636__);
tcase_add_test(tc1_1, s21_sprintf_test_4637__);
tcase_add_test(tc1_1, s21_sprintf_test_4638__);
tcase_add_test(tc1_1, s21_sprintf_test_4639__);
tcase_add_test(tc1_1, s21_sprintf_test_4640__);
tcase_add_test(tc1_1, s21_sprintf_test_4641__);
tcase_add_test(tc1_1, s21_sprintf_test_4642__);
tcase_add_test(tc1_1, s21_sprintf_test_4643__);
tcase_add_test(tc1_1, s21_sprintf_test_4644__);
tcase_add_test(tc1_1, s21_sprintf_test_4645__);
tcase_add_test(tc1_1, s21_sprintf_test_4646__);
tcase_add_test(tc1_1, s21_sprintf_test_4647__);
tcase_add_test(tc1_1, s21_sprintf_test_4648__);
tcase_add_test(tc1_1, s21_sprintf_test_4649__);
tcase_add_test(tc1_1, s21_sprintf_test_4650__);
tcase_add_test(tc1_1, s21_sprintf_test_4651__);
tcase_add_test(tc1_1, s21_sprintf_test_4652__);
tcase_add_test(tc1_1, s21_sprintf_test_4653__);
tcase_add_test(tc1_1, s21_sprintf_test_4654__);
tcase_add_test(tc1_1, s21_sprintf_test_4655__);
tcase_add_test(tc1_1, s21_sprintf_test_4656__);
tcase_add_test(tc1_1, s21_sprintf_test_4657__);
tcase_add_test(tc1_1, s21_sprintf_test_4658__);
tcase_add_test(tc1_1, s21_sprintf_test_4659__);
tcase_add_test(tc1_1, s21_sprintf_test_4660__);
tcase_add_test(tc1_1, s21_sprintf_test_4661__);
tcase_add_test(tc1_1, s21_sprintf_test_4662__);
tcase_add_test(tc1_1, s21_sprintf_test_4663__);
tcase_add_test(tc1_1, s21_sprintf_test_4664__);
tcase_add_test(tc1_1, s21_sprintf_test_4665__);
tcase_add_test(tc1_1, s21_sprintf_test_4666__);
tcase_add_test(tc1_1, s21_sprintf_test_4667__);
tcase_add_test(tc1_1, s21_sprintf_test_4668__);
tcase_add_test(tc1_1, s21_sprintf_test_4669__);
tcase_add_test(tc1_1, s21_sprintf_test_4670__);
tcase_add_test(tc1_1, s21_sprintf_test_4671__);
tcase_add_test(tc1_1, s21_sprintf_test_4672__);
tcase_add_test(tc1_1, s21_sprintf_test_4673__);
tcase_add_test(tc1_1, s21_sprintf_test_4674__);
tcase_add_test(tc1_1, s21_sprintf_test_4675__);
tcase_add_test(tc1_1, s21_sprintf_test_4676__);
tcase_add_test(tc1_1, s21_sprintf_test_4677__);
tcase_add_test(tc1_1, s21_sprintf_test_4678__);
tcase_add_test(tc1_1, s21_sprintf_test_4679__);
tcase_add_test(tc1_1, s21_sprintf_test_4680__);
tcase_add_test(tc1_1, s21_sprintf_test_4681__);
tcase_add_test(tc1_1, s21_sprintf_test_4682__);
tcase_add_test(tc1_1, s21_sprintf_test_4683__);
tcase_add_test(tc1_1, s21_sprintf_test_4684__);
tcase_add_test(tc1_1, s21_sprintf_test_4685__);
tcase_add_test(tc1_1, s21_sprintf_test_4686__);
tcase_add_test(tc1_1, s21_sprintf_test_4687__);
tcase_add_test(tc1_1, s21_sprintf_test_4688__);
tcase_add_test(tc1_1, s21_sprintf_test_4689__);
tcase_add_test(tc1_1, s21_sprintf_test_4690__);
tcase_add_test(tc1_1, s21_sprintf_test_4691__);
tcase_add_test(tc1_1, s21_sprintf_test_4692__);
tcase_add_test(tc1_1, s21_sprintf_test_4693__);
tcase_add_test(tc1_1, s21_sprintf_test_4694__);
tcase_add_test(tc1_1, s21_sprintf_test_4695__);
tcase_add_test(tc1_1, s21_sprintf_test_4696__);
tcase_add_test(tc1_1, s21_sprintf_test_4697__);
tcase_add_test(tc1_1, s21_sprintf_test_4698__);
tcase_add_test(tc1_1, s21_sprintf_test_4699__);
tcase_add_test(tc1_1, s21_sprintf_test_4700__);
tcase_add_test(tc1_1, s21_sprintf_test_4701__);
tcase_add_test(tc1_1, s21_sprintf_test_4702__);
tcase_add_test(tc1_1, s21_sprintf_test_4703__);
tcase_add_test(tc1_1, s21_sprintf_test_4704__);
tcase_add_test(tc1_1, s21_sprintf_test_4705__);
tcase_add_test(tc1_1, s21_sprintf_test_4706__);
tcase_add_test(tc1_1, s21_sprintf_test_4707__);
tcase_add_test(tc1_1, s21_sprintf_test_4708__);
tcase_add_test(tc1_1, s21_sprintf_test_4709__);
tcase_add_test(tc1_1, s21_sprintf_test_4710__);
tcase_add_test(tc1_1, s21_sprintf_test_4711__);
tcase_add_test(tc1_1, s21_sprintf_test_4712__);
tcase_add_test(tc1_1, s21_sprintf_test_4713__);
tcase_add_test(tc1_1, s21_sprintf_test_4714__);
tcase_add_test(tc1_1, s21_sprintf_test_4715__);
tcase_add_test(tc1_1, s21_sprintf_test_4716__);
tcase_add_test(tc1_1, s21_sprintf_test_4717__);
tcase_add_test(tc1_1, s21_sprintf_test_4718__);
tcase_add_test(tc1_1, s21_sprintf_test_4719__);
tcase_add_test(tc1_1, s21_sprintf_test_4720__);
tcase_add_test(tc1_1, s21_sprintf_test_4721__);
tcase_add_test(tc1_1, s21_sprintf_test_4722__);
tcase_add_test(tc1_1, s21_sprintf_test_4723__);
tcase_add_test(tc1_1, s21_sprintf_test_4724__);
tcase_add_test(tc1_1, s21_sprintf_test_4725__);
tcase_add_test(tc1_1, s21_sprintf_test_4726__);
tcase_add_test(tc1_1, s21_sprintf_test_4727__);
tcase_add_test(tc1_1, s21_sprintf_test_4728__);
tcase_add_test(tc1_1, s21_sprintf_test_4729__);
tcase_add_test(tc1_1, s21_sprintf_test_4730__);
tcase_add_test(tc1_1, s21_sprintf_test_4731__);
tcase_add_test(tc1_1, s21_sprintf_test_4732__);
tcase_add_test(tc1_1, s21_sprintf_test_4733__);
tcase_add_test(tc1_1, s21_sprintf_test_4734__);
tcase_add_test(tc1_1, s21_sprintf_test_4735__);
tcase_add_test(tc1_1, s21_sprintf_test_4736__);
tcase_add_test(tc1_1, s21_sprintf_test_4737__);
tcase_add_test(tc1_1, s21_sprintf_test_4738__);
tcase_add_test(tc1_1, s21_sprintf_test_4739__);
tcase_add_test(tc1_1, s21_sprintf_test_4740__);
tcase_add_test(tc1_1, s21_sprintf_test_4741__);
tcase_add_test(tc1_1, s21_sprintf_test_4742__);
tcase_add_test(tc1_1, s21_sprintf_test_4743__);
tcase_add_test(tc1_1, s21_sprintf_test_4744__);
tcase_add_test(tc1_1, s21_sprintf_test_4745__);
tcase_add_test(tc1_1, s21_sprintf_test_4746__);
tcase_add_test(tc1_1, s21_sprintf_test_4747__);
tcase_add_test(tc1_1, s21_sprintf_test_4748__);
tcase_add_test(tc1_1, s21_sprintf_test_4749__);
tcase_add_test(tc1_1, s21_sprintf_test_4750__);
tcase_add_test(tc1_1, s21_sprintf_test_4751__);
tcase_add_test(tc1_1, s21_sprintf_test_4752__);
tcase_add_test(tc1_1, s21_sprintf_test_4753__);
tcase_add_test(tc1_1, s21_sprintf_test_4754__);
tcase_add_test(tc1_1, s21_sprintf_test_4755__);
tcase_add_test(tc1_1, s21_sprintf_test_4756__);
tcase_add_test(tc1_1, s21_sprintf_test_4757__);
tcase_add_test(tc1_1, s21_sprintf_test_4758__);
tcase_add_test(tc1_1, s21_sprintf_test_4759__);
tcase_add_test(tc1_1, s21_sprintf_test_4760__);
tcase_add_test(tc1_1, s21_sprintf_test_4761__);
tcase_add_test(tc1_1, s21_sprintf_test_4762__);
tcase_add_test(tc1_1, s21_sprintf_test_4763__);
tcase_add_test(tc1_1, s21_sprintf_test_4764__);
tcase_add_test(tc1_1, s21_sprintf_test_4765__);
tcase_add_test(tc1_1, s21_sprintf_test_4766__);
tcase_add_test(tc1_1, s21_sprintf_test_4767__);
tcase_add_test(tc1_1, s21_sprintf_test_4768__);
tcase_add_test(tc1_1, s21_sprintf_test_4769__);
tcase_add_test(tc1_1, s21_sprintf_test_4770__);
tcase_add_test(tc1_1, s21_sprintf_test_4771__);
tcase_add_test(tc1_1, s21_sprintf_test_4772__);
tcase_add_test(tc1_1, s21_sprintf_test_4773__);
tcase_add_test(tc1_1, s21_sprintf_test_4774__);
tcase_add_test(tc1_1, s21_sprintf_test_4775__);
tcase_add_test(tc1_1, s21_sprintf_test_4776__);
tcase_add_test(tc1_1, s21_sprintf_test_4777__);
tcase_add_test(tc1_1, s21_sprintf_test_4778__);
tcase_add_test(tc1_1, s21_sprintf_test_4779__);
tcase_add_test(tc1_1, s21_sprintf_test_4780__);
tcase_add_test(tc1_1, s21_sprintf_test_4781__);
tcase_add_test(tc1_1, s21_sprintf_test_4782__);
tcase_add_test(tc1_1, s21_sprintf_test_4783__);
tcase_add_test(tc1_1, s21_sprintf_test_4784__);
tcase_add_test(tc1_1, s21_sprintf_test_4785__);
tcase_add_test(tc1_1, s21_sprintf_test_4786__);
tcase_add_test(tc1_1, s21_sprintf_test_4787__);
tcase_add_test(tc1_1, s21_sprintf_test_4788__);
tcase_add_test(tc1_1, s21_sprintf_test_4789__);
tcase_add_test(tc1_1, s21_sprintf_test_4790__);
tcase_add_test(tc1_1, s21_sprintf_test_4791__);
tcase_add_test(tc1_1, s21_sprintf_test_4792__);
tcase_add_test(tc1_1, s21_sprintf_test_4793__);
tcase_add_test(tc1_1, s21_sprintf_test_4794__);
tcase_add_test(tc1_1, s21_sprintf_test_4795__);
tcase_add_test(tc1_1, s21_sprintf_test_4796__);
tcase_add_test(tc1_1, s21_sprintf_test_4797__);
tcase_add_test(tc1_1, s21_sprintf_test_4798__);
tcase_add_test(tc1_1, s21_sprintf_test_4799__);
tcase_add_test(tc1_1, s21_sprintf_test_4800__);
tcase_add_test(tc1_1, s21_sprintf_test_4801__);
tcase_add_test(tc1_1, s21_sprintf_test_4802__);
tcase_add_test(tc1_1, s21_sprintf_test_4803__);
tcase_add_test(tc1_1, s21_sprintf_test_4804__);
tcase_add_test(tc1_1, s21_sprintf_test_4805__);
tcase_add_test(tc1_1, s21_sprintf_test_4806__);
tcase_add_test(tc1_1, s21_sprintf_test_4807__);
tcase_add_test(tc1_1, s21_sprintf_test_4808__);
tcase_add_test(tc1_1, s21_sprintf_test_4809__);
tcase_add_test(tc1_1, s21_sprintf_test_4810__);
tcase_add_test(tc1_1, s21_sprintf_test_4811__);
tcase_add_test(tc1_1, s21_sprintf_test_4812__);
tcase_add_test(tc1_1, s21_sprintf_test_4813__);
tcase_add_test(tc1_1, s21_sprintf_test_4814__);
tcase_add_test(tc1_1, s21_sprintf_test_4815__);
tcase_add_test(tc1_1, s21_sprintf_test_4816__);
tcase_add_test(tc1_1, s21_sprintf_test_4817__);
tcase_add_test(tc1_1, s21_sprintf_test_4818__);
tcase_add_test(tc1_1, s21_sprintf_test_4819__);
tcase_add_test(tc1_1, s21_sprintf_test_4820__);
tcase_add_test(tc1_1, s21_sprintf_test_4821__);
tcase_add_test(tc1_1, s21_sprintf_test_4822__);
tcase_add_test(tc1_1, s21_sprintf_test_4823__);
tcase_add_test(tc1_1, s21_sprintf_test_4824__);
tcase_add_test(tc1_1, s21_sprintf_test_4825__);
tcase_add_test(tc1_1, s21_sprintf_test_4826__);
tcase_add_test(tc1_1, s21_sprintf_test_4827__);
tcase_add_test(tc1_1, s21_sprintf_test_4828__);
tcase_add_test(tc1_1, s21_sprintf_test_4829__);
tcase_add_test(tc1_1, s21_sprintf_test_4830__);
tcase_add_test(tc1_1, s21_sprintf_test_4831__);
tcase_add_test(tc1_1, s21_sprintf_test_4832__);
tcase_add_test(tc1_1, s21_sprintf_test_4833__);
tcase_add_test(tc1_1, s21_sprintf_test_4834__);
tcase_add_test(tc1_1, s21_sprintf_test_4835__);
tcase_add_test(tc1_1, s21_sprintf_test_4836__);
tcase_add_test(tc1_1, s21_sprintf_test_4837__);
tcase_add_test(tc1_1, s21_sprintf_test_4838__);
tcase_add_test(tc1_1, s21_sprintf_test_4839__);
tcase_add_test(tc1_1, s21_sprintf_test_4840__);
tcase_add_test(tc1_1, s21_sprintf_test_4841__);
tcase_add_test(tc1_1, s21_sprintf_test_4842__);
tcase_add_test(tc1_1, s21_sprintf_test_4843__);
tcase_add_test(tc1_1, s21_sprintf_test_4844__);
tcase_add_test(tc1_1, s21_sprintf_test_4845__);
tcase_add_test(tc1_1, s21_sprintf_test_4846__);
tcase_add_test(tc1_1, s21_sprintf_test_4847__);
tcase_add_test(tc1_1, s21_sprintf_test_4848__);
tcase_add_test(tc1_1, s21_sprintf_test_4849__);
tcase_add_test(tc1_1, s21_sprintf_test_4850__);
tcase_add_test(tc1_1, s21_sprintf_test_4851__);
tcase_add_test(tc1_1, s21_sprintf_test_4852__);
tcase_add_test(tc1_1, s21_sprintf_test_4853__);
tcase_add_test(tc1_1, s21_sprintf_test_4854__);
tcase_add_test(tc1_1, s21_sprintf_test_4855__);
tcase_add_test(tc1_1, s21_sprintf_test_4856__);
tcase_add_test(tc1_1, s21_sprintf_test_4857__);
tcase_add_test(tc1_1, s21_sprintf_test_4858__);
tcase_add_test(tc1_1, s21_sprintf_test_4859__);
tcase_add_test(tc1_1, s21_sprintf_test_4860__);
tcase_add_test(tc1_1, s21_sprintf_test_4861__);
tcase_add_test(tc1_1, s21_sprintf_test_4862__);
tcase_add_test(tc1_1, s21_sprintf_test_4863__);
tcase_add_test(tc1_1, s21_sprintf_test_4864__);
tcase_add_test(tc1_1, s21_sprintf_test_4865__);
tcase_add_test(tc1_1, s21_sprintf_test_4866__);
tcase_add_test(tc1_1, s21_sprintf_test_4867__);
tcase_add_test(tc1_1, s21_sprintf_test_4868__);
tcase_add_test(tc1_1, s21_sprintf_test_4869__);
tcase_add_test(tc1_1, s21_sprintf_test_4870__);
tcase_add_test(tc1_1, s21_sprintf_test_4871__);
tcase_add_test(tc1_1, s21_sprintf_test_4872__);
tcase_add_test(tc1_1, s21_sprintf_test_4873__);
tcase_add_test(tc1_1, s21_sprintf_test_4874__);
tcase_add_test(tc1_1, s21_sprintf_test_4875__);
tcase_add_test(tc1_1, s21_sprintf_test_4876__);
tcase_add_test(tc1_1, s21_sprintf_test_4877__);
tcase_add_test(tc1_1, s21_sprintf_test_4878__);
tcase_add_test(tc1_1, s21_sprintf_test_4879__);
tcase_add_test(tc1_1, s21_sprintf_test_4880__);
tcase_add_test(tc1_1, s21_sprintf_test_4881__);
tcase_add_test(tc1_1, s21_sprintf_test_4882__);
tcase_add_test(tc1_1, s21_sprintf_test_4883__);
tcase_add_test(tc1_1, s21_sprintf_test_4884__);
tcase_add_test(tc1_1, s21_sprintf_test_4885__);
tcase_add_test(tc1_1, s21_sprintf_test_4886__);
tcase_add_test(tc1_1, s21_sprintf_test_4887__);
tcase_add_test(tc1_1, s21_sprintf_test_4888__);
tcase_add_test(tc1_1, s21_sprintf_test_4889__);
tcase_add_test(tc1_1, s21_sprintf_test_4890__);
tcase_add_test(tc1_1, s21_sprintf_test_4891__);
tcase_add_test(tc1_1, s21_sprintf_test_4892__);
tcase_add_test(tc1_1, s21_sprintf_test_4893__);
tcase_add_test(tc1_1, s21_sprintf_test_4894__);
tcase_add_test(tc1_1, s21_sprintf_test_4895__);
tcase_add_test(tc1_1, s21_sprintf_test_4896__);
tcase_add_test(tc1_1, s21_sprintf_test_4897__);
tcase_add_test(tc1_1, s21_sprintf_test_4898__);
tcase_add_test(tc1_1, s21_sprintf_test_4899__);
tcase_add_test(tc1_1, s21_sprintf_test_4900__);
tcase_add_test(tc1_1, s21_sprintf_test_4901__);
tcase_add_test(tc1_1, s21_sprintf_test_4902__);
tcase_add_test(tc1_1, s21_sprintf_test_4903__);
tcase_add_test(tc1_1, s21_sprintf_test_4904__);
tcase_add_test(tc1_1, s21_sprintf_test_4905__);
tcase_add_test(tc1_1, s21_sprintf_test_4906__);
tcase_add_test(tc1_1, s21_sprintf_test_4907__);
tcase_add_test(tc1_1, s21_sprintf_test_4908__);
tcase_add_test(tc1_1, s21_sprintf_test_4909__);
tcase_add_test(tc1_1, s21_sprintf_test_4910__);
tcase_add_test(tc1_1, s21_sprintf_test_4911__);
tcase_add_test(tc1_1, s21_sprintf_test_4912__);
tcase_add_test(tc1_1, s21_sprintf_test_4913__);
tcase_add_test(tc1_1, s21_sprintf_test_4914__);
tcase_add_test(tc1_1, s21_sprintf_test_4915__);
tcase_add_test(tc1_1, s21_sprintf_test_4916__);
tcase_add_test(tc1_1, s21_sprintf_test_4917__);
tcase_add_test(tc1_1, s21_sprintf_test_4918__);
tcase_add_test(tc1_1, s21_sprintf_test_4919__);
tcase_add_test(tc1_1, s21_sprintf_test_4920__);
tcase_add_test(tc1_1, s21_sprintf_test_4921__);
tcase_add_test(tc1_1, s21_sprintf_test_4922__);
tcase_add_test(tc1_1, s21_sprintf_test_4923__);
tcase_add_test(tc1_1, s21_sprintf_test_4924__);
tcase_add_test(tc1_1, s21_sprintf_test_4925__);
tcase_add_test(tc1_1, s21_sprintf_test_4926__);
tcase_add_test(tc1_1, s21_sprintf_test_4927__);
tcase_add_test(tc1_1, s21_sprintf_test_4928__);
tcase_add_test(tc1_1, s21_sprintf_test_4929__);
tcase_add_test(tc1_1, s21_sprintf_test_4930__);
tcase_add_test(tc1_1, s21_sprintf_test_4931__);
tcase_add_test(tc1_1, s21_sprintf_test_4932__);
tcase_add_test(tc1_1, s21_sprintf_test_4933__);
tcase_add_test(tc1_1, s21_sprintf_test_4934__);
tcase_add_test(tc1_1, s21_sprintf_test_4935__);
tcase_add_test(tc1_1, s21_sprintf_test_4936__);
tcase_add_test(tc1_1, s21_sprintf_test_4937__);
tcase_add_test(tc1_1, s21_sprintf_test_4938__);
tcase_add_test(tc1_1, s21_sprintf_test_4939__);
tcase_add_test(tc1_1, s21_sprintf_test_4940__);
tcase_add_test(tc1_1, s21_sprintf_test_4941__);
tcase_add_test(tc1_1, s21_sprintf_test_4942__);
tcase_add_test(tc1_1, s21_sprintf_test_4943__);
tcase_add_test(tc1_1, s21_sprintf_test_4944__);
tcase_add_test(tc1_1, s21_sprintf_test_4945__);
tcase_add_test(tc1_1, s21_sprintf_test_4946__);
tcase_add_test(tc1_1, s21_sprintf_test_4947__);
tcase_add_test(tc1_1, s21_sprintf_test_4948__);
tcase_add_test(tc1_1, s21_sprintf_test_4949__);
tcase_add_test(tc1_1, s21_sprintf_test_4950__);
tcase_add_test(tc1_1, s21_sprintf_test_4951__);
tcase_add_test(tc1_1, s21_sprintf_test_4952__);
tcase_add_test(tc1_1, s21_sprintf_test_4953__);
tcase_add_test(tc1_1, s21_sprintf_test_4954__);
tcase_add_test(tc1_1, s21_sprintf_test_4955__);
tcase_add_test(tc1_1, s21_sprintf_test_4956__);
tcase_add_test(tc1_1, s21_sprintf_test_4957__);
tcase_add_test(tc1_1, s21_sprintf_test_4958__);
tcase_add_test(tc1_1, s21_sprintf_test_4959__);
tcase_add_test(tc1_1, s21_sprintf_test_4960__);
tcase_add_test(tc1_1, s21_sprintf_test_4961__);
tcase_add_test(tc1_1, s21_sprintf_test_4962__);
tcase_add_test(tc1_1, s21_sprintf_test_4963__);
tcase_add_test(tc1_1, s21_sprintf_test_4964__);
tcase_add_test(tc1_1, s21_sprintf_test_4965__);
tcase_add_test(tc1_1, s21_sprintf_test_4966__);
tcase_add_test(tc1_1, s21_sprintf_test_4967__);
tcase_add_test(tc1_1, s21_sprintf_test_4968__);
tcase_add_test(tc1_1, s21_sprintf_test_4969__);
tcase_add_test(tc1_1, s21_sprintf_test_4970__);
tcase_add_test(tc1_1, s21_sprintf_test_4971__);
tcase_add_test(tc1_1, s21_sprintf_test_4972__);
tcase_add_test(tc1_1, s21_sprintf_test_4973__);
tcase_add_test(tc1_1, s21_sprintf_test_4974__);
tcase_add_test(tc1_1, s21_sprintf_test_4975__);
tcase_add_test(tc1_1, s21_sprintf_test_4976__);
tcase_add_test(tc1_1, s21_sprintf_test_4977__);
tcase_add_test(tc1_1, s21_sprintf_test_4978__);
tcase_add_test(tc1_1, s21_sprintf_test_4979__);
tcase_add_test(tc1_1, s21_sprintf_test_4980__);
tcase_add_test(tc1_1, s21_sprintf_test_4981__);
tcase_add_test(tc1_1, s21_sprintf_test_4982__);
tcase_add_test(tc1_1, s21_sprintf_test_4983__);
tcase_add_test(tc1_1, s21_sprintf_test_4984__);
tcase_add_test(tc1_1, s21_sprintf_test_4985__);
tcase_add_test(tc1_1, s21_sprintf_test_4986__);
tcase_add_test(tc1_1, s21_sprintf_test_4987__);
tcase_add_test(tc1_1, s21_sprintf_test_4988__);
tcase_add_test(tc1_1, s21_sprintf_test_4989__);
tcase_add_test(tc1_1, s21_sprintf_test_4990__);
tcase_add_test(tc1_1, s21_sprintf_test_4991__);
tcase_add_test(tc1_1, s21_sprintf_test_4992__);
tcase_add_test(tc1_1, s21_sprintf_test_4993__);
tcase_add_test(tc1_1, s21_sprintf_test_4994__);
tcase_add_test(tc1_1, s21_sprintf_test_4995__);
tcase_add_test(tc1_1, s21_sprintf_test_4996__);
tcase_add_test(tc1_1, s21_sprintf_test_4997__);
tcase_add_test(tc1_1, s21_sprintf_test_4998__);
tcase_add_test(tc1_1, s21_sprintf_test_4999__);
tcase_add_test(tc1_1, s21_sprintf_test_5000__);
tcase_add_test(tc1_1, s21_sprintf_test_5001__);
tcase_add_test(tc1_1, s21_sprintf_test_5002__);
tcase_add_test(tc1_1, s21_sprintf_test_5003__);
tcase_add_test(tc1_1, s21_sprintf_test_5004__);
tcase_add_test(tc1_1, s21_sprintf_test_5005__);
tcase_add_test(tc1_1, s21_sprintf_test_5006__);
tcase_add_test(tc1_1, s21_sprintf_test_5007__);
tcase_add_test(tc1_1, s21_sprintf_test_5008__);
tcase_add_test(tc1_1, s21_sprintf_test_5009__);
tcase_add_test(tc1_1, s21_sprintf_test_5010__);
tcase_add_test(tc1_1, s21_sprintf_test_5011__);
tcase_add_test(tc1_1, s21_sprintf_test_5012__);
tcase_add_test(tc1_1, s21_sprintf_test_5013__);
tcase_add_test(tc1_1, s21_sprintf_test_5014__);
tcase_add_test(tc1_1, s21_sprintf_test_5015__);
tcase_add_test(tc1_1, s21_sprintf_test_5016__);
tcase_add_test(tc1_1, s21_sprintf_test_5017__);
tcase_add_test(tc1_1, s21_sprintf_test_5018__);
tcase_add_test(tc1_1, s21_sprintf_test_5019__);
tcase_add_test(tc1_1, s21_sprintf_test_5020__);
tcase_add_test(tc1_1, s21_sprintf_test_5021__);
tcase_add_test(tc1_1, s21_sprintf_test_5022__);
tcase_add_test(tc1_1, s21_sprintf_test_5023__);
tcase_add_test(tc1_1, s21_sprintf_test_5024__);
tcase_add_test(tc1_1, s21_sprintf_test_5025__);
tcase_add_test(tc1_1, s21_sprintf_test_5026__);
tcase_add_test(tc1_1, s21_sprintf_test_5027__);
tcase_add_test(tc1_1, s21_sprintf_test_5028__);
tcase_add_test(tc1_1, s21_sprintf_test_5029__);
tcase_add_test(tc1_1, s21_sprintf_test_5030__);
tcase_add_test(tc1_1, s21_sprintf_test_5031__);
tcase_add_test(tc1_1, s21_sprintf_test_5032__);
tcase_add_test(tc1_1, s21_sprintf_test_5033__);
tcase_add_test(tc1_1, s21_sprintf_test_5034__);
tcase_add_test(tc1_1, s21_sprintf_test_5035__);
tcase_add_test(tc1_1, s21_sprintf_test_5036__);
tcase_add_test(tc1_1, s21_sprintf_test_5037__);
tcase_add_test(tc1_1, s21_sprintf_test_5038__);
tcase_add_test(tc1_1, s21_sprintf_test_5039__);
tcase_add_test(tc1_1, s21_sprintf_test_5040__);
tcase_add_test(tc1_1, s21_sprintf_test_5041__);
tcase_add_test(tc1_1, s21_sprintf_test_5042__);
tcase_add_test(tc1_1, s21_sprintf_test_5043__);
tcase_add_test(tc1_1, s21_sprintf_test_5044__);
tcase_add_test(tc1_1, s21_sprintf_test_5045__);
tcase_add_test(tc1_1, s21_sprintf_test_5046__);
tcase_add_test(tc1_1, s21_sprintf_test_5047__);
tcase_add_test(tc1_1, s21_sprintf_test_5048__);
tcase_add_test(tc1_1, s21_sprintf_test_5049__);
tcase_add_test(tc1_1, s21_sprintf_test_5050__);
tcase_add_test(tc1_1, s21_sprintf_test_5051__);
tcase_add_test(tc1_1, s21_sprintf_test_5052__);
tcase_add_test(tc1_1, s21_sprintf_test_5053__);
tcase_add_test(tc1_1, s21_sprintf_test_5054__);
tcase_add_test(tc1_1, s21_sprintf_test_5055__);
tcase_add_test(tc1_1, s21_sprintf_test_5056__);
tcase_add_test(tc1_1, s21_sprintf_test_5057__);
tcase_add_test(tc1_1, s21_sprintf_test_5058__);
tcase_add_test(tc1_1, s21_sprintf_test_5059__);
tcase_add_test(tc1_1, s21_sprintf_test_5060__);
tcase_add_test(tc1_1, s21_sprintf_test_5061__);
tcase_add_test(tc1_1, s21_sprintf_test_5062__);
tcase_add_test(tc1_1, s21_sprintf_test_5063__);
tcase_add_test(tc1_1, s21_sprintf_test_5064__);
tcase_add_test(tc1_1, s21_sprintf_test_5065__);
tcase_add_test(tc1_1, s21_sprintf_test_5066__);
tcase_add_test(tc1_1, s21_sprintf_test_5067__);
tcase_add_test(tc1_1, s21_sprintf_test_5068__);
tcase_add_test(tc1_1, s21_sprintf_test_5069__);
tcase_add_test(tc1_1, s21_sprintf_test_5070__);
tcase_add_test(tc1_1, s21_sprintf_test_5071__);
tcase_add_test(tc1_1, s21_sprintf_test_5072__);
tcase_add_test(tc1_1, s21_sprintf_test_5073__);
tcase_add_test(tc1_1, s21_sprintf_test_5074__);
tcase_add_test(tc1_1, s21_sprintf_test_5075__);
tcase_add_test(tc1_1, s21_sprintf_test_5076__);
tcase_add_test(tc1_1, s21_sprintf_test_5077__);
tcase_add_test(tc1_1, s21_sprintf_test_5078__);
tcase_add_test(tc1_1, s21_sprintf_test_5079__);
tcase_add_test(tc1_1, s21_sprintf_test_5080__);
tcase_add_test(tc1_1, s21_sprintf_test_5081__);
tcase_add_test(tc1_1, s21_sprintf_test_5082__);
tcase_add_test(tc1_1, s21_sprintf_test_5083__);
tcase_add_test(tc1_1, s21_sprintf_test_5084__);
tcase_add_test(tc1_1, s21_sprintf_test_5085__);
tcase_add_test(tc1_1, s21_sprintf_test_5086__);
tcase_add_test(tc1_1, s21_sprintf_test_5087__);
tcase_add_test(tc1_1, s21_sprintf_test_5088__);
tcase_add_test(tc1_1, s21_sprintf_test_5089__);
tcase_add_test(tc1_1, s21_sprintf_test_5090__);
tcase_add_test(tc1_1, s21_sprintf_test_5091__);
tcase_add_test(tc1_1, s21_sprintf_test_5092__);
tcase_add_test(tc1_1, s21_sprintf_test_5093__);
tcase_add_test(tc1_1, s21_sprintf_test_5094__);
tcase_add_test(tc1_1, s21_sprintf_test_5095__);
tcase_add_test(tc1_1, s21_sprintf_test_5096__);
tcase_add_test(tc1_1, s21_sprintf_test_5097__);
tcase_add_test(tc1_1, s21_sprintf_test_5098__);
tcase_add_test(tc1_1, s21_sprintf_test_5099__);
tcase_add_test(tc1_1, s21_sprintf_test_5100__);
tcase_add_test(tc1_1, s21_sprintf_test_5101__);
tcase_add_test(tc1_1, s21_sprintf_test_5102__);
tcase_add_test(tc1_1, s21_sprintf_test_5103__);
tcase_add_test(tc1_1, s21_sprintf_test_5104__);
tcase_add_test(tc1_1, s21_sprintf_test_5105__);
tcase_add_test(tc1_1, s21_sprintf_test_5106__);
tcase_add_test(tc1_1, s21_sprintf_test_5107__);
tcase_add_test(tc1_1, s21_sprintf_test_5108__);
tcase_add_test(tc1_1, s21_sprintf_test_5109__);
tcase_add_test(tc1_1, s21_sprintf_test_5110__);
tcase_add_test(tc1_1, s21_sprintf_test_5111__);
tcase_add_test(tc1_1, s21_sprintf_test_5112__);
tcase_add_test(tc1_1, s21_sprintf_test_5113__);
tcase_add_test(tc1_1, s21_sprintf_test_5114__);
tcase_add_test(tc1_1, s21_sprintf_test_5115__);
tcase_add_test(tc1_1, s21_sprintf_test_5116__);
tcase_add_test(tc1_1, s21_sprintf_test_5117__);
tcase_add_test(tc1_1, s21_sprintf_test_5118__);
tcase_add_test(tc1_1, s21_sprintf_test_5119__);
tcase_add_test(tc1_1, s21_sprintf_test_5120__);
tcase_add_test(tc1_1, s21_sprintf_test_5121__);
tcase_add_test(tc1_1, s21_sprintf_test_5122__);
tcase_add_test(tc1_1, s21_sprintf_test_5123__);
tcase_add_test(tc1_1, s21_sprintf_test_5124__);
tcase_add_test(tc1_1, s21_sprintf_test_5125__);
tcase_add_test(tc1_1, s21_sprintf_test_5126__);
tcase_add_test(tc1_1, s21_sprintf_test_5127__);
tcase_add_test(tc1_1, s21_sprintf_test_5128__);
tcase_add_test(tc1_1, s21_sprintf_test_5129__);
tcase_add_test(tc1_1, s21_sprintf_test_5130__);
tcase_add_test(tc1_1, s21_sprintf_test_5131__);
tcase_add_test(tc1_1, s21_sprintf_test_5132__);
tcase_add_test(tc1_1, s21_sprintf_test_5133__);
tcase_add_test(tc1_1, s21_sprintf_test_5134__);
tcase_add_test(tc1_1, s21_sprintf_test_5135__);
tcase_add_test(tc1_1, s21_sprintf_test_5136__);
tcase_add_test(tc1_1, s21_sprintf_test_5137__);
tcase_add_test(tc1_1, s21_sprintf_test_5138__);
tcase_add_test(tc1_1, s21_sprintf_test_5139__);
tcase_add_test(tc1_1, s21_sprintf_test_5140__);
tcase_add_test(tc1_1, s21_sprintf_test_5141__);
tcase_add_test(tc1_1, s21_sprintf_test_5142__);
tcase_add_test(tc1_1, s21_sprintf_test_5143__);
tcase_add_test(tc1_1, s21_sprintf_test_5144__);
tcase_add_test(tc1_1, s21_sprintf_test_5145__);
tcase_add_test(tc1_1, s21_sprintf_test_5146__);
tcase_add_test(tc1_1, s21_sprintf_test_5147__);
tcase_add_test(tc1_1, s21_sprintf_test_5148__);
tcase_add_test(tc1_1, s21_sprintf_test_5149__);
tcase_add_test(tc1_1, s21_sprintf_test_5150__);
tcase_add_test(tc1_1, s21_sprintf_test_5151__);
tcase_add_test(tc1_1, s21_sprintf_test_5152__);
tcase_add_test(tc1_1, s21_sprintf_test_5153__);
tcase_add_test(tc1_1, s21_sprintf_test_5154__);
tcase_add_test(tc1_1, s21_sprintf_test_5155__);
tcase_add_test(tc1_1, s21_sprintf_test_5156__);
tcase_add_test(tc1_1, s21_sprintf_test_5157__);
tcase_add_test(tc1_1, s21_sprintf_test_5158__);
tcase_add_test(tc1_1, s21_sprintf_test_5159__);
tcase_add_test(tc1_1, s21_sprintf_test_5160__);
tcase_add_test(tc1_1, s21_sprintf_test_5161__);
tcase_add_test(tc1_1, s21_sprintf_test_5162__);
tcase_add_test(tc1_1, s21_sprintf_test_5163__);
tcase_add_test(tc1_1, s21_sprintf_test_5164__);
tcase_add_test(tc1_1, s21_sprintf_test_5165__);
tcase_add_test(tc1_1, s21_sprintf_test_5166__);
tcase_add_test(tc1_1, s21_sprintf_test_5167__);
tcase_add_test(tc1_1, s21_sprintf_test_5168__);
tcase_add_test(tc1_1, s21_sprintf_test_5169__);
tcase_add_test(tc1_1, s21_sprintf_test_5170__);
tcase_add_test(tc1_1, s21_sprintf_test_5171__);
tcase_add_test(tc1_1, s21_sprintf_test_5172__);
tcase_add_test(tc1_1, s21_sprintf_test_5173__);
tcase_add_test(tc1_1, s21_sprintf_test_5174__);
tcase_add_test(tc1_1, s21_sprintf_test_5175__);
tcase_add_test(tc1_1, s21_sprintf_test_5176__);
tcase_add_test(tc1_1, s21_sprintf_test_5177__);
tcase_add_test(tc1_1, s21_sprintf_test_5178__);
tcase_add_test(tc1_1, s21_sprintf_test_5179__);
tcase_add_test(tc1_1, s21_sprintf_test_5180__);
tcase_add_test(tc1_1, s21_sprintf_test_5181__);
tcase_add_test(tc1_1, s21_sprintf_test_5182__);
tcase_add_test(tc1_1, s21_sprintf_test_5183__);
tcase_add_test(tc1_1, s21_sprintf_test_5184__);
tcase_add_test(tc1_1, s21_sprintf_test_5185__);
tcase_add_test(tc1_1, s21_sprintf_test_5186__);
tcase_add_test(tc1_1, s21_sprintf_test_5187__);
tcase_add_test(tc1_1, s21_sprintf_test_5188__);
tcase_add_test(tc1_1, s21_sprintf_test_5189__);
tcase_add_test(tc1_1, s21_sprintf_test_5190__);
tcase_add_test(tc1_1, s21_sprintf_test_5191__);
tcase_add_test(tc1_1, s21_sprintf_test_5192__);
tcase_add_test(tc1_1, s21_sprintf_test_5193__);
tcase_add_test(tc1_1, s21_sprintf_test_5194__);
tcase_add_test(tc1_1, s21_sprintf_test_5195__);
tcase_add_test(tc1_1, s21_sprintf_test_5196__);
tcase_add_test(tc1_1, s21_sprintf_test_5197__);
tcase_add_test(tc1_1, s21_sprintf_test_5198__);
tcase_add_test(tc1_1, s21_sprintf_test_5199__);
tcase_add_test(tc1_1, s21_sprintf_test_5200__);
tcase_add_test(tc1_1, s21_sprintf_test_5201__);
tcase_add_test(tc1_1, s21_sprintf_test_5202__);
tcase_add_test(tc1_1, s21_sprintf_test_5203__);
tcase_add_test(tc1_1, s21_sprintf_test_5204__);
tcase_add_test(tc1_1, s21_sprintf_test_5205__);
tcase_add_test(tc1_1, s21_sprintf_test_5206__);
tcase_add_test(tc1_1, s21_sprintf_test_5207__);
tcase_add_test(tc1_1, s21_sprintf_test_5208__);
tcase_add_test(tc1_1, s21_sprintf_test_5209__);
tcase_add_test(tc1_1, s21_sprintf_test_5210__);
tcase_add_test(tc1_1, s21_sprintf_test_5211__);
tcase_add_test(tc1_1, s21_sprintf_test_5212__);
tcase_add_test(tc1_1, s21_sprintf_test_5213__);
tcase_add_test(tc1_1, s21_sprintf_test_5214__);
tcase_add_test(tc1_1, s21_sprintf_test_5215__);
tcase_add_test(tc1_1, s21_sprintf_test_5216__);
tcase_add_test(tc1_1, s21_sprintf_test_5217__);
tcase_add_test(tc1_1, s21_sprintf_test_5218__);
tcase_add_test(tc1_1, s21_sprintf_test_5219__);
tcase_add_test(tc1_1, s21_sprintf_test_5220__);
tcase_add_test(tc1_1, s21_sprintf_test_5221__);
tcase_add_test(tc1_1, s21_sprintf_test_5222__);
tcase_add_test(tc1_1, s21_sprintf_test_5223__);
tcase_add_test(tc1_1, s21_sprintf_test_5224__);
tcase_add_test(tc1_1, s21_sprintf_test_5225__);
tcase_add_test(tc1_1, s21_sprintf_test_5226__);
tcase_add_test(tc1_1, s21_sprintf_test_5227__);
tcase_add_test(tc1_1, s21_sprintf_test_5228__);
tcase_add_test(tc1_1, s21_sprintf_test_5229__);
tcase_add_test(tc1_1, s21_sprintf_test_5230__);
tcase_add_test(tc1_1, s21_sprintf_test_5231__);
tcase_add_test(tc1_1, s21_sprintf_test_5232__);
tcase_add_test(tc1_1, s21_sprintf_test_5233__);
tcase_add_test(tc1_1, s21_sprintf_test_5234__);
tcase_add_test(tc1_1, s21_sprintf_test_5235__);
tcase_add_test(tc1_1, s21_sprintf_test_5236__);
tcase_add_test(tc1_1, s21_sprintf_test_5237__);
tcase_add_test(tc1_1, s21_sprintf_test_5238__);
tcase_add_test(tc1_1, s21_sprintf_test_5239__);
tcase_add_test(tc1_1, s21_sprintf_test_5240__);
tcase_add_test(tc1_1, s21_sprintf_test_5241__);
tcase_add_test(tc1_1, s21_sprintf_test_5242__);
tcase_add_test(tc1_1, s21_sprintf_test_5243__);
tcase_add_test(tc1_1, s21_sprintf_test_5244__);
tcase_add_test(tc1_1, s21_sprintf_test_5245__);
tcase_add_test(tc1_1, s21_sprintf_test_5246__);
tcase_add_test(tc1_1, s21_sprintf_test_5247__);
tcase_add_test(tc1_1, s21_sprintf_test_5248__);
tcase_add_test(tc1_1, s21_sprintf_test_5249__);
tcase_add_test(tc1_1, s21_sprintf_test_5250__);
tcase_add_test(tc1_1, s21_sprintf_test_5251__);
tcase_add_test(tc1_1, s21_sprintf_test_5252__);
tcase_add_test(tc1_1, s21_sprintf_test_5253__);
tcase_add_test(tc1_1, s21_sprintf_test_5254__);
tcase_add_test(tc1_1, s21_sprintf_test_5255__);
tcase_add_test(tc1_1, s21_sprintf_test_5256__);
tcase_add_test(tc1_1, s21_sprintf_test_5257__);
tcase_add_test(tc1_1, s21_sprintf_test_5258__);
tcase_add_test(tc1_1, s21_sprintf_test_5259__);
tcase_add_test(tc1_1, s21_sprintf_test_5260__);
tcase_add_test(tc1_1, s21_sprintf_test_5261__);
tcase_add_test(tc1_1, s21_sprintf_test_5262__);
tcase_add_test(tc1_1, s21_sprintf_test_5263__);
tcase_add_test(tc1_1, s21_sprintf_test_5264__);
tcase_add_test(tc1_1, s21_sprintf_test_5265__);
tcase_add_test(tc1_1, s21_sprintf_test_5266__);
tcase_add_test(tc1_1, s21_sprintf_test_5267__);
tcase_add_test(tc1_1, s21_sprintf_test_5268__);
tcase_add_test(tc1_1, s21_sprintf_test_5269__);
tcase_add_test(tc1_1, s21_sprintf_test_5270__);
tcase_add_test(tc1_1, s21_sprintf_test_5271__);
tcase_add_test(tc1_1, s21_sprintf_test_5272__);
tcase_add_test(tc1_1, s21_sprintf_test_5273__);
tcase_add_test(tc1_1, s21_sprintf_test_5274__);
tcase_add_test(tc1_1, s21_sprintf_test_5275__);
tcase_add_test(tc1_1, s21_sprintf_test_5276__);
tcase_add_test(tc1_1, s21_sprintf_test_5277__);
tcase_add_test(tc1_1, s21_sprintf_test_5278__);
tcase_add_test(tc1_1, s21_sprintf_test_5279__);
tcase_add_test(tc1_1, s21_sprintf_test_5280__);
tcase_add_test(tc1_1, s21_sprintf_test_5281__);
tcase_add_test(tc1_1, s21_sprintf_test_5282__);
tcase_add_test(tc1_1, s21_sprintf_test_5283__);
tcase_add_test(tc1_1, s21_sprintf_test_5284__);
tcase_add_test(tc1_1, s21_sprintf_test_5285__);
tcase_add_test(tc1_1, s21_sprintf_test_5286__);
tcase_add_test(tc1_1, s21_sprintf_test_5287__);
tcase_add_test(tc1_1, s21_sprintf_test_5288__);
tcase_add_test(tc1_1, s21_sprintf_test_5289__);
tcase_add_test(tc1_1, s21_sprintf_test_5290__);
tcase_add_test(tc1_1, s21_sprintf_test_5291__);
tcase_add_test(tc1_1, s21_sprintf_test_5292__);
tcase_add_test(tc1_1, s21_sprintf_test_5293__);
tcase_add_test(tc1_1, s21_sprintf_test_5294__);
tcase_add_test(tc1_1, s21_sprintf_test_5295__);
tcase_add_test(tc1_1, s21_sprintf_test_5296__);
tcase_add_test(tc1_1, s21_sprintf_test_5297__);
tcase_add_test(tc1_1, s21_sprintf_test_5298__);
tcase_add_test(tc1_1, s21_sprintf_test_5299__);
tcase_add_test(tc1_1, s21_sprintf_test_5300__);
tcase_add_test(tc1_1, s21_sprintf_test_5301__);
tcase_add_test(tc1_1, s21_sprintf_test_5302__);
tcase_add_test(tc1_1, s21_sprintf_test_5303__);
tcase_add_test(tc1_1, s21_sprintf_test_5304__);
tcase_add_test(tc1_1, s21_sprintf_test_5305__);
tcase_add_test(tc1_1, s21_sprintf_test_5306__);
tcase_add_test(tc1_1, s21_sprintf_test_5307__);
tcase_add_test(tc1_1, s21_sprintf_test_5308__);
tcase_add_test(tc1_1, s21_sprintf_test_5309__);
tcase_add_test(tc1_1, s21_sprintf_test_5310__);
tcase_add_test(tc1_1, s21_sprintf_test_5311__);
tcase_add_test(tc1_1, s21_sprintf_test_5312__);
tcase_add_test(tc1_1, s21_sprintf_test_5313__);
tcase_add_test(tc1_1, s21_sprintf_test_5314__);
tcase_add_test(tc1_1, s21_sprintf_test_5315__);
tcase_add_test(tc1_1, s21_sprintf_test_5316__);
tcase_add_test(tc1_1, s21_sprintf_test_5317__);
tcase_add_test(tc1_1, s21_sprintf_test_5318__);
tcase_add_test(tc1_1, s21_sprintf_test_5319__);
tcase_add_test(tc1_1, s21_sprintf_test_5320__);
tcase_add_test(tc1_1, s21_sprintf_test_5321__);
tcase_add_test(tc1_1, s21_sprintf_test_5322__);
tcase_add_test(tc1_1, s21_sprintf_test_5323__);
tcase_add_test(tc1_1, s21_sprintf_test_5324__);
tcase_add_test(tc1_1, s21_sprintf_test_5325__);
tcase_add_test(tc1_1, s21_sprintf_test_5326__);
tcase_add_test(tc1_1, s21_sprintf_test_5327__);
tcase_add_test(tc1_1, s21_sprintf_test_5328__);
tcase_add_test(tc1_1, s21_sprintf_test_5329__);
tcase_add_test(tc1_1, s21_sprintf_test_5330__);
tcase_add_test(tc1_1, s21_sprintf_test_5331__);
tcase_add_test(tc1_1, s21_sprintf_test_5332__);
tcase_add_test(tc1_1, s21_sprintf_test_5333__);
tcase_add_test(tc1_1, s21_sprintf_test_5334__);
tcase_add_test(tc1_1, s21_sprintf_test_5335__);
tcase_add_test(tc1_1, s21_sprintf_test_5336__);
tcase_add_test(tc1_1, s21_sprintf_test_5337__);
tcase_add_test(tc1_1, s21_sprintf_test_5338__);
tcase_add_test(tc1_1, s21_sprintf_test_5339__);
tcase_add_test(tc1_1, s21_sprintf_test_5340__);
tcase_add_test(tc1_1, s21_sprintf_test_5341__);
tcase_add_test(tc1_1, s21_sprintf_test_5342__);
tcase_add_test(tc1_1, s21_sprintf_test_5343__);
tcase_add_test(tc1_1, s21_sprintf_test_5344__);
tcase_add_test(tc1_1, s21_sprintf_test_5345__);
tcase_add_test(tc1_1, s21_sprintf_test_5346__);
tcase_add_test(tc1_1, s21_sprintf_test_5347__);
tcase_add_test(tc1_1, s21_sprintf_test_5348__);
tcase_add_test(tc1_1, s21_sprintf_test_5349__);
tcase_add_test(tc1_1, s21_sprintf_test_5350__);
tcase_add_test(tc1_1, s21_sprintf_test_5351__);
tcase_add_test(tc1_1, s21_sprintf_test_5352__);
tcase_add_test(tc1_1, s21_sprintf_test_5353__);
tcase_add_test(tc1_1, s21_sprintf_test_5354__);
tcase_add_test(tc1_1, s21_sprintf_test_5355__);
tcase_add_test(tc1_1, s21_sprintf_test_5356__);
tcase_add_test(tc1_1, s21_sprintf_test_5357__);
tcase_add_test(tc1_1, s21_sprintf_test_5358__);
tcase_add_test(tc1_1, s21_sprintf_test_5359__);
tcase_add_test(tc1_1, s21_sprintf_test_5360__);
tcase_add_test(tc1_1, s21_sprintf_test_5361__);
tcase_add_test(tc1_1, s21_sprintf_test_5362__);
tcase_add_test(tc1_1, s21_sprintf_test_5363__);
tcase_add_test(tc1_1, s21_sprintf_test_5364__);
tcase_add_test(tc1_1, s21_sprintf_test_5365__);
tcase_add_test(tc1_1, s21_sprintf_test_5366__);
tcase_add_test(tc1_1, s21_sprintf_test_5367__);
tcase_add_test(tc1_1, s21_sprintf_test_5368__);
tcase_add_test(tc1_1, s21_sprintf_test_5369__);
tcase_add_test(tc1_1, s21_sprintf_test_5370__);
tcase_add_test(tc1_1, s21_sprintf_test_5371__);
tcase_add_test(tc1_1, s21_sprintf_test_5372__);
tcase_add_test(tc1_1, s21_sprintf_test_5373__);
tcase_add_test(tc1_1, s21_sprintf_test_5374__);
tcase_add_test(tc1_1, s21_sprintf_test_5375__);
tcase_add_test(tc1_1, s21_sprintf_test_5376__);
tcase_add_test(tc1_1, s21_sprintf_test_5377__);
tcase_add_test(tc1_1, s21_sprintf_test_5378__);
tcase_add_test(tc1_1, s21_sprintf_test_5379__);
tcase_add_test(tc1_1, s21_sprintf_test_5380__);
tcase_add_test(tc1_1, s21_sprintf_test_5381__);
tcase_add_test(tc1_1, s21_sprintf_test_5382__);
tcase_add_test(tc1_1, s21_sprintf_test_5383__);
tcase_add_test(tc1_1, s21_sprintf_test_5384__);
tcase_add_test(tc1_1, s21_sprintf_test_5385__);
tcase_add_test(tc1_1, s21_sprintf_test_5386__);
tcase_add_test(tc1_1, s21_sprintf_test_5387__);
tcase_add_test(tc1_1, s21_sprintf_test_5388__);
tcase_add_test(tc1_1, s21_sprintf_test_5389__);
tcase_add_test(tc1_1, s21_sprintf_test_5390__);
tcase_add_test(tc1_1, s21_sprintf_test_5391__);
tcase_add_test(tc1_1, s21_sprintf_test_5392__);
tcase_add_test(tc1_1, s21_sprintf_test_5393__);
tcase_add_test(tc1_1, s21_sprintf_test_5394__);
tcase_add_test(tc1_1, s21_sprintf_test_5395__);
tcase_add_test(tc1_1, s21_sprintf_test_5396__);
tcase_add_test(tc1_1, s21_sprintf_test_5397__);
tcase_add_test(tc1_1, s21_sprintf_test_5398__);
tcase_add_test(tc1_1, s21_sprintf_test_5399__);
tcase_add_test(tc1_1, s21_sprintf_test_5400__);
tcase_add_test(tc1_1, s21_sprintf_test_5401__);
tcase_add_test(tc1_1, s21_sprintf_test_5402__);
tcase_add_test(tc1_1, s21_sprintf_test_5403__);
tcase_add_test(tc1_1, s21_sprintf_test_5404__);
tcase_add_test(tc1_1, s21_sprintf_test_5405__);
tcase_add_test(tc1_1, s21_sprintf_test_5406__);
tcase_add_test(tc1_1, s21_sprintf_test_5407__);
tcase_add_test(tc1_1, s21_sprintf_test_5408__);
tcase_add_test(tc1_1, s21_sprintf_test_5409__);
tcase_add_test(tc1_1, s21_sprintf_test_5410__);
tcase_add_test(tc1_1, s21_sprintf_test_5411__);
tcase_add_test(tc1_1, s21_sprintf_test_5412__);
tcase_add_test(tc1_1, s21_sprintf_test_5413__);
tcase_add_test(tc1_1, s21_sprintf_test_5414__);
tcase_add_test(tc1_1, s21_sprintf_test_5415__);
tcase_add_test(tc1_1, s21_sprintf_test_5416__);
tcase_add_test(tc1_1, s21_sprintf_test_5417__);
tcase_add_test(tc1_1, s21_sprintf_test_5418__);
tcase_add_test(tc1_1, s21_sprintf_test_5419__);
tcase_add_test(tc1_1, s21_sprintf_test_5420__);
tcase_add_test(tc1_1, s21_sprintf_test_5421__);
tcase_add_test(tc1_1, s21_sprintf_test_5422__);
tcase_add_test(tc1_1, s21_sprintf_test_5423__);
tcase_add_test(tc1_1, s21_sprintf_test_5424__);
tcase_add_test(tc1_1, s21_sprintf_test_5425__);
tcase_add_test(tc1_1, s21_sprintf_test_5426__);
tcase_add_test(tc1_1, s21_sprintf_test_5427__);
tcase_add_test(tc1_1, s21_sprintf_test_5428__);
tcase_add_test(tc1_1, s21_sprintf_test_5429__);
tcase_add_test(tc1_1, s21_sprintf_test_5430__);
tcase_add_test(tc1_1, s21_sprintf_test_5431__);
tcase_add_test(tc1_1, s21_sprintf_test_5432__);
tcase_add_test(tc1_1, s21_sprintf_test_5433__);
tcase_add_test(tc1_1, s21_sprintf_test_5434__);
tcase_add_test(tc1_1, s21_sprintf_test_5435__);
tcase_add_test(tc1_1, s21_sprintf_test_5436__);
tcase_add_test(tc1_1, s21_sprintf_test_5437__);
tcase_add_test(tc1_1, s21_sprintf_test_5438__);
tcase_add_test(tc1_1, s21_sprintf_test_5439__);
tcase_add_test(tc1_1, s21_sprintf_test_5440__);
tcase_add_test(tc1_1, s21_sprintf_test_5441__);
tcase_add_test(tc1_1, s21_sprintf_test_5442__);
tcase_add_test(tc1_1, s21_sprintf_test_5443__);
tcase_add_test(tc1_1, s21_sprintf_test_5444__);
tcase_add_test(tc1_1, s21_sprintf_test_5445__);
tcase_add_test(tc1_1, s21_sprintf_test_5446__);
tcase_add_test(tc1_1, s21_sprintf_test_5447__);
tcase_add_test(tc1_1, s21_sprintf_test_5448__);
tcase_add_test(tc1_1, s21_sprintf_test_5449__);
tcase_add_test(tc1_1, s21_sprintf_test_5450__);
tcase_add_test(tc1_1, s21_sprintf_test_5451__);
tcase_add_test(tc1_1, s21_sprintf_test_5452__);
tcase_add_test(tc1_1, s21_sprintf_test_5453__);
tcase_add_test(tc1_1, s21_sprintf_test_5454__);
tcase_add_test(tc1_1, s21_sprintf_test_5455__);
tcase_add_test(tc1_1, s21_sprintf_test_5456__);
tcase_add_test(tc1_1, s21_sprintf_test_5457__);
tcase_add_test(tc1_1, s21_sprintf_test_5458__);
tcase_add_test(tc1_1, s21_sprintf_test_5459__);
tcase_add_test(tc1_1, s21_sprintf_test_5460__);
tcase_add_test(tc1_1, s21_sprintf_test_5461__);
tcase_add_test(tc1_1, s21_sprintf_test_5462__);
tcase_add_test(tc1_1, s21_sprintf_test_5463__);
tcase_add_test(tc1_1, s21_sprintf_test_5464__);
tcase_add_test(tc1_1, s21_sprintf_test_5465__);
tcase_add_test(tc1_1, s21_sprintf_test_5466__);
tcase_add_test(tc1_1, s21_sprintf_test_5467__);
tcase_add_test(tc1_1, s21_sprintf_test_5468__);
tcase_add_test(tc1_1, s21_sprintf_test_5469__);
tcase_add_test(tc1_1, s21_sprintf_test_5470__);
tcase_add_test(tc1_1, s21_sprintf_test_5471__);
tcase_add_test(tc1_1, s21_sprintf_test_5472__);
tcase_add_test(tc1_1, s21_sprintf_test_5473__);
tcase_add_test(tc1_1, s21_sprintf_test_5474__);
tcase_add_test(tc1_1, s21_sprintf_test_5475__);
tcase_add_test(tc1_1, s21_sprintf_test_5476__);
tcase_add_test(tc1_1, s21_sprintf_test_5477__);
tcase_add_test(tc1_1, s21_sprintf_test_5478__);
tcase_add_test(tc1_1, s21_sprintf_test_5479__);
tcase_add_test(tc1_1, s21_sprintf_test_5480__);
tcase_add_test(tc1_1, s21_sprintf_test_5481__);
tcase_add_test(tc1_1, s21_sprintf_test_5482__);
tcase_add_test(tc1_1, s21_sprintf_test_5483__);
tcase_add_test(tc1_1, s21_sprintf_test_5484__);
tcase_add_test(tc1_1, s21_sprintf_test_5485__);
tcase_add_test(tc1_1, s21_sprintf_test_5486__);
tcase_add_test(tc1_1, s21_sprintf_test_5487__);
tcase_add_test(tc1_1, s21_sprintf_test_5488__);
tcase_add_test(tc1_1, s21_sprintf_test_5489__);
tcase_add_test(tc1_1, s21_sprintf_test_5490__);
tcase_add_test(tc1_1, s21_sprintf_test_5491__);
tcase_add_test(tc1_1, s21_sprintf_test_5492__);
tcase_add_test(tc1_1, s21_sprintf_test_5493__);
tcase_add_test(tc1_1, s21_sprintf_test_5494__);
tcase_add_test(tc1_1, s21_sprintf_test_5495__);
tcase_add_test(tc1_1, s21_sprintf_test_5496__);
tcase_add_test(tc1_1, s21_sprintf_test_5497__);
tcase_add_test(tc1_1, s21_sprintf_test_5498__);
tcase_add_test(tc1_1, s21_sprintf_test_5499__);
tcase_add_test(tc1_1, s21_sprintf_test_5500__);
tcase_add_test(tc1_1, s21_sprintf_test_5501__);
tcase_add_test(tc1_1, s21_sprintf_test_5502__);
tcase_add_test(tc1_1, s21_sprintf_test_5503__);
tcase_add_test(tc1_1, s21_sprintf_test_5504__);
tcase_add_test(tc1_1, s21_sprintf_test_5505__);
tcase_add_test(tc1_1, s21_sprintf_test_5506__);
tcase_add_test(tc1_1, s21_sprintf_test_5507__);
tcase_add_test(tc1_1, s21_sprintf_test_5508__);
tcase_add_test(tc1_1, s21_sprintf_test_5509__);
tcase_add_test(tc1_1, s21_sprintf_test_5510__);
tcase_add_test(tc1_1, s21_sprintf_test_5511__);
tcase_add_test(tc1_1, s21_sprintf_test_5512__);
tcase_add_test(tc1_1, s21_sprintf_test_5513__);
tcase_add_test(tc1_1, s21_sprintf_test_5514__);
tcase_add_test(tc1_1, s21_sprintf_test_5515__);
tcase_add_test(tc1_1, s21_sprintf_test_5516__);
tcase_add_test(tc1_1, s21_sprintf_test_5517__);
tcase_add_test(tc1_1, s21_sprintf_test_5518__);
tcase_add_test(tc1_1, s21_sprintf_test_5519__);
tcase_add_test(tc1_1, s21_sprintf_test_5520__);
tcase_add_test(tc1_1, s21_sprintf_test_5521__);
tcase_add_test(tc1_1, s21_sprintf_test_5522__);
tcase_add_test(tc1_1, s21_sprintf_test_5523__);
tcase_add_test(tc1_1, s21_sprintf_test_5524__);
tcase_add_test(tc1_1, s21_sprintf_test_5525__);
tcase_add_test(tc1_1, s21_sprintf_test_5526__);
tcase_add_test(tc1_1, s21_sprintf_test_5527__);
tcase_add_test(tc1_1, s21_sprintf_test_5528__);
tcase_add_test(tc1_1, s21_sprintf_test_5529__);
tcase_add_test(tc1_1, s21_sprintf_test_5530__);
tcase_add_test(tc1_1, s21_sprintf_test_5531__);
tcase_add_test(tc1_1, s21_sprintf_test_5532__);
tcase_add_test(tc1_1, s21_sprintf_test_5533__);
tcase_add_test(tc1_1, s21_sprintf_test_5534__);
tcase_add_test(tc1_1, s21_sprintf_test_5535__);
tcase_add_test(tc1_1, s21_sprintf_test_5536__);
tcase_add_test(tc1_1, s21_sprintf_test_5537__);
tcase_add_test(tc1_1, s21_sprintf_test_5538__);
tcase_add_test(tc1_1, s21_sprintf_test_5539__);
tcase_add_test(tc1_1, s21_sprintf_test_5540__);
tcase_add_test(tc1_1, s21_sprintf_test_5541__);
tcase_add_test(tc1_1, s21_sprintf_test_5542__);
tcase_add_test(tc1_1, s21_sprintf_test_5543__);
tcase_add_test(tc1_1, s21_sprintf_test_5544__);
tcase_add_test(tc1_1, s21_sprintf_test_5545__);
tcase_add_test(tc1_1, s21_sprintf_test_5546__);
tcase_add_test(tc1_1, s21_sprintf_test_5547__);
tcase_add_test(tc1_1, s21_sprintf_test_5548__);
tcase_add_test(tc1_1, s21_sprintf_test_5549__);
tcase_add_test(tc1_1, s21_sprintf_test_5550__);
tcase_add_test(tc1_1, s21_sprintf_test_5551__);
tcase_add_test(tc1_1, s21_sprintf_test_5552__);
tcase_add_test(tc1_1, s21_sprintf_test_5553__);
tcase_add_test(tc1_1, s21_sprintf_test_5554__);
tcase_add_test(tc1_1, s21_sprintf_test_5555__);
tcase_add_test(tc1_1, s21_sprintf_test_5556__);
tcase_add_test(tc1_1, s21_sprintf_test_5557__);
tcase_add_test(tc1_1, s21_sprintf_test_5558__);
tcase_add_test(tc1_1, s21_sprintf_test_5559__);
tcase_add_test(tc1_1, s21_sprintf_test_5560__);
tcase_add_test(tc1_1, s21_sprintf_test_5561__);
tcase_add_test(tc1_1, s21_sprintf_test_5562__);
tcase_add_test(tc1_1, s21_sprintf_test_5563__);
tcase_add_test(tc1_1, s21_sprintf_test_5564__);
tcase_add_test(tc1_1, s21_sprintf_test_5565__);
tcase_add_test(tc1_1, s21_sprintf_test_5566__);
tcase_add_test(tc1_1, s21_sprintf_test_5567__);
tcase_add_test(tc1_1, s21_sprintf_test_5568__);
tcase_add_test(tc1_1, s21_sprintf_test_5569__);
tcase_add_test(tc1_1, s21_sprintf_test_5570__);
tcase_add_test(tc1_1, s21_sprintf_test_5571__);
tcase_add_test(tc1_1, s21_sprintf_test_5572__);
tcase_add_test(tc1_1, s21_sprintf_test_5573__);
tcase_add_test(tc1_1, s21_sprintf_test_5574__);
tcase_add_test(tc1_1, s21_sprintf_test_5575__);
tcase_add_test(tc1_1, s21_sprintf_test_5576__);
tcase_add_test(tc1_1, s21_sprintf_test_5577__);
tcase_add_test(tc1_1, s21_sprintf_test_5578__);
tcase_add_test(tc1_1, s21_sprintf_test_5579__);
tcase_add_test(tc1_1, s21_sprintf_test_5580__);
tcase_add_test(tc1_1, s21_sprintf_test_5581__);
tcase_add_test(tc1_1, s21_sprintf_test_5582__);
tcase_add_test(tc1_1, s21_sprintf_test_5583__);
tcase_add_test(tc1_1, s21_sprintf_test_5584__);
tcase_add_test(tc1_1, s21_sprintf_test_5585__);
tcase_add_test(tc1_1, s21_sprintf_test_5586__);
tcase_add_test(tc1_1, s21_sprintf_test_5587__);
tcase_add_test(tc1_1, s21_sprintf_test_5588__);
tcase_add_test(tc1_1, s21_sprintf_test_5589__);
tcase_add_test(tc1_1, s21_sprintf_test_5590__);
tcase_add_test(tc1_1, s21_sprintf_test_5591__);
tcase_add_test(tc1_1, s21_sprintf_test_5592__);
tcase_add_test(tc1_1, s21_sprintf_test_5593__);
tcase_add_test(tc1_1, s21_sprintf_test_5594__);
tcase_add_test(tc1_1, s21_sprintf_test_5595__);
tcase_add_test(tc1_1, s21_sprintf_test_5596__);
tcase_add_test(tc1_1, s21_sprintf_test_5597__);
tcase_add_test(tc1_1, s21_sprintf_test_5598__);
tcase_add_test(tc1_1, s21_sprintf_test_5599__);
tcase_add_test(tc1_1, s21_sprintf_test_5600__);
tcase_add_test(tc1_1, s21_sprintf_test_5601__);
tcase_add_test(tc1_1, s21_sprintf_test_5602__);
tcase_add_test(tc1_1, s21_sprintf_test_5603__);
tcase_add_test(tc1_1, s21_sprintf_test_5604__);
tcase_add_test(tc1_1, s21_sprintf_test_5605__);
tcase_add_test(tc1_1, s21_sprintf_test_5606__);
tcase_add_test(tc1_1, s21_sprintf_test_5607__);
tcase_add_test(tc1_1, s21_sprintf_test_5608__);
tcase_add_test(tc1_1, s21_sprintf_test_5609__);
tcase_add_test(tc1_1, s21_sprintf_test_5610__);
tcase_add_test(tc1_1, s21_sprintf_test_5611__);
tcase_add_test(tc1_1, s21_sprintf_test_5612__);
tcase_add_test(tc1_1, s21_sprintf_test_5613__);
tcase_add_test(tc1_1, s21_sprintf_test_5614__);
tcase_add_test(tc1_1, s21_sprintf_test_5615__);
tcase_add_test(tc1_1, s21_sprintf_test_5616__);
tcase_add_test(tc1_1, s21_sprintf_test_5617__);
tcase_add_test(tc1_1, s21_sprintf_test_5618__);
tcase_add_test(tc1_1, s21_sprintf_test_5619__);
tcase_add_test(tc1_1, s21_sprintf_test_5620__);
tcase_add_test(tc1_1, s21_sprintf_test_5621__);
tcase_add_test(tc1_1, s21_sprintf_test_5622__);
tcase_add_test(tc1_1, s21_sprintf_test_5623__);
tcase_add_test(tc1_1, s21_sprintf_test_5624__);
tcase_add_test(tc1_1, s21_sprintf_test_5625__);
tcase_add_test(tc1_1, s21_sprintf_test_5626__);
tcase_add_test(tc1_1, s21_sprintf_test_5627__);
tcase_add_test(tc1_1, s21_sprintf_test_5628__);
tcase_add_test(tc1_1, s21_sprintf_test_5629__);
tcase_add_test(tc1_1, s21_sprintf_test_5630__);
tcase_add_test(tc1_1, s21_sprintf_test_5631__);
tcase_add_test(tc1_1, s21_sprintf_test_5632__);
tcase_add_test(tc1_1, s21_sprintf_test_5633__);
tcase_add_test(tc1_1, s21_sprintf_test_5634__);
tcase_add_test(tc1_1, s21_sprintf_test_5635__);
tcase_add_test(tc1_1, s21_sprintf_test_5636__);
tcase_add_test(tc1_1, s21_sprintf_test_5637__);
tcase_add_test(tc1_1, s21_sprintf_test_5638__);
tcase_add_test(tc1_1, s21_sprintf_test_5639__);
tcase_add_test(tc1_1, s21_sprintf_test_5640__);
tcase_add_test(tc1_1, s21_sprintf_test_5641__);
tcase_add_test(tc1_1, s21_sprintf_test_5642__);
tcase_add_test(tc1_1, s21_sprintf_test_5643__);
tcase_add_test(tc1_1, s21_sprintf_test_5644__);
tcase_add_test(tc1_1, s21_sprintf_test_5645__);
tcase_add_test(tc1_1, s21_sprintf_test_5646__);
tcase_add_test(tc1_1, s21_sprintf_test_5647__);
tcase_add_test(tc1_1, s21_sprintf_test_5648__);
tcase_add_test(tc1_1, s21_sprintf_test_5649__);
tcase_add_test(tc1_1, s21_sprintf_test_5650__);
tcase_add_test(tc1_1, s21_sprintf_test_5651__);
tcase_add_test(tc1_1, s21_sprintf_test_5652__);
tcase_add_test(tc1_1, s21_sprintf_test_5653__);
tcase_add_test(tc1_1, s21_sprintf_test_5654__);
tcase_add_test(tc1_1, s21_sprintf_test_5655__);
tcase_add_test(tc1_1, s21_sprintf_test_5656__);
tcase_add_test(tc1_1, s21_sprintf_test_5657__);
tcase_add_test(tc1_1, s21_sprintf_test_5658__);
tcase_add_test(tc1_1, s21_sprintf_test_5659__);
tcase_add_test(tc1_1, s21_sprintf_test_5660__);
tcase_add_test(tc1_1, s21_sprintf_test_5661__);
tcase_add_test(tc1_1, s21_sprintf_test_5662__);
tcase_add_test(tc1_1, s21_sprintf_test_5663__);
tcase_add_test(tc1_1, s21_sprintf_test_5664__);
tcase_add_test(tc1_1, s21_sprintf_test_5665__);
tcase_add_test(tc1_1, s21_sprintf_test_5666__);
tcase_add_test(tc1_1, s21_sprintf_test_5667__);
tcase_add_test(tc1_1, s21_sprintf_test_5668__);
tcase_add_test(tc1_1, s21_sprintf_test_5669__);
tcase_add_test(tc1_1, s21_sprintf_test_5670__);
tcase_add_test(tc1_1, s21_sprintf_test_5671__);
tcase_add_test(tc1_1, s21_sprintf_test_5672__);
tcase_add_test(tc1_1, s21_sprintf_test_5673__);
tcase_add_test(tc1_1, s21_sprintf_test_5674__);
tcase_add_test(tc1_1, s21_sprintf_test_5675__);
tcase_add_test(tc1_1, s21_sprintf_test_5676__);
tcase_add_test(tc1_1, s21_sprintf_test_5677__);
tcase_add_test(tc1_1, s21_sprintf_test_5678__);
tcase_add_test(tc1_1, s21_sprintf_test_5679__);
tcase_add_test(tc1_1, s21_sprintf_test_5680__);
tcase_add_test(tc1_1, s21_sprintf_test_5681__);
tcase_add_test(tc1_1, s21_sprintf_test_5682__);
tcase_add_test(tc1_1, s21_sprintf_test_5683__);
tcase_add_test(tc1_1, s21_sprintf_test_5684__);
tcase_add_test(tc1_1, s21_sprintf_test_5685__);
tcase_add_test(tc1_1, s21_sprintf_test_5686__);
tcase_add_test(tc1_1, s21_sprintf_test_5687__);
tcase_add_test(tc1_1, s21_sprintf_test_5688__);
tcase_add_test(tc1_1, s21_sprintf_test_5689__);
tcase_add_test(tc1_1, s21_sprintf_test_5690__);
tcase_add_test(tc1_1, s21_sprintf_test_5691__);
tcase_add_test(tc1_1, s21_sprintf_test_5692__);
tcase_add_test(tc1_1, s21_sprintf_test_5693__);
tcase_add_test(tc1_1, s21_sprintf_test_5694__);
tcase_add_test(tc1_1, s21_sprintf_test_5695__);
tcase_add_test(tc1_1, s21_sprintf_test_5696__);
tcase_add_test(tc1_1, s21_sprintf_test_5697__);
tcase_add_test(tc1_1, s21_sprintf_test_5698__);
tcase_add_test(tc1_1, s21_sprintf_test_5699__);
tcase_add_test(tc1_1, s21_sprintf_test_5700__);
tcase_add_test(tc1_1, s21_sprintf_test_5701__);
tcase_add_test(tc1_1, s21_sprintf_test_5702__);
tcase_add_test(tc1_1, s21_sprintf_test_5703__);
tcase_add_test(tc1_1, s21_sprintf_test_5704__);
tcase_add_test(tc1_1, s21_sprintf_test_5705__);
tcase_add_test(tc1_1, s21_sprintf_test_5706__);
tcase_add_test(tc1_1, s21_sprintf_test_5707__);
tcase_add_test(tc1_1, s21_sprintf_test_5708__);
tcase_add_test(tc1_1, s21_sprintf_test_5709__);
tcase_add_test(tc1_1, s21_sprintf_test_5710__);
tcase_add_test(tc1_1, s21_sprintf_test_5711__);
tcase_add_test(tc1_1, s21_sprintf_test_5712__);
tcase_add_test(tc1_1, s21_sprintf_test_5713__);
tcase_add_test(tc1_1, s21_sprintf_test_5714__);
tcase_add_test(tc1_1, s21_sprintf_test_5715__);
tcase_add_test(tc1_1, s21_sprintf_test_5716__);
tcase_add_test(tc1_1, s21_sprintf_test_5717__);
tcase_add_test(tc1_1, s21_sprintf_test_5718__);
tcase_add_test(tc1_1, s21_sprintf_test_5719__);
tcase_add_test(tc1_1, s21_sprintf_test_5720__);
tcase_add_test(tc1_1, s21_sprintf_test_5721__);
tcase_add_test(tc1_1, s21_sprintf_test_5722__);
tcase_add_test(tc1_1, s21_sprintf_test_5723__);
tcase_add_test(tc1_1, s21_sprintf_test_5724__);
tcase_add_test(tc1_1, s21_sprintf_test_5725__);
tcase_add_test(tc1_1, s21_sprintf_test_5726__);
tcase_add_test(tc1_1, s21_sprintf_test_5727__);
tcase_add_test(tc1_1, s21_sprintf_test_5728__);
tcase_add_test(tc1_1, s21_sprintf_test_5729__);
tcase_add_test(tc1_1, s21_sprintf_test_5730__);
tcase_add_test(tc1_1, s21_sprintf_test_5731__);
tcase_add_test(tc1_1, s21_sprintf_test_5732__);
tcase_add_test(tc1_1, s21_sprintf_test_5733__);
tcase_add_test(tc1_1, s21_sprintf_test_5734__);
tcase_add_test(tc1_1, s21_sprintf_test_5735__);
tcase_add_test(tc1_1, s21_sprintf_test_5736__);
tcase_add_test(tc1_1, s21_sprintf_test_5737__);
tcase_add_test(tc1_1, s21_sprintf_test_5738__);
tcase_add_test(tc1_1, s21_sprintf_test_5739__);
tcase_add_test(tc1_1, s21_sprintf_test_5740__);
tcase_add_test(tc1_1, s21_sprintf_test_5741__);
tcase_add_test(tc1_1, s21_sprintf_test_5742__);
tcase_add_test(tc1_1, s21_sprintf_test_5743__);
tcase_add_test(tc1_1, s21_sprintf_test_5744__);
tcase_add_test(tc1_1, s21_sprintf_test_5745__);
tcase_add_test(tc1_1, s21_sprintf_test_5746__);
tcase_add_test(tc1_1, s21_sprintf_test_5747__);
tcase_add_test(tc1_1, s21_sprintf_test_5748__);
tcase_add_test(tc1_1, s21_sprintf_test_5749__);
tcase_add_test(tc1_1, s21_sprintf_test_5750__);
tcase_add_test(tc1_1, s21_sprintf_test_5751__);
tcase_add_test(tc1_1, s21_sprintf_test_5752__);
tcase_add_test(tc1_1, s21_sprintf_test_5753__);
tcase_add_test(tc1_1, s21_sprintf_test_5754__);
tcase_add_test(tc1_1, s21_sprintf_test_5755__);
tcase_add_test(tc1_1, s21_sprintf_test_5756__);
tcase_add_test(tc1_1, s21_sprintf_test_5757__);
tcase_add_test(tc1_1, s21_sprintf_test_5758__);
tcase_add_test(tc1_1, s21_sprintf_test_5759__);
tcase_add_test(tc1_1, s21_sprintf_test_5760__);
tcase_add_test(tc1_1, s21_sprintf_test_5761__);
tcase_add_test(tc1_1, s21_sprintf_test_5762__);
tcase_add_test(tc1_1, s21_sprintf_test_5763__);
tcase_add_test(tc1_1, s21_sprintf_test_5764__);
tcase_add_test(tc1_1, s21_sprintf_test_5765__);
tcase_add_test(tc1_1, s21_sprintf_test_5766__);
tcase_add_test(tc1_1, s21_sprintf_test_5767__);
tcase_add_test(tc1_1, s21_sprintf_test_5768__);
tcase_add_test(tc1_1, s21_sprintf_test_5769__);
tcase_add_test(tc1_1, s21_sprintf_test_5770__);
tcase_add_test(tc1_1, s21_sprintf_test_5771__);
tcase_add_test(tc1_1, s21_sprintf_test_5772__);
tcase_add_test(tc1_1, s21_sprintf_test_5773__);
tcase_add_test(tc1_1, s21_sprintf_test_5774__);
tcase_add_test(tc1_1, s21_sprintf_test_5775__);
tcase_add_test(tc1_1, s21_sprintf_test_5776__);
tcase_add_test(tc1_1, s21_sprintf_test_5777__);
tcase_add_test(tc1_1, s21_sprintf_test_5778__);
tcase_add_test(tc1_1, s21_sprintf_test_5779__);
tcase_add_test(tc1_1, s21_sprintf_test_5780__);
tcase_add_test(tc1_1, s21_sprintf_test_5781__);
tcase_add_test(tc1_1, s21_sprintf_test_5782__);
tcase_add_test(tc1_1, s21_sprintf_test_5783__);
tcase_add_test(tc1_1, s21_sprintf_test_5784__);
tcase_add_test(tc1_1, s21_sprintf_test_5785__);
tcase_add_test(tc1_1, s21_sprintf_test_5786__);
tcase_add_test(tc1_1, s21_sprintf_test_5787__);
tcase_add_test(tc1_1, s21_sprintf_test_5788__);
tcase_add_test(tc1_1, s21_sprintf_test_5789__);
tcase_add_test(tc1_1, s21_sprintf_test_5790__);
tcase_add_test(tc1_1, s21_sprintf_test_5791__);
tcase_add_test(tc1_1, s21_sprintf_test_5792__);
tcase_add_test(tc1_1, s21_sprintf_test_5793__);
tcase_add_test(tc1_1, s21_sprintf_test_5794__);
tcase_add_test(tc1_1, s21_sprintf_test_5795__);
tcase_add_test(tc1_1, s21_sprintf_test_5796__);
tcase_add_test(tc1_1, s21_sprintf_test_5797__);
tcase_add_test(tc1_1, s21_sprintf_test_5798__);
tcase_add_test(tc1_1, s21_sprintf_test_5799__);
tcase_add_test(tc1_1, s21_sprintf_test_5800__);
tcase_add_test(tc1_1, s21_sprintf_test_5801__);
tcase_add_test(tc1_1, s21_sprintf_test_5802__);
tcase_add_test(tc1_1, s21_sprintf_test_5803__);
tcase_add_test(tc1_1, s21_sprintf_test_5804__);
tcase_add_test(tc1_1, s21_sprintf_test_5805__);
tcase_add_test(tc1_1, s21_sprintf_test_5806__);
tcase_add_test(tc1_1, s21_sprintf_test_5807__);
tcase_add_test(tc1_1, s21_sprintf_test_5808__);
tcase_add_test(tc1_1, s21_sprintf_test_5809__);
tcase_add_test(tc1_1, s21_sprintf_test_5810__);
tcase_add_test(tc1_1, s21_sprintf_test_5811__);
tcase_add_test(tc1_1, s21_sprintf_test_5812__);
tcase_add_test(tc1_1, s21_sprintf_test_5813__);
tcase_add_test(tc1_1, s21_sprintf_test_5814__);
tcase_add_test(tc1_1, s21_sprintf_test_5815__);
tcase_add_test(tc1_1, s21_sprintf_test_5816__);
tcase_add_test(tc1_1, s21_sprintf_test_5817__);
tcase_add_test(tc1_1, s21_sprintf_test_5818__);
tcase_add_test(tc1_1, s21_sprintf_test_5819__);
tcase_add_test(tc1_1, s21_sprintf_test_5820__);
tcase_add_test(tc1_1, s21_sprintf_test_5821__);
tcase_add_test(tc1_1, s21_sprintf_test_5822__);
tcase_add_test(tc1_1, s21_sprintf_test_5823__);
tcase_add_test(tc1_1, s21_sprintf_test_5824__);
tcase_add_test(tc1_1, s21_sprintf_test_5825__);
tcase_add_test(tc1_1, s21_sprintf_test_5826__);
tcase_add_test(tc1_1, s21_sprintf_test_5827__);
tcase_add_test(tc1_1, s21_sprintf_test_5828__);
tcase_add_test(tc1_1, s21_sprintf_test_5829__);
tcase_add_test(tc1_1, s21_sprintf_test_5830__);
tcase_add_test(tc1_1, s21_sprintf_test_5831__);
tcase_add_test(tc1_1, s21_sprintf_test_5832__);
tcase_add_test(tc1_1, s21_sprintf_test_5833__);
tcase_add_test(tc1_1, s21_sprintf_test_5834__);
tcase_add_test(tc1_1, s21_sprintf_test_5835__);
tcase_add_test(tc1_1, s21_sprintf_test_5836__);
tcase_add_test(tc1_1, s21_sprintf_test_5837__);
tcase_add_test(tc1_1, s21_sprintf_test_5838__);
tcase_add_test(tc1_1, s21_sprintf_test_5839__);
tcase_add_test(tc1_1, s21_sprintf_test_5840__);
tcase_add_test(tc1_1, s21_sprintf_test_5841__);
tcase_add_test(tc1_1, s21_sprintf_test_5842__);
tcase_add_test(tc1_1, s21_sprintf_test_5843__);
tcase_add_test(tc1_1, s21_sprintf_test_5844__);
tcase_add_test(tc1_1, s21_sprintf_test_5845__);
tcase_add_test(tc1_1, s21_sprintf_test_5846__);
tcase_add_test(tc1_1, s21_sprintf_test_5847__);
tcase_add_test(tc1_1, s21_sprintf_test_5848__);
tcase_add_test(tc1_1, s21_sprintf_test_5849__);
tcase_add_test(tc1_1, s21_sprintf_test_5850__);
tcase_add_test(tc1_1, s21_sprintf_test_5851__);
tcase_add_test(tc1_1, s21_sprintf_test_5852__);
tcase_add_test(tc1_1, s21_sprintf_test_5853__);
tcase_add_test(tc1_1, s21_sprintf_test_5854__);
tcase_add_test(tc1_1, s21_sprintf_test_5855__);
tcase_add_test(tc1_1, s21_sprintf_test_5856__);
tcase_add_test(tc1_1, s21_sprintf_test_5857__);
tcase_add_test(tc1_1, s21_sprintf_test_5858__);
tcase_add_test(tc1_1, s21_sprintf_test_5859__);
tcase_add_test(tc1_1, s21_sprintf_test_5860__);
tcase_add_test(tc1_1, s21_sprintf_test_5861__);
tcase_add_test(tc1_1, s21_sprintf_test_5862__);
tcase_add_test(tc1_1, s21_sprintf_test_5863__);
tcase_add_test(tc1_1, s21_sprintf_test_5864__);
tcase_add_test(tc1_1, s21_sprintf_test_5865__);
tcase_add_test(tc1_1, s21_sprintf_test_5866__);
tcase_add_test(tc1_1, s21_sprintf_test_5867__);
tcase_add_test(tc1_1, s21_sprintf_test_5868__);
tcase_add_test(tc1_1, s21_sprintf_test_5869__);
tcase_add_test(tc1_1, s21_sprintf_test_5870__);
tcase_add_test(tc1_1, s21_sprintf_test_5871__);
tcase_add_test(tc1_1, s21_sprintf_test_5872__);
tcase_add_test(tc1_1, s21_sprintf_test_5873__);
tcase_add_test(tc1_1, s21_sprintf_test_5874__);
tcase_add_test(tc1_1, s21_sprintf_test_5875__);
tcase_add_test(tc1_1, s21_sprintf_test_5876__);
tcase_add_test(tc1_1, s21_sprintf_test_5877__);
tcase_add_test(tc1_1, s21_sprintf_test_5878__);
tcase_add_test(tc1_1, s21_sprintf_test_5879__);
tcase_add_test(tc1_1, s21_sprintf_test_5880__);
tcase_add_test(tc1_1, s21_sprintf_test_5881__);
tcase_add_test(tc1_1, s21_sprintf_test_5882__);
tcase_add_test(tc1_1, s21_sprintf_test_5883__);
tcase_add_test(tc1_1, s21_sprintf_test_5884__);
tcase_add_test(tc1_1, s21_sprintf_test_5885__);
tcase_add_test(tc1_1, s21_sprintf_test_5886__);
tcase_add_test(tc1_1, s21_sprintf_test_5887__);
tcase_add_test(tc1_1, s21_sprintf_test_5888__);
tcase_add_test(tc1_1, s21_sprintf_test_5889__);
tcase_add_test(tc1_1, s21_sprintf_test_5890__);
tcase_add_test(tc1_1, s21_sprintf_test_5891__);
tcase_add_test(tc1_1, s21_sprintf_test_5892__);
tcase_add_test(tc1_1, s21_sprintf_test_5893__);
tcase_add_test(tc1_1, s21_sprintf_test_5894__);
tcase_add_test(tc1_1, s21_sprintf_test_5895__);
tcase_add_test(tc1_1, s21_sprintf_test_5896__);
tcase_add_test(tc1_1, s21_sprintf_test_5897__);
tcase_add_test(tc1_1, s21_sprintf_test_5898__);
tcase_add_test(tc1_1, s21_sprintf_test_5899__);
tcase_add_test(tc1_1, s21_sprintf_test_5900__);
tcase_add_test(tc1_1, s21_sprintf_test_5901__);
tcase_add_test(tc1_1, s21_sprintf_test_5902__);
tcase_add_test(tc1_1, s21_sprintf_test_5903__);
tcase_add_test(tc1_1, s21_sprintf_test_5904__);
tcase_add_test(tc1_1, s21_sprintf_test_5905__);
tcase_add_test(tc1_1, s21_sprintf_test_5906__);
tcase_add_test(tc1_1, s21_sprintf_test_5907__);
tcase_add_test(tc1_1, s21_sprintf_test_5908__);
tcase_add_test(tc1_1, s21_sprintf_test_5909__);
tcase_add_test(tc1_1, s21_sprintf_test_5910__);
tcase_add_test(tc1_1, s21_sprintf_test_5911__);
tcase_add_test(tc1_1, s21_sprintf_test_5912__);
tcase_add_test(tc1_1, s21_sprintf_test_5913__);
tcase_add_test(tc1_1, s21_sprintf_test_5914__);
tcase_add_test(tc1_1, s21_sprintf_test_5915__);
tcase_add_test(tc1_1, s21_sprintf_test_5916__);
tcase_add_test(tc1_1, s21_sprintf_test_5917__);
tcase_add_test(tc1_1, s21_sprintf_test_5918__);
tcase_add_test(tc1_1, s21_sprintf_test_5919__);
tcase_add_test(tc1_1, s21_sprintf_test_5920__);
tcase_add_test(tc1_1, s21_sprintf_test_5921__);
tcase_add_test(tc1_1, s21_sprintf_test_5922__);
tcase_add_test(tc1_1, s21_sprintf_test_5923__);
tcase_add_test(tc1_1, s21_sprintf_test_5924__);
tcase_add_test(tc1_1, s21_sprintf_test_5925__);
tcase_add_test(tc1_1, s21_sprintf_test_5926__);
tcase_add_test(tc1_1, s21_sprintf_test_5927__);
tcase_add_test(tc1_1, s21_sprintf_test_5928__);
tcase_add_test(tc1_1, s21_sprintf_test_5929__);
tcase_add_test(tc1_1, s21_sprintf_test_5930__);
tcase_add_test(tc1_1, s21_sprintf_test_5931__);
tcase_add_test(tc1_1, s21_sprintf_test_5932__);
tcase_add_test(tc1_1, s21_sprintf_test_5933__);
tcase_add_test(tc1_1, s21_sprintf_test_5934__);
tcase_add_test(tc1_1, s21_sprintf_test_5935__);
tcase_add_test(tc1_1, s21_sprintf_test_5936__);
tcase_add_test(tc1_1, s21_sprintf_test_5937__);
tcase_add_test(tc1_1, s21_sprintf_test_5938__);
tcase_add_test(tc1_1, s21_sprintf_test_5939__);
tcase_add_test(tc1_1, s21_sprintf_test_5940__);
tcase_add_test(tc1_1, s21_sprintf_test_5941__);
tcase_add_test(tc1_1, s21_sprintf_test_5942__);
tcase_add_test(tc1_1, s21_sprintf_test_5943__);
tcase_add_test(tc1_1, s21_sprintf_test_5944__);
tcase_add_test(tc1_1, s21_sprintf_test_5945__);
tcase_add_test(tc1_1, s21_sprintf_test_5946__);
tcase_add_test(tc1_1, s21_sprintf_test_5947__);
tcase_add_test(tc1_1, s21_sprintf_test_5948__);
tcase_add_test(tc1_1, s21_sprintf_test_5949__);
tcase_add_test(tc1_1, s21_sprintf_test_5950__);
tcase_add_test(tc1_1, s21_sprintf_test_5951__);
tcase_add_test(tc1_1, s21_sprintf_test_5952__);
tcase_add_test(tc1_1, s21_sprintf_test_5953__);
tcase_add_test(tc1_1, s21_sprintf_test_5954__);
tcase_add_test(tc1_1, s21_sprintf_test_5955__);
tcase_add_test(tc1_1, s21_sprintf_test_5956__);
tcase_add_test(tc1_1, s21_sprintf_test_5957__);
tcase_add_test(tc1_1, s21_sprintf_test_5958__);
tcase_add_test(tc1_1, s21_sprintf_test_5959__);
tcase_add_test(tc1_1, s21_sprintf_test_5960__);
tcase_add_test(tc1_1, s21_sprintf_test_5961__);
tcase_add_test(tc1_1, s21_sprintf_test_5962__);
tcase_add_test(tc1_1, s21_sprintf_test_5963__);
tcase_add_test(tc1_1, s21_sprintf_test_5964__);
tcase_add_test(tc1_1, s21_sprintf_test_5965__);
tcase_add_test(tc1_1, s21_sprintf_test_5966__);
tcase_add_test(tc1_1, s21_sprintf_test_5967__);
tcase_add_test(tc1_1, s21_sprintf_test_5968__);
tcase_add_test(tc1_1, s21_sprintf_test_5969__);
tcase_add_test(tc1_1, s21_sprintf_test_5970__);
tcase_add_test(tc1_1, s21_sprintf_test_5971__);
tcase_add_test(tc1_1, s21_sprintf_test_5972__);
tcase_add_test(tc1_1, s21_sprintf_test_5973__);
tcase_add_test(tc1_1, s21_sprintf_test_5974__);
tcase_add_test(tc1_1, s21_sprintf_test_5975__);
tcase_add_test(tc1_1, s21_sprintf_test_5976__);
tcase_add_test(tc1_1, s21_sprintf_test_5977__);
tcase_add_test(tc1_1, s21_sprintf_test_5978__);
tcase_add_test(tc1_1, s21_sprintf_test_5979__);
tcase_add_test(tc1_1, s21_sprintf_test_5980__);
tcase_add_test(tc1_1, s21_sprintf_test_5981__);
tcase_add_test(tc1_1, s21_sprintf_test_5982__);
tcase_add_test(tc1_1, s21_sprintf_test_5983__);
tcase_add_test(tc1_1, s21_sprintf_test_5984__);
tcase_add_test(tc1_1, s21_sprintf_test_5985__);
tcase_add_test(tc1_1, s21_sprintf_test_5986__);
tcase_add_test(tc1_1, s21_sprintf_test_5987__);
tcase_add_test(tc1_1, s21_sprintf_test_5988__);
tcase_add_test(tc1_1, s21_sprintf_test_5989__);
tcase_add_test(tc1_1, s21_sprintf_test_5990__);
tcase_add_test(tc1_1, s21_sprintf_test_5991__);
tcase_add_test(tc1_1, s21_sprintf_test_5992__);
tcase_add_test(tc1_1, s21_sprintf_test_5993__);
tcase_add_test(tc1_1, s21_sprintf_test_5994__);
tcase_add_test(tc1_1, s21_sprintf_test_5995__);
tcase_add_test(tc1_1, s21_sprintf_test_5996__);
tcase_add_test(tc1_1, s21_sprintf_test_5997__);
tcase_add_test(tc1_1, s21_sprintf_test_5998__);
tcase_add_test(tc1_1, s21_sprintf_test_5999__);
tcase_add_test(tc1_1, s21_sprintf_test_6000__);
tcase_add_test(tc1_1, s21_sprintf_test_6001__);
tcase_add_test(tc1_1, s21_sprintf_test_6002__);
tcase_add_test(tc1_1, s21_sprintf_test_6003__);
tcase_add_test(tc1_1, s21_sprintf_test_6004__);
tcase_add_test(tc1_1, s21_sprintf_test_6005__);
tcase_add_test(tc1_1, s21_sprintf_test_6006__);
tcase_add_test(tc1_1, s21_sprintf_test_6007__);
tcase_add_test(tc1_1, s21_sprintf_test_6008__);
tcase_add_test(tc1_1, s21_sprintf_test_6009__);
tcase_add_test(tc1_1, s21_sprintf_test_6010__);
tcase_add_test(tc1_1, s21_sprintf_test_6011__);
tcase_add_test(tc1_1, s21_sprintf_test_6012__);
tcase_add_test(tc1_1, s21_sprintf_test_6013__);
tcase_add_test(tc1_1, s21_sprintf_test_6014__);
tcase_add_test(tc1_1, s21_sprintf_test_6015__);
tcase_add_test(tc1_1, s21_sprintf_test_6016__);
tcase_add_test(tc1_1, s21_sprintf_test_6017__);
tcase_add_test(tc1_1, s21_sprintf_test_6018__);
tcase_add_test(tc1_1, s21_sprintf_test_6019__);
tcase_add_test(tc1_1, s21_sprintf_test_6020__);
tcase_add_test(tc1_1, s21_sprintf_test_6021__);
tcase_add_test(tc1_1, s21_sprintf_test_6022__);
tcase_add_test(tc1_1, s21_sprintf_test_6023__);
tcase_add_test(tc1_1, s21_sprintf_test_6024__);
tcase_add_test(tc1_1, s21_sprintf_test_6025__);
tcase_add_test(tc1_1, s21_sprintf_test_6026__);
tcase_add_test(tc1_1, s21_sprintf_test_6027__);
tcase_add_test(tc1_1, s21_sprintf_test_6028__);
tcase_add_test(tc1_1, s21_sprintf_test_6029__);
tcase_add_test(tc1_1, s21_sprintf_test_6030__);
tcase_add_test(tc1_1, s21_sprintf_test_6031__);
tcase_add_test(tc1_1, s21_sprintf_test_6032__);
tcase_add_test(tc1_1, s21_sprintf_test_6033__);
tcase_add_test(tc1_1, s21_sprintf_test_6034__);
tcase_add_test(tc1_1, s21_sprintf_test_6035__);
tcase_add_test(tc1_1, s21_sprintf_test_6036__);
tcase_add_test(tc1_1, s21_sprintf_test_6037__);
tcase_add_test(tc1_1, s21_sprintf_test_6038__);
tcase_add_test(tc1_1, s21_sprintf_test_6039__);
tcase_add_test(tc1_1, s21_sprintf_test_6040__);
tcase_add_test(tc1_1, s21_sprintf_test_6041__);
tcase_add_test(tc1_1, s21_sprintf_test_6042__);
tcase_add_test(tc1_1, s21_sprintf_test_6043__);
tcase_add_test(tc1_1, s21_sprintf_test_6044__);
tcase_add_test(tc1_1, s21_sprintf_test_6045__);
tcase_add_test(tc1_1, s21_sprintf_test_6046__);
tcase_add_test(tc1_1, s21_sprintf_test_6047__);
tcase_add_test(tc1_1, s21_sprintf_test_6048__);
tcase_add_test(tc1_1, s21_sprintf_test_6049__);
tcase_add_test(tc1_1, s21_sprintf_test_6050__);
tcase_add_test(tc1_1, s21_sprintf_test_6051__);
tcase_add_test(tc1_1, s21_sprintf_test_6052__);
tcase_add_test(tc1_1, s21_sprintf_test_6053__);
tcase_add_test(tc1_1, s21_sprintf_test_6054__);
tcase_add_test(tc1_1, s21_sprintf_test_6055__);
tcase_add_test(tc1_1, s21_sprintf_test_6056__);
tcase_add_test(tc1_1, s21_sprintf_test_6057__);
tcase_add_test(tc1_1, s21_sprintf_test_6058__);
tcase_add_test(tc1_1, s21_sprintf_test_6059__);
tcase_add_test(tc1_1, s21_sprintf_test_6060__);
tcase_add_test(tc1_1, s21_sprintf_test_6061__);
tcase_add_test(tc1_1, s21_sprintf_test_6062__);
tcase_add_test(tc1_1, s21_sprintf_test_6063__);
tcase_add_test(tc1_1, s21_sprintf_test_6064__);
tcase_add_test(tc1_1, s21_sprintf_test_6065__);
tcase_add_test(tc1_1, s21_sprintf_test_6066__);
tcase_add_test(tc1_1, s21_sprintf_test_6067__);
tcase_add_test(tc1_1, s21_sprintf_test_6068__);
tcase_add_test(tc1_1, s21_sprintf_test_6069__);
tcase_add_test(tc1_1, s21_sprintf_test_6070__);
tcase_add_test(tc1_1, s21_sprintf_test_6071__);
tcase_add_test(tc1_1, s21_sprintf_test_6072__);
tcase_add_test(tc1_1, s21_sprintf_test_6073__);
tcase_add_test(tc1_1, s21_sprintf_test_6074__);
tcase_add_test(tc1_1, s21_sprintf_test_6075__);
tcase_add_test(tc1_1, s21_sprintf_test_6076__);
tcase_add_test(tc1_1, s21_sprintf_test_6077__);
tcase_add_test(tc1_1, s21_sprintf_test_6078__);
tcase_add_test(tc1_1, s21_sprintf_test_6079__);
tcase_add_test(tc1_1, s21_sprintf_test_6080__);
tcase_add_test(tc1_1, s21_sprintf_test_6081__);
tcase_add_test(tc1_1, s21_sprintf_test_6082__);
tcase_add_test(tc1_1, s21_sprintf_test_6083__);
tcase_add_test(tc1_1, s21_sprintf_test_6084__);
tcase_add_test(tc1_1, s21_sprintf_test_6085__);
tcase_add_test(tc1_1, s21_sprintf_test_6086__);
tcase_add_test(tc1_1, s21_sprintf_test_6087__);
tcase_add_test(tc1_1, s21_sprintf_test_6088__);
tcase_add_test(tc1_1, s21_sprintf_test_6089__);
tcase_add_test(tc1_1, s21_sprintf_test_6090__);
tcase_add_test(tc1_1, s21_sprintf_test_6091__);
tcase_add_test(tc1_1, s21_sprintf_test_6092__);
tcase_add_test(tc1_1, s21_sprintf_test_6093__);
tcase_add_test(tc1_1, s21_sprintf_test_6094__);
tcase_add_test(tc1_1, s21_sprintf_test_6095__);
tcase_add_test(tc1_1, s21_sprintf_test_6096__);
tcase_add_test(tc1_1, s21_sprintf_test_6097__);
tcase_add_test(tc1_1, s21_sprintf_test_6098__);
tcase_add_test(tc1_1, s21_sprintf_test_6099__);
tcase_add_test(tc1_1, s21_sprintf_test_6100__);
tcase_add_test(tc1_1, s21_sprintf_test_6101__);
tcase_add_test(tc1_1, s21_sprintf_test_6102__);
tcase_add_test(tc1_1, s21_sprintf_test_6103__);
tcase_add_test(tc1_1, s21_sprintf_test_6104__);
tcase_add_test(tc1_1, s21_sprintf_test_6105__);
tcase_add_test(tc1_1, s21_sprintf_test_6106__);
tcase_add_test(tc1_1, s21_sprintf_test_6107__);
tcase_add_test(tc1_1, s21_sprintf_test_6108__);
tcase_add_test(tc1_1, s21_sprintf_test_6109__);
tcase_add_test(tc1_1, s21_sprintf_test_6110__);
tcase_add_test(tc1_1, s21_sprintf_test_6111__);
tcase_add_test(tc1_1, s21_sprintf_test_6112__);
tcase_add_test(tc1_1, s21_sprintf_test_6113__);
tcase_add_test(tc1_1, s21_sprintf_test_6114__);
tcase_add_test(tc1_1, s21_sprintf_test_6115__);
tcase_add_test(tc1_1, s21_sprintf_test_6116__);
tcase_add_test(tc1_1, s21_sprintf_test_6117__);
tcase_add_test(tc1_1, s21_sprintf_test_6118__);
tcase_add_test(tc1_1, s21_sprintf_test_6119__);
tcase_add_test(tc1_1, s21_sprintf_test_6120__);
tcase_add_test(tc1_1, s21_sprintf_test_6121__);
tcase_add_test(tc1_1, s21_sprintf_test_6122__);
tcase_add_test(tc1_1, s21_sprintf_test_6123__);
tcase_add_test(tc1_1, s21_sprintf_test_6124__);
tcase_add_test(tc1_1, s21_sprintf_test_6125__);
tcase_add_test(tc1_1, s21_sprintf_test_6126__);
tcase_add_test(tc1_1, s21_sprintf_test_6127__);
tcase_add_test(tc1_1, s21_sprintf_test_6128__);
tcase_add_test(tc1_1, s21_sprintf_test_6129__);
tcase_add_test(tc1_1, s21_sprintf_test_6130__);
tcase_add_test(tc1_1, s21_sprintf_test_6131__);
tcase_add_test(tc1_1, s21_sprintf_test_6132__);
tcase_add_test(tc1_1, s21_sprintf_test_6133__);
tcase_add_test(tc1_1, s21_sprintf_test_6134__);
tcase_add_test(tc1_1, s21_sprintf_test_6135__);
tcase_add_test(tc1_1, s21_sprintf_test_6136__);
tcase_add_test(tc1_1, s21_sprintf_test_6137__);
tcase_add_test(tc1_1, s21_sprintf_test_6138__);
tcase_add_test(tc1_1, s21_sprintf_test_6139__);
tcase_add_test(tc1_1, s21_sprintf_test_6140__);
tcase_add_test(tc1_1, s21_sprintf_test_6141__);
tcase_add_test(tc1_1, s21_sprintf_test_6142__);
tcase_add_test(tc1_1, s21_sprintf_test_6143__);
tcase_add_test(tc1_1, s21_sprintf_test_6144__);
tcase_add_test(tc1_1, s21_sprintf_test_6145__);
tcase_add_test(tc1_1, s21_sprintf_test_6146__);
tcase_add_test(tc1_1, s21_sprintf_test_6147__);
tcase_add_test(tc1_1, s21_sprintf_test_6148__);
tcase_add_test(tc1_1, s21_sprintf_test_6149__);
tcase_add_test(tc1_1, s21_sprintf_test_6150__);
tcase_add_test(tc1_1, s21_sprintf_test_6151__);
tcase_add_test(tc1_1, s21_sprintf_test_6152__);
tcase_add_test(tc1_1, s21_sprintf_test_6153__);
tcase_add_test(tc1_1, s21_sprintf_test_6154__);
tcase_add_test(tc1_1, s21_sprintf_test_6155__);
tcase_add_test(tc1_1, s21_sprintf_test_6156__);
tcase_add_test(tc1_1, s21_sprintf_test_6157__);
tcase_add_test(tc1_1, s21_sprintf_test_6158__);
tcase_add_test(tc1_1, s21_sprintf_test_6159__);
tcase_add_test(tc1_1, s21_sprintf_test_6160__);
tcase_add_test(tc1_1, s21_sprintf_test_6161__);
tcase_add_test(tc1_1, s21_sprintf_test_6162__);
tcase_add_test(tc1_1, s21_sprintf_test_6163__);
tcase_add_test(tc1_1, s21_sprintf_test_6164__);
tcase_add_test(tc1_1, s21_sprintf_test_6165__);
tcase_add_test(tc1_1, s21_sprintf_test_6166__);
tcase_add_test(tc1_1, s21_sprintf_test_6167__);
tcase_add_test(tc1_1, s21_sprintf_test_6168__);
tcase_add_test(tc1_1, s21_sprintf_test_6169__);
tcase_add_test(tc1_1, s21_sprintf_test_6170__);
tcase_add_test(tc1_1, s21_sprintf_test_6171__);
tcase_add_test(tc1_1, s21_sprintf_test_6172__);
tcase_add_test(tc1_1, s21_sprintf_test_6173__);
tcase_add_test(tc1_1, s21_sprintf_test_6174__);
tcase_add_test(tc1_1, s21_sprintf_test_6175__);
tcase_add_test(tc1_1, s21_sprintf_test_6176__);
tcase_add_test(tc1_1, s21_sprintf_test_6177__);
tcase_add_test(tc1_1, s21_sprintf_test_6178__);
tcase_add_test(tc1_1, s21_sprintf_test_6179__);
tcase_add_test(tc1_1, s21_sprintf_test_6180__);
tcase_add_test(tc1_1, s21_sprintf_test_6181__);
tcase_add_test(tc1_1, s21_sprintf_test_6182__);
tcase_add_test(tc1_1, s21_sprintf_test_6183__);
tcase_add_test(tc1_1, s21_sprintf_test_6184__);
tcase_add_test(tc1_1, s21_sprintf_test_6185__);
tcase_add_test(tc1_1, s21_sprintf_test_6186__);
tcase_add_test(tc1_1, s21_sprintf_test_6187__);
tcase_add_test(tc1_1, s21_sprintf_test_6188__);
tcase_add_test(tc1_1, s21_sprintf_test_6189__);
tcase_add_test(tc1_1, s21_sprintf_test_6190__);
tcase_add_test(tc1_1, s21_sprintf_test_6191__);
tcase_add_test(tc1_1, s21_sprintf_test_6192__);
tcase_add_test(tc1_1, s21_sprintf_test_6193__);
tcase_add_test(tc1_1, s21_sprintf_test_6194__);
tcase_add_test(tc1_1, s21_sprintf_test_6195__);
tcase_add_test(tc1_1, s21_sprintf_test_6196__);
tcase_add_test(tc1_1, s21_sprintf_test_6197__);
tcase_add_test(tc1_1, s21_sprintf_test_6198__);
tcase_add_test(tc1_1, s21_sprintf_test_6199__);
tcase_add_test(tc1_1, s21_sprintf_test_6200__);
tcase_add_test(tc1_1, s21_sprintf_test_6201__);
tcase_add_test(tc1_1, s21_sprintf_test_6202__);
tcase_add_test(tc1_1, s21_sprintf_test_6203__);
tcase_add_test(tc1_1, s21_sprintf_test_6204__);
tcase_add_test(tc1_1, s21_sprintf_test_6205__);
tcase_add_test(tc1_1, s21_sprintf_test_6206__);
tcase_add_test(tc1_1, s21_sprintf_test_6207__);
tcase_add_test(tc1_1, s21_sprintf_test_6208__);
tcase_add_test(tc1_1, s21_sprintf_test_6209__);
tcase_add_test(tc1_1, s21_sprintf_test_6210__);
tcase_add_test(tc1_1, s21_sprintf_test_6211__);
tcase_add_test(tc1_1, s21_sprintf_test_6212__);
tcase_add_test(tc1_1, s21_sprintf_test_6213__);
tcase_add_test(tc1_1, s21_sprintf_test_6214__);
tcase_add_test(tc1_1, s21_sprintf_test_6215__);
tcase_add_test(tc1_1, s21_sprintf_test_6216__);
tcase_add_test(tc1_1, s21_sprintf_test_6217__);
tcase_add_test(tc1_1, s21_sprintf_test_6218__);
tcase_add_test(tc1_1, s21_sprintf_test_6219__);
tcase_add_test(tc1_1, s21_sprintf_test_6220__);
tcase_add_test(tc1_1, s21_sprintf_test_6221__);
tcase_add_test(tc1_1, s21_sprintf_test_6222__);
tcase_add_test(tc1_1, s21_sprintf_test_6223__);
tcase_add_test(tc1_1, s21_sprintf_test_6224__);
tcase_add_test(tc1_1, s21_sprintf_test_6225__);
tcase_add_test(tc1_1, s21_sprintf_test_6226__);
tcase_add_test(tc1_1, s21_sprintf_test_6227__);
tcase_add_test(tc1_1, s21_sprintf_test_6228__);
tcase_add_test(tc1_1, s21_sprintf_test_6229__);
tcase_add_test(tc1_1, s21_sprintf_test_6230__);
tcase_add_test(tc1_1, s21_sprintf_test_6231__);
tcase_add_test(tc1_1, s21_sprintf_test_6232__);
tcase_add_test(tc1_1, s21_sprintf_test_6233__);
tcase_add_test(tc1_1, s21_sprintf_test_6234__);
tcase_add_test(tc1_1, s21_sprintf_test_6235__);
tcase_add_test(tc1_1, s21_sprintf_test_6236__);
tcase_add_test(tc1_1, s21_sprintf_test_6237__);
tcase_add_test(tc1_1, s21_sprintf_test_6238__);
tcase_add_test(tc1_1, s21_sprintf_test_6239__);
tcase_add_test(tc1_1, s21_sprintf_test_6240__);
tcase_add_test(tc1_1, s21_sprintf_test_6241__);
tcase_add_test(tc1_1, s21_sprintf_test_6242__);
tcase_add_test(tc1_1, s21_sprintf_test_6243__);
tcase_add_test(tc1_1, s21_sprintf_test_6244__);
tcase_add_test(tc1_1, s21_sprintf_test_6245__);
tcase_add_test(tc1_1, s21_sprintf_test_6246__);
tcase_add_test(tc1_1, s21_sprintf_test_6247__);
tcase_add_test(tc1_1, s21_sprintf_test_6248__);
tcase_add_test(tc1_1, s21_sprintf_test_6249__);
tcase_add_test(tc1_1, s21_sprintf_test_6250__);
tcase_add_test(tc1_1, s21_sprintf_test_6251__);
tcase_add_test(tc1_1, s21_sprintf_test_6252__);
tcase_add_test(tc1_1, s21_sprintf_test_6253__);
tcase_add_test(tc1_1, s21_sprintf_test_6254__);
tcase_add_test(tc1_1, s21_sprintf_test_6255__);
tcase_add_test(tc1_1, s21_sprintf_test_6256__);
tcase_add_test(tc1_1, s21_sprintf_test_6257__);
tcase_add_test(tc1_1, s21_sprintf_test_6258__);
tcase_add_test(tc1_1, s21_sprintf_test_6259__);
tcase_add_test(tc1_1, s21_sprintf_test_6260__);
tcase_add_test(tc1_1, s21_sprintf_test_6261__);
tcase_add_test(tc1_1, s21_sprintf_test_6262__);
tcase_add_test(tc1_1, s21_sprintf_test_6263__);
tcase_add_test(tc1_1, s21_sprintf_test_6264__);
tcase_add_test(tc1_1, s21_sprintf_test_6265__);
tcase_add_test(tc1_1, s21_sprintf_test_6266__);
tcase_add_test(tc1_1, s21_sprintf_test_6267__);
tcase_add_test(tc1_1, s21_sprintf_test_6268__);
tcase_add_test(tc1_1, s21_sprintf_test_6269__);
tcase_add_test(tc1_1, s21_sprintf_test_6270__);
tcase_add_test(tc1_1, s21_sprintf_test_6271__);
tcase_add_test(tc1_1, s21_sprintf_test_6272__);
tcase_add_test(tc1_1, s21_sprintf_test_6273__);
tcase_add_test(tc1_1, s21_sprintf_test_6274__);
tcase_add_test(tc1_1, s21_sprintf_test_6275__);
tcase_add_test(tc1_1, s21_sprintf_test_6276__);
tcase_add_test(tc1_1, s21_sprintf_test_6277__);
tcase_add_test(tc1_1, s21_sprintf_test_6278__);
tcase_add_test(tc1_1, s21_sprintf_test_6279__);
tcase_add_test(tc1_1, s21_sprintf_test_6280__);
tcase_add_test(tc1_1, s21_sprintf_test_6281__);
tcase_add_test(tc1_1, s21_sprintf_test_6282__);
tcase_add_test(tc1_1, s21_sprintf_test_6283__);
tcase_add_test(tc1_1, s21_sprintf_test_6284__);
tcase_add_test(tc1_1, s21_sprintf_test_6285__);
tcase_add_test(tc1_1, s21_sprintf_test_6286__);
tcase_add_test(tc1_1, s21_sprintf_test_6287__);
tcase_add_test(tc1_1, s21_sprintf_test_6288__);
tcase_add_test(tc1_1, s21_sprintf_test_6289__);
tcase_add_test(tc1_1, s21_sprintf_test_6290__);
tcase_add_test(tc1_1, s21_sprintf_test_6291__);
tcase_add_test(tc1_1, s21_sprintf_test_6292__);
tcase_add_test(tc1_1, s21_sprintf_test_6293__);
tcase_add_test(tc1_1, s21_sprintf_test_6294__);
tcase_add_test(tc1_1, s21_sprintf_test_6295__);
tcase_add_test(tc1_1, s21_sprintf_test_6296__);
tcase_add_test(tc1_1, s21_sprintf_test_6297__);
tcase_add_test(tc1_1, s21_sprintf_test_6298__);
tcase_add_test(tc1_1, s21_sprintf_test_6299__);
tcase_add_test(tc1_1, s21_sprintf_test_6300__);
tcase_add_test(tc1_1, s21_sprintf_test_6301__);
tcase_add_test(tc1_1, s21_sprintf_test_6302__);
tcase_add_test(tc1_1, s21_sprintf_test_6303__);
tcase_add_test(tc1_1, s21_sprintf_test_6304__);
tcase_add_test(tc1_1, s21_sprintf_test_6305__);
tcase_add_test(tc1_1, s21_sprintf_test_6306__);
tcase_add_test(tc1_1, s21_sprintf_test_6307__);
tcase_add_test(tc1_1, s21_sprintf_test_6308__);
tcase_add_test(tc1_1, s21_sprintf_test_6309__);
tcase_add_test(tc1_1, s21_sprintf_test_6310__);
tcase_add_test(tc1_1, s21_sprintf_test_6311__);
tcase_add_test(tc1_1, s21_sprintf_test_6312__);
tcase_add_test(tc1_1, s21_sprintf_test_6313__);
tcase_add_test(tc1_1, s21_sprintf_test_6314__);
tcase_add_test(tc1_1, s21_sprintf_test_6315__);
tcase_add_test(tc1_1, s21_sprintf_test_6316__);
tcase_add_test(tc1_1, s21_sprintf_test_6317__);
tcase_add_test(tc1_1, s21_sprintf_test_6318__);
tcase_add_test(tc1_1, s21_sprintf_test_6319__);
tcase_add_test(tc1_1, s21_sprintf_test_6320__);
tcase_add_test(tc1_1, s21_sprintf_test_6321__);
tcase_add_test(tc1_1, s21_sprintf_test_6322__);
tcase_add_test(tc1_1, s21_sprintf_test_6323__);
tcase_add_test(tc1_1, s21_sprintf_test_6324__);
tcase_add_test(tc1_1, s21_sprintf_test_6325__);
tcase_add_test(tc1_1, s21_sprintf_test_6326__);
tcase_add_test(tc1_1, s21_sprintf_test_6327__);
tcase_add_test(tc1_1, s21_sprintf_test_6328__);
tcase_add_test(tc1_1, s21_sprintf_test_6329__);
tcase_add_test(tc1_1, s21_sprintf_test_6330__);
tcase_add_test(tc1_1, s21_sprintf_test_6331__);
tcase_add_test(tc1_1, s21_sprintf_test_6332__);
tcase_add_test(tc1_1, s21_sprintf_test_6333__);
tcase_add_test(tc1_1, s21_sprintf_test_6334__);
tcase_add_test(tc1_1, s21_sprintf_test_6335__);
tcase_add_test(tc1_1, s21_sprintf_test_6336__);
tcase_add_test(tc1_1, s21_sprintf_test_6337__);
tcase_add_test(tc1_1, s21_sprintf_test_6338__);
tcase_add_test(tc1_1, s21_sprintf_test_6339__);
tcase_add_test(tc1_1, s21_sprintf_test_6340__);
tcase_add_test(tc1_1, s21_sprintf_test_6341__);
tcase_add_test(tc1_1, s21_sprintf_test_6342__);
tcase_add_test(tc1_1, s21_sprintf_test_6343__);
tcase_add_test(tc1_1, s21_sprintf_test_6344__);
tcase_add_test(tc1_1, s21_sprintf_test_6345__);
tcase_add_test(tc1_1, s21_sprintf_test_6346__);
tcase_add_test(tc1_1, s21_sprintf_test_6347__);
tcase_add_test(tc1_1, s21_sprintf_test_6348__);
tcase_add_test(tc1_1, s21_sprintf_test_6349__);
tcase_add_test(tc1_1, s21_sprintf_test_6350__);
tcase_add_test(tc1_1, s21_sprintf_test_6351__);
tcase_add_test(tc1_1, s21_sprintf_test_6352__);
tcase_add_test(tc1_1, s21_sprintf_test_6353__);
tcase_add_test(tc1_1, s21_sprintf_test_6354__);
tcase_add_test(tc1_1, s21_sprintf_test_6355__);
tcase_add_test(tc1_1, s21_sprintf_test_6356__);
tcase_add_test(tc1_1, s21_sprintf_test_6357__);
tcase_add_test(tc1_1, s21_sprintf_test_6358__);
tcase_add_test(tc1_1, s21_sprintf_test_6359__);
tcase_add_test(tc1_1, s21_sprintf_test_6360__);
tcase_add_test(tc1_1, s21_sprintf_test_6361__);
tcase_add_test(tc1_1, s21_sprintf_test_6362__);
tcase_add_test(tc1_1, s21_sprintf_test_6363__);
tcase_add_test(tc1_1, s21_sprintf_test_6364__);
tcase_add_test(tc1_1, s21_sprintf_test_6365__);
tcase_add_test(tc1_1, s21_sprintf_test_6366__);
tcase_add_test(tc1_1, s21_sprintf_test_6367__);
tcase_add_test(tc1_1, s21_sprintf_test_6368__);
tcase_add_test(tc1_1, s21_sprintf_test_6369__);
tcase_add_test(tc1_1, s21_sprintf_test_6370__);
tcase_add_test(tc1_1, s21_sprintf_test_6371__);
tcase_add_test(tc1_1, s21_sprintf_test_6372__);
tcase_add_test(tc1_1, s21_sprintf_test_6373__);
tcase_add_test(tc1_1, s21_sprintf_test_6374__);
tcase_add_test(tc1_1, s21_sprintf_test_6375__);
tcase_add_test(tc1_1, s21_sprintf_test_6376__);
tcase_add_test(tc1_1, s21_sprintf_test_6377__);
tcase_add_test(tc1_1, s21_sprintf_test_6378__);
tcase_add_test(tc1_1, s21_sprintf_test_6379__);
tcase_add_test(tc1_1, s21_sprintf_test_6380__);
tcase_add_test(tc1_1, s21_sprintf_test_6381__);
tcase_add_test(tc1_1, s21_sprintf_test_6382__);
tcase_add_test(tc1_1, s21_sprintf_test_6383__);
tcase_add_test(tc1_1, s21_sprintf_test_6384__);
tcase_add_test(tc1_1, s21_sprintf_test_6385__);
tcase_add_test(tc1_1, s21_sprintf_test_6386__);
tcase_add_test(tc1_1, s21_sprintf_test_6387__);
tcase_add_test(tc1_1, s21_sprintf_test_6388__);
tcase_add_test(tc1_1, s21_sprintf_test_6389__);
tcase_add_test(tc1_1, s21_sprintf_test_6390__);
tcase_add_test(tc1_1, s21_sprintf_test_6391__);
tcase_add_test(tc1_1, s21_sprintf_test_6392__);
tcase_add_test(tc1_1, s21_sprintf_test_6393__);
tcase_add_test(tc1_1, s21_sprintf_test_6394__);
tcase_add_test(tc1_1, s21_sprintf_test_6395__);
tcase_add_test(tc1_1, s21_sprintf_test_6396__);
tcase_add_test(tc1_1, s21_sprintf_test_6397__);
tcase_add_test(tc1_1, s21_sprintf_test_6398__);
tcase_add_test(tc1_1, s21_sprintf_test_6399__);
tcase_add_test(tc1_1, s21_sprintf_test_6400__);
tcase_add_test(tc1_1, s21_sprintf_test_6401__);
tcase_add_test(tc1_1, s21_sprintf_test_6402__);
tcase_add_test(tc1_1, s21_sprintf_test_6403__);
tcase_add_test(tc1_1, s21_sprintf_test_6404__);
tcase_add_test(tc1_1, s21_sprintf_test_6405__);
tcase_add_test(tc1_1, s21_sprintf_test_6406__);
tcase_add_test(tc1_1, s21_sprintf_test_6407__);
tcase_add_test(tc1_1, s21_sprintf_test_6408__);
tcase_add_test(tc1_1, s21_sprintf_test_6409__);
tcase_add_test(tc1_1, s21_sprintf_test_6410__);
tcase_add_test(tc1_1, s21_sprintf_test_6411__);
tcase_add_test(tc1_1, s21_sprintf_test_6412__);
tcase_add_test(tc1_1, s21_sprintf_test_6413__);
tcase_add_test(tc1_1, s21_sprintf_test_6414__);
tcase_add_test(tc1_1, s21_sprintf_test_6415__);
tcase_add_test(tc1_1, s21_sprintf_test_6416__);
tcase_add_test(tc1_1, s21_sprintf_test_6417__);
tcase_add_test(tc1_1, s21_sprintf_test_6418__);
tcase_add_test(tc1_1, s21_sprintf_test_6419__);
tcase_add_test(tc1_1, s21_sprintf_test_6420__);
tcase_add_test(tc1_1, s21_sprintf_test_6421__);
tcase_add_test(tc1_1, s21_sprintf_test_6422__);
tcase_add_test(tc1_1, s21_sprintf_test_6423__);
tcase_add_test(tc1_1, s21_sprintf_test_6424__);
tcase_add_test(tc1_1, s21_sprintf_test_6425__);
tcase_add_test(tc1_1, s21_sprintf_test_6426__);
tcase_add_test(tc1_1, s21_sprintf_test_6427__);
tcase_add_test(tc1_1, s21_sprintf_test_6428__);
tcase_add_test(tc1_1, s21_sprintf_test_6429__);
tcase_add_test(tc1_1, s21_sprintf_test_6430__);
tcase_add_test(tc1_1, s21_sprintf_test_6431__);
tcase_add_test(tc1_1, s21_sprintf_test_6432__);
tcase_add_test(tc1_1, s21_sprintf_test_6433__);
tcase_add_test(tc1_1, s21_sprintf_test_6434__);
tcase_add_test(tc1_1, s21_sprintf_test_6435__);
tcase_add_test(tc1_1, s21_sprintf_test_6436__);
tcase_add_test(tc1_1, s21_sprintf_test_6437__);
tcase_add_test(tc1_1, s21_sprintf_test_6438__);
tcase_add_test(tc1_1, s21_sprintf_test_6439__);
tcase_add_test(tc1_1, s21_sprintf_test_6440__);
tcase_add_test(tc1_1, s21_sprintf_test_6441__);
tcase_add_test(tc1_1, s21_sprintf_test_6442__);
tcase_add_test(tc1_1, s21_sprintf_test_6443__);
tcase_add_test(tc1_1, s21_sprintf_test_6444__);
tcase_add_test(tc1_1, s21_sprintf_test_6445__);
tcase_add_test(tc1_1, s21_sprintf_test_6446__);
tcase_add_test(tc1_1, s21_sprintf_test_6447__);
tcase_add_test(tc1_1, s21_sprintf_test_6448__);
tcase_add_test(tc1_1, s21_sprintf_test_6449__);
tcase_add_test(tc1_1, s21_sprintf_test_6450__);
tcase_add_test(tc1_1, s21_sprintf_test_6451__);
tcase_add_test(tc1_1, s21_sprintf_test_6452__);
tcase_add_test(tc1_1, s21_sprintf_test_6453__);
tcase_add_test(tc1_1, s21_sprintf_test_6454__);
tcase_add_test(tc1_1, s21_sprintf_test_6455__);
tcase_add_test(tc1_1, s21_sprintf_test_6456__);
tcase_add_test(tc1_1, s21_sprintf_test_6457__);
tcase_add_test(tc1_1, s21_sprintf_test_6458__);
tcase_add_test(tc1_1, s21_sprintf_test_6459__);
tcase_add_test(tc1_1, s21_sprintf_test_6460__);
tcase_add_test(tc1_1, s21_sprintf_test_6461__);
tcase_add_test(tc1_1, s21_sprintf_test_6462__);
tcase_add_test(tc1_1, s21_sprintf_test_6463__);
tcase_add_test(tc1_1, s21_sprintf_test_6464__);
tcase_add_test(tc1_1, s21_sprintf_test_6465__);
tcase_add_test(tc1_1, s21_sprintf_test_6466__);
tcase_add_test(tc1_1, s21_sprintf_test_6467__);
tcase_add_test(tc1_1, s21_sprintf_test_6468__);
tcase_add_test(tc1_1, s21_sprintf_test_6469__);
tcase_add_test(tc1_1, s21_sprintf_test_6470__);
tcase_add_test(tc1_1, s21_sprintf_test_6471__);
tcase_add_test(tc1_1, s21_sprintf_test_6472__);
tcase_add_test(tc1_1, s21_sprintf_test_6473__);
tcase_add_test(tc1_1, s21_sprintf_test_6474__);
tcase_add_test(tc1_1, s21_sprintf_test_6475__);
tcase_add_test(tc1_1, s21_sprintf_test_6476__);
tcase_add_test(tc1_1, s21_sprintf_test_6477__);
tcase_add_test(tc1_1, s21_sprintf_test_6478__);
tcase_add_test(tc1_1, s21_sprintf_test_6479__);
tcase_add_test(tc1_1, s21_sprintf_test_6480__);
tcase_add_test(tc1_1, s21_sprintf_test_6481__);
tcase_add_test(tc1_1, s21_sprintf_test_6482__);
tcase_add_test(tc1_1, s21_sprintf_test_6483__);
tcase_add_test(tc1_1, s21_sprintf_test_6484__);
tcase_add_test(tc1_1, s21_sprintf_test_6485__);
tcase_add_test(tc1_1, s21_sprintf_test_6486__);
tcase_add_test(tc1_1, s21_sprintf_test_6487__);
tcase_add_test(tc1_1, s21_sprintf_test_6488__);
tcase_add_test(tc1_1, s21_sprintf_test_6489__);
tcase_add_test(tc1_1, s21_sprintf_test_6490__);
tcase_add_test(tc1_1, s21_sprintf_test_6491__);
tcase_add_test(tc1_1, s21_sprintf_test_6492__);
tcase_add_test(tc1_1, s21_sprintf_test_6493__);
tcase_add_test(tc1_1, s21_sprintf_test_6494__);
tcase_add_test(tc1_1, s21_sprintf_test_6495__);
tcase_add_test(tc1_1, s21_sprintf_test_6496__);
tcase_add_test(tc1_1, s21_sprintf_test_6497__);
tcase_add_test(tc1_1, s21_sprintf_test_6498__);
tcase_add_test(tc1_1, s21_sprintf_test_6499__);
tcase_add_test(tc1_1, s21_sprintf_test_6500__);
tcase_add_test(tc1_1, s21_sprintf_test_6501__);
tcase_add_test(tc1_1, s21_sprintf_test_6502__);
tcase_add_test(tc1_1, s21_sprintf_test_6503__);
tcase_add_test(tc1_1, s21_sprintf_test_6504__);
tcase_add_test(tc1_1, s21_sprintf_test_6505__);
tcase_add_test(tc1_1, s21_sprintf_test_6506__);
tcase_add_test(tc1_1, s21_sprintf_test_6507__);
tcase_add_test(tc1_1, s21_sprintf_test_6508__);
tcase_add_test(tc1_1, s21_sprintf_test_6509__);
tcase_add_test(tc1_1, s21_sprintf_test_6510__);
tcase_add_test(tc1_1, s21_sprintf_test_6511__);
tcase_add_test(tc1_1, s21_sprintf_test_6512__);
tcase_add_test(tc1_1, s21_sprintf_test_6513__);
tcase_add_test(tc1_1, s21_sprintf_test_6514__);
tcase_add_test(tc1_1, s21_sprintf_test_6515__);
tcase_add_test(tc1_1, s21_sprintf_test_6516__);
tcase_add_test(tc1_1, s21_sprintf_test_6517__);
tcase_add_test(tc1_1, s21_sprintf_test_6518__);
tcase_add_test(tc1_1, s21_sprintf_test_6519__);
tcase_add_test(tc1_1, s21_sprintf_test_6520__);
tcase_add_test(tc1_1, s21_sprintf_test_6521__);
tcase_add_test(tc1_1, s21_sprintf_test_6522__);
tcase_add_test(tc1_1, s21_sprintf_test_6523__);
tcase_add_test(tc1_1, s21_sprintf_test_6524__);
tcase_add_test(tc1_1, s21_sprintf_test_6525__);
tcase_add_test(tc1_1, s21_sprintf_test_6526__);
tcase_add_test(tc1_1, s21_sprintf_test_6527__);
tcase_add_test(tc1_1, s21_sprintf_test_6528__);
tcase_add_test(tc1_1, s21_sprintf_test_6529__);
tcase_add_test(tc1_1, s21_sprintf_test_6530__);
tcase_add_test(tc1_1, s21_sprintf_test_6531__);
tcase_add_test(tc1_1, s21_sprintf_test_6532__);
tcase_add_test(tc1_1, s21_sprintf_test_6533__);
tcase_add_test(tc1_1, s21_sprintf_test_6534__);
tcase_add_test(tc1_1, s21_sprintf_test_6535__);
tcase_add_test(tc1_1, s21_sprintf_test_6536__);
tcase_add_test(tc1_1, s21_sprintf_test_6537__);
tcase_add_test(tc1_1, s21_sprintf_test_6538__);
tcase_add_test(tc1_1, s21_sprintf_test_6539__);
tcase_add_test(tc1_1, s21_sprintf_test_6540__);
tcase_add_test(tc1_1, s21_sprintf_test_6541__);
tcase_add_test(tc1_1, s21_sprintf_test_6542__);
tcase_add_test(tc1_1, s21_sprintf_test_6543__);
tcase_add_test(tc1_1, s21_sprintf_test_6544__);
tcase_add_test(tc1_1, s21_sprintf_test_6545__);
tcase_add_test(tc1_1, s21_sprintf_test_6546__);
tcase_add_test(tc1_1, s21_sprintf_test_6547__);
tcase_add_test(tc1_1, s21_sprintf_test_6548__);
tcase_add_test(tc1_1, s21_sprintf_test_6549__);
tcase_add_test(tc1_1, s21_sprintf_test_6550__);
tcase_add_test(tc1_1, s21_sprintf_test_6551__);
tcase_add_test(tc1_1, s21_sprintf_test_6552__);
tcase_add_test(tc1_1, s21_sprintf_test_6553__);
tcase_add_test(tc1_1, s21_sprintf_test_6554__);
tcase_add_test(tc1_1, s21_sprintf_test_6555__);
tcase_add_test(tc1_1, s21_sprintf_test_6556__);
tcase_add_test(tc1_1, s21_sprintf_test_6557__);
tcase_add_test(tc1_1, s21_sprintf_test_6558__);
tcase_add_test(tc1_1, s21_sprintf_test_6559__);
tcase_add_test(tc1_1, s21_sprintf_test_6560__);
tcase_add_test(tc1_1, s21_sprintf_test_6561__);
tcase_add_test(tc1_1, s21_sprintf_test_6562__);
tcase_add_test(tc1_1, s21_sprintf_test_6563__);
tcase_add_test(tc1_1, s21_sprintf_test_6564__);
tcase_add_test(tc1_1, s21_sprintf_test_6565__);
tcase_add_test(tc1_1, s21_sprintf_test_6566__);
tcase_add_test(tc1_1, s21_sprintf_test_6567__);
tcase_add_test(tc1_1, s21_sprintf_test_6568__);
tcase_add_test(tc1_1, s21_sprintf_test_6569__);
tcase_add_test(tc1_1, s21_sprintf_test_6570__);
tcase_add_test(tc1_1, s21_sprintf_test_6571__);
tcase_add_test(tc1_1, s21_sprintf_test_6572__);
tcase_add_test(tc1_1, s21_sprintf_test_6573__);
tcase_add_test(tc1_1, s21_sprintf_test_6574__);
tcase_add_test(tc1_1, s21_sprintf_test_6575__);
tcase_add_test(tc1_1, s21_sprintf_test_6576__);
tcase_add_test(tc1_1, s21_sprintf_test_6577__);
tcase_add_test(tc1_1, s21_sprintf_test_6578__);
tcase_add_test(tc1_1, s21_sprintf_test_6579__);
tcase_add_test(tc1_1, s21_sprintf_test_6580__);
tcase_add_test(tc1_1, s21_sprintf_test_6581__);
tcase_add_test(tc1_1, s21_sprintf_test_6582__);
tcase_add_test(tc1_1, s21_sprintf_test_6583__);
tcase_add_test(tc1_1, s21_sprintf_test_6584__);
tcase_add_test(tc1_1, s21_sprintf_test_6585__);
tcase_add_test(tc1_1, s21_sprintf_test_6586__);
tcase_add_test(tc1_1, s21_sprintf_test_6587__);
tcase_add_test(tc1_1, s21_sprintf_test_6588__);
tcase_add_test(tc1_1, s21_sprintf_test_6589__);
tcase_add_test(tc1_1, s21_sprintf_test_6590__);
tcase_add_test(tc1_1, s21_sprintf_test_6591__);
tcase_add_test(tc1_1, s21_sprintf_test_6592__);
tcase_add_test(tc1_1, s21_sprintf_test_6593__);
tcase_add_test(tc1_1, s21_sprintf_test_6594__);
tcase_add_test(tc1_1, s21_sprintf_test_6595__);
tcase_add_test(tc1_1, s21_sprintf_test_6596__);
tcase_add_test(tc1_1, s21_sprintf_test_6597__);
tcase_add_test(tc1_1, s21_sprintf_test_6598__);
tcase_add_test(tc1_1, s21_sprintf_test_6599__);
tcase_add_test(tc1_1, s21_sprintf_test_6600__);
tcase_add_test(tc1_1, s21_sprintf_test_6601__);
tcase_add_test(tc1_1, s21_sprintf_test_6602__);
tcase_add_test(tc1_1, s21_sprintf_test_6603__);
tcase_add_test(tc1_1, s21_sprintf_test_6604__);
tcase_add_test(tc1_1, s21_sprintf_test_6605__);
tcase_add_test(tc1_1, s21_sprintf_test_6606__);
tcase_add_test(tc1_1, s21_sprintf_test_6607__);
tcase_add_test(tc1_1, s21_sprintf_test_6608__);
tcase_add_test(tc1_1, s21_sprintf_test_6609__);
tcase_add_test(tc1_1, s21_sprintf_test_6610__);
tcase_add_test(tc1_1, s21_sprintf_test_6611__);
tcase_add_test(tc1_1, s21_sprintf_test_6612__);
tcase_add_test(tc1_1, s21_sprintf_test_6613__);
tcase_add_test(tc1_1, s21_sprintf_test_6614__);
tcase_add_test(tc1_1, s21_sprintf_test_6615__);
tcase_add_test(tc1_1, s21_sprintf_test_6616__);
tcase_add_test(tc1_1, s21_sprintf_test_6617__);
tcase_add_test(tc1_1, s21_sprintf_test_6618__);
tcase_add_test(tc1_1, s21_sprintf_test_6619__);
tcase_add_test(tc1_1, s21_sprintf_test_6620__);
tcase_add_test(tc1_1, s21_sprintf_test_6621__);
tcase_add_test(tc1_1, s21_sprintf_test_6622__);
tcase_add_test(tc1_1, s21_sprintf_test_6623__);
tcase_add_test(tc1_1, s21_sprintf_test_6624__);
tcase_add_test(tc1_1, s21_sprintf_test_6625__);
tcase_add_test(tc1_1, s21_sprintf_test_6626__);
tcase_add_test(tc1_1, s21_sprintf_test_6627__);
tcase_add_test(tc1_1, s21_sprintf_test_6628__);
tcase_add_test(tc1_1, s21_sprintf_test_6629__);
tcase_add_test(tc1_1, s21_sprintf_test_6630__);
tcase_add_test(tc1_1, s21_sprintf_test_6631__);
tcase_add_test(tc1_1, s21_sprintf_test_6632__);
tcase_add_test(tc1_1, s21_sprintf_test_6633__);
tcase_add_test(tc1_1, s21_sprintf_test_6634__);
tcase_add_test(tc1_1, s21_sprintf_test_6635__);
tcase_add_test(tc1_1, s21_sprintf_test_6636__);
tcase_add_test(tc1_1, s21_sprintf_test_6637__);
tcase_add_test(tc1_1, s21_sprintf_test_6638__);
tcase_add_test(tc1_1, s21_sprintf_test_6639__);
tcase_add_test(tc1_1, s21_sprintf_test_6640__);
tcase_add_test(tc1_1, s21_sprintf_test_6641__);
tcase_add_test(tc1_1, s21_sprintf_test_6642__);
tcase_add_test(tc1_1, s21_sprintf_test_6643__);
tcase_add_test(tc1_1, s21_sprintf_test_6644__);
tcase_add_test(tc1_1, s21_sprintf_test_6645__);
tcase_add_test(tc1_1, s21_sprintf_test_6646__);
tcase_add_test(tc1_1, s21_sprintf_test_6647__);
tcase_add_test(tc1_1, s21_sprintf_test_6648__);
tcase_add_test(tc1_1, s21_sprintf_test_6649__);
tcase_add_test(tc1_1, s21_sprintf_test_6650__);
tcase_add_test(tc1_1, s21_sprintf_test_6651__);
tcase_add_test(tc1_1, s21_sprintf_test_6652__);
tcase_add_test(tc1_1, s21_sprintf_test_6653__);
tcase_add_test(tc1_1, s21_sprintf_test_6654__);
tcase_add_test(tc1_1, s21_sprintf_test_6655__);
tcase_add_test(tc1_1, s21_sprintf_test_6656__);
tcase_add_test(tc1_1, s21_sprintf_test_6657__);
tcase_add_test(tc1_1, s21_sprintf_test_6658__);
tcase_add_test(tc1_1, s21_sprintf_test_6659__);
tcase_add_test(tc1_1, s21_sprintf_test_6660__);
tcase_add_test(tc1_1, s21_sprintf_test_6661__);
tcase_add_test(tc1_1, s21_sprintf_test_6662__);
tcase_add_test(tc1_1, s21_sprintf_test_6663__);
tcase_add_test(tc1_1, s21_sprintf_test_6664__);
tcase_add_test(tc1_1, s21_sprintf_test_6665__);
tcase_add_test(tc1_1, s21_sprintf_test_6666__);
tcase_add_test(tc1_1, s21_sprintf_test_6667__);
tcase_add_test(tc1_1, s21_sprintf_test_6668__);
tcase_add_test(tc1_1, s21_sprintf_test_6669__);
tcase_add_test(tc1_1, s21_sprintf_test_6670__);
tcase_add_test(tc1_1, s21_sprintf_test_6671__);
tcase_add_test(tc1_1, s21_sprintf_test_6672__);
tcase_add_test(tc1_1, s21_sprintf_test_6673__);
tcase_add_test(tc1_1, s21_sprintf_test_6674__);
tcase_add_test(tc1_1, s21_sprintf_test_6675__);
tcase_add_test(tc1_1, s21_sprintf_test_6676__);
tcase_add_test(tc1_1, s21_sprintf_test_6677__);
tcase_add_test(tc1_1, s21_sprintf_test_6678__);
tcase_add_test(tc1_1, s21_sprintf_test_6679__);
tcase_add_test(tc1_1, s21_sprintf_test_6680__);
tcase_add_test(tc1_1, s21_sprintf_test_6681__);
tcase_add_test(tc1_1, s21_sprintf_test_6682__);
tcase_add_test(tc1_1, s21_sprintf_test_6683__);
tcase_add_test(tc1_1, s21_sprintf_test_6684__);
tcase_add_test(tc1_1, s21_sprintf_test_6685__);
tcase_add_test(tc1_1, s21_sprintf_test_6686__);
tcase_add_test(tc1_1, s21_sprintf_test_6687__);
tcase_add_test(tc1_1, s21_sprintf_test_6688__);
tcase_add_test(tc1_1, s21_sprintf_test_6689__);
tcase_add_test(tc1_1, s21_sprintf_test_6690__);
tcase_add_test(tc1_1, s21_sprintf_test_6691__);
tcase_add_test(tc1_1, s21_sprintf_test_6692__);
tcase_add_test(tc1_1, s21_sprintf_test_6693__);
tcase_add_test(tc1_1, s21_sprintf_test_6694__);
tcase_add_test(tc1_1, s21_sprintf_test_6695__);
tcase_add_test(tc1_1, s21_sprintf_test_6696__);
tcase_add_test(tc1_1, s21_sprintf_test_6697__);
tcase_add_test(tc1_1, s21_sprintf_test_6698__);
tcase_add_test(tc1_1, s21_sprintf_test_6699__);
tcase_add_test(tc1_1, s21_sprintf_test_6700__);
tcase_add_test(tc1_1, s21_sprintf_test_6701__);
tcase_add_test(tc1_1, s21_sprintf_test_6702__);
tcase_add_test(tc1_1, s21_sprintf_test_6703__);
tcase_add_test(tc1_1, s21_sprintf_test_6704__);
tcase_add_test(tc1_1, s21_sprintf_test_6705__);
tcase_add_test(tc1_1, s21_sprintf_test_6706__);
tcase_add_test(tc1_1, s21_sprintf_test_6707__);
tcase_add_test(tc1_1, s21_sprintf_test_6708__);
tcase_add_test(tc1_1, s21_sprintf_test_6709__);
tcase_add_test(tc1_1, s21_sprintf_test_6710__);
tcase_add_test(tc1_1, s21_sprintf_test_6711__);
tcase_add_test(tc1_1, s21_sprintf_test_6712__);
tcase_add_test(tc1_1, s21_sprintf_test_6713__);
tcase_add_test(tc1_1, s21_sprintf_test_6714__);
tcase_add_test(tc1_1, s21_sprintf_test_6715__);
tcase_add_test(tc1_1, s21_sprintf_test_6716__);
tcase_add_test(tc1_1, s21_sprintf_test_6717__);
tcase_add_test(tc1_1, s21_sprintf_test_6718__);
tcase_add_test(tc1_1, s21_sprintf_test_6719__);
tcase_add_test(tc1_1, s21_sprintf_test_6720__);
tcase_add_test(tc1_1, s21_sprintf_test_6721__);
tcase_add_test(tc1_1, s21_sprintf_test_6722__);
tcase_add_test(tc1_1, s21_sprintf_test_6723__);
tcase_add_test(tc1_1, s21_sprintf_test_6724__);
tcase_add_test(tc1_1, s21_sprintf_test_6725__);
tcase_add_test(tc1_1, s21_sprintf_test_6726__);
tcase_add_test(tc1_1, s21_sprintf_test_6727__);
tcase_add_test(tc1_1, s21_sprintf_test_6728__);
tcase_add_test(tc1_1, s21_sprintf_test_6729__);
tcase_add_test(tc1_1, s21_sprintf_test_6730__);
tcase_add_test(tc1_1, s21_sprintf_test_6731__);
tcase_add_test(tc1_1, s21_sprintf_test_6732__);
tcase_add_test(tc1_1, s21_sprintf_test_6733__);
tcase_add_test(tc1_1, s21_sprintf_test_6734__);
tcase_add_test(tc1_1, s21_sprintf_test_6735__);
tcase_add_test(tc1_1, s21_sprintf_test_6736__);
tcase_add_test(tc1_1, s21_sprintf_test_6737__);
tcase_add_test(tc1_1, s21_sprintf_test_6738__);
tcase_add_test(tc1_1, s21_sprintf_test_6739__);
tcase_add_test(tc1_1, s21_sprintf_test_6740__);
tcase_add_test(tc1_1, s21_sprintf_test_6741__);
tcase_add_test(tc1_1, s21_sprintf_test_6742__);
tcase_add_test(tc1_1, s21_sprintf_test_6743__);
tcase_add_test(tc1_1, s21_sprintf_test_6744__);
tcase_add_test(tc1_1, s21_sprintf_test_6745__);
tcase_add_test(tc1_1, s21_sprintf_test_6746__);
tcase_add_test(tc1_1, s21_sprintf_test_6747__);
tcase_add_test(tc1_1, s21_sprintf_test_6748__);
tcase_add_test(tc1_1, s21_sprintf_test_6749__);
tcase_add_test(tc1_1, s21_sprintf_test_6750__);
tcase_add_test(tc1_1, s21_sprintf_test_6751__);
tcase_add_test(tc1_1, s21_sprintf_test_6752__);
tcase_add_test(tc1_1, s21_sprintf_test_6753__);
tcase_add_test(tc1_1, s21_sprintf_test_6754__);
tcase_add_test(tc1_1, s21_sprintf_test_6755__);
tcase_add_test(tc1_1, s21_sprintf_test_6756__);
tcase_add_test(tc1_1, s21_sprintf_test_6757__);
tcase_add_test(tc1_1, s21_sprintf_test_6758__);
tcase_add_test(tc1_1, s21_sprintf_test_6759__);
tcase_add_test(tc1_1, s21_sprintf_test_6760__);
tcase_add_test(tc1_1, s21_sprintf_test_6761__);
tcase_add_test(tc1_1, s21_sprintf_test_6762__);
tcase_add_test(tc1_1, s21_sprintf_test_6763__);
tcase_add_test(tc1_1, s21_sprintf_test_6764__);
tcase_add_test(tc1_1, s21_sprintf_test_6765__);
tcase_add_test(tc1_1, s21_sprintf_test_6766__);
tcase_add_test(tc1_1, s21_sprintf_test_6767__);
tcase_add_test(tc1_1, s21_sprintf_test_6768__);
tcase_add_test(tc1_1, s21_sprintf_test_6769__);
tcase_add_test(tc1_1, s21_sprintf_test_6770__);
tcase_add_test(tc1_1, s21_sprintf_test_6771__);
tcase_add_test(tc1_1, s21_sprintf_test_6772__);
tcase_add_test(tc1_1, s21_sprintf_test_6773__);
tcase_add_test(tc1_1, s21_sprintf_test_6774__);
tcase_add_test(tc1_1, s21_sprintf_test_6775__);
tcase_add_test(tc1_1, s21_sprintf_test_6776__);
tcase_add_test(tc1_1, s21_sprintf_test_6777__);
tcase_add_test(tc1_1, s21_sprintf_test_6778__);
tcase_add_test(tc1_1, s21_sprintf_test_6779__);
tcase_add_test(tc1_1, s21_sprintf_test_6780__);
tcase_add_test(tc1_1, s21_sprintf_test_6781__);
tcase_add_test(tc1_1, s21_sprintf_test_6782__);
tcase_add_test(tc1_1, s21_sprintf_test_6783__);
tcase_add_test(tc1_1, s21_sprintf_test_6784__);
tcase_add_test(tc1_1, s21_sprintf_test_6785__);
tcase_add_test(tc1_1, s21_sprintf_test_6786__);
tcase_add_test(tc1_1, s21_sprintf_test_6787__);
tcase_add_test(tc1_1, s21_sprintf_test_6788__);
tcase_add_test(tc1_1, s21_sprintf_test_6789__);
tcase_add_test(tc1_1, s21_sprintf_test_6790__);
tcase_add_test(tc1_1, s21_sprintf_test_6791__);
tcase_add_test(tc1_1, s21_sprintf_test_6792__);
tcase_add_test(tc1_1, s21_sprintf_test_6793__);
tcase_add_test(tc1_1, s21_sprintf_test_6794__);
tcase_add_test(tc1_1, s21_sprintf_test_6795__);
tcase_add_test(tc1_1, s21_sprintf_test_6796__);
tcase_add_test(tc1_1, s21_sprintf_test_6797__);
tcase_add_test(tc1_1, s21_sprintf_test_6798__);
tcase_add_test(tc1_1, s21_sprintf_test_6799__);
tcase_add_test(tc1_1, s21_sprintf_test_6800__);
tcase_add_test(tc1_1, s21_sprintf_test_6801__);
tcase_add_test(tc1_1, s21_sprintf_test_6802__);
tcase_add_test(tc1_1, s21_sprintf_test_6803__);
tcase_add_test(tc1_1, s21_sprintf_test_6804__);
tcase_add_test(tc1_1, s21_sprintf_test_6805__);
tcase_add_test(tc1_1, s21_sprintf_test_6806__);
tcase_add_test(tc1_1, s21_sprintf_test_6807__);
tcase_add_test(tc1_1, s21_sprintf_test_6808__);
tcase_add_test(tc1_1, s21_sprintf_test_6809__);
tcase_add_test(tc1_1, s21_sprintf_test_6810__);
tcase_add_test(tc1_1, s21_sprintf_test_6811__);
tcase_add_test(tc1_1, s21_sprintf_test_6812__);
tcase_add_test(tc1_1, s21_sprintf_test_6813__);
tcase_add_test(tc1_1, s21_sprintf_test_6814__);
tcase_add_test(tc1_1, s21_sprintf_test_6815__);
tcase_add_test(tc1_1, s21_sprintf_test_6816__);
tcase_add_test(tc1_1, s21_sprintf_test_6817__);
tcase_add_test(tc1_1, s21_sprintf_test_6818__);
tcase_add_test(tc1_1, s21_sprintf_test_6819__);
tcase_add_test(tc1_1, s21_sprintf_test_6820__);
tcase_add_test(tc1_1, s21_sprintf_test_6821__);
tcase_add_test(tc1_1, s21_sprintf_test_6822__);
tcase_add_test(tc1_1, s21_sprintf_test_6823__);
tcase_add_test(tc1_1, s21_sprintf_test_6824__);
tcase_add_test(tc1_1, s21_sprintf_test_6825__);
tcase_add_test(tc1_1, s21_sprintf_test_6826__);
tcase_add_test(tc1_1, s21_sprintf_test_6827__);
tcase_add_test(tc1_1, s21_sprintf_test_6828__);
tcase_add_test(tc1_1, s21_sprintf_test_6829__);
tcase_add_test(tc1_1, s21_sprintf_test_6830__);
tcase_add_test(tc1_1, s21_sprintf_test_6831__);
tcase_add_test(tc1_1, s21_sprintf_test_6832__);
tcase_add_test(tc1_1, s21_sprintf_test_6833__);
tcase_add_test(tc1_1, s21_sprintf_test_6834__);
tcase_add_test(tc1_1, s21_sprintf_test_6835__);
tcase_add_test(tc1_1, s21_sprintf_test_6836__);
tcase_add_test(tc1_1, s21_sprintf_test_6837__);
tcase_add_test(tc1_1, s21_sprintf_test_6838__);
tcase_add_test(tc1_1, s21_sprintf_test_6839__);
tcase_add_test(tc1_1, s21_sprintf_test_6840__);
tcase_add_test(tc1_1, s21_sprintf_test_6841__);
tcase_add_test(tc1_1, s21_sprintf_test_6842__);
tcase_add_test(tc1_1, s21_sprintf_test_6843__);
tcase_add_test(tc1_1, s21_sprintf_test_6844__);
tcase_add_test(tc1_1, s21_sprintf_test_6845__);
tcase_add_test(tc1_1, s21_sprintf_test_6846__);
tcase_add_test(tc1_1, s21_sprintf_test_6847__);
tcase_add_test(tc1_1, s21_sprintf_test_6848__);
tcase_add_test(tc1_1, s21_sprintf_test_6849__);
tcase_add_test(tc1_1, s21_sprintf_test_6850__);
tcase_add_test(tc1_1, s21_sprintf_test_6851__);
tcase_add_test(tc1_1, s21_sprintf_test_6852__);
tcase_add_test(tc1_1, s21_sprintf_test_6853__);
tcase_add_test(tc1_1, s21_sprintf_test_6854__);
tcase_add_test(tc1_1, s21_sprintf_test_6855__);
tcase_add_test(tc1_1, s21_sprintf_test_6856__);
tcase_add_test(tc1_1, s21_sprintf_test_6857__);
tcase_add_test(tc1_1, s21_sprintf_test_6858__);
tcase_add_test(tc1_1, s21_sprintf_test_6859__);
tcase_add_test(tc1_1, s21_sprintf_test_6860__);
tcase_add_test(tc1_1, s21_sprintf_test_6861__);
tcase_add_test(tc1_1, s21_sprintf_test_6862__);
tcase_add_test(tc1_1, s21_sprintf_test_6863__);
tcase_add_test(tc1_1, s21_sprintf_test_6864__);
tcase_add_test(tc1_1, s21_sprintf_test_6865__);
tcase_add_test(tc1_1, s21_sprintf_test_6866__);
tcase_add_test(tc1_1, s21_sprintf_test_6867__);
tcase_add_test(tc1_1, s21_sprintf_test_6868__);
tcase_add_test(tc1_1, s21_sprintf_test_6869__);
tcase_add_test(tc1_1, s21_sprintf_test_6870__);
tcase_add_test(tc1_1, s21_sprintf_test_6871__);
tcase_add_test(tc1_1, s21_sprintf_test_6872__);
tcase_add_test(tc1_1, s21_sprintf_test_6873__);
tcase_add_test(tc1_1, s21_sprintf_test_6874__);
tcase_add_test(tc1_1, s21_sprintf_test_6875__);
tcase_add_test(tc1_1, s21_sprintf_test_6876__);
tcase_add_test(tc1_1, s21_sprintf_test_6877__);
tcase_add_test(tc1_1, s21_sprintf_test_6878__);
tcase_add_test(tc1_1, s21_sprintf_test_6879__);
tcase_add_test(tc1_1, s21_sprintf_test_6880__);
tcase_add_test(tc1_1, s21_sprintf_test_6881__);
tcase_add_test(tc1_1, s21_sprintf_test_6882__);
tcase_add_test(tc1_1, s21_sprintf_test_6883__);
tcase_add_test(tc1_1, s21_sprintf_test_6884__);
tcase_add_test(tc1_1, s21_sprintf_test_6885__);
tcase_add_test(tc1_1, s21_sprintf_test_6886__);
tcase_add_test(tc1_1, s21_sprintf_test_6887__);
tcase_add_test(tc1_1, s21_sprintf_test_6888__);
tcase_add_test(tc1_1, s21_sprintf_test_6889__);
tcase_add_test(tc1_1, s21_sprintf_test_6890__);
tcase_add_test(tc1_1, s21_sprintf_test_6891__);
tcase_add_test(tc1_1, s21_sprintf_test_6892__);
tcase_add_test(tc1_1, s21_sprintf_test_6893__);
tcase_add_test(tc1_1, s21_sprintf_test_6894__);
tcase_add_test(tc1_1, s21_sprintf_test_6895__);
tcase_add_test(tc1_1, s21_sprintf_test_6896__);
tcase_add_test(tc1_1, s21_sprintf_test_6897__);
tcase_add_test(tc1_1, s21_sprintf_test_6898__);
tcase_add_test(tc1_1, s21_sprintf_test_6899__);
tcase_add_test(tc1_1, s21_sprintf_test_6900__);
tcase_add_test(tc1_1, s21_sprintf_test_6901__);
tcase_add_test(tc1_1, s21_sprintf_test_6902__);
tcase_add_test(tc1_1, s21_sprintf_test_6903__);
tcase_add_test(tc1_1, s21_sprintf_test_6904__);
tcase_add_test(tc1_1, s21_sprintf_test_6905__);
tcase_add_test(tc1_1, s21_sprintf_test_6906__);
tcase_add_test(tc1_1, s21_sprintf_test_6907__);
tcase_add_test(tc1_1, s21_sprintf_test_6908__);
tcase_add_test(tc1_1, s21_sprintf_test_6909__);
tcase_add_test(tc1_1, s21_sprintf_test_6910__);
tcase_add_test(tc1_1, s21_sprintf_test_6911__);
tcase_add_test(tc1_1, s21_sprintf_test_6912__);
tcase_add_test(tc1_1, s21_sprintf_test_6913__);
tcase_add_test(tc1_1, s21_sprintf_test_6914__);
tcase_add_test(tc1_1, s21_sprintf_test_6915__);
tcase_add_test(tc1_1, s21_sprintf_test_6916__);
tcase_add_test(tc1_1, s21_sprintf_test_6917__);
tcase_add_test(tc1_1, s21_sprintf_test_6918__);
tcase_add_test(tc1_1, s21_sprintf_test_6919__);
tcase_add_test(tc1_1, s21_sprintf_test_6920__);
tcase_add_test(tc1_1, s21_sprintf_test_6921__);
tcase_add_test(tc1_1, s21_sprintf_test_6922__);
tcase_add_test(tc1_1, s21_sprintf_test_6923__);
tcase_add_test(tc1_1, s21_sprintf_test_6924__);
tcase_add_test(tc1_1, s21_sprintf_test_6925__);
tcase_add_test(tc1_1, s21_sprintf_test_6926__);
tcase_add_test(tc1_1, s21_sprintf_test_6927__);
tcase_add_test(tc1_1, s21_sprintf_test_6928__);
tcase_add_test(tc1_1, s21_sprintf_test_6929__);
tcase_add_test(tc1_1, s21_sprintf_test_6930__);
tcase_add_test(tc1_1, s21_sprintf_test_6931__);
tcase_add_test(tc1_1, s21_sprintf_test_6932__);
tcase_add_test(tc1_1, s21_sprintf_test_6933__);
tcase_add_test(tc1_1, s21_sprintf_test_6934__);
tcase_add_test(tc1_1, s21_sprintf_test_6935__);
tcase_add_test(tc1_1, s21_sprintf_test_6936__);
tcase_add_test(tc1_1, s21_sprintf_test_6937__);
tcase_add_test(tc1_1, s21_sprintf_test_6938__);
tcase_add_test(tc1_1, s21_sprintf_test_6939__);
tcase_add_test(tc1_1, s21_sprintf_test_6940__);
tcase_add_test(tc1_1, s21_sprintf_test_6941__);
tcase_add_test(tc1_1, s21_sprintf_test_6942__);
tcase_add_test(tc1_1, s21_sprintf_test_6943__);
tcase_add_test(tc1_1, s21_sprintf_test_6944__);
tcase_add_test(tc1_1, s21_sprintf_test_6945__);
tcase_add_test(tc1_1, s21_sprintf_test_6946__);
tcase_add_test(tc1_1, s21_sprintf_test_6947__);
tcase_add_test(tc1_1, s21_sprintf_test_6948__);
tcase_add_test(tc1_1, s21_sprintf_test_6949__);
tcase_add_test(tc1_1, s21_sprintf_test_6950__);
tcase_add_test(tc1_1, s21_sprintf_test_6951__);
tcase_add_test(tc1_1, s21_sprintf_test_6952__);
tcase_add_test(tc1_1, s21_sprintf_test_6953__);
tcase_add_test(tc1_1, s21_sprintf_test_6954__);
tcase_add_test(tc1_1, s21_sprintf_test_6955__);
tcase_add_test(tc1_1, s21_sprintf_test_6956__);
tcase_add_test(tc1_1, s21_sprintf_test_6957__);
tcase_add_test(tc1_1, s21_sprintf_test_6958__);
tcase_add_test(tc1_1, s21_sprintf_test_6959__);
tcase_add_test(tc1_1, s21_sprintf_test_6960__);
tcase_add_test(tc1_1, s21_sprintf_test_6961__);
tcase_add_test(tc1_1, s21_sprintf_test_6962__);
tcase_add_test(tc1_1, s21_sprintf_test_6963__);
tcase_add_test(tc1_1, s21_sprintf_test_6964__);
tcase_add_test(tc1_1, s21_sprintf_test_6965__);
tcase_add_test(tc1_1, s21_sprintf_test_6966__);
tcase_add_test(tc1_1, s21_sprintf_test_6967__);
tcase_add_test(tc1_1, s21_sprintf_test_6968__);
tcase_add_test(tc1_1, s21_sprintf_test_6969__);
tcase_add_test(tc1_1, s21_sprintf_test_6970__);
tcase_add_test(tc1_1, s21_sprintf_test_6971__);
tcase_add_test(tc1_1, s21_sprintf_test_6972__);
tcase_add_test(tc1_1, s21_sprintf_test_6973__);
tcase_add_test(tc1_1, s21_sprintf_test_6974__);
tcase_add_test(tc1_1, s21_sprintf_test_6975__);
tcase_add_test(tc1_1, s21_sprintf_test_6976__);
tcase_add_test(tc1_1, s21_sprintf_test_6977__);
tcase_add_test(tc1_1, s21_sprintf_test_6978__);
tcase_add_test(tc1_1, s21_sprintf_test_6979__);
tcase_add_test(tc1_1, s21_sprintf_test_6980__);
tcase_add_test(tc1_1, s21_sprintf_test_6981__);
tcase_add_test(tc1_1, s21_sprintf_test_6982__);
tcase_add_test(tc1_1, s21_sprintf_test_6983__);
tcase_add_test(tc1_1, s21_sprintf_test_6984__);
tcase_add_test(tc1_1, s21_sprintf_test_6985__);
tcase_add_test(tc1_1, s21_sprintf_test_6986__);
tcase_add_test(tc1_1, s21_sprintf_test_6987__);
tcase_add_test(tc1_1, s21_sprintf_test_6988__);
tcase_add_test(tc1_1, s21_sprintf_test_6989__);
tcase_add_test(tc1_1, s21_sprintf_test_6990__);
tcase_add_test(tc1_1, s21_sprintf_test_6991__);
tcase_add_test(tc1_1, s21_sprintf_test_6992__);
tcase_add_test(tc1_1, s21_sprintf_test_6993__);
tcase_add_test(tc1_1, s21_sprintf_test_6994__);
tcase_add_test(tc1_1, s21_sprintf_test_6995__);
tcase_add_test(tc1_1, s21_sprintf_test_6996__);
tcase_add_test(tc1_1, s21_sprintf_test_6997__);
tcase_add_test(tc1_1, s21_sprintf_test_6998__);
tcase_add_test(tc1_1, s21_sprintf_test_6999__);
tcase_add_test(tc1_1, s21_sprintf_test_7000__);
tcase_add_test(tc1_1, s21_sprintf_test_7001__);
tcase_add_test(tc1_1, s21_sprintf_test_7002__);
tcase_add_test(tc1_1, s21_sprintf_test_7003__);
tcase_add_test(tc1_1, s21_sprintf_test_7004__);
tcase_add_test(tc1_1, s21_sprintf_test_7005__);
tcase_add_test(tc1_1, s21_sprintf_test_7006__);
tcase_add_test(tc1_1, s21_sprintf_test_7007__);
tcase_add_test(tc1_1, s21_sprintf_test_7008__);
tcase_add_test(tc1_1, s21_sprintf_test_7009__);
tcase_add_test(tc1_1, s21_sprintf_test_7010__);
tcase_add_test(tc1_1, s21_sprintf_test_7011__);
tcase_add_test(tc1_1, s21_sprintf_test_7012__);
tcase_add_test(tc1_1, s21_sprintf_test_7013__);
tcase_add_test(tc1_1, s21_sprintf_test_7014__);
tcase_add_test(tc1_1, s21_sprintf_test_7015__);
tcase_add_test(tc1_1, s21_sprintf_test_7016__);
tcase_add_test(tc1_1, s21_sprintf_test_7017__);
tcase_add_test(tc1_1, s21_sprintf_test_7018__);
tcase_add_test(tc1_1, s21_sprintf_test_7019__);
tcase_add_test(tc1_1, s21_sprintf_test_7020__);
tcase_add_test(tc1_1, s21_sprintf_test_7021__);
tcase_add_test(tc1_1, s21_sprintf_test_7022__);
tcase_add_test(tc1_1, s21_sprintf_test_7023__);
tcase_add_test(tc1_1, s21_sprintf_test_7024__);
tcase_add_test(tc1_1, s21_sprintf_test_7025__);
tcase_add_test(tc1_1, s21_sprintf_test_7026__);
tcase_add_test(tc1_1, s21_sprintf_test_7027__);
tcase_add_test(tc1_1, s21_sprintf_test_7028__);
tcase_add_test(tc1_1, s21_sprintf_test_7029__);
tcase_add_test(tc1_1, s21_sprintf_test_7030__);
tcase_add_test(tc1_1, s21_sprintf_test_7031__);
tcase_add_test(tc1_1, s21_sprintf_test_7032__);
tcase_add_test(tc1_1, s21_sprintf_test_7033__);
tcase_add_test(tc1_1, s21_sprintf_test_7034__);
tcase_add_test(tc1_1, s21_sprintf_test_7035__);
tcase_add_test(tc1_1, s21_sprintf_test_7036__);
tcase_add_test(tc1_1, s21_sprintf_test_7037__);
tcase_add_test(tc1_1, s21_sprintf_test_7038__);
tcase_add_test(tc1_1, s21_sprintf_test_7039__);
tcase_add_test(tc1_1, s21_sprintf_test_7040__);
tcase_add_test(tc1_1, s21_sprintf_test_7041__);
tcase_add_test(tc1_1, s21_sprintf_test_7042__);
tcase_add_test(tc1_1, s21_sprintf_test_7043__);
tcase_add_test(tc1_1, s21_sprintf_test_7044__);
tcase_add_test(tc1_1, s21_sprintf_test_7045__);
tcase_add_test(tc1_1, s21_sprintf_test_7046__);
tcase_add_test(tc1_1, s21_sprintf_test_7047__);
tcase_add_test(tc1_1, s21_sprintf_test_7048__);
tcase_add_test(tc1_1, s21_sprintf_test_7049__);
tcase_add_test(tc1_1, s21_sprintf_test_7050__);
tcase_add_test(tc1_1, s21_sprintf_test_7051__);
tcase_add_test(tc1_1, s21_sprintf_test_7052__);
tcase_add_test(tc1_1, s21_sprintf_test_7053__);
tcase_add_test(tc1_1, s21_sprintf_test_7054__);
tcase_add_test(tc1_1, s21_sprintf_test_7055__);
tcase_add_test(tc1_1, s21_sprintf_test_7056__);
tcase_add_test(tc1_1, s21_sprintf_test_7057__);
tcase_add_test(tc1_1, s21_sprintf_test_7058__);
tcase_add_test(tc1_1, s21_sprintf_test_7059__);
tcase_add_test(tc1_1, s21_sprintf_test_7060__);
tcase_add_test(tc1_1, s21_sprintf_test_7061__);
tcase_add_test(tc1_1, s21_sprintf_test_7062__);
tcase_add_test(tc1_1, s21_sprintf_test_7063__);
tcase_add_test(tc1_1, s21_sprintf_test_7064__);
tcase_add_test(tc1_1, s21_sprintf_test_7065__);
tcase_add_test(tc1_1, s21_sprintf_test_7066__);
tcase_add_test(tc1_1, s21_sprintf_test_7067__);
tcase_add_test(tc1_1, s21_sprintf_test_7068__);
tcase_add_test(tc1_1, s21_sprintf_test_7069__);
tcase_add_test(tc1_1, s21_sprintf_test_7070__);
tcase_add_test(tc1_1, s21_sprintf_test_7071__);
tcase_add_test(tc1_1, s21_sprintf_test_7072__);
tcase_add_test(tc1_1, s21_sprintf_test_7073__);
tcase_add_test(tc1_1, s21_sprintf_test_7074__);
tcase_add_test(tc1_1, s21_sprintf_test_7075__);
tcase_add_test(tc1_1, s21_sprintf_test_7076__);
tcase_add_test(tc1_1, s21_sprintf_test_7077__);
tcase_add_test(tc1_1, s21_sprintf_test_7078__);
tcase_add_test(tc1_1, s21_sprintf_test_7079__);
tcase_add_test(tc1_1, s21_sprintf_test_7080__);
tcase_add_test(tc1_1, s21_sprintf_test_7081__);
tcase_add_test(tc1_1, s21_sprintf_test_7082__);
tcase_add_test(tc1_1, s21_sprintf_test_7083__);
tcase_add_test(tc1_1, s21_sprintf_test_7084__);
tcase_add_test(tc1_1, s21_sprintf_test_7085__);
tcase_add_test(tc1_1, s21_sprintf_test_7086__);
tcase_add_test(tc1_1, s21_sprintf_test_7087__);
tcase_add_test(tc1_1, s21_sprintf_test_7088__);
tcase_add_test(tc1_1, s21_sprintf_test_7089__);
tcase_add_test(tc1_1, s21_sprintf_test_7090__);
tcase_add_test(tc1_1, s21_sprintf_test_7091__);
tcase_add_test(tc1_1, s21_sprintf_test_7092__);
tcase_add_test(tc1_1, s21_sprintf_test_7093__);
tcase_add_test(tc1_1, s21_sprintf_test_7094__);
tcase_add_test(tc1_1, s21_sprintf_test_7095__);
tcase_add_test(tc1_1, s21_sprintf_test_7096__);
tcase_add_test(tc1_1, s21_sprintf_test_7097__);
tcase_add_test(tc1_1, s21_sprintf_test_7098__);
tcase_add_test(tc1_1, s21_sprintf_test_7099__);
tcase_add_test(tc1_1, s21_sprintf_test_7100__);
tcase_add_test(tc1_1, s21_sprintf_test_7101__);
tcase_add_test(tc1_1, s21_sprintf_test_7102__);
tcase_add_test(tc1_1, s21_sprintf_test_7103__);
tcase_add_test(tc1_1, s21_sprintf_test_7104__);
tcase_add_test(tc1_1, s21_sprintf_test_7105__);
tcase_add_test(tc1_1, s21_sprintf_test_7106__);
tcase_add_test(tc1_1, s21_sprintf_test_7107__);
tcase_add_test(tc1_1, s21_sprintf_test_7108__);
tcase_add_test(tc1_1, s21_sprintf_test_7109__);
tcase_add_test(tc1_1, s21_sprintf_test_7110__);
tcase_add_test(tc1_1, s21_sprintf_test_7111__);
tcase_add_test(tc1_1, s21_sprintf_test_7112__);
tcase_add_test(tc1_1, s21_sprintf_test_7113__);
tcase_add_test(tc1_1, s21_sprintf_test_7114__);
tcase_add_test(tc1_1, s21_sprintf_test_7115__);
tcase_add_test(tc1_1, s21_sprintf_test_7116__);
tcase_add_test(tc1_1, s21_sprintf_test_7117__);
tcase_add_test(tc1_1, s21_sprintf_test_7118__);
tcase_add_test(tc1_1, s21_sprintf_test_7119__);
tcase_add_test(tc1_1, s21_sprintf_test_7120__);
tcase_add_test(tc1_1, s21_sprintf_test_7121__);
tcase_add_test(tc1_1, s21_sprintf_test_7122__);
tcase_add_test(tc1_1, s21_sprintf_test_7123__);
tcase_add_test(tc1_1, s21_sprintf_test_7124__);
tcase_add_test(tc1_1, s21_sprintf_test_7125__);
tcase_add_test(tc1_1, s21_sprintf_test_7126__);
tcase_add_test(tc1_1, s21_sprintf_test_7127__);
tcase_add_test(tc1_1, s21_sprintf_test_7128__);
tcase_add_test(tc1_1, s21_sprintf_test_7129__);
tcase_add_test(tc1_1, s21_sprintf_test_7130__);
tcase_add_test(tc1_1, s21_sprintf_test_7131__);
tcase_add_test(tc1_1, s21_sprintf_test_7132__);
tcase_add_test(tc1_1, s21_sprintf_test_7133__);
tcase_add_test(tc1_1, s21_sprintf_test_7134__);
tcase_add_test(tc1_1, s21_sprintf_test_7135__);
tcase_add_test(tc1_1, s21_sprintf_test_7136__);
tcase_add_test(tc1_1, s21_sprintf_test_7137__);
tcase_add_test(tc1_1, s21_sprintf_test_7138__);
tcase_add_test(tc1_1, s21_sprintf_test_7139__);
tcase_add_test(tc1_1, s21_sprintf_test_7140__);
tcase_add_test(tc1_1, s21_sprintf_test_7141__);
tcase_add_test(tc1_1, s21_sprintf_test_7142__);
tcase_add_test(tc1_1, s21_sprintf_test_7143__);
tcase_add_test(tc1_1, s21_sprintf_test_7144__);
tcase_add_test(tc1_1, s21_sprintf_test_7145__);
tcase_add_test(tc1_1, s21_sprintf_test_7146__);
tcase_add_test(tc1_1, s21_sprintf_test_7147__);
tcase_add_test(tc1_1, s21_sprintf_test_7148__);
tcase_add_test(tc1_1, s21_sprintf_test_7149__);
tcase_add_test(tc1_1, s21_sprintf_test_7150__);
tcase_add_test(tc1_1, s21_sprintf_test_7151__);
tcase_add_test(tc1_1, s21_sprintf_test_7152__);
tcase_add_test(tc1_1, s21_sprintf_test_7153__);
tcase_add_test(tc1_1, s21_sprintf_test_7154__);
tcase_add_test(tc1_1, s21_sprintf_test_7155__);
tcase_add_test(tc1_1, s21_sprintf_test_7156__);
tcase_add_test(tc1_1, s21_sprintf_test_7157__);
tcase_add_test(tc1_1, s21_sprintf_test_7158__);
tcase_add_test(tc1_1, s21_sprintf_test_7159__);
tcase_add_test(tc1_1, s21_sprintf_test_7160__);
tcase_add_test(tc1_1, s21_sprintf_test_7161__);
tcase_add_test(tc1_1, s21_sprintf_test_7162__);
tcase_add_test(tc1_1, s21_sprintf_test_7163__);
tcase_add_test(tc1_1, s21_sprintf_test_7164__);
tcase_add_test(tc1_1, s21_sprintf_test_7165__);
tcase_add_test(tc1_1, s21_sprintf_test_7166__);
tcase_add_test(tc1_1, s21_sprintf_test_7167__);
tcase_add_test(tc1_1, s21_sprintf_test_7168__);
tcase_add_test(tc1_1, s21_sprintf_test_7169__);
tcase_add_test(tc1_1, s21_sprintf_test_7170__);
tcase_add_test(tc1_1, s21_sprintf_test_7171__);
tcase_add_test(tc1_1, s21_sprintf_test_7172__);
tcase_add_test(tc1_1, s21_sprintf_test_7173__);
tcase_add_test(tc1_1, s21_sprintf_test_7174__);
tcase_add_test(tc1_1, s21_sprintf_test_7175__);
tcase_add_test(tc1_1, s21_sprintf_test_7176__);
tcase_add_test(tc1_1, s21_sprintf_test_7177__);
tcase_add_test(tc1_1, s21_sprintf_test_7178__);
tcase_add_test(tc1_1, s21_sprintf_test_7179__);
tcase_add_test(tc1_1, s21_sprintf_test_7180__);
tcase_add_test(tc1_1, s21_sprintf_test_7181__);
tcase_add_test(tc1_1, s21_sprintf_test_7182__);
tcase_add_test(tc1_1, s21_sprintf_test_7183__);
tcase_add_test(tc1_1, s21_sprintf_test_7184__);
tcase_add_test(tc1_1, s21_sprintf_test_7185__);
tcase_add_test(tc1_1, s21_sprintf_test_7186__);
tcase_add_test(tc1_1, s21_sprintf_test_7187__);
tcase_add_test(tc1_1, s21_sprintf_test_7188__);
tcase_add_test(tc1_1, s21_sprintf_test_7189__);
tcase_add_test(tc1_1, s21_sprintf_test_7190__);
tcase_add_test(tc1_1, s21_sprintf_test_7191__);
tcase_add_test(tc1_1, s21_sprintf_test_7192__);
tcase_add_test(tc1_1, s21_sprintf_test_7193__);
tcase_add_test(tc1_1, s21_sprintf_test_7194__);
tcase_add_test(tc1_1, s21_sprintf_test_7195__);
tcase_add_test(tc1_1, s21_sprintf_test_7196__);
tcase_add_test(tc1_1, s21_sprintf_test_7197__);
tcase_add_test(tc1_1, s21_sprintf_test_7198__);
tcase_add_test(tc1_1, s21_sprintf_test_7199__);
tcase_add_test(tc1_1, s21_sprintf_test_7200__);
tcase_add_test(tc1_1, s21_sprintf_test_7201__);
tcase_add_test(tc1_1, s21_sprintf_test_7202__);
tcase_add_test(tc1_1, s21_sprintf_test_7203__);
tcase_add_test(tc1_1, s21_sprintf_test_7204__);
tcase_add_test(tc1_1, s21_sprintf_test_7205__);
tcase_add_test(tc1_1, s21_sprintf_test_7206__);
tcase_add_test(tc1_1, s21_sprintf_test_7207__);
tcase_add_test(tc1_1, s21_sprintf_test_7208__);
tcase_add_test(tc1_1, s21_sprintf_test_7209__);
tcase_add_test(tc1_1, s21_sprintf_test_7210__);
tcase_add_test(tc1_1, s21_sprintf_test_7211__);
tcase_add_test(tc1_1, s21_sprintf_test_7212__);
tcase_add_test(tc1_1, s21_sprintf_test_7213__);
tcase_add_test(tc1_1, s21_sprintf_test_7214__);
tcase_add_test(tc1_1, s21_sprintf_test_7215__);
tcase_add_test(tc1_1, s21_sprintf_test_7216__);
tcase_add_test(tc1_1, s21_sprintf_test_7217__);
tcase_add_test(tc1_1, s21_sprintf_test_7218__);
tcase_add_test(tc1_1, s21_sprintf_test_7219__);
tcase_add_test(tc1_1, s21_sprintf_test_7220__);
tcase_add_test(tc1_1, s21_sprintf_test_7221__);
tcase_add_test(tc1_1, s21_sprintf_test_7222__);
tcase_add_test(tc1_1, s21_sprintf_test_7223__);
tcase_add_test(tc1_1, s21_sprintf_test_7224__);
tcase_add_test(tc1_1, s21_sprintf_test_7225__);
tcase_add_test(tc1_1, s21_sprintf_test_7226__);
tcase_add_test(tc1_1, s21_sprintf_test_7227__);
tcase_add_test(tc1_1, s21_sprintf_test_7228__);
tcase_add_test(tc1_1, s21_sprintf_test_7229__);
tcase_add_test(tc1_1, s21_sprintf_test_7230__);
tcase_add_test(tc1_1, s21_sprintf_test_7231__);
tcase_add_test(tc1_1, s21_sprintf_test_7232__);
tcase_add_test(tc1_1, s21_sprintf_test_7233__);
tcase_add_test(tc1_1, s21_sprintf_test_7234__);
tcase_add_test(tc1_1, s21_sprintf_test_7235__);
tcase_add_test(tc1_1, s21_sprintf_test_7236__);
tcase_add_test(tc1_1, s21_sprintf_test_7237__);
tcase_add_test(tc1_1, s21_sprintf_test_7238__);
tcase_add_test(tc1_1, s21_sprintf_test_7239__);
tcase_add_test(tc1_1, s21_sprintf_test_7240__);
tcase_add_test(tc1_1, s21_sprintf_test_7241__);
tcase_add_test(tc1_1, s21_sprintf_test_7242__);
tcase_add_test(tc1_1, s21_sprintf_test_7243__);
tcase_add_test(tc1_1, s21_sprintf_test_7244__);
tcase_add_test(tc1_1, s21_sprintf_test_7245__);
tcase_add_test(tc1_1, s21_sprintf_test_7246__);
tcase_add_test(tc1_1, s21_sprintf_test_7247__);
tcase_add_test(tc1_1, s21_sprintf_test_7248__);
tcase_add_test(tc1_1, s21_sprintf_test_7249__);
tcase_add_test(tc1_1, s21_sprintf_test_7250__);
tcase_add_test(tc1_1, s21_sprintf_test_7251__);
tcase_add_test(tc1_1, s21_sprintf_test_7252__);
tcase_add_test(tc1_1, s21_sprintf_test_7253__);
tcase_add_test(tc1_1, s21_sprintf_test_7254__);
tcase_add_test(tc1_1, s21_sprintf_test_7255__);
tcase_add_test(tc1_1, s21_sprintf_test_7256__);
tcase_add_test(tc1_1, s21_sprintf_test_7257__);
tcase_add_test(tc1_1, s21_sprintf_test_7258__);
tcase_add_test(tc1_1, s21_sprintf_test_7259__);
tcase_add_test(tc1_1, s21_sprintf_test_7260__);
tcase_add_test(tc1_1, s21_sprintf_test_7261__);
tcase_add_test(tc1_1, s21_sprintf_test_7262__);
tcase_add_test(tc1_1, s21_sprintf_test_7263__);
tcase_add_test(tc1_1, s21_sprintf_test_7264__);
tcase_add_test(tc1_1, s21_sprintf_test_7265__);
tcase_add_test(tc1_1, s21_sprintf_test_7266__);
tcase_add_test(tc1_1, s21_sprintf_test_7267__);
tcase_add_test(tc1_1, s21_sprintf_test_7268__);
tcase_add_test(tc1_1, s21_sprintf_test_7269__);
tcase_add_test(tc1_1, s21_sprintf_test_7270__);
tcase_add_test(tc1_1, s21_sprintf_test_7271__);
tcase_add_test(tc1_1, s21_sprintf_test_7272__);
tcase_add_test(tc1_1, s21_sprintf_test_7273__);
tcase_add_test(tc1_1, s21_sprintf_test_7274__);
tcase_add_test(tc1_1, s21_sprintf_test_7275__);
tcase_add_test(tc1_1, s21_sprintf_test_7276__);
tcase_add_test(tc1_1, s21_sprintf_test_7277__);
tcase_add_test(tc1_1, s21_sprintf_test_7278__);
tcase_add_test(tc1_1, s21_sprintf_test_7279__);
tcase_add_test(tc1_1, s21_sprintf_test_7280__);
tcase_add_test(tc1_1, s21_sprintf_test_7281__);
tcase_add_test(tc1_1, s21_sprintf_test_7282__);
tcase_add_test(tc1_1, s21_sprintf_test_7283__);
tcase_add_test(tc1_1, s21_sprintf_test_7284__);
tcase_add_test(tc1_1, s21_sprintf_test_7285__);
tcase_add_test(tc1_1, s21_sprintf_test_7286__);
tcase_add_test(tc1_1, s21_sprintf_test_7287__);
tcase_add_test(tc1_1, s21_sprintf_test_7288__);
tcase_add_test(tc1_1, s21_sprintf_test_7289__);
tcase_add_test(tc1_1, s21_sprintf_test_7290__);
tcase_add_test(tc1_1, s21_sprintf_test_7291__);
tcase_add_test(tc1_1, s21_sprintf_test_7292__);
tcase_add_test(tc1_1, s21_sprintf_test_7293__);
tcase_add_test(tc1_1, s21_sprintf_test_7294__);
tcase_add_test(tc1_1, s21_sprintf_test_7295__);
tcase_add_test(tc1_1, s21_sprintf_test_7296__);
tcase_add_test(tc1_1, s21_sprintf_test_7297__);
tcase_add_test(tc1_1, s21_sprintf_test_7298__);
tcase_add_test(tc1_1, s21_sprintf_test_7299__);
tcase_add_test(tc1_1, s21_sprintf_test_7300__);
tcase_add_test(tc1_1, s21_sprintf_test_7301__);
tcase_add_test(tc1_1, s21_sprintf_test_7302__);
tcase_add_test(tc1_1, s21_sprintf_test_7303__);
tcase_add_test(tc1_1, s21_sprintf_test_7304__);
tcase_add_test(tc1_1, s21_sprintf_test_7305__);
tcase_add_test(tc1_1, s21_sprintf_test_7306__);
tcase_add_test(tc1_1, s21_sprintf_test_7307__);
tcase_add_test(tc1_1, s21_sprintf_test_7308__);
tcase_add_test(tc1_1, s21_sprintf_test_7309__);
tcase_add_test(tc1_1, s21_sprintf_test_7310__);
tcase_add_test(tc1_1, s21_sprintf_test_7311__);
tcase_add_test(tc1_1, s21_sprintf_test_7312__);
tcase_add_test(tc1_1, s21_sprintf_test_7313__);
tcase_add_test(tc1_1, s21_sprintf_test_7314__);
tcase_add_test(tc1_1, s21_sprintf_test_7315__);
tcase_add_test(tc1_1, s21_sprintf_test_7316__);
tcase_add_test(tc1_1, s21_sprintf_test_7317__);
tcase_add_test(tc1_1, s21_sprintf_test_7318__);
tcase_add_test(tc1_1, s21_sprintf_test_7319__);
tcase_add_test(tc1_1, s21_sprintf_test_7320__);
tcase_add_test(tc1_1, s21_sprintf_test_7321__);
tcase_add_test(tc1_1, s21_sprintf_test_7322__);
tcase_add_test(tc1_1, s21_sprintf_test_7323__);
tcase_add_test(tc1_1, s21_sprintf_test_7324__);
tcase_add_test(tc1_1, s21_sprintf_test_7325__);
tcase_add_test(tc1_1, s21_sprintf_test_7326__);
tcase_add_test(tc1_1, s21_sprintf_test_7327__);
tcase_add_test(tc1_1, s21_sprintf_test_7328__);
tcase_add_test(tc1_1, s21_sprintf_test_7329__);
tcase_add_test(tc1_1, s21_sprintf_test_7330__);
tcase_add_test(tc1_1, s21_sprintf_test_7331__);
tcase_add_test(tc1_1, s21_sprintf_test_7332__);
tcase_add_test(tc1_1, s21_sprintf_test_7333__);
tcase_add_test(tc1_1, s21_sprintf_test_7334__);
tcase_add_test(tc1_1, s21_sprintf_test_7335__);
tcase_add_test(tc1_1, s21_sprintf_test_7336__);
tcase_add_test(tc1_1, s21_sprintf_test_7337__);
tcase_add_test(tc1_1, s21_sprintf_test_7338__);
tcase_add_test(tc1_1, s21_sprintf_test_7339__);
tcase_add_test(tc1_1, s21_sprintf_test_7340__);
tcase_add_test(tc1_1, s21_sprintf_test_7341__);
tcase_add_test(tc1_1, s21_sprintf_test_7342__);
tcase_add_test(tc1_1, s21_sprintf_test_7343__);
tcase_add_test(tc1_1, s21_sprintf_test_7344__);
tcase_add_test(tc1_1, s21_sprintf_test_7345__);
tcase_add_test(tc1_1, s21_sprintf_test_7346__);
tcase_add_test(tc1_1, s21_sprintf_test_7347__);
tcase_add_test(tc1_1, s21_sprintf_test_7348__);
tcase_add_test(tc1_1, s21_sprintf_test_7349__);
tcase_add_test(tc1_1, s21_sprintf_test_7350__);
tcase_add_test(tc1_1, s21_sprintf_test_7351__);
tcase_add_test(tc1_1, s21_sprintf_test_7352__);
tcase_add_test(tc1_1, s21_sprintf_test_7353__);
tcase_add_test(tc1_1, s21_sprintf_test_7354__);
tcase_add_test(tc1_1, s21_sprintf_test_7355__);
tcase_add_test(tc1_1, s21_sprintf_test_7356__);
tcase_add_test(tc1_1, s21_sprintf_test_7357__);
tcase_add_test(tc1_1, s21_sprintf_test_7358__);
tcase_add_test(tc1_1, s21_sprintf_test_7359__);
tcase_add_test(tc1_1, s21_sprintf_test_7360__);
tcase_add_test(tc1_1, s21_sprintf_test_7361__);
tcase_add_test(tc1_1, s21_sprintf_test_7362__);
tcase_add_test(tc1_1, s21_sprintf_test_7363__);
tcase_add_test(tc1_1, s21_sprintf_test_7364__);
tcase_add_test(tc1_1, s21_sprintf_test_7365__);
tcase_add_test(tc1_1, s21_sprintf_test_7366__);
tcase_add_test(tc1_1, s21_sprintf_test_7367__);
tcase_add_test(tc1_1, s21_sprintf_test_7368__);
tcase_add_test(tc1_1, s21_sprintf_test_7369__);
tcase_add_test(tc1_1, s21_sprintf_test_7370__);
tcase_add_test(tc1_1, s21_sprintf_test_7371__);
tcase_add_test(tc1_1, s21_sprintf_test_7372__);
tcase_add_test(tc1_1, s21_sprintf_test_7373__);
tcase_add_test(tc1_1, s21_sprintf_test_7374__);
tcase_add_test(tc1_1, s21_sprintf_test_7375__);
tcase_add_test(tc1_1, s21_sprintf_test_7376__);
tcase_add_test(tc1_1, s21_sprintf_test_7377__);
tcase_add_test(tc1_1, s21_sprintf_test_7378__);
tcase_add_test(tc1_1, s21_sprintf_test_7379__);
tcase_add_test(tc1_1, s21_sprintf_test_7380__);
tcase_add_test(tc1_1, s21_sprintf_test_7381__);
tcase_add_test(tc1_1, s21_sprintf_test_7382__);
tcase_add_test(tc1_1, s21_sprintf_test_7383__);
tcase_add_test(tc1_1, s21_sprintf_test_7384__);
tcase_add_test(tc1_1, s21_sprintf_test_7385__);
tcase_add_test(tc1_1, s21_sprintf_test_7386__);
tcase_add_test(tc1_1, s21_sprintf_test_7387__);
tcase_add_test(tc1_1, s21_sprintf_test_7388__);
tcase_add_test(tc1_1, s21_sprintf_test_7389__);
tcase_add_test(tc1_1, s21_sprintf_test_7390__);
tcase_add_test(tc1_1, s21_sprintf_test_7391__);
tcase_add_test(tc1_1, s21_sprintf_test_7392__);
tcase_add_test(tc1_1, s21_sprintf_test_7393__);
tcase_add_test(tc1_1, s21_sprintf_test_7394__);
tcase_add_test(tc1_1, s21_sprintf_test_7395__);
tcase_add_test(tc1_1, s21_sprintf_test_7396__);
tcase_add_test(tc1_1, s21_sprintf_test_7397__);
tcase_add_test(tc1_1, s21_sprintf_test_7398__);
tcase_add_test(tc1_1, s21_sprintf_test_7399__);
tcase_add_test(tc1_1, s21_sprintf_test_7400__);
tcase_add_test(tc1_1, s21_sprintf_test_7401__);
tcase_add_test(tc1_1, s21_sprintf_test_7402__);
tcase_add_test(tc1_1, s21_sprintf_test_7403__);
tcase_add_test(tc1_1, s21_sprintf_test_7404__);
tcase_add_test(tc1_1, s21_sprintf_test_7405__);
tcase_add_test(tc1_1, s21_sprintf_test_7406__);
tcase_add_test(tc1_1, s21_sprintf_test_7407__);
tcase_add_test(tc1_1, s21_sprintf_test_7408__);
tcase_add_test(tc1_1, s21_sprintf_test_7409__);
tcase_add_test(tc1_1, s21_sprintf_test_7410__);
tcase_add_test(tc1_1, s21_sprintf_test_7411__);
tcase_add_test(tc1_1, s21_sprintf_test_7412__);
tcase_add_test(tc1_1, s21_sprintf_test_7413__);
tcase_add_test(tc1_1, s21_sprintf_test_7414__);
tcase_add_test(tc1_1, s21_sprintf_test_7415__);
tcase_add_test(tc1_1, s21_sprintf_test_7416__);
tcase_add_test(tc1_1, s21_sprintf_test_7417__);
tcase_add_test(tc1_1, s21_sprintf_test_7418__);
tcase_add_test(tc1_1, s21_sprintf_test_7419__);
tcase_add_test(tc1_1, s21_sprintf_test_7420__);
tcase_add_test(tc1_1, s21_sprintf_test_7421__);
tcase_add_test(tc1_1, s21_sprintf_test_7422__);
tcase_add_test(tc1_1, s21_sprintf_test_7423__);
tcase_add_test(tc1_1, s21_sprintf_test_7424__);
tcase_add_test(tc1_1, s21_sprintf_test_7425__);
tcase_add_test(tc1_1, s21_sprintf_test_7426__);
tcase_add_test(tc1_1, s21_sprintf_test_7427__);
tcase_add_test(tc1_1, s21_sprintf_test_7428__);
tcase_add_test(tc1_1, s21_sprintf_test_7429__);
tcase_add_test(tc1_1, s21_sprintf_test_7430__);
tcase_add_test(tc1_1, s21_sprintf_test_7431__);
tcase_add_test(tc1_1, s21_sprintf_test_7432__);
tcase_add_test(tc1_1, s21_sprintf_test_7433__);
tcase_add_test(tc1_1, s21_sprintf_test_7434__);
tcase_add_test(tc1_1, s21_sprintf_test_7435__);
tcase_add_test(tc1_1, s21_sprintf_test_7436__);
tcase_add_test(tc1_1, s21_sprintf_test_7437__);
tcase_add_test(tc1_1, s21_sprintf_test_7438__);
tcase_add_test(tc1_1, s21_sprintf_test_7439__);
tcase_add_test(tc1_1, s21_sprintf_test_7440__);
tcase_add_test(tc1_1, s21_sprintf_test_7441__);
tcase_add_test(tc1_1, s21_sprintf_test_7442__);
tcase_add_test(tc1_1, s21_sprintf_test_7443__);
tcase_add_test(tc1_1, s21_sprintf_test_7444__);
tcase_add_test(tc1_1, s21_sprintf_test_7445__);
tcase_add_test(tc1_1, s21_sprintf_test_7446__);
tcase_add_test(tc1_1, s21_sprintf_test_7447__);
tcase_add_test(tc1_1, s21_sprintf_test_7448__);
tcase_add_test(tc1_1, s21_sprintf_test_7449__);
tcase_add_test(tc1_1, s21_sprintf_test_7450__);
tcase_add_test(tc1_1, s21_sprintf_test_7451__);
tcase_add_test(tc1_1, s21_sprintf_test_7452__);
tcase_add_test(tc1_1, s21_sprintf_test_7453__);
tcase_add_test(tc1_1, s21_sprintf_test_7454__);
tcase_add_test(tc1_1, s21_sprintf_test_7455__);
tcase_add_test(tc1_1, s21_sprintf_test_7456__);
tcase_add_test(tc1_1, s21_sprintf_test_7457__);
tcase_add_test(tc1_1, s21_sprintf_test_7458__);
tcase_add_test(tc1_1, s21_sprintf_test_7459__);
tcase_add_test(tc1_1, s21_sprintf_test_7460__);
tcase_add_test(tc1_1, s21_sprintf_test_7461__);
tcase_add_test(tc1_1, s21_sprintf_test_7462__);
tcase_add_test(tc1_1, s21_sprintf_test_7463__);
tcase_add_test(tc1_1, s21_sprintf_test_7464__);
tcase_add_test(tc1_1, s21_sprintf_test_7465__);
tcase_add_test(tc1_1, s21_sprintf_test_7466__);
tcase_add_test(tc1_1, s21_sprintf_test_7467__);
tcase_add_test(tc1_1, s21_sprintf_test_7468__);
tcase_add_test(tc1_1, s21_sprintf_test_7469__);
tcase_add_test(tc1_1, s21_sprintf_test_7470__);
tcase_add_test(tc1_1, s21_sprintf_test_7471__);
tcase_add_test(tc1_1, s21_sprintf_test_7472__);
tcase_add_test(tc1_1, s21_sprintf_test_7473__);
tcase_add_test(tc1_1, s21_sprintf_test_7474__);
tcase_add_test(tc1_1, s21_sprintf_test_7475__);
tcase_add_test(tc1_1, s21_sprintf_test_7476__);
tcase_add_test(tc1_1, s21_sprintf_test_7477__);
tcase_add_test(tc1_1, s21_sprintf_test_7478__);
tcase_add_test(tc1_1, s21_sprintf_test_7479__);
tcase_add_test(tc1_1, s21_sprintf_test_7480__);
tcase_add_test(tc1_1, s21_sprintf_test_7481__);
tcase_add_test(tc1_1, s21_sprintf_test_7482__);
tcase_add_test(tc1_1, s21_sprintf_test_7483__);
tcase_add_test(tc1_1, s21_sprintf_test_7484__);
tcase_add_test(tc1_1, s21_sprintf_test_7485__);
tcase_add_test(tc1_1, s21_sprintf_test_7486__);
tcase_add_test(tc1_1, s21_sprintf_test_7487__);
tcase_add_test(tc1_1, s21_sprintf_test_7488__);
tcase_add_test(tc1_1, s21_sprintf_test_7489__);
tcase_add_test(tc1_1, s21_sprintf_test_7490__);
tcase_add_test(tc1_1, s21_sprintf_test_7491__);
tcase_add_test(tc1_1, s21_sprintf_test_7492__);
tcase_add_test(tc1_1, s21_sprintf_test_7493__);
tcase_add_test(tc1_1, s21_sprintf_test_7494__);
tcase_add_test(tc1_1, s21_sprintf_test_7495__);
tcase_add_test(tc1_1, s21_sprintf_test_7496__);
tcase_add_test(tc1_1, s21_sprintf_test_7497__);
tcase_add_test(tc1_1, s21_sprintf_test_7498__);
tcase_add_test(tc1_1, s21_sprintf_test_7499__);
tcase_add_test(tc1_1, s21_sprintf_test_7500__);
tcase_add_test(tc1_1, s21_sprintf_test_7501__);
tcase_add_test(tc1_1, s21_sprintf_test_7502__);
tcase_add_test(tc1_1, s21_sprintf_test_7503__);
tcase_add_test(tc1_1, s21_sprintf_test_7504__);
tcase_add_test(tc1_1, s21_sprintf_test_7505__);
tcase_add_test(tc1_1, s21_sprintf_test_7506__);
tcase_add_test(tc1_1, s21_sprintf_test_7507__);
tcase_add_test(tc1_1, s21_sprintf_test_7508__);
tcase_add_test(tc1_1, s21_sprintf_test_7509__);
tcase_add_test(tc1_1, s21_sprintf_test_7510__);
tcase_add_test(tc1_1, s21_sprintf_test_7511__);
tcase_add_test(tc1_1, s21_sprintf_test_7512__);
tcase_add_test(tc1_1, s21_sprintf_test_7513__);
tcase_add_test(tc1_1, s21_sprintf_test_7514__);
tcase_add_test(tc1_1, s21_sprintf_test_7515__);
tcase_add_test(tc1_1, s21_sprintf_test_7516__);
tcase_add_test(tc1_1, s21_sprintf_test_7517__);
tcase_add_test(tc1_1, s21_sprintf_test_7518__);
tcase_add_test(tc1_1, s21_sprintf_test_7519__);
tcase_add_test(tc1_1, s21_sprintf_test_7520__);
tcase_add_test(tc1_1, s21_sprintf_test_7521__);
tcase_add_test(tc1_1, s21_sprintf_test_7522__);
tcase_add_test(tc1_1, s21_sprintf_test_7523__);
tcase_add_test(tc1_1, s21_sprintf_test_7524__);
tcase_add_test(tc1_1, s21_sprintf_test_7525__);
tcase_add_test(tc1_1, s21_sprintf_test_7526__);
tcase_add_test(tc1_1, s21_sprintf_test_7527__);
tcase_add_test(tc1_1, s21_sprintf_test_7528__);
tcase_add_test(tc1_1, s21_sprintf_test_7529__);
tcase_add_test(tc1_1, s21_sprintf_test_7530__);
tcase_add_test(tc1_1, s21_sprintf_test_7531__);
tcase_add_test(tc1_1, s21_sprintf_test_7532__);
tcase_add_test(tc1_1, s21_sprintf_test_7533__);
tcase_add_test(tc1_1, s21_sprintf_test_7534__);
tcase_add_test(tc1_1, s21_sprintf_test_7535__);
tcase_add_test(tc1_1, s21_sprintf_test_7536__);
tcase_add_test(tc1_1, s21_sprintf_test_7537__);
tcase_add_test(tc1_1, s21_sprintf_test_7538__);
tcase_add_test(tc1_1, s21_sprintf_test_7539__);
tcase_add_test(tc1_1, s21_sprintf_test_7540__);
tcase_add_test(tc1_1, s21_sprintf_test_7541__);
tcase_add_test(tc1_1, s21_sprintf_test_7542__);
tcase_add_test(tc1_1, s21_sprintf_test_7543__);
tcase_add_test(tc1_1, s21_sprintf_test_7544__);
tcase_add_test(tc1_1, s21_sprintf_test_7545__);
tcase_add_test(tc1_1, s21_sprintf_test_7546__);
tcase_add_test(tc1_1, s21_sprintf_test_7547__);
tcase_add_test(tc1_1, s21_sprintf_test_7548__);
tcase_add_test(tc1_1, s21_sprintf_test_7549__);
tcase_add_test(tc1_1, s21_sprintf_test_7550__);
tcase_add_test(tc1_1, s21_sprintf_test_7551__);
tcase_add_test(tc1_1, s21_sprintf_test_7552__);
tcase_add_test(tc1_1, s21_sprintf_test_7553__);
tcase_add_test(tc1_1, s21_sprintf_test_7554__);
tcase_add_test(tc1_1, s21_sprintf_test_7555__);
tcase_add_test(tc1_1, s21_sprintf_test_7556__);
tcase_add_test(tc1_1, s21_sprintf_test_7557__);
tcase_add_test(tc1_1, s21_sprintf_test_7558__);
tcase_add_test(tc1_1, s21_sprintf_test_7559__);
tcase_add_test(tc1_1, s21_sprintf_test_7560__);
tcase_add_test(tc1_1, s21_sprintf_test_7561__);
tcase_add_test(tc1_1, s21_sprintf_test_7562__);
tcase_add_test(tc1_1, s21_sprintf_test_7563__);
tcase_add_test(tc1_1, s21_sprintf_test_7564__);
tcase_add_test(tc1_1, s21_sprintf_test_7565__);
tcase_add_test(tc1_1, s21_sprintf_test_7566__);
tcase_add_test(tc1_1, s21_sprintf_test_7567__);
tcase_add_test(tc1_1, s21_sprintf_test_7568__);
tcase_add_test(tc1_1, s21_sprintf_test_7569__);
tcase_add_test(tc1_1, s21_sprintf_test_7570__);
tcase_add_test(tc1_1, s21_sprintf_test_7571__);
tcase_add_test(tc1_1, s21_sprintf_test_7572__);
tcase_add_test(tc1_1, s21_sprintf_test_7573__);
tcase_add_test(tc1_1, s21_sprintf_test_7574__);
tcase_add_test(tc1_1, s21_sprintf_test_7575__);
tcase_add_test(tc1_1, s21_sprintf_test_7576__);
tcase_add_test(tc1_1, s21_sprintf_test_7577__);
tcase_add_test(tc1_1, s21_sprintf_test_7578__);
tcase_add_test(tc1_1, s21_sprintf_test_7579__);
tcase_add_test(tc1_1, s21_sprintf_test_7580__);
tcase_add_test(tc1_1, s21_sprintf_test_7581__);
tcase_add_test(tc1_1, s21_sprintf_test_7582__);
tcase_add_test(tc1_1, s21_sprintf_test_7583__);
tcase_add_test(tc1_1, s21_sprintf_test_7584__);
tcase_add_test(tc1_1, s21_sprintf_test_7585__);
tcase_add_test(tc1_1, s21_sprintf_test_7586__);
tcase_add_test(tc1_1, s21_sprintf_test_7587__);
tcase_add_test(tc1_1, s21_sprintf_test_7588__);
tcase_add_test(tc1_1, s21_sprintf_test_7589__);
tcase_add_test(tc1_1, s21_sprintf_test_7590__);
tcase_add_test(tc1_1, s21_sprintf_test_7591__);
tcase_add_test(tc1_1, s21_sprintf_test_7592__);
tcase_add_test(tc1_1, s21_sprintf_test_7593__);
tcase_add_test(tc1_1, s21_sprintf_test_7594__);
tcase_add_test(tc1_1, s21_sprintf_test_7595__);
tcase_add_test(tc1_1, s21_sprintf_test_7596__);
tcase_add_test(tc1_1, s21_sprintf_test_7597__);
tcase_add_test(tc1_1, s21_sprintf_test_7598__);
tcase_add_test(tc1_1, s21_sprintf_test_7599__);
tcase_add_test(tc1_1, s21_sprintf_test_7600__);
tcase_add_test(tc1_1, s21_sprintf_test_7601__);
tcase_add_test(tc1_1, s21_sprintf_test_7602__);
tcase_add_test(tc1_1, s21_sprintf_test_7603__);
tcase_add_test(tc1_1, s21_sprintf_test_7604__);
tcase_add_test(tc1_1, s21_sprintf_test_7605__);
tcase_add_test(tc1_1, s21_sprintf_test_7606__);
tcase_add_test(tc1_1, s21_sprintf_test_7607__);
tcase_add_test(tc1_1, s21_sprintf_test_7608__);
tcase_add_test(tc1_1, s21_sprintf_test_7609__);
tcase_add_test(tc1_1, s21_sprintf_test_7610__);
tcase_add_test(tc1_1, s21_sprintf_test_7611__);
tcase_add_test(tc1_1, s21_sprintf_test_7612__);
tcase_add_test(tc1_1, s21_sprintf_test_7613__);
tcase_add_test(tc1_1, s21_sprintf_test_7614__);
tcase_add_test(tc1_1, s21_sprintf_test_7615__);
tcase_add_test(tc1_1, s21_sprintf_test_7616__);
tcase_add_test(tc1_1, s21_sprintf_test_7617__);
tcase_add_test(tc1_1, s21_sprintf_test_7618__);
tcase_add_test(tc1_1, s21_sprintf_test_7619__);
tcase_add_test(tc1_1, s21_sprintf_test_7620__);
tcase_add_test(tc1_1, s21_sprintf_test_7621__);
tcase_add_test(tc1_1, s21_sprintf_test_7622__);
tcase_add_test(tc1_1, s21_sprintf_test_7623__);
tcase_add_test(tc1_1, s21_sprintf_test_7624__);
tcase_add_test(tc1_1, s21_sprintf_test_7625__);
tcase_add_test(tc1_1, s21_sprintf_test_7626__);
tcase_add_test(tc1_1, s21_sprintf_test_7627__);
tcase_add_test(tc1_1, s21_sprintf_test_7628__);
tcase_add_test(tc1_1, s21_sprintf_test_7629__);
tcase_add_test(tc1_1, s21_sprintf_test_7630__);
tcase_add_test(tc1_1, s21_sprintf_test_7631__);
tcase_add_test(tc1_1, s21_sprintf_test_7632__);
tcase_add_test(tc1_1, s21_sprintf_test_7633__);
tcase_add_test(tc1_1, s21_sprintf_test_7634__);
tcase_add_test(tc1_1, s21_sprintf_test_7635__);
tcase_add_test(tc1_1, s21_sprintf_test_7636__);
tcase_add_test(tc1_1, s21_sprintf_test_7637__);
tcase_add_test(tc1_1, s21_sprintf_test_7638__);
tcase_add_test(tc1_1, s21_sprintf_test_7639__);
tcase_add_test(tc1_1, s21_sprintf_test_7640__);
tcase_add_test(tc1_1, s21_sprintf_test_7641__);
tcase_add_test(tc1_1, s21_sprintf_test_7642__);
tcase_add_test(tc1_1, s21_sprintf_test_7643__);
tcase_add_test(tc1_1, s21_sprintf_test_7644__);
tcase_add_test(tc1_1, s21_sprintf_test_7645__);
tcase_add_test(tc1_1, s21_sprintf_test_7646__);
tcase_add_test(tc1_1, s21_sprintf_test_7647__);
tcase_add_test(tc1_1, s21_sprintf_test_7648__);
tcase_add_test(tc1_1, s21_sprintf_test_7649__);
tcase_add_test(tc1_1, s21_sprintf_test_7650__);
tcase_add_test(tc1_1, s21_sprintf_test_7651__);
tcase_add_test(tc1_1, s21_sprintf_test_7652__);
tcase_add_test(tc1_1, s21_sprintf_test_7653__);
tcase_add_test(tc1_1, s21_sprintf_test_7654__);
tcase_add_test(tc1_1, s21_sprintf_test_7655__);
tcase_add_test(tc1_1, s21_sprintf_test_7656__);
tcase_add_test(tc1_1, s21_sprintf_test_7657__);
tcase_add_test(tc1_1, s21_sprintf_test_7658__);
tcase_add_test(tc1_1, s21_sprintf_test_7659__);
tcase_add_test(tc1_1, s21_sprintf_test_7660__);
tcase_add_test(tc1_1, s21_sprintf_test_7661__);
tcase_add_test(tc1_1, s21_sprintf_test_7662__);
tcase_add_test(tc1_1, s21_sprintf_test_7663__);
tcase_add_test(tc1_1, s21_sprintf_test_7664__);
tcase_add_test(tc1_1, s21_sprintf_test_7665__);
tcase_add_test(tc1_1, s21_sprintf_test_7666__);
tcase_add_test(tc1_1, s21_sprintf_test_7667__);
tcase_add_test(tc1_1, s21_sprintf_test_7668__);
tcase_add_test(tc1_1, s21_sprintf_test_7669__);
tcase_add_test(tc1_1, s21_sprintf_test_7670__);
tcase_add_test(tc1_1, s21_sprintf_test_7671__);
tcase_add_test(tc1_1, s21_sprintf_test_7672__);
tcase_add_test(tc1_1, s21_sprintf_test_7673__);
tcase_add_test(tc1_1, s21_sprintf_test_7674__);
tcase_add_test(tc1_1, s21_sprintf_test_7675__);
tcase_add_test(tc1_1, s21_sprintf_test_7676__);
tcase_add_test(tc1_1, s21_sprintf_test_7677__);
tcase_add_test(tc1_1, s21_sprintf_test_7678__);
tcase_add_test(tc1_1, s21_sprintf_test_7679__);
tcase_add_test(tc1_1, s21_sprintf_test_7680__);
tcase_add_test(tc1_1, s21_sprintf_test_7681__);
tcase_add_test(tc1_1, s21_sprintf_test_7682__);
tcase_add_test(tc1_1, s21_sprintf_test_7683__);
tcase_add_test(tc1_1, s21_sprintf_test_7684__);
tcase_add_test(tc1_1, s21_sprintf_test_7685__);
tcase_add_test(tc1_1, s21_sprintf_test_7686__);
tcase_add_test(tc1_1, s21_sprintf_test_7687__);
tcase_add_test(tc1_1, s21_sprintf_test_7688__);
tcase_add_test(tc1_1, s21_sprintf_test_7689__);
tcase_add_test(tc1_1, s21_sprintf_test_7690__);
tcase_add_test(tc1_1, s21_sprintf_test_7691__);
tcase_add_test(tc1_1, s21_sprintf_test_7692__);
tcase_add_test(tc1_1, s21_sprintf_test_7693__);
tcase_add_test(tc1_1, s21_sprintf_test_7694__);
tcase_add_test(tc1_1, s21_sprintf_test_7695__);
tcase_add_test(tc1_1, s21_sprintf_test_7696__);
tcase_add_test(tc1_1, s21_sprintf_test_7697__);
tcase_add_test(tc1_1, s21_sprintf_test_7698__);
tcase_add_test(tc1_1, s21_sprintf_test_7699__);
tcase_add_test(tc1_1, s21_sprintf_test_7700__);
tcase_add_test(tc1_1, s21_sprintf_test_7701__);
tcase_add_test(tc1_1, s21_sprintf_test_7702__);
tcase_add_test(tc1_1, s21_sprintf_test_7703__);
tcase_add_test(tc1_1, s21_sprintf_test_7704__);
tcase_add_test(tc1_1, s21_sprintf_test_7705__);
tcase_add_test(tc1_1, s21_sprintf_test_7706__);
tcase_add_test(tc1_1, s21_sprintf_test_7707__);
tcase_add_test(tc1_1, s21_sprintf_test_7708__);
tcase_add_test(tc1_1, s21_sprintf_test_7709__);
tcase_add_test(tc1_1, s21_sprintf_test_7710__);
tcase_add_test(tc1_1, s21_sprintf_test_7711__);
tcase_add_test(tc1_1, s21_sprintf_test_7712__);
tcase_add_test(tc1_1, s21_sprintf_test_7713__);
tcase_add_test(tc1_1, s21_sprintf_test_7714__);
tcase_add_test(tc1_1, s21_sprintf_test_7715__);
tcase_add_test(tc1_1, s21_sprintf_test_7716__);
tcase_add_test(tc1_1, s21_sprintf_test_7717__);
tcase_add_test(tc1_1, s21_sprintf_test_7718__);
tcase_add_test(tc1_1, s21_sprintf_test_7719__);
tcase_add_test(tc1_1, s21_sprintf_test_7720__);
tcase_add_test(tc1_1, s21_sprintf_test_7721__);
tcase_add_test(tc1_1, s21_sprintf_test_7722__);
tcase_add_test(tc1_1, s21_sprintf_test_7723__);
tcase_add_test(tc1_1, s21_sprintf_test_7724__);
tcase_add_test(tc1_1, s21_sprintf_test_7725__);
tcase_add_test(tc1_1, s21_sprintf_test_7726__);
tcase_add_test(tc1_1, s21_sprintf_test_7727__);
tcase_add_test(tc1_1, s21_sprintf_test_7728__);
tcase_add_test(tc1_1, s21_sprintf_test_7729__);
tcase_add_test(tc1_1, s21_sprintf_test_7730__);
tcase_add_test(tc1_1, s21_sprintf_test_7731__);
tcase_add_test(tc1_1, s21_sprintf_test_7732__);
tcase_add_test(tc1_1, s21_sprintf_test_7733__);
tcase_add_test(tc1_1, s21_sprintf_test_7734__);
tcase_add_test(tc1_1, s21_sprintf_test_7735__);
tcase_add_test(tc1_1, s21_sprintf_test_7736__);
tcase_add_test(tc1_1, s21_sprintf_test_7737__);
tcase_add_test(tc1_1, s21_sprintf_test_7738__);
tcase_add_test(tc1_1, s21_sprintf_test_7739__);
tcase_add_test(tc1_1, s21_sprintf_test_7740__);
tcase_add_test(tc1_1, s21_sprintf_test_7741__);
tcase_add_test(tc1_1, s21_sprintf_test_7742__);
tcase_add_test(tc1_1, s21_sprintf_test_7743__);
tcase_add_test(tc1_1, s21_sprintf_test_7744__);
tcase_add_test(tc1_1, s21_sprintf_test_7745__);
tcase_add_test(tc1_1, s21_sprintf_test_7746__);
tcase_add_test(tc1_1, s21_sprintf_test_7747__);
tcase_add_test(tc1_1, s21_sprintf_test_7748__);
tcase_add_test(tc1_1, s21_sprintf_test_7749__);
tcase_add_test(tc1_1, s21_sprintf_test_7750__);
tcase_add_test(tc1_1, s21_sprintf_test_7751__);
tcase_add_test(tc1_1, s21_sprintf_test_7752__);
tcase_add_test(tc1_1, s21_sprintf_test_7753__);
tcase_add_test(tc1_1, s21_sprintf_test_7754__);
tcase_add_test(tc1_1, s21_sprintf_test_7755__);
tcase_add_test(tc1_1, s21_sprintf_test_7756__);
tcase_add_test(tc1_1, s21_sprintf_test_7757__);
tcase_add_test(tc1_1, s21_sprintf_test_7758__);
tcase_add_test(tc1_1, s21_sprintf_test_7759__);
tcase_add_test(tc1_1, s21_sprintf_test_7760__);
tcase_add_test(tc1_1, s21_sprintf_test_7761__);
tcase_add_test(tc1_1, s21_sprintf_test_7762__);
tcase_add_test(tc1_1, s21_sprintf_test_7763__);
tcase_add_test(tc1_1, s21_sprintf_test_7764__);
tcase_add_test(tc1_1, s21_sprintf_test_7765__);
tcase_add_test(tc1_1, s21_sprintf_test_7766__);
tcase_add_test(tc1_1, s21_sprintf_test_7767__);
tcase_add_test(tc1_1, s21_sprintf_test_7768__);
tcase_add_test(tc1_1, s21_sprintf_test_7769__);
tcase_add_test(tc1_1, s21_sprintf_test_7770__);
tcase_add_test(tc1_1, s21_sprintf_test_7771__);
tcase_add_test(tc1_1, s21_sprintf_test_7772__);
tcase_add_test(tc1_1, s21_sprintf_test_7773__);
tcase_add_test(tc1_1, s21_sprintf_test_7774__);
tcase_add_test(tc1_1, s21_sprintf_test_7775__);
tcase_add_test(tc1_1, s21_sprintf_test_7776__);
tcase_add_test(tc1_1, s21_sprintf_test_7777__);
tcase_add_test(tc1_1, s21_sprintf_test_7778__);
tcase_add_test(tc1_1, s21_sprintf_test_7779__);
tcase_add_test(tc1_1, s21_sprintf_test_7780__);
tcase_add_test(tc1_1, s21_sprintf_test_7781__);
tcase_add_test(tc1_1, s21_sprintf_test_7782__);
tcase_add_test(tc1_1, s21_sprintf_test_7783__);
tcase_add_test(tc1_1, s21_sprintf_test_7784__);
tcase_add_test(tc1_1, s21_sprintf_test_7785__);
tcase_add_test(tc1_1, s21_sprintf_test_7786__);
tcase_add_test(tc1_1, s21_sprintf_test_7787__);
tcase_add_test(tc1_1, s21_sprintf_test_7788__);
tcase_add_test(tc1_1, s21_sprintf_test_7789__);
tcase_add_test(tc1_1, s21_sprintf_test_7790__);
tcase_add_test(tc1_1, s21_sprintf_test_7791__);
tcase_add_test(tc1_1, s21_sprintf_test_7792__);
tcase_add_test(tc1_1, s21_sprintf_test_7793__);
tcase_add_test(tc1_1, s21_sprintf_test_7794__);
tcase_add_test(tc1_1, s21_sprintf_test_7795__);
tcase_add_test(tc1_1, s21_sprintf_test_7796__);
tcase_add_test(tc1_1, s21_sprintf_test_7797__);
tcase_add_test(tc1_1, s21_sprintf_test_7798__);
tcase_add_test(tc1_1, s21_sprintf_test_7799__);
tcase_add_test(tc1_1, s21_sprintf_test_7800__);
tcase_add_test(tc1_1, s21_sprintf_test_7801__);
tcase_add_test(tc1_1, s21_sprintf_test_7802__);
tcase_add_test(tc1_1, s21_sprintf_test_7803__);
tcase_add_test(tc1_1, s21_sprintf_test_7804__);
tcase_add_test(tc1_1, s21_sprintf_test_7805__);
tcase_add_test(tc1_1, s21_sprintf_test_7806__);
tcase_add_test(tc1_1, s21_sprintf_test_7807__);
tcase_add_test(tc1_1, s21_sprintf_test_7808__);
tcase_add_test(tc1_1, s21_sprintf_test_7809__);
tcase_add_test(tc1_1, s21_sprintf_test_7810__);
tcase_add_test(tc1_1, s21_sprintf_test_7811__);
tcase_add_test(tc1_1, s21_sprintf_test_7812__);
tcase_add_test(tc1_1, s21_sprintf_test_7813__);
tcase_add_test(tc1_1, s21_sprintf_test_7814__);
tcase_add_test(tc1_1, s21_sprintf_test_7815__);
tcase_add_test(tc1_1, s21_sprintf_test_7816__);
tcase_add_test(tc1_1, s21_sprintf_test_7817__);
tcase_add_test(tc1_1, s21_sprintf_test_7818__);
tcase_add_test(tc1_1, s21_sprintf_test_7819__);
tcase_add_test(tc1_1, s21_sprintf_test_7820__);
tcase_add_test(tc1_1, s21_sprintf_test_7821__);
tcase_add_test(tc1_1, s21_sprintf_test_7822__);
tcase_add_test(tc1_1, s21_sprintf_test_7823__);
tcase_add_test(tc1_1, s21_sprintf_test_7824__);
tcase_add_test(tc1_1, s21_sprintf_test_7825__);
tcase_add_test(tc1_1, s21_sprintf_test_7826__);
tcase_add_test(tc1_1, s21_sprintf_test_7827__);
tcase_add_test(tc1_1, s21_sprintf_test_7828__);
tcase_add_test(tc1_1, s21_sprintf_test_7829__);
tcase_add_test(tc1_1, s21_sprintf_test_7830__);
tcase_add_test(tc1_1, s21_sprintf_test_7831__);
tcase_add_test(tc1_1, s21_sprintf_test_7832__);
tcase_add_test(tc1_1, s21_sprintf_test_7833__);
tcase_add_test(tc1_1, s21_sprintf_test_7834__);
tcase_add_test(tc1_1, s21_sprintf_test_7835__);
tcase_add_test(tc1_1, s21_sprintf_test_7836__);
tcase_add_test(tc1_1, s21_sprintf_test_7837__);
tcase_add_test(tc1_1, s21_sprintf_test_7838__);
tcase_add_test(tc1_1, s21_sprintf_test_7839__);
tcase_add_test(tc1_1, s21_sprintf_test_7840__);
tcase_add_test(tc1_1, s21_sprintf_test_7841__);
tcase_add_test(tc1_1, s21_sprintf_test_7842__);
tcase_add_test(tc1_1, s21_sprintf_test_7843__);
tcase_add_test(tc1_1, s21_sprintf_test_7844__);
tcase_add_test(tc1_1, s21_sprintf_test_7845__);
tcase_add_test(tc1_1, s21_sprintf_test_7846__);
tcase_add_test(tc1_1, s21_sprintf_test_7847__);
tcase_add_test(tc1_1, s21_sprintf_test_7848__);
tcase_add_test(tc1_1, s21_sprintf_test_7849__);
tcase_add_test(tc1_1, s21_sprintf_test_7850__);
tcase_add_test(tc1_1, s21_sprintf_test_7851__);
tcase_add_test(tc1_1, s21_sprintf_test_7852__);
tcase_add_test(tc1_1, s21_sprintf_test_7853__);
tcase_add_test(tc1_1, s21_sprintf_test_7854__);
tcase_add_test(tc1_1, s21_sprintf_test_7855__);
tcase_add_test(tc1_1, s21_sprintf_test_7856__);
tcase_add_test(tc1_1, s21_sprintf_test_7857__);
tcase_add_test(tc1_1, s21_sprintf_test_7858__);
tcase_add_test(tc1_1, s21_sprintf_test_7859__);
tcase_add_test(tc1_1, s21_sprintf_test_7860__);
tcase_add_test(tc1_1, s21_sprintf_test_7861__);
tcase_add_test(tc1_1, s21_sprintf_test_7862__);
tcase_add_test(tc1_1, s21_sprintf_test_7863__);
tcase_add_test(tc1_1, s21_sprintf_test_7864__);
tcase_add_test(tc1_1, s21_sprintf_test_7865__);
tcase_add_test(tc1_1, s21_sprintf_test_7866__);
tcase_add_test(tc1_1, s21_sprintf_test_7867__);
tcase_add_test(tc1_1, s21_sprintf_test_7868__);
tcase_add_test(tc1_1, s21_sprintf_test_7869__);
tcase_add_test(tc1_1, s21_sprintf_test_7870__);
tcase_add_test(tc1_1, s21_sprintf_test_7871__);
tcase_add_test(tc1_1, s21_sprintf_test_7872__);
tcase_add_test(tc1_1, s21_sprintf_test_7873__);
tcase_add_test(tc1_1, s21_sprintf_test_7874__);
tcase_add_test(tc1_1, s21_sprintf_test_7875__);
tcase_add_test(tc1_1, s21_sprintf_test_7876__);
tcase_add_test(tc1_1, s21_sprintf_test_7877__);
tcase_add_test(tc1_1, s21_sprintf_test_7878__);
tcase_add_test(tc1_1, s21_sprintf_test_7879__);
tcase_add_test(tc1_1, s21_sprintf_test_7880__);
tcase_add_test(tc1_1, s21_sprintf_test_7881__);
tcase_add_test(tc1_1, s21_sprintf_test_7882__);
tcase_add_test(tc1_1, s21_sprintf_test_7883__);
tcase_add_test(tc1_1, s21_sprintf_test_7884__);
tcase_add_test(tc1_1, s21_sprintf_test_7885__);
tcase_add_test(tc1_1, s21_sprintf_test_7886__);
tcase_add_test(tc1_1, s21_sprintf_test_7887__);
tcase_add_test(tc1_1, s21_sprintf_test_7888__);
tcase_add_test(tc1_1, s21_sprintf_test_7889__);
tcase_add_test(tc1_1, s21_sprintf_test_7890__);
tcase_add_test(tc1_1, s21_sprintf_test_7891__);
tcase_add_test(tc1_1, s21_sprintf_test_7892__);
tcase_add_test(tc1_1, s21_sprintf_test_7893__);
tcase_add_test(tc1_1, s21_sprintf_test_7894__);
tcase_add_test(tc1_1, s21_sprintf_test_7895__);
tcase_add_test(tc1_1, s21_sprintf_test_7896__);
tcase_add_test(tc1_1, s21_sprintf_test_7897__);
tcase_add_test(tc1_1, s21_sprintf_test_7898__);
tcase_add_test(tc1_1, s21_sprintf_test_7899__);
tcase_add_test(tc1_1, s21_sprintf_test_7900__);
tcase_add_test(tc1_1, s21_sprintf_test_7901__);
tcase_add_test(tc1_1, s21_sprintf_test_7902__);
tcase_add_test(tc1_1, s21_sprintf_test_7903__);
tcase_add_test(tc1_1, s21_sprintf_test_7904__);
tcase_add_test(tc1_1, s21_sprintf_test_7905__);
tcase_add_test(tc1_1, s21_sprintf_test_7906__);
tcase_add_test(tc1_1, s21_sprintf_test_7907__);
tcase_add_test(tc1_1, s21_sprintf_test_7908__);
tcase_add_test(tc1_1, s21_sprintf_test_7909__);
tcase_add_test(tc1_1, s21_sprintf_test_7910__);
tcase_add_test(tc1_1, s21_sprintf_test_7911__);
tcase_add_test(tc1_1, s21_sprintf_test_7912__);
tcase_add_test(tc1_1, s21_sprintf_test_7913__);
tcase_add_test(tc1_1, s21_sprintf_test_7914__);
tcase_add_test(tc1_1, s21_sprintf_test_7915__);
tcase_add_test(tc1_1, s21_sprintf_test_7916__);
tcase_add_test(tc1_1, s21_sprintf_test_7917__);
tcase_add_test(tc1_1, s21_sprintf_test_7918__);
tcase_add_test(tc1_1, s21_sprintf_test_7919__);
tcase_add_test(tc1_1, s21_sprintf_test_7920__);
tcase_add_test(tc1_1, s21_sprintf_test_7921__);
tcase_add_test(tc1_1, s21_sprintf_test_7922__);
tcase_add_test(tc1_1, s21_sprintf_test_7923__);
tcase_add_test(tc1_1, s21_sprintf_test_7924__);
tcase_add_test(tc1_1, s21_sprintf_test_7925__);
tcase_add_test(tc1_1, s21_sprintf_test_7926__);
tcase_add_test(tc1_1, s21_sprintf_test_7927__);
tcase_add_test(tc1_1, s21_sprintf_test_7928__);
tcase_add_test(tc1_1, s21_sprintf_test_7929__);
tcase_add_test(tc1_1, s21_sprintf_test_7930__);
tcase_add_test(tc1_1, s21_sprintf_test_7931__);
tcase_add_test(tc1_1, s21_sprintf_test_7932__);
tcase_add_test(tc1_1, s21_sprintf_test_7933__);
tcase_add_test(tc1_1, s21_sprintf_test_7934__);
tcase_add_test(tc1_1, s21_sprintf_test_7935__);
tcase_add_test(tc1_1, s21_sprintf_test_7936__);
tcase_add_test(tc1_1, s21_sprintf_test_7937__);
tcase_add_test(tc1_1, s21_sprintf_test_7938__);
tcase_add_test(tc1_1, s21_sprintf_test_7939__);
tcase_add_test(tc1_1, s21_sprintf_test_7940__);
tcase_add_test(tc1_1, s21_sprintf_test_7941__);
tcase_add_test(tc1_1, s21_sprintf_test_7942__);
tcase_add_test(tc1_1, s21_sprintf_test_7943__);
tcase_add_test(tc1_1, s21_sprintf_test_7944__);
tcase_add_test(tc1_1, s21_sprintf_test_7945__);
tcase_add_test(tc1_1, s21_sprintf_test_7946__);
tcase_add_test(tc1_1, s21_sprintf_test_7947__);
tcase_add_test(tc1_1, s21_sprintf_test_7948__);
tcase_add_test(tc1_1, s21_sprintf_test_7949__);
tcase_add_test(tc1_1, s21_sprintf_test_7950__);
tcase_add_test(tc1_1, s21_sprintf_test_7951__);
tcase_add_test(tc1_1, s21_sprintf_test_7952__);
tcase_add_test(tc1_1, s21_sprintf_test_7953__);
tcase_add_test(tc1_1, s21_sprintf_test_7954__);
tcase_add_test(tc1_1, s21_sprintf_test_7955__);
tcase_add_test(tc1_1, s21_sprintf_test_7956__);
tcase_add_test(tc1_1, s21_sprintf_test_7957__);
tcase_add_test(tc1_1, s21_sprintf_test_7958__);
tcase_add_test(tc1_1, s21_sprintf_test_7959__);
tcase_add_test(tc1_1, s21_sprintf_test_7960__);
tcase_add_test(tc1_1, s21_sprintf_test_7961__);
tcase_add_test(tc1_1, s21_sprintf_test_7962__);
tcase_add_test(tc1_1, s21_sprintf_test_7963__);
tcase_add_test(tc1_1, s21_sprintf_test_7964__);
tcase_add_test(tc1_1, s21_sprintf_test_7965__);
tcase_add_test(tc1_1, s21_sprintf_test_7966__);
tcase_add_test(tc1_1, s21_sprintf_test_7967__);
tcase_add_test(tc1_1, s21_sprintf_test_7968__);
tcase_add_test(tc1_1, s21_sprintf_test_7969__);
tcase_add_test(tc1_1, s21_sprintf_test_7970__);
tcase_add_test(tc1_1, s21_sprintf_test_7971__);
tcase_add_test(tc1_1, s21_sprintf_test_7972__);
tcase_add_test(tc1_1, s21_sprintf_test_7973__);
tcase_add_test(tc1_1, s21_sprintf_test_7974__);
tcase_add_test(tc1_1, s21_sprintf_test_7975__);
tcase_add_test(tc1_1, s21_sprintf_test_7976__);
tcase_add_test(tc1_1, s21_sprintf_test_7977__);
tcase_add_test(tc1_1, s21_sprintf_test_7978__);
tcase_add_test(tc1_1, s21_sprintf_test_7979__);
tcase_add_test(tc1_1, s21_sprintf_test_7980__);
tcase_add_test(tc1_1, s21_sprintf_test_7981__);
tcase_add_test(tc1_1, s21_sprintf_test_7982__);
tcase_add_test(tc1_1, s21_sprintf_test_7983__);
tcase_add_test(tc1_1, s21_sprintf_test_7984__);
tcase_add_test(tc1_1, s21_sprintf_test_7985__);
tcase_add_test(tc1_1, s21_sprintf_test_7986__);
tcase_add_test(tc1_1, s21_sprintf_test_7987__);
tcase_add_test(tc1_1, s21_sprintf_test_7988__);
tcase_add_test(tc1_1, s21_sprintf_test_7989__);
tcase_add_test(tc1_1, s21_sprintf_test_7990__);
tcase_add_test(tc1_1, s21_sprintf_test_7991__);
tcase_add_test(tc1_1, s21_sprintf_test_7992__);
tcase_add_test(tc1_1, s21_sprintf_test_7993__);
tcase_add_test(tc1_1, s21_sprintf_test_7994__);
tcase_add_test(tc1_1, s21_sprintf_test_7995__);
tcase_add_test(tc1_1, s21_sprintf_test_7996__);
tcase_add_test(tc1_1, s21_sprintf_test_7997__);
tcase_add_test(tc1_1, s21_sprintf_test_7998__);
tcase_add_test(tc1_1, s21_sprintf_test_7999__);
tcase_add_test(tc1_1, s21_sprintf_test_8000__);
tcase_add_test(tc1_1, s21_sprintf_test_8001__);
tcase_add_test(tc1_1, s21_sprintf_test_8002__);
tcase_add_test(tc1_1, s21_sprintf_test_8003__);
tcase_add_test(tc1_1, s21_sprintf_test_8004__);
tcase_add_test(tc1_1, s21_sprintf_test_8005__);
tcase_add_test(tc1_1, s21_sprintf_test_8006__);
tcase_add_test(tc1_1, s21_sprintf_test_8007__);
tcase_add_test(tc1_1, s21_sprintf_test_8008__);
tcase_add_test(tc1_1, s21_sprintf_test_8009__);
tcase_add_test(tc1_1, s21_sprintf_test_8010__);
tcase_add_test(tc1_1, s21_sprintf_test_8011__);
tcase_add_test(tc1_1, s21_sprintf_test_8012__);
tcase_add_test(tc1_1, s21_sprintf_test_8013__);
tcase_add_test(tc1_1, s21_sprintf_test_8014__);
tcase_add_test(tc1_1, s21_sprintf_test_8015__);
tcase_add_test(tc1_1, s21_sprintf_test_8016__);
tcase_add_test(tc1_1, s21_sprintf_test_8017__);
tcase_add_test(tc1_1, s21_sprintf_test_8018__);
tcase_add_test(tc1_1, s21_sprintf_test_8019__);
tcase_add_test(tc1_1, s21_sprintf_test_8020__);
tcase_add_test(tc1_1, s21_sprintf_test_8021__);
tcase_add_test(tc1_1, s21_sprintf_test_8022__);
tcase_add_test(tc1_1, s21_sprintf_test_8023__);
tcase_add_test(tc1_1, s21_sprintf_test_8024__);
tcase_add_test(tc1_1, s21_sprintf_test_8025__);
tcase_add_test(tc1_1, s21_sprintf_test_8026__);
tcase_add_test(tc1_1, s21_sprintf_test_8027__);
tcase_add_test(tc1_1, s21_sprintf_test_8028__);
tcase_add_test(tc1_1, s21_sprintf_test_8029__);
tcase_add_test(tc1_1, s21_sprintf_test_8030__);
tcase_add_test(tc1_1, s21_sprintf_test_8031__);
tcase_add_test(tc1_1, s21_sprintf_test_8032__);
tcase_add_test(tc1_1, s21_sprintf_test_8033__);
tcase_add_test(tc1_1, s21_sprintf_test_8034__);
tcase_add_test(tc1_1, s21_sprintf_test_8035__);
tcase_add_test(tc1_1, s21_sprintf_test_8036__);
tcase_add_test(tc1_1, s21_sprintf_test_8037__);
tcase_add_test(tc1_1, s21_sprintf_test_8038__);
tcase_add_test(tc1_1, s21_sprintf_test_8039__);
tcase_add_test(tc1_1, s21_sprintf_test_8040__);
tcase_add_test(tc1_1, s21_sprintf_test_8041__);
tcase_add_test(tc1_1, s21_sprintf_test_8042__);
tcase_add_test(tc1_1, s21_sprintf_test_8043__);
tcase_add_test(tc1_1, s21_sprintf_test_8044__);
tcase_add_test(tc1_1, s21_sprintf_test_8045__);
tcase_add_test(tc1_1, s21_sprintf_test_8046__);
tcase_add_test(tc1_1, s21_sprintf_test_8047__);
tcase_add_test(tc1_1, s21_sprintf_test_8048__);
tcase_add_test(tc1_1, s21_sprintf_test_8049__);
tcase_add_test(tc1_1, s21_sprintf_test_8050__);
tcase_add_test(tc1_1, s21_sprintf_test_8051__);
tcase_add_test(tc1_1, s21_sprintf_test_8052__);
tcase_add_test(tc1_1, s21_sprintf_test_8053__);
tcase_add_test(tc1_1, s21_sprintf_test_8054__);
tcase_add_test(tc1_1, s21_sprintf_test_8055__);
tcase_add_test(tc1_1, s21_sprintf_test_8056__);
tcase_add_test(tc1_1, s21_sprintf_test_8057__);
tcase_add_test(tc1_1, s21_sprintf_test_8058__);
tcase_add_test(tc1_1, s21_sprintf_test_8059__);
tcase_add_test(tc1_1, s21_sprintf_test_8060__);
tcase_add_test(tc1_1, s21_sprintf_test_8061__);
tcase_add_test(tc1_1, s21_sprintf_test_8062__);
tcase_add_test(tc1_1, s21_sprintf_test_8063__);
tcase_add_test(tc1_1, s21_sprintf_test_8064__);
tcase_add_test(tc1_1, s21_sprintf_test_8065__);
tcase_add_test(tc1_1, s21_sprintf_test_8066__);
tcase_add_test(tc1_1, s21_sprintf_test_8067__);
tcase_add_test(tc1_1, s21_sprintf_test_8068__);
tcase_add_test(tc1_1, s21_sprintf_test_8069__);
tcase_add_test(tc1_1, s21_sprintf_test_8070__);
tcase_add_test(tc1_1, s21_sprintf_test_8071__);
tcase_add_test(tc1_1, s21_sprintf_test_8072__);
tcase_add_test(tc1_1, s21_sprintf_test_8073__);
tcase_add_test(tc1_1, s21_sprintf_test_8074__);
tcase_add_test(tc1_1, s21_sprintf_test_8075__);
tcase_add_test(tc1_1, s21_sprintf_test_8076__);
tcase_add_test(tc1_1, s21_sprintf_test_8077__);
tcase_add_test(tc1_1, s21_sprintf_test_8078__);
tcase_add_test(tc1_1, s21_sprintf_test_8079__);
tcase_add_test(tc1_1, s21_sprintf_test_8080__);
tcase_add_test(tc1_1, s21_sprintf_test_8081__);
tcase_add_test(tc1_1, s21_sprintf_test_8082__);
tcase_add_test(tc1_1, s21_sprintf_test_8083__);
tcase_add_test(tc1_1, s21_sprintf_test_8084__);
tcase_add_test(tc1_1, s21_sprintf_test_8085__);
tcase_add_test(tc1_1, s21_sprintf_test_8086__);
tcase_add_test(tc1_1, s21_sprintf_test_8087__);
tcase_add_test(tc1_1, s21_sprintf_test_8088__);
tcase_add_test(tc1_1, s21_sprintf_test_8089__);
tcase_add_test(tc1_1, s21_sprintf_test_8090__);
tcase_add_test(tc1_1, s21_sprintf_test_8091__);
tcase_add_test(tc1_1, s21_sprintf_test_8092__);
tcase_add_test(tc1_1, s21_sprintf_test_8093__);
tcase_add_test(tc1_1, s21_sprintf_test_8094__);
tcase_add_test(tc1_1, s21_sprintf_test_8095__);
tcase_add_test(tc1_1, s21_sprintf_test_8096__);
tcase_add_test(tc1_1, s21_sprintf_test_8097__);
tcase_add_test(tc1_1, s21_sprintf_test_8098__);
tcase_add_test(tc1_1, s21_sprintf_test_8099__);
tcase_add_test(tc1_1, s21_sprintf_test_8100__);
tcase_add_test(tc1_1, s21_sprintf_test_8101__);
tcase_add_test(tc1_1, s21_sprintf_test_8102__);
tcase_add_test(tc1_1, s21_sprintf_test_8103__);
tcase_add_test(tc1_1, s21_sprintf_test_8104__);
tcase_add_test(tc1_1, s21_sprintf_test_8105__);
tcase_add_test(tc1_1, s21_sprintf_test_8106__);
tcase_add_test(tc1_1, s21_sprintf_test_8107__);
tcase_add_test(tc1_1, s21_sprintf_test_8108__);
tcase_add_test(tc1_1, s21_sprintf_test_8109__);
tcase_add_test(tc1_1, s21_sprintf_test_8110__);
tcase_add_test(tc1_1, s21_sprintf_test_8111__);
tcase_add_test(tc1_1, s21_sprintf_test_8112__);
tcase_add_test(tc1_1, s21_sprintf_test_8113__);
tcase_add_test(tc1_1, s21_sprintf_test_8114__);
tcase_add_test(tc1_1, s21_sprintf_test_8115__);
tcase_add_test(tc1_1, s21_sprintf_test_8116__);
tcase_add_test(tc1_1, s21_sprintf_test_8117__);
tcase_add_test(tc1_1, s21_sprintf_test_8118__);
tcase_add_test(tc1_1, s21_sprintf_test_8119__);
tcase_add_test(tc1_1, s21_sprintf_test_8120__);
tcase_add_test(tc1_1, s21_sprintf_test_8121__);
tcase_add_test(tc1_1, s21_sprintf_test_8122__);
tcase_add_test(tc1_1, s21_sprintf_test_8123__);
tcase_add_test(tc1_1, s21_sprintf_test_8124__);
tcase_add_test(tc1_1, s21_sprintf_test_8125__);
tcase_add_test(tc1_1, s21_sprintf_test_8126__);
tcase_add_test(tc1_1, s21_sprintf_test_8127__);
tcase_add_test(tc1_1, s21_sprintf_test_8128__);
tcase_add_test(tc1_1, s21_sprintf_test_8129__);
tcase_add_test(tc1_1, s21_sprintf_test_8130__);
tcase_add_test(tc1_1, s21_sprintf_test_8131__);
tcase_add_test(tc1_1, s21_sprintf_test_8132__);
tcase_add_test(tc1_1, s21_sprintf_test_8133__);
tcase_add_test(tc1_1, s21_sprintf_test_8134__);
tcase_add_test(tc1_1, s21_sprintf_test_8135__);
tcase_add_test(tc1_1, s21_sprintf_test_8136__);
tcase_add_test(tc1_1, s21_sprintf_test_8137__);
tcase_add_test(tc1_1, s21_sprintf_test_8138__);
tcase_add_test(tc1_1, s21_sprintf_test_8139__);
tcase_add_test(tc1_1, s21_sprintf_test_8140__);
tcase_add_test(tc1_1, s21_sprintf_test_8141__);
tcase_add_test(tc1_1, s21_sprintf_test_8142__);
tcase_add_test(tc1_1, s21_sprintf_test_8143__);
tcase_add_test(tc1_1, s21_sprintf_test_8144__);
tcase_add_test(tc1_1, s21_sprintf_test_8145__);
tcase_add_test(tc1_1, s21_sprintf_test_8146__);
tcase_add_test(tc1_1, s21_sprintf_test_8147__);
tcase_add_test(tc1_1, s21_sprintf_test_8148__);
tcase_add_test(tc1_1, s21_sprintf_test_8149__);
tcase_add_test(tc1_1, s21_sprintf_test_8150__);
tcase_add_test(tc1_1, s21_sprintf_test_8151__);
tcase_add_test(tc1_1, s21_sprintf_test_8152__);
tcase_add_test(tc1_1, s21_sprintf_test_8153__);
tcase_add_test(tc1_1, s21_sprintf_test_8154__);
tcase_add_test(tc1_1, s21_sprintf_test_8155__);
tcase_add_test(tc1_1, s21_sprintf_test_8156__);
tcase_add_test(tc1_1, s21_sprintf_test_8157__);
tcase_add_test(tc1_1, s21_sprintf_test_8158__);
tcase_add_test(tc1_1, s21_sprintf_test_8159__);
tcase_add_test(tc1_1, s21_sprintf_test_8160__);
tcase_add_test(tc1_1, s21_sprintf_test_8161__);
tcase_add_test(tc1_1, s21_sprintf_test_8162__);
tcase_add_test(tc1_1, s21_sprintf_test_8163__);
tcase_add_test(tc1_1, s21_sprintf_test_8164__);
tcase_add_test(tc1_1, s21_sprintf_test_8165__);
tcase_add_test(tc1_1, s21_sprintf_test_8166__);
tcase_add_test(tc1_1, s21_sprintf_test_8167__);
tcase_add_test(tc1_1, s21_sprintf_test_8168__);
tcase_add_test(tc1_1, s21_sprintf_test_8169__);
tcase_add_test(tc1_1, s21_sprintf_test_8170__);
tcase_add_test(tc1_1, s21_sprintf_test_8171__);
tcase_add_test(tc1_1, s21_sprintf_test_8172__);
tcase_add_test(tc1_1, s21_sprintf_test_8173__);
tcase_add_test(tc1_1, s21_sprintf_test_8174__);
tcase_add_test(tc1_1, s21_sprintf_test_8175__);
tcase_add_test(tc1_1, s21_sprintf_test_8176__);
tcase_add_test(tc1_1, s21_sprintf_test_8177__);
tcase_add_test(tc1_1, s21_sprintf_test_8178__);
tcase_add_test(tc1_1, s21_sprintf_test_8179__);
tcase_add_test(tc1_1, s21_sprintf_test_8180__);
tcase_add_test(tc1_1, s21_sprintf_test_8181__);
tcase_add_test(tc1_1, s21_sprintf_test_8182__);
tcase_add_test(tc1_1, s21_sprintf_test_8183__);
tcase_add_test(tc1_1, s21_sprintf_test_8184__);
tcase_add_test(tc1_1, s21_sprintf_test_8185__);
tcase_add_test(tc1_1, s21_sprintf_test_8186__);
tcase_add_test(tc1_1, s21_sprintf_test_8187__);
tcase_add_test(tc1_1, s21_sprintf_test_8188__);
tcase_add_test(tc1_1, s21_sprintf_test_8189__);
tcase_add_test(tc1_1, s21_sprintf_test_8190__);
tcase_add_test(tc1_1, s21_sprintf_test_8191__);
tcase_add_test(tc1_1, s21_sprintf_test_8192__);
tcase_add_test(tc1_1, s21_sprintf_test_8193__);
tcase_add_test(tc1_1, s21_sprintf_test_8194__);
tcase_add_test(tc1_1, s21_sprintf_test_8195__);
tcase_add_test(tc1_1, s21_sprintf_test_8196__);
tcase_add_test(tc1_1, s21_sprintf_test_8197__);
tcase_add_test(tc1_1, s21_sprintf_test_8198__);
tcase_add_test(tc1_1, s21_sprintf_test_8199__);
tcase_add_test(tc1_1, s21_sprintf_test_8200__);
tcase_add_test(tc1_1, s21_sprintf_test_8201__);
tcase_add_test(tc1_1, s21_sprintf_test_8202__);
tcase_add_test(tc1_1, s21_sprintf_test_8203__);
tcase_add_test(tc1_1, s21_sprintf_test_8204__);
tcase_add_test(tc1_1, s21_sprintf_test_8205__);
tcase_add_test(tc1_1, s21_sprintf_test_8206__);
tcase_add_test(tc1_1, s21_sprintf_test_8207__);
tcase_add_test(tc1_1, s21_sprintf_test_8208__);
tcase_add_test(tc1_1, s21_sprintf_test_8209__);
tcase_add_test(tc1_1, s21_sprintf_test_8210__);
tcase_add_test(tc1_1, s21_sprintf_test_8211__);
tcase_add_test(tc1_1, s21_sprintf_test_8212__);
tcase_add_test(tc1_1, s21_sprintf_test_8213__);
tcase_add_test(tc1_1, s21_sprintf_test_8214__);
tcase_add_test(tc1_1, s21_sprintf_test_8215__);
tcase_add_test(tc1_1, s21_sprintf_test_8216__);
tcase_add_test(tc1_1, s21_sprintf_test_8217__);
tcase_add_test(tc1_1, s21_sprintf_test_8218__);
tcase_add_test(tc1_1, s21_sprintf_test_8219__);
tcase_add_test(tc1_1, s21_sprintf_test_8220__);
tcase_add_test(tc1_1, s21_sprintf_test_8221__);
tcase_add_test(tc1_1, s21_sprintf_test_8222__);
tcase_add_test(tc1_1, s21_sprintf_test_8223__);
tcase_add_test(tc1_1, s21_sprintf_test_8224__);
tcase_add_test(tc1_1, s21_sprintf_test_8225__);
tcase_add_test(tc1_1, s21_sprintf_test_8226__);
tcase_add_test(tc1_1, s21_sprintf_test_8227__);
tcase_add_test(tc1_1, s21_sprintf_test_8228__);
tcase_add_test(tc1_1, s21_sprintf_test_8229__);
tcase_add_test(tc1_1, s21_sprintf_test_8230__);
tcase_add_test(tc1_1, s21_sprintf_test_8231__);
tcase_add_test(tc1_1, s21_sprintf_test_8232__);
tcase_add_test(tc1_1, s21_sprintf_test_8233__);
tcase_add_test(tc1_1, s21_sprintf_test_8234__);
tcase_add_test(tc1_1, s21_sprintf_test_8235__);
tcase_add_test(tc1_1, s21_sprintf_test_8236__);
tcase_add_test(tc1_1, s21_sprintf_test_8237__);
tcase_add_test(tc1_1, s21_sprintf_test_8238__);
tcase_add_test(tc1_1, s21_sprintf_test_8239__);
tcase_add_test(tc1_1, s21_sprintf_test_8240__);
tcase_add_test(tc1_1, s21_sprintf_test_8241__);
tcase_add_test(tc1_1, s21_sprintf_test_8242__);
tcase_add_test(tc1_1, s21_sprintf_test_8243__);
tcase_add_test(tc1_1, s21_sprintf_test_8244__);
tcase_add_test(tc1_1, s21_sprintf_test_8245__);
tcase_add_test(tc1_1, s21_sprintf_test_8246__);
tcase_add_test(tc1_1, s21_sprintf_test_8247__);
tcase_add_test(tc1_1, s21_sprintf_test_8248__);
tcase_add_test(tc1_1, s21_sprintf_test_8249__);
tcase_add_test(tc1_1, s21_sprintf_test_8250__);
tcase_add_test(tc1_1, s21_sprintf_test_8251__);
tcase_add_test(tc1_1, s21_sprintf_test_8252__);
tcase_add_test(tc1_1, s21_sprintf_test_8253__);
tcase_add_test(tc1_1, s21_sprintf_test_8254__);
tcase_add_test(tc1_1, s21_sprintf_test_8255__);
tcase_add_test(tc1_1, s21_sprintf_test_8256__);
tcase_add_test(tc1_1, s21_sprintf_test_8257__);
tcase_add_test(tc1_1, s21_sprintf_test_8258__);
tcase_add_test(tc1_1, s21_sprintf_test_8259__);
tcase_add_test(tc1_1, s21_sprintf_test_8260__);
tcase_add_test(tc1_1, s21_sprintf_test_8261__);
tcase_add_test(tc1_1, s21_sprintf_test_8262__);
tcase_add_test(tc1_1, s21_sprintf_test_8263__);
tcase_add_test(tc1_1, s21_sprintf_test_8264__);
tcase_add_test(tc1_1, s21_sprintf_test_8265__);
tcase_add_test(tc1_1, s21_sprintf_test_8266__);
tcase_add_test(tc1_1, s21_sprintf_test_8267__);
tcase_add_test(tc1_1, s21_sprintf_test_8268__);
tcase_add_test(tc1_1, s21_sprintf_test_8269__);
tcase_add_test(tc1_1, s21_sprintf_test_8270__);
tcase_add_test(tc1_1, s21_sprintf_test_8271__);
tcase_add_test(tc1_1, s21_sprintf_test_8272__);
tcase_add_test(tc1_1, s21_sprintf_test_8273__);
tcase_add_test(tc1_1, s21_sprintf_test_8274__);
tcase_add_test(tc1_1, s21_sprintf_test_8275__);
tcase_add_test(tc1_1, s21_sprintf_test_8276__);
tcase_add_test(tc1_1, s21_sprintf_test_8277__);
tcase_add_test(tc1_1, s21_sprintf_test_8278__);
tcase_add_test(tc1_1, s21_sprintf_test_8279__);
tcase_add_test(tc1_1, s21_sprintf_test_8280__);
tcase_add_test(tc1_1, s21_sprintf_test_8281__);
tcase_add_test(tc1_1, s21_sprintf_test_8282__);
tcase_add_test(tc1_1, s21_sprintf_test_8283__);
tcase_add_test(tc1_1, s21_sprintf_test_8284__);
tcase_add_test(tc1_1, s21_sprintf_test_8285__);
tcase_add_test(tc1_1, s21_sprintf_test_8286__);
tcase_add_test(tc1_1, s21_sprintf_test_8287__);
tcase_add_test(tc1_1, s21_sprintf_test_8288__);
tcase_add_test(tc1_1, s21_sprintf_test_8289__);
tcase_add_test(tc1_1, s21_sprintf_test_8290__);
tcase_add_test(tc1_1, s21_sprintf_test_8291__);
tcase_add_test(tc1_1, s21_sprintf_test_8292__);
tcase_add_test(tc1_1, s21_sprintf_test_8293__);
tcase_add_test(tc1_1, s21_sprintf_test_8294__);
tcase_add_test(tc1_1, s21_sprintf_test_8295__);
tcase_add_test(tc1_1, s21_sprintf_test_8296__);
tcase_add_test(tc1_1, s21_sprintf_test_8297__);
tcase_add_test(tc1_1, s21_sprintf_test_8298__);
tcase_add_test(tc1_1, s21_sprintf_test_8299__);
tcase_add_test(tc1_1, s21_sprintf_test_8300__);
tcase_add_test(tc1_1, s21_sprintf_test_8301__);
tcase_add_test(tc1_1, s21_sprintf_test_8302__);
tcase_add_test(tc1_1, s21_sprintf_test_8303__);
tcase_add_test(tc1_1, s21_sprintf_test_8304__);
tcase_add_test(tc1_1, s21_sprintf_test_8305__);
tcase_add_test(tc1_1, s21_sprintf_test_8306__);
tcase_add_test(tc1_1, s21_sprintf_test_8307__);
tcase_add_test(tc1_1, s21_sprintf_test_8308__);
tcase_add_test(tc1_1, s21_sprintf_test_8309__);
tcase_add_test(tc1_1, s21_sprintf_test_8310__);
tcase_add_test(tc1_1, s21_sprintf_test_8311__);
tcase_add_test(tc1_1, s21_sprintf_test_8312__);
tcase_add_test(tc1_1, s21_sprintf_test_8313__);
tcase_add_test(tc1_1, s21_sprintf_test_8314__);
tcase_add_test(tc1_1, s21_sprintf_test_8315__);
tcase_add_test(tc1_1, s21_sprintf_test_8316__);
tcase_add_test(tc1_1, s21_sprintf_test_8317__);
tcase_add_test(tc1_1, s21_sprintf_test_8318__);
tcase_add_test(tc1_1, s21_sprintf_test_8319__);
tcase_add_test(tc1_1, s21_sprintf_test_8320__);
tcase_add_test(tc1_1, s21_sprintf_test_8321__);
tcase_add_test(tc1_1, s21_sprintf_test_8322__);
tcase_add_test(tc1_1, s21_sprintf_test_8323__);
tcase_add_test(tc1_1, s21_sprintf_test_8324__);
tcase_add_test(tc1_1, s21_sprintf_test_8325__);
tcase_add_test(tc1_1, s21_sprintf_test_8326__);
tcase_add_test(tc1_1, s21_sprintf_test_8327__);
tcase_add_test(tc1_1, s21_sprintf_test_8328__);
tcase_add_test(tc1_1, s21_sprintf_test_8329__);
tcase_add_test(tc1_1, s21_sprintf_test_8330__);
tcase_add_test(tc1_1, s21_sprintf_test_8331__);
tcase_add_test(tc1_1, s21_sprintf_test_8332__);
tcase_add_test(tc1_1, s21_sprintf_test_8333__);
tcase_add_test(tc1_1, s21_sprintf_test_8334__);
tcase_add_test(tc1_1, s21_sprintf_test_8335__);
tcase_add_test(tc1_1, s21_sprintf_test_8336__);
tcase_add_test(tc1_1, s21_sprintf_test_8337__);
tcase_add_test(tc1_1, s21_sprintf_test_8338__);
tcase_add_test(tc1_1, s21_sprintf_test_8339__);
tcase_add_test(tc1_1, s21_sprintf_test_8340__);
tcase_add_test(tc1_1, s21_sprintf_test_8341__);
tcase_add_test(tc1_1, s21_sprintf_test_8342__);
tcase_add_test(tc1_1, s21_sprintf_test_8343__);
tcase_add_test(tc1_1, s21_sprintf_test_8344__);
tcase_add_test(tc1_1, s21_sprintf_test_8345__);
tcase_add_test(tc1_1, s21_sprintf_test_8346__);
tcase_add_test(tc1_1, s21_sprintf_test_8347__);
tcase_add_test(tc1_1, s21_sprintf_test_8348__);
tcase_add_test(tc1_1, s21_sprintf_test_8349__);
tcase_add_test(tc1_1, s21_sprintf_test_8350__);
tcase_add_test(tc1_1, s21_sprintf_test_8351__);
tcase_add_test(tc1_1, s21_sprintf_test_8352__);
tcase_add_test(tc1_1, s21_sprintf_test_8353__);
tcase_add_test(tc1_1, s21_sprintf_test_8354__);
tcase_add_test(tc1_1, s21_sprintf_test_8355__);
tcase_add_test(tc1_1, s21_sprintf_test_8356__);
tcase_add_test(tc1_1, s21_sprintf_test_8357__);
tcase_add_test(tc1_1, s21_sprintf_test_8358__);
tcase_add_test(tc1_1, s21_sprintf_test_8359__);
tcase_add_test(tc1_1, s21_sprintf_test_8360__);
tcase_add_test(tc1_1, s21_sprintf_test_8361__);
tcase_add_test(tc1_1, s21_sprintf_test_8362__);
tcase_add_test(tc1_1, s21_sprintf_test_8363__);
tcase_add_test(tc1_1, s21_sprintf_test_8364__);
tcase_add_test(tc1_1, s21_sprintf_test_8365__);
tcase_add_test(tc1_1, s21_sprintf_test_8366__);
tcase_add_test(tc1_1, s21_sprintf_test_8367__);
tcase_add_test(tc1_1, s21_sprintf_test_8368__);
tcase_add_test(tc1_1, s21_sprintf_test_8369__);
tcase_add_test(tc1_1, s21_sprintf_test_8370__);
tcase_add_test(tc1_1, s21_sprintf_test_8371__);
tcase_add_test(tc1_1, s21_sprintf_test_8372__);
tcase_add_test(tc1_1, s21_sprintf_test_8373__);
tcase_add_test(tc1_1, s21_sprintf_test_8374__);
tcase_add_test(tc1_1, s21_sprintf_test_8375__);
tcase_add_test(tc1_1, s21_sprintf_test_8376__);
tcase_add_test(tc1_1, s21_sprintf_test_8377__);
tcase_add_test(tc1_1, s21_sprintf_test_8378__);
tcase_add_test(tc1_1, s21_sprintf_test_8379__);
tcase_add_test(tc1_1, s21_sprintf_test_8380__);
tcase_add_test(tc1_1, s21_sprintf_test_8381__);
tcase_add_test(tc1_1, s21_sprintf_test_8382__);
tcase_add_test(tc1_1, s21_sprintf_test_8383__);
tcase_add_test(tc1_1, s21_sprintf_test_8384__);
tcase_add_test(tc1_1, s21_sprintf_test_8385__);
tcase_add_test(tc1_1, s21_sprintf_test_8386__);
tcase_add_test(tc1_1, s21_sprintf_test_8387__);
tcase_add_test(tc1_1, s21_sprintf_test_8388__);
tcase_add_test(tc1_1, s21_sprintf_test_8389__);
tcase_add_test(tc1_1, s21_sprintf_test_8390__);
tcase_add_test(tc1_1, s21_sprintf_test_8391__);
tcase_add_test(tc1_1, s21_sprintf_test_8392__);
tcase_add_test(tc1_1, s21_sprintf_test_8393__);
tcase_add_test(tc1_1, s21_sprintf_test_8394__);
tcase_add_test(tc1_1, s21_sprintf_test_8395__);
tcase_add_test(tc1_1, s21_sprintf_test_8396__);
tcase_add_test(tc1_1, s21_sprintf_test_8397__);
tcase_add_test(tc1_1, s21_sprintf_test_8398__);
tcase_add_test(tc1_1, s21_sprintf_test_8399__);
tcase_add_test(tc1_1, s21_sprintf_test_8400__);
tcase_add_test(tc1_1, s21_sprintf_test_8401__);
tcase_add_test(tc1_1, s21_sprintf_test_8402__);
tcase_add_test(tc1_1, s21_sprintf_test_8403__);
tcase_add_test(tc1_1, s21_sprintf_test_8404__);
tcase_add_test(tc1_1, s21_sprintf_test_8405__);
tcase_add_test(tc1_1, s21_sprintf_test_8406__);
tcase_add_test(tc1_1, s21_sprintf_test_8407__);
tcase_add_test(tc1_1, s21_sprintf_test_8408__);
tcase_add_test(tc1_1, s21_sprintf_test_8409__);
tcase_add_test(tc1_1, s21_sprintf_test_8410__);
tcase_add_test(tc1_1, s21_sprintf_test_8411__);
tcase_add_test(tc1_1, s21_sprintf_test_8412__);
tcase_add_test(tc1_1, s21_sprintf_test_8413__);
tcase_add_test(tc1_1, s21_sprintf_test_8414__);
tcase_add_test(tc1_1, s21_sprintf_test_8415__);
tcase_add_test(tc1_1, s21_sprintf_test_8416__);
tcase_add_test(tc1_1, s21_sprintf_test_8417__);
tcase_add_test(tc1_1, s21_sprintf_test_8418__);
tcase_add_test(tc1_1, s21_sprintf_test_8419__);
tcase_add_test(tc1_1, s21_sprintf_test_8420__);
tcase_add_test(tc1_1, s21_sprintf_test_8421__);
tcase_add_test(tc1_1, s21_sprintf_test_8422__);
tcase_add_test(tc1_1, s21_sprintf_test_8423__);
tcase_add_test(tc1_1, s21_sprintf_test_8424__);
tcase_add_test(tc1_1, s21_sprintf_test_8425__);
tcase_add_test(tc1_1, s21_sprintf_test_8426__);
tcase_add_test(tc1_1, s21_sprintf_test_8427__);
tcase_add_test(tc1_1, s21_sprintf_test_8428__);
tcase_add_test(tc1_1, s21_sprintf_test_8429__);
tcase_add_test(tc1_1, s21_sprintf_test_8430__);
tcase_add_test(tc1_1, s21_sprintf_test_8431__);
tcase_add_test(tc1_1, s21_sprintf_test_8432__);
tcase_add_test(tc1_1, s21_sprintf_test_8433__);
tcase_add_test(tc1_1, s21_sprintf_test_8434__);
tcase_add_test(tc1_1, s21_sprintf_test_8435__);
tcase_add_test(tc1_1, s21_sprintf_test_8436__);
tcase_add_test(tc1_1, s21_sprintf_test_8437__);
tcase_add_test(tc1_1, s21_sprintf_test_8438__);
tcase_add_test(tc1_1, s21_sprintf_test_8439__);
tcase_add_test(tc1_1, s21_sprintf_test_8440__);
tcase_add_test(tc1_1, s21_sprintf_test_8441__);
tcase_add_test(tc1_1, s21_sprintf_test_8442__);
tcase_add_test(tc1_1, s21_sprintf_test_8443__);
tcase_add_test(tc1_1, s21_sprintf_test_8444__);
tcase_add_test(tc1_1, s21_sprintf_test_8445__);
tcase_add_test(tc1_1, s21_sprintf_test_8446__);
tcase_add_test(tc1_1, s21_sprintf_test_8447__);
tcase_add_test(tc1_1, s21_sprintf_test_8448__);
tcase_add_test(tc1_1, s21_sprintf_test_8449__);
tcase_add_test(tc1_1, s21_sprintf_test_8450__);
tcase_add_test(tc1_1, s21_sprintf_test_8451__);
tcase_add_test(tc1_1, s21_sprintf_test_8452__);
tcase_add_test(tc1_1, s21_sprintf_test_8453__);
tcase_add_test(tc1_1, s21_sprintf_test_8454__);
tcase_add_test(tc1_1, s21_sprintf_test_8455__);
tcase_add_test(tc1_1, s21_sprintf_test_8456__);
tcase_add_test(tc1_1, s21_sprintf_test_8457__);
tcase_add_test(tc1_1, s21_sprintf_test_8458__);
tcase_add_test(tc1_1, s21_sprintf_test_8459__);
tcase_add_test(tc1_1, s21_sprintf_test_8460__);
tcase_add_test(tc1_1, s21_sprintf_test_8461__);
tcase_add_test(tc1_1, s21_sprintf_test_8462__);
tcase_add_test(tc1_1, s21_sprintf_test_8463__);
tcase_add_test(tc1_1, s21_sprintf_test_8464__);
tcase_add_test(tc1_1, s21_sprintf_test_8465__);
tcase_add_test(tc1_1, s21_sprintf_test_8466__);
tcase_add_test(tc1_1, s21_sprintf_test_8467__);
tcase_add_test(tc1_1, s21_sprintf_test_8468__);
tcase_add_test(tc1_1, s21_sprintf_test_8469__);
tcase_add_test(tc1_1, s21_sprintf_test_8470__);
tcase_add_test(tc1_1, s21_sprintf_test_8471__);
tcase_add_test(tc1_1, s21_sprintf_test_8472__);
tcase_add_test(tc1_1, s21_sprintf_test_8473__);
tcase_add_test(tc1_1, s21_sprintf_test_8474__);
tcase_add_test(tc1_1, s21_sprintf_test_8475__);
tcase_add_test(tc1_1, s21_sprintf_test_8476__);
tcase_add_test(tc1_1, s21_sprintf_test_8477__);
tcase_add_test(tc1_1, s21_sprintf_test_8478__);
tcase_add_test(tc1_1, s21_sprintf_test_8479__);
tcase_add_test(tc1_1, s21_sprintf_test_8480__);
tcase_add_test(tc1_1, s21_sprintf_test_8481__);
tcase_add_test(tc1_1, s21_sprintf_test_8482__);
tcase_add_test(tc1_1, s21_sprintf_test_8483__);
tcase_add_test(tc1_1, s21_sprintf_test_8484__);
tcase_add_test(tc1_1, s21_sprintf_test_8485__);
tcase_add_test(tc1_1, s21_sprintf_test_8486__);
tcase_add_test(tc1_1, s21_sprintf_test_8487__);
tcase_add_test(tc1_1, s21_sprintf_test_8488__);
tcase_add_test(tc1_1, s21_sprintf_test_8489__);
tcase_add_test(tc1_1, s21_sprintf_test_8490__);
tcase_add_test(tc1_1, s21_sprintf_test_8491__);
tcase_add_test(tc1_1, s21_sprintf_test_8492__);
tcase_add_test(tc1_1, s21_sprintf_test_8493__);
tcase_add_test(tc1_1, s21_sprintf_test_8494__);
tcase_add_test(tc1_1, s21_sprintf_test_8495__);
tcase_add_test(tc1_1, s21_sprintf_test_8496__);
tcase_add_test(tc1_1, s21_sprintf_test_8497__);
tcase_add_test(tc1_1, s21_sprintf_test_8498__);
tcase_add_test(tc1_1, s21_sprintf_test_8499__);
tcase_add_test(tc1_1, s21_sprintf_test_8500__);
tcase_add_test(tc1_1, s21_sprintf_test_8501__);
tcase_add_test(tc1_1, s21_sprintf_test_8502__);
tcase_add_test(tc1_1, s21_sprintf_test_8503__);
tcase_add_test(tc1_1, s21_sprintf_test_8504__);
tcase_add_test(tc1_1, s21_sprintf_test_8505__);
tcase_add_test(tc1_1, s21_sprintf_test_8506__);
tcase_add_test(tc1_1, s21_sprintf_test_8507__);
tcase_add_test(tc1_1, s21_sprintf_test_8508__);
tcase_add_test(tc1_1, s21_sprintf_test_8509__);
tcase_add_test(tc1_1, s21_sprintf_test_8510__);
tcase_add_test(tc1_1, s21_sprintf_test_8511__);
tcase_add_test(tc1_1, s21_sprintf_test_8512__);
tcase_add_test(tc1_1, s21_sprintf_test_8513__);
tcase_add_test(tc1_1, s21_sprintf_test_8514__);
tcase_add_test(tc1_1, s21_sprintf_test_8515__);
tcase_add_test(tc1_1, s21_sprintf_test_8516__);
tcase_add_test(tc1_1, s21_sprintf_test_8517__);
tcase_add_test(tc1_1, s21_sprintf_test_8518__);
tcase_add_test(tc1_1, s21_sprintf_test_8519__);
tcase_add_test(tc1_1, s21_sprintf_test_8520__);
tcase_add_test(tc1_1, s21_sprintf_test_8521__);
tcase_add_test(tc1_1, s21_sprintf_test_8522__);
tcase_add_test(tc1_1, s21_sprintf_test_8523__);
tcase_add_test(tc1_1, s21_sprintf_test_8524__);
tcase_add_test(tc1_1, s21_sprintf_test_8525__);
tcase_add_test(tc1_1, s21_sprintf_test_8526__);
tcase_add_test(tc1_1, s21_sprintf_test_8527__);
tcase_add_test(tc1_1, s21_sprintf_test_8528__);
tcase_add_test(tc1_1, s21_sprintf_test_8529__);
tcase_add_test(tc1_1, s21_sprintf_test_8530__);
tcase_add_test(tc1_1, s21_sprintf_test_8531__);
tcase_add_test(tc1_1, s21_sprintf_test_8532__);
tcase_add_test(tc1_1, s21_sprintf_test_8533__);
tcase_add_test(tc1_1, s21_sprintf_test_8534__);
tcase_add_test(tc1_1, s21_sprintf_test_8535__);
tcase_add_test(tc1_1, s21_sprintf_test_8536__);
tcase_add_test(tc1_1, s21_sprintf_test_8537__);
tcase_add_test(tc1_1, s21_sprintf_test_8538__);
tcase_add_test(tc1_1, s21_sprintf_test_8539__);
tcase_add_test(tc1_1, s21_sprintf_test_8540__);
tcase_add_test(tc1_1, s21_sprintf_test_8541__);
tcase_add_test(tc1_1, s21_sprintf_test_8542__);
tcase_add_test(tc1_1, s21_sprintf_test_8543__);
tcase_add_test(tc1_1, s21_sprintf_test_8544__);
tcase_add_test(tc1_1, s21_sprintf_test_8545__);
tcase_add_test(tc1_1, s21_sprintf_test_8546__);
tcase_add_test(tc1_1, s21_sprintf_test_8547__);
tcase_add_test(tc1_1, s21_sprintf_test_8548__);
tcase_add_test(tc1_1, s21_sprintf_test_8549__);
tcase_add_test(tc1_1, s21_sprintf_test_8550__);
tcase_add_test(tc1_1, s21_sprintf_test_8551__);
tcase_add_test(tc1_1, s21_sprintf_test_8552__);
tcase_add_test(tc1_1, s21_sprintf_test_8553__);
tcase_add_test(tc1_1, s21_sprintf_test_8554__);
tcase_add_test(tc1_1, s21_sprintf_test_8555__);
tcase_add_test(tc1_1, s21_sprintf_test_8556__);
tcase_add_test(tc1_1, s21_sprintf_test_8557__);
tcase_add_test(tc1_1, s21_sprintf_test_8558__);
tcase_add_test(tc1_1, s21_sprintf_test_8559__);
tcase_add_test(tc1_1, s21_sprintf_test_8560__);
tcase_add_test(tc1_1, s21_sprintf_test_8561__);
tcase_add_test(tc1_1, s21_sprintf_test_8562__);
tcase_add_test(tc1_1, s21_sprintf_test_8563__);
tcase_add_test(tc1_1, s21_sprintf_test_8564__);
tcase_add_test(tc1_1, s21_sprintf_test_8565__);
tcase_add_test(tc1_1, s21_sprintf_test_8566__);
tcase_add_test(tc1_1, s21_sprintf_test_8567__);
tcase_add_test(tc1_1, s21_sprintf_test_8568__);
tcase_add_test(tc1_1, s21_sprintf_test_8569__);
tcase_add_test(tc1_1, s21_sprintf_test_8570__);
tcase_add_test(tc1_1, s21_sprintf_test_8571__);
tcase_add_test(tc1_1, s21_sprintf_test_8572__);
tcase_add_test(tc1_1, s21_sprintf_test_8573__);
tcase_add_test(tc1_1, s21_sprintf_test_8574__);
tcase_add_test(tc1_1, s21_sprintf_test_8575__);
tcase_add_test(tc1_1, s21_sprintf_test_8576__);
tcase_add_test(tc1_1, s21_sprintf_test_8577__);
tcase_add_test(tc1_1, s21_sprintf_test_8578__);
tcase_add_test(tc1_1, s21_sprintf_test_8579__);
tcase_add_test(tc1_1, s21_sprintf_test_8580__);
tcase_add_test(tc1_1, s21_sprintf_test_8581__);
tcase_add_test(tc1_1, s21_sprintf_test_8582__);
tcase_add_test(tc1_1, s21_sprintf_test_8583__);
tcase_add_test(tc1_1, s21_sprintf_test_8584__);
tcase_add_test(tc1_1, s21_sprintf_test_8585__);
tcase_add_test(tc1_1, s21_sprintf_test_8586__);
tcase_add_test(tc1_1, s21_sprintf_test_8587__);
tcase_add_test(tc1_1, s21_sprintf_test_8588__);
tcase_add_test(tc1_1, s21_sprintf_test_8589__);
tcase_add_test(tc1_1, s21_sprintf_test_8590__);
tcase_add_test(tc1_1, s21_sprintf_test_8591__);
tcase_add_test(tc1_1, s21_sprintf_test_8592__);
tcase_add_test(tc1_1, s21_sprintf_test_8593__);
tcase_add_test(tc1_1, s21_sprintf_test_8594__);
tcase_add_test(tc1_1, s21_sprintf_test_8595__);
tcase_add_test(tc1_1, s21_sprintf_test_8596__);
tcase_add_test(tc1_1, s21_sprintf_test_8597__);
tcase_add_test(tc1_1, s21_sprintf_test_8598__);
tcase_add_test(tc1_1, s21_sprintf_test_8599__);
tcase_add_test(tc1_1, s21_sprintf_test_8600__);
tcase_add_test(tc1_1, s21_sprintf_test_8601__);
tcase_add_test(tc1_1, s21_sprintf_test_8602__);
tcase_add_test(tc1_1, s21_sprintf_test_8603__);
tcase_add_test(tc1_1, s21_sprintf_test_8604__);
tcase_add_test(tc1_1, s21_sprintf_test_8605__);
tcase_add_test(tc1_1, s21_sprintf_test_8606__);
tcase_add_test(tc1_1, s21_sprintf_test_8607__);
tcase_add_test(tc1_1, s21_sprintf_test_8608__);
tcase_add_test(tc1_1, s21_sprintf_test_8609__);
tcase_add_test(tc1_1, s21_sprintf_test_8610__);
tcase_add_test(tc1_1, s21_sprintf_test_8611__);
tcase_add_test(tc1_1, s21_sprintf_test_8612__);
tcase_add_test(tc1_1, s21_sprintf_test_8613__);
tcase_add_test(tc1_1, s21_sprintf_test_8614__);
tcase_add_test(tc1_1, s21_sprintf_test_8615__);
tcase_add_test(tc1_1, s21_sprintf_test_8616__);
tcase_add_test(tc1_1, s21_sprintf_test_8617__);
tcase_add_test(tc1_1, s21_sprintf_test_8618__);
tcase_add_test(tc1_1, s21_sprintf_test_8619__);
tcase_add_test(tc1_1, s21_sprintf_test_8620__);
tcase_add_test(tc1_1, s21_sprintf_test_8621__);
tcase_add_test(tc1_1, s21_sprintf_test_8622__);
tcase_add_test(tc1_1, s21_sprintf_test_8623__);
tcase_add_test(tc1_1, s21_sprintf_test_8624__);
tcase_add_test(tc1_1, s21_sprintf_test_8625__);
tcase_add_test(tc1_1, s21_sprintf_test_8626__);
tcase_add_test(tc1_1, s21_sprintf_test_8627__);
tcase_add_test(tc1_1, s21_sprintf_test_8628__);
tcase_add_test(tc1_1, s21_sprintf_test_8629__);
tcase_add_test(tc1_1, s21_sprintf_test_8630__);
tcase_add_test(tc1_1, s21_sprintf_test_8631__);
tcase_add_test(tc1_1, s21_sprintf_test_8632__);
tcase_add_test(tc1_1, s21_sprintf_test_8633__);
tcase_add_test(tc1_1, s21_sprintf_test_8634__);
tcase_add_test(tc1_1, s21_sprintf_test_8635__);
tcase_add_test(tc1_1, s21_sprintf_test_8636__);
tcase_add_test(tc1_1, s21_sprintf_test_8637__);
tcase_add_test(tc1_1, s21_sprintf_test_8638__);
tcase_add_test(tc1_1, s21_sprintf_test_8639__);
tcase_add_test(tc1_1, s21_sprintf_test_8640__);
tcase_add_test(tc1_1, s21_sprintf_test_8641__);
tcase_add_test(tc1_1, s21_sprintf_test_8642__);
tcase_add_test(tc1_1, s21_sprintf_test_8643__);
tcase_add_test(tc1_1, s21_sprintf_test_8644__);
tcase_add_test(tc1_1, s21_sprintf_test_8645__);
tcase_add_test(tc1_1, s21_sprintf_test_8646__);
tcase_add_test(tc1_1, s21_sprintf_test_8647__);
tcase_add_test(tc1_1, s21_sprintf_test_8648__);
tcase_add_test(tc1_1, s21_sprintf_test_8649__);
tcase_add_test(tc1_1, s21_sprintf_test_8650__);
tcase_add_test(tc1_1, s21_sprintf_test_8651__);
tcase_add_test(tc1_1, s21_sprintf_test_8652__);
tcase_add_test(tc1_1, s21_sprintf_test_8653__);
tcase_add_test(tc1_1, s21_sprintf_test_8654__);
tcase_add_test(tc1_1, s21_sprintf_test_8655__);
tcase_add_test(tc1_1, s21_sprintf_test_8656__);
tcase_add_test(tc1_1, s21_sprintf_test_8657__);
tcase_add_test(tc1_1, s21_sprintf_test_8658__);
tcase_add_test(tc1_1, s21_sprintf_test_8659__);
tcase_add_test(tc1_1, s21_sprintf_test_8660__);
tcase_add_test(tc1_1, s21_sprintf_test_8661__);
tcase_add_test(tc1_1, s21_sprintf_test_8662__);
tcase_add_test(tc1_1, s21_sprintf_test_8663__);
tcase_add_test(tc1_1, s21_sprintf_test_8664__);
tcase_add_test(tc1_1, s21_sprintf_test_8665__);
tcase_add_test(tc1_1, s21_sprintf_test_8666__);
tcase_add_test(tc1_1, s21_sprintf_test_8667__);
tcase_add_test(tc1_1, s21_sprintf_test_8668__);
tcase_add_test(tc1_1, s21_sprintf_test_8669__);
tcase_add_test(tc1_1, s21_sprintf_test_8670__);
tcase_add_test(tc1_1, s21_sprintf_test_8671__);
tcase_add_test(tc1_1, s21_sprintf_test_8672__);
tcase_add_test(tc1_1, s21_sprintf_test_8673__);
tcase_add_test(tc1_1, s21_sprintf_test_8674__);
tcase_add_test(tc1_1, s21_sprintf_test_8675__);
tcase_add_test(tc1_1, s21_sprintf_test_8676__);
tcase_add_test(tc1_1, s21_sprintf_test_8677__);
tcase_add_test(tc1_1, s21_sprintf_test_8678__);
tcase_add_test(tc1_1, s21_sprintf_test_8679__);
tcase_add_test(tc1_1, s21_sprintf_test_8680__);
tcase_add_test(tc1_1, s21_sprintf_test_8681__);
tcase_add_test(tc1_1, s21_sprintf_test_8682__);
tcase_add_test(tc1_1, s21_sprintf_test_8683__);
tcase_add_test(tc1_1, s21_sprintf_test_8684__);
tcase_add_test(tc1_1, s21_sprintf_test_8685__);
tcase_add_test(tc1_1, s21_sprintf_test_8686__);
tcase_add_test(tc1_1, s21_sprintf_test_8687__);
tcase_add_test(tc1_1, s21_sprintf_test_8688__);
tcase_add_test(tc1_1, s21_sprintf_test_8689__);
tcase_add_test(tc1_1, s21_sprintf_test_8690__);
tcase_add_test(tc1_1, s21_sprintf_test_8691__);
tcase_add_test(tc1_1, s21_sprintf_test_8692__);
tcase_add_test(tc1_1, s21_sprintf_test_8693__);
tcase_add_test(tc1_1, s21_sprintf_test_8694__);
tcase_add_test(tc1_1, s21_sprintf_test_8695__);
tcase_add_test(tc1_1, s21_sprintf_test_8696__);
tcase_add_test(tc1_1, s21_sprintf_test_8697__);
tcase_add_test(tc1_1, s21_sprintf_test_8698__);
tcase_add_test(tc1_1, s21_sprintf_test_8699__);
tcase_add_test(tc1_1, s21_sprintf_test_8700__);
tcase_add_test(tc1_1, s21_sprintf_test_8701__);
tcase_add_test(tc1_1, s21_sprintf_test_8702__);
tcase_add_test(tc1_1, s21_sprintf_test_8703__);
tcase_add_test(tc1_1, s21_sprintf_test_8704__);
tcase_add_test(tc1_1, s21_sprintf_test_8705__);
tcase_add_test(tc1_1, s21_sprintf_test_8706__);
tcase_add_test(tc1_1, s21_sprintf_test_8707__);
tcase_add_test(tc1_1, s21_sprintf_test_8708__);
tcase_add_test(tc1_1, s21_sprintf_test_8709__);
tcase_add_test(tc1_1, s21_sprintf_test_8710__);
tcase_add_test(tc1_1, s21_sprintf_test_8711__);
tcase_add_test(tc1_1, s21_sprintf_test_8712__);
tcase_add_test(tc1_1, s21_sprintf_test_8713__);
tcase_add_test(tc1_1, s21_sprintf_test_8714__);
tcase_add_test(tc1_1, s21_sprintf_test_8715__);
tcase_add_test(tc1_1, s21_sprintf_test_8716__);
tcase_add_test(tc1_1, s21_sprintf_test_8717__);
tcase_add_test(tc1_1, s21_sprintf_test_8718__);
tcase_add_test(tc1_1, s21_sprintf_test_8719__);
tcase_add_test(tc1_1, s21_sprintf_test_8720__);
tcase_add_test(tc1_1, s21_sprintf_test_8721__);
tcase_add_test(tc1_1, s21_sprintf_test_8722__);
tcase_add_test(tc1_1, s21_sprintf_test_8723__);
tcase_add_test(tc1_1, s21_sprintf_test_8724__);
tcase_add_test(tc1_1, s21_sprintf_test_8725__);
tcase_add_test(tc1_1, s21_sprintf_test_8726__);
tcase_add_test(tc1_1, s21_sprintf_test_8727__);
tcase_add_test(tc1_1, s21_sprintf_test_8728__);
tcase_add_test(tc1_1, s21_sprintf_test_8729__);
tcase_add_test(tc1_1, s21_sprintf_test_8730__);
tcase_add_test(tc1_1, s21_sprintf_test_8731__);
tcase_add_test(tc1_1, s21_sprintf_test_8732__);
tcase_add_test(tc1_1, s21_sprintf_test_8733__);
tcase_add_test(tc1_1, s21_sprintf_test_8734__);
tcase_add_test(tc1_1, s21_sprintf_test_8735__);
tcase_add_test(tc1_1, s21_sprintf_test_8736__);
tcase_add_test(tc1_1, s21_sprintf_test_8737__);
tcase_add_test(tc1_1, s21_sprintf_test_8738__);
tcase_add_test(tc1_1, s21_sprintf_test_8739__);
tcase_add_test(tc1_1, s21_sprintf_test_8740__);
tcase_add_test(tc1_1, s21_sprintf_test_8741__);
tcase_add_test(tc1_1, s21_sprintf_test_8742__);
tcase_add_test(tc1_1, s21_sprintf_test_8743__);
tcase_add_test(tc1_1, s21_sprintf_test_8744__);
tcase_add_test(tc1_1, s21_sprintf_test_8745__);
tcase_add_test(tc1_1, s21_sprintf_test_8746__);
tcase_add_test(tc1_1, s21_sprintf_test_8747__);
tcase_add_test(tc1_1, s21_sprintf_test_8748__);
tcase_add_test(tc1_1, s21_sprintf_test_8749__);
tcase_add_test(tc1_1, s21_sprintf_test_8750__);
tcase_add_test(tc1_1, s21_sprintf_test_8751__);
tcase_add_test(tc1_1, s21_sprintf_test_8752__);
tcase_add_test(tc1_1, s21_sprintf_test_8753__);
tcase_add_test(tc1_1, s21_sprintf_test_8754__);
tcase_add_test(tc1_1, s21_sprintf_test_8755__);
tcase_add_test(tc1_1, s21_sprintf_test_8756__);
tcase_add_test(tc1_1, s21_sprintf_test_8757__);
tcase_add_test(tc1_1, s21_sprintf_test_8758__);
tcase_add_test(tc1_1, s21_sprintf_test_8759__);
tcase_add_test(tc1_1, s21_sprintf_test_8760__);
tcase_add_test(tc1_1, s21_sprintf_test_8761__);
tcase_add_test(tc1_1, s21_sprintf_test_8762__);
tcase_add_test(tc1_1, s21_sprintf_test_8763__);
tcase_add_test(tc1_1, s21_sprintf_test_8764__);
tcase_add_test(tc1_1, s21_sprintf_test_8765__);
tcase_add_test(tc1_1, s21_sprintf_test_8766__);
tcase_add_test(tc1_1, s21_sprintf_test_8767__);
tcase_add_test(tc1_1, s21_sprintf_test_8768__);
tcase_add_test(tc1_1, s21_sprintf_test_8769__);
tcase_add_test(tc1_1, s21_sprintf_test_8770__);
tcase_add_test(tc1_1, s21_sprintf_test_8771__);
tcase_add_test(tc1_1, s21_sprintf_test_8772__);
tcase_add_test(tc1_1, s21_sprintf_test_8773__);
tcase_add_test(tc1_1, s21_sprintf_test_8774__);
tcase_add_test(tc1_1, s21_sprintf_test_8775__);
tcase_add_test(tc1_1, s21_sprintf_test_8776__);
tcase_add_test(tc1_1, s21_sprintf_test_8777__);
tcase_add_test(tc1_1, s21_sprintf_test_8778__);
tcase_add_test(tc1_1, s21_sprintf_test_8779__);
tcase_add_test(tc1_1, s21_sprintf_test_8780__);
tcase_add_test(tc1_1, s21_sprintf_test_8781__);
tcase_add_test(tc1_1, s21_sprintf_test_8782__);
tcase_add_test(tc1_1, s21_sprintf_test_8783__);
tcase_add_test(tc1_1, s21_sprintf_test_8784__);
tcase_add_test(tc1_1, s21_sprintf_test_8785__);
tcase_add_test(tc1_1, s21_sprintf_test_8786__);
tcase_add_test(tc1_1, s21_sprintf_test_8787__);
tcase_add_test(tc1_1, s21_sprintf_test_8788__);
tcase_add_test(tc1_1, s21_sprintf_test_8789__);
tcase_add_test(tc1_1, s21_sprintf_test_8790__);
tcase_add_test(tc1_1, s21_sprintf_test_8791__);
tcase_add_test(tc1_1, s21_sprintf_test_8792__);
tcase_add_test(tc1_1, s21_sprintf_test_8793__);
tcase_add_test(tc1_1, s21_sprintf_test_8794__);
tcase_add_test(tc1_1, s21_sprintf_test_8795__);
tcase_add_test(tc1_1, s21_sprintf_test_8796__);
tcase_add_test(tc1_1, s21_sprintf_test_8797__);
tcase_add_test(tc1_1, s21_sprintf_test_8798__);
tcase_add_test(tc1_1, s21_sprintf_test_8799__);
tcase_add_test(tc1_1, s21_sprintf_test_8800__);
tcase_add_test(tc1_1, s21_sprintf_test_8801__);
tcase_add_test(tc1_1, s21_sprintf_test_8802__);
tcase_add_test(tc1_1, s21_sprintf_test_8803__);
tcase_add_test(tc1_1, s21_sprintf_test_8804__);
tcase_add_test(tc1_1, s21_sprintf_test_8805__);
tcase_add_test(tc1_1, s21_sprintf_test_8806__);
tcase_add_test(tc1_1, s21_sprintf_test_8807__);
tcase_add_test(tc1_1, s21_sprintf_test_8808__);
tcase_add_test(tc1_1, s21_sprintf_test_8809__);
tcase_add_test(tc1_1, s21_sprintf_test_8810__);
tcase_add_test(tc1_1, s21_sprintf_test_8811__);
tcase_add_test(tc1_1, s21_sprintf_test_8812__);
tcase_add_test(tc1_1, s21_sprintf_test_8813__);
tcase_add_test(tc1_1, s21_sprintf_test_8814__);
tcase_add_test(tc1_1, s21_sprintf_test_8815__);
tcase_add_test(tc1_1, s21_sprintf_test_8816__);
tcase_add_test(tc1_1, s21_sprintf_test_8817__);
tcase_add_test(tc1_1, s21_sprintf_test_8818__);
tcase_add_test(tc1_1, s21_sprintf_test_8819__);
tcase_add_test(tc1_1, s21_sprintf_test_8820__);
tcase_add_test(tc1_1, s21_sprintf_test_8821__);
tcase_add_test(tc1_1, s21_sprintf_test_8822__);
tcase_add_test(tc1_1, s21_sprintf_test_8823__);
tcase_add_test(tc1_1, s21_sprintf_test_8824__);
tcase_add_test(tc1_1, s21_sprintf_test_8825__);
tcase_add_test(tc1_1, s21_sprintf_test_8826__);
tcase_add_test(tc1_1, s21_sprintf_test_8827__);
tcase_add_test(tc1_1, s21_sprintf_test_8828__);
tcase_add_test(tc1_1, s21_sprintf_test_8829__);
tcase_add_test(tc1_1, s21_sprintf_test_8830__);
tcase_add_test(tc1_1, s21_sprintf_test_8831__);
tcase_add_test(tc1_1, s21_sprintf_test_8832__);
tcase_add_test(tc1_1, s21_sprintf_test_8833__);
tcase_add_test(tc1_1, s21_sprintf_test_8834__);
tcase_add_test(tc1_1, s21_sprintf_test_8835__);
tcase_add_test(tc1_1, s21_sprintf_test_8836__);
tcase_add_test(tc1_1, s21_sprintf_test_8837__);
tcase_add_test(tc1_1, s21_sprintf_test_8838__);
tcase_add_test(tc1_1, s21_sprintf_test_8839__);
tcase_add_test(tc1_1, s21_sprintf_test_8840__);
tcase_add_test(tc1_1, s21_sprintf_test_8841__);
tcase_add_test(tc1_1, s21_sprintf_test_8842__);
tcase_add_test(tc1_1, s21_sprintf_test_8843__);
tcase_add_test(tc1_1, s21_sprintf_test_8844__);
tcase_add_test(tc1_1, s21_sprintf_test_8845__);
tcase_add_test(tc1_1, s21_sprintf_test_8846__);
tcase_add_test(tc1_1, s21_sprintf_test_8847__);
tcase_add_test(tc1_1, s21_sprintf_test_8848__);
tcase_add_test(tc1_1, s21_sprintf_test_8849__);
tcase_add_test(tc1_1, s21_sprintf_test_8850__);
tcase_add_test(tc1_1, s21_sprintf_test_8851__);
tcase_add_test(tc1_1, s21_sprintf_test_8852__);
tcase_add_test(tc1_1, s21_sprintf_test_8853__);
tcase_add_test(tc1_1, s21_sprintf_test_8854__);
tcase_add_test(tc1_1, s21_sprintf_test_8855__);
tcase_add_test(tc1_1, s21_sprintf_test_8856__);
tcase_add_test(tc1_1, s21_sprintf_test_8857__);
tcase_add_test(tc1_1, s21_sprintf_test_8858__);
tcase_add_test(tc1_1, s21_sprintf_test_8859__);
tcase_add_test(tc1_1, s21_sprintf_test_8860__);
tcase_add_test(tc1_1, s21_sprintf_test_8861__);
tcase_add_test(tc1_1, s21_sprintf_test_8862__);
tcase_add_test(tc1_1, s21_sprintf_test_8863__);
tcase_add_test(tc1_1, s21_sprintf_test_8864__);
tcase_add_test(tc1_1, s21_sprintf_test_8865__);
tcase_add_test(tc1_1, s21_sprintf_test_8866__);
tcase_add_test(tc1_1, s21_sprintf_test_8867__);
tcase_add_test(tc1_1, s21_sprintf_test_8868__);
tcase_add_test(tc1_1, s21_sprintf_test_8869__);
tcase_add_test(tc1_1, s21_sprintf_test_8870__);
tcase_add_test(tc1_1, s21_sprintf_test_8871__);
tcase_add_test(tc1_1, s21_sprintf_test_8872__);
tcase_add_test(tc1_1, s21_sprintf_test_8873__);
tcase_add_test(tc1_1, s21_sprintf_test_8874__);
tcase_add_test(tc1_1, s21_sprintf_test_8875__);
tcase_add_test(tc1_1, s21_sprintf_test_8876__);
tcase_add_test(tc1_1, s21_sprintf_test_8877__);
tcase_add_test(tc1_1, s21_sprintf_test_8878__);
tcase_add_test(tc1_1, s21_sprintf_test_8879__);
tcase_add_test(tc1_1, s21_sprintf_test_8880__);
tcase_add_test(tc1_1, s21_sprintf_test_8881__);
tcase_add_test(tc1_1, s21_sprintf_test_8882__);
tcase_add_test(tc1_1, s21_sprintf_test_8883__);
tcase_add_test(tc1_1, s21_sprintf_test_8884__);
tcase_add_test(tc1_1, s21_sprintf_test_8885__);
tcase_add_test(tc1_1, s21_sprintf_test_8886__);
tcase_add_test(tc1_1, s21_sprintf_test_8887__);
tcase_add_test(tc1_1, s21_sprintf_test_8888__);
tcase_add_test(tc1_1, s21_sprintf_test_8889__);
tcase_add_test(tc1_1, s21_sprintf_test_8890__);
tcase_add_test(tc1_1, s21_sprintf_test_8891__);
tcase_add_test(tc1_1, s21_sprintf_test_8892__);
tcase_add_test(tc1_1, s21_sprintf_test_8893__);
tcase_add_test(tc1_1, s21_sprintf_test_8894__);
tcase_add_test(tc1_1, s21_sprintf_test_8895__);
tcase_add_test(tc1_1, s21_sprintf_test_8896__);
tcase_add_test(tc1_1, s21_sprintf_test_8897__);
tcase_add_test(tc1_1, s21_sprintf_test_8898__);
tcase_add_test(tc1_1, s21_sprintf_test_8899__);
tcase_add_test(tc1_1, s21_sprintf_test_8900__);
tcase_add_test(tc1_1, s21_sprintf_test_8901__);
tcase_add_test(tc1_1, s21_sprintf_test_8902__);
tcase_add_test(tc1_1, s21_sprintf_test_8903__);
tcase_add_test(tc1_1, s21_sprintf_test_8904__);
tcase_add_test(tc1_1, s21_sprintf_test_8905__);
tcase_add_test(tc1_1, s21_sprintf_test_8906__);
tcase_add_test(tc1_1, s21_sprintf_test_8907__);
tcase_add_test(tc1_1, s21_sprintf_test_8908__);
tcase_add_test(tc1_1, s21_sprintf_test_8909__);
tcase_add_test(tc1_1, s21_sprintf_test_8910__);
tcase_add_test(tc1_1, s21_sprintf_test_8911__);
tcase_add_test(tc1_1, s21_sprintf_test_8912__);
tcase_add_test(tc1_1, s21_sprintf_test_8913__);
tcase_add_test(tc1_1, s21_sprintf_test_8914__);
tcase_add_test(tc1_1, s21_sprintf_test_8915__);
tcase_add_test(tc1_1, s21_sprintf_test_8916__);
tcase_add_test(tc1_1, s21_sprintf_test_8917__);
tcase_add_test(tc1_1, s21_sprintf_test_8918__);
tcase_add_test(tc1_1, s21_sprintf_test_8919__);
tcase_add_test(tc1_1, s21_sprintf_test_8920__);
tcase_add_test(tc1_1, s21_sprintf_test_8921__);
tcase_add_test(tc1_1, s21_sprintf_test_8922__);
tcase_add_test(tc1_1, s21_sprintf_test_8923__);
tcase_add_test(tc1_1, s21_sprintf_test_8924__);
tcase_add_test(tc1_1, s21_sprintf_test_8925__);
tcase_add_test(tc1_1, s21_sprintf_test_8926__);
tcase_add_test(tc1_1, s21_sprintf_test_8927__);
tcase_add_test(tc1_1, s21_sprintf_test_8928__);
tcase_add_test(tc1_1, s21_sprintf_test_8929__);
tcase_add_test(tc1_1, s21_sprintf_test_8930__);
tcase_add_test(tc1_1, s21_sprintf_test_8931__);
tcase_add_test(tc1_1, s21_sprintf_test_8932__);
tcase_add_test(tc1_1, s21_sprintf_test_8933__);
tcase_add_test(tc1_1, s21_sprintf_test_8934__);
tcase_add_test(tc1_1, s21_sprintf_test_8935__);
tcase_add_test(tc1_1, s21_sprintf_test_8936__);
tcase_add_test(tc1_1, s21_sprintf_test_8937__);
tcase_add_test(tc1_1, s21_sprintf_test_8938__);
tcase_add_test(tc1_1, s21_sprintf_test_8939__);
tcase_add_test(tc1_1, s21_sprintf_test_8940__);
tcase_add_test(tc1_1, s21_sprintf_test_8941__);
tcase_add_test(tc1_1, s21_sprintf_test_8942__);
tcase_add_test(tc1_1, s21_sprintf_test_8943__);
tcase_add_test(tc1_1, s21_sprintf_test_8944__);
tcase_add_test(tc1_1, s21_sprintf_test_8945__);
tcase_add_test(tc1_1, s21_sprintf_test_8946__);
tcase_add_test(tc1_1, s21_sprintf_test_8947__);
tcase_add_test(tc1_1, s21_sprintf_test_8948__);
tcase_add_test(tc1_1, s21_sprintf_test_8949__);
tcase_add_test(tc1_1, s21_sprintf_test_8950__);
tcase_add_test(tc1_1, s21_sprintf_test_8951__);
tcase_add_test(tc1_1, s21_sprintf_test_8952__);
tcase_add_test(tc1_1, s21_sprintf_test_8953__);
tcase_add_test(tc1_1, s21_sprintf_test_8954__);
tcase_add_test(tc1_1, s21_sprintf_test_8955__);
tcase_add_test(tc1_1, s21_sprintf_test_8956__);
tcase_add_test(tc1_1, s21_sprintf_test_8957__);
tcase_add_test(tc1_1, s21_sprintf_test_8958__);
tcase_add_test(tc1_1, s21_sprintf_test_8959__);
tcase_add_test(tc1_1, s21_sprintf_test_8960__);
tcase_add_test(tc1_1, s21_sprintf_test_8961__);
tcase_add_test(tc1_1, s21_sprintf_test_8962__);
tcase_add_test(tc1_1, s21_sprintf_test_8963__);
tcase_add_test(tc1_1, s21_sprintf_test_8964__);
tcase_add_test(tc1_1, s21_sprintf_test_8965__);
tcase_add_test(tc1_1, s21_sprintf_test_8966__);
tcase_add_test(tc1_1, s21_sprintf_test_8967__);
tcase_add_test(tc1_1, s21_sprintf_test_8968__);
tcase_add_test(tc1_1, s21_sprintf_test_8969__);
tcase_add_test(tc1_1, s21_sprintf_test_8970__);
tcase_add_test(tc1_1, s21_sprintf_test_8971__);
tcase_add_test(tc1_1, s21_sprintf_test_8972__);
tcase_add_test(tc1_1, s21_sprintf_test_8973__);
tcase_add_test(tc1_1, s21_sprintf_test_8974__);
tcase_add_test(tc1_1, s21_sprintf_test_8975__);
tcase_add_test(tc1_1, s21_sprintf_test_8976__);
tcase_add_test(tc1_1, s21_sprintf_test_8977__);
tcase_add_test(tc1_1, s21_sprintf_test_8978__);
tcase_add_test(tc1_1, s21_sprintf_test_8979__);
tcase_add_test(tc1_1, s21_sprintf_test_8980__);
tcase_add_test(tc1_1, s21_sprintf_test_8981__);
tcase_add_test(tc1_1, s21_sprintf_test_8982__);
tcase_add_test(tc1_1, s21_sprintf_test_8983__);
tcase_add_test(tc1_1, s21_sprintf_test_8984__);
tcase_add_test(tc1_1, s21_sprintf_test_8985__);
tcase_add_test(tc1_1, s21_sprintf_test_8986__);
tcase_add_test(tc1_1, s21_sprintf_test_8987__);
tcase_add_test(tc1_1, s21_sprintf_test_8988__);
tcase_add_test(tc1_1, s21_sprintf_test_8989__);
tcase_add_test(tc1_1, s21_sprintf_test_8990__);
tcase_add_test(tc1_1, s21_sprintf_test_8991__);
tcase_add_test(tc1_1, s21_sprintf_test_8992__);
tcase_add_test(tc1_1, s21_sprintf_test_8993__);
tcase_add_test(tc1_1, s21_sprintf_test_8994__);
tcase_add_test(tc1_1, s21_sprintf_test_8995__);
tcase_add_test(tc1_1, s21_sprintf_test_8996__);
tcase_add_test(tc1_1, s21_sprintf_test_8997__);
tcase_add_test(tc1_1, s21_sprintf_test_8998__);
tcase_add_test(tc1_1, s21_sprintf_test_8999__);
tcase_add_test(tc1_1, s21_sprintf_test_9000__);
tcase_add_test(tc1_1, s21_sprintf_test_9001__);
tcase_add_test(tc1_1, s21_sprintf_test_9002__);
tcase_add_test(tc1_1, s21_sprintf_test_9003__);
tcase_add_test(tc1_1, s21_sprintf_test_9004__);
tcase_add_test(tc1_1, s21_sprintf_test_9005__);
tcase_add_test(tc1_1, s21_sprintf_test_9006__);
tcase_add_test(tc1_1, s21_sprintf_test_9007__);
tcase_add_test(tc1_1, s21_sprintf_test_9008__);
tcase_add_test(tc1_1, s21_sprintf_test_9009__);
tcase_add_test(tc1_1, s21_sprintf_test_9010__);
tcase_add_test(tc1_1, s21_sprintf_test_9011__);
tcase_add_test(tc1_1, s21_sprintf_test_9012__);
tcase_add_test(tc1_1, s21_sprintf_test_9013__);
tcase_add_test(tc1_1, s21_sprintf_test_9014__);
tcase_add_test(tc1_1, s21_sprintf_test_9015__);
tcase_add_test(tc1_1, s21_sprintf_test_9016__);
tcase_add_test(tc1_1, s21_sprintf_test_9017__);
tcase_add_test(tc1_1, s21_sprintf_test_9018__);
tcase_add_test(tc1_1, s21_sprintf_test_9019__);
tcase_add_test(tc1_1, s21_sprintf_test_9020__);
tcase_add_test(tc1_1, s21_sprintf_test_9021__);
tcase_add_test(tc1_1, s21_sprintf_test_9022__);
tcase_add_test(tc1_1, s21_sprintf_test_9023__);
tcase_add_test(tc1_1, s21_sprintf_test_9024__);
tcase_add_test(tc1_1, s21_sprintf_test_9025__);
tcase_add_test(tc1_1, s21_sprintf_test_9026__);
tcase_add_test(tc1_1, s21_sprintf_test_9027__);
tcase_add_test(tc1_1, s21_sprintf_test_9028__);
tcase_add_test(tc1_1, s21_sprintf_test_9029__);
tcase_add_test(tc1_1, s21_sprintf_test_9030__);
tcase_add_test(tc1_1, s21_sprintf_test_9031__);
tcase_add_test(tc1_1, s21_sprintf_test_9032__);
tcase_add_test(tc1_1, s21_sprintf_test_9033__);
tcase_add_test(tc1_1, s21_sprintf_test_9034__);
tcase_add_test(tc1_1, s21_sprintf_test_9035__);
tcase_add_test(tc1_1, s21_sprintf_test_9036__);
tcase_add_test(tc1_1, s21_sprintf_test_9037__);
tcase_add_test(tc1_1, s21_sprintf_test_9038__);
tcase_add_test(tc1_1, s21_sprintf_test_9039__);
tcase_add_test(tc1_1, s21_sprintf_test_9040__);
tcase_add_test(tc1_1, s21_sprintf_test_9041__);
tcase_add_test(tc1_1, s21_sprintf_test_9042__);
tcase_add_test(tc1_1, s21_sprintf_test_9043__);
tcase_add_test(tc1_1, s21_sprintf_test_9044__);
tcase_add_test(tc1_1, s21_sprintf_test_9045__);
tcase_add_test(tc1_1, s21_sprintf_test_9046__);
tcase_add_test(tc1_1, s21_sprintf_test_9047__);
tcase_add_test(tc1_1, s21_sprintf_test_9048__);
tcase_add_test(tc1_1, s21_sprintf_test_9049__);
tcase_add_test(tc1_1, s21_sprintf_test_9050__);
tcase_add_test(tc1_1, s21_sprintf_test_9051__);
tcase_add_test(tc1_1, s21_sprintf_test_9052__);
tcase_add_test(tc1_1, s21_sprintf_test_9053__);
tcase_add_test(tc1_1, s21_sprintf_test_9054__);
tcase_add_test(tc1_1, s21_sprintf_test_9055__);
tcase_add_test(tc1_1, s21_sprintf_test_9056__);
tcase_add_test(tc1_1, s21_sprintf_test_9057__);
tcase_add_test(tc1_1, s21_sprintf_test_9058__);
tcase_add_test(tc1_1, s21_sprintf_test_9059__);
tcase_add_test(tc1_1, s21_sprintf_test_9060__);
tcase_add_test(tc1_1, s21_sprintf_test_9061__);
tcase_add_test(tc1_1, s21_sprintf_test_9062__);
tcase_add_test(tc1_1, s21_sprintf_test_9063__);
tcase_add_test(tc1_1, s21_sprintf_test_9064__);
tcase_add_test(tc1_1, s21_sprintf_test_9065__);
tcase_add_test(tc1_1, s21_sprintf_test_9066__);
tcase_add_test(tc1_1, s21_sprintf_test_9067__);
tcase_add_test(tc1_1, s21_sprintf_test_9068__);
tcase_add_test(tc1_1, s21_sprintf_test_9069__);
tcase_add_test(tc1_1, s21_sprintf_test_9070__);
tcase_add_test(tc1_1, s21_sprintf_test_9071__);
tcase_add_test(tc1_1, s21_sprintf_test_9072__);
tcase_add_test(tc1_1, s21_sprintf_test_9073__);
tcase_add_test(tc1_1, s21_sprintf_test_9074__);
tcase_add_test(tc1_1, s21_sprintf_test_9075__);
tcase_add_test(tc1_1, s21_sprintf_test_9076__);
tcase_add_test(tc1_1, s21_sprintf_test_9077__);
tcase_add_test(tc1_1, s21_sprintf_test_9078__);
tcase_add_test(tc1_1, s21_sprintf_test_9079__);
tcase_add_test(tc1_1, s21_sprintf_test_9080__);
tcase_add_test(tc1_1, s21_sprintf_test_9081__);
tcase_add_test(tc1_1, s21_sprintf_test_9082__);
tcase_add_test(tc1_1, s21_sprintf_test_9083__);
tcase_add_test(tc1_1, s21_sprintf_test_9084__);
tcase_add_test(tc1_1, s21_sprintf_test_9085__);
tcase_add_test(tc1_1, s21_sprintf_test_9086__);
tcase_add_test(tc1_1, s21_sprintf_test_9087__);
tcase_add_test(tc1_1, s21_sprintf_test_9088__);
tcase_add_test(tc1_1, s21_sprintf_test_9089__);
tcase_add_test(tc1_1, s21_sprintf_test_9090__);
tcase_add_test(tc1_1, s21_sprintf_test_9091__);
tcase_add_test(tc1_1, s21_sprintf_test_9092__);
tcase_add_test(tc1_1, s21_sprintf_test_9093__);
tcase_add_test(tc1_1, s21_sprintf_test_9094__);
tcase_add_test(tc1_1, s21_sprintf_test_9095__);
tcase_add_test(tc1_1, s21_sprintf_test_9096__);
tcase_add_test(tc1_1, s21_sprintf_test_9097__);
tcase_add_test(tc1_1, s21_sprintf_test_9098__);
tcase_add_test(tc1_1, s21_sprintf_test_9099__);
tcase_add_test(tc1_1, s21_sprintf_test_9100__);
tcase_add_test(tc1_1, s21_sprintf_test_9101__);
tcase_add_test(tc1_1, s21_sprintf_test_9102__);
tcase_add_test(tc1_1, s21_sprintf_test_9103__);
tcase_add_test(tc1_1, s21_sprintf_test_9104__);
tcase_add_test(tc1_1, s21_sprintf_test_9105__);
tcase_add_test(tc1_1, s21_sprintf_test_9106__);
tcase_add_test(tc1_1, s21_sprintf_test_9107__);
tcase_add_test(tc1_1, s21_sprintf_test_9108__);
tcase_add_test(tc1_1, s21_sprintf_test_9109__);
tcase_add_test(tc1_1, s21_sprintf_test_9110__);
tcase_add_test(tc1_1, s21_sprintf_test_9111__);
tcase_add_test(tc1_1, s21_sprintf_test_9112__);
tcase_add_test(tc1_1, s21_sprintf_test_9113__);
tcase_add_test(tc1_1, s21_sprintf_test_9114__);
tcase_add_test(tc1_1, s21_sprintf_test_9115__);
tcase_add_test(tc1_1, s21_sprintf_test_9116__);
tcase_add_test(tc1_1, s21_sprintf_test_9117__);
tcase_add_test(tc1_1, s21_sprintf_test_9118__);
tcase_add_test(tc1_1, s21_sprintf_test_9119__);
tcase_add_test(tc1_1, s21_sprintf_test_9120__);
tcase_add_test(tc1_1, s21_sprintf_test_9121__);
tcase_add_test(tc1_1, s21_sprintf_test_9122__);
tcase_add_test(tc1_1, s21_sprintf_test_9123__);
tcase_add_test(tc1_1, s21_sprintf_test_9124__);
tcase_add_test(tc1_1, s21_sprintf_test_9125__);
tcase_add_test(tc1_1, s21_sprintf_test_9126__);
tcase_add_test(tc1_1, s21_sprintf_test_9127__);
tcase_add_test(tc1_1, s21_sprintf_test_9128__);
tcase_add_test(tc1_1, s21_sprintf_test_9129__);
tcase_add_test(tc1_1, s21_sprintf_test_9130__);
tcase_add_test(tc1_1, s21_sprintf_test_9131__);
tcase_add_test(tc1_1, s21_sprintf_test_9132__);
tcase_add_test(tc1_1, s21_sprintf_test_9133__);
tcase_add_test(tc1_1, s21_sprintf_test_9134__);
tcase_add_test(tc1_1, s21_sprintf_test_9135__);
tcase_add_test(tc1_1, s21_sprintf_test_9136__);
tcase_add_test(tc1_1, s21_sprintf_test_9137__);
tcase_add_test(tc1_1, s21_sprintf_test_9138__);
tcase_add_test(tc1_1, s21_sprintf_test_9139__);
tcase_add_test(tc1_1, s21_sprintf_test_9140__);
tcase_add_test(tc1_1, s21_sprintf_test_9141__);
tcase_add_test(tc1_1, s21_sprintf_test_9142__);
tcase_add_test(tc1_1, s21_sprintf_test_9143__);
tcase_add_test(tc1_1, s21_sprintf_test_9144__);
tcase_add_test(tc1_1, s21_sprintf_test_9145__);
tcase_add_test(tc1_1, s21_sprintf_test_9146__);
tcase_add_test(tc1_1, s21_sprintf_test_9147__);
tcase_add_test(tc1_1, s21_sprintf_test_9148__);
tcase_add_test(tc1_1, s21_sprintf_test_9149__);
tcase_add_test(tc1_1, s21_sprintf_test_9150__);
tcase_add_test(tc1_1, s21_sprintf_test_9151__);
tcase_add_test(tc1_1, s21_sprintf_test_9152__);
tcase_add_test(tc1_1, s21_sprintf_test_9153__);
tcase_add_test(tc1_1, s21_sprintf_test_9154__);
tcase_add_test(tc1_1, s21_sprintf_test_9155__);
tcase_add_test(tc1_1, s21_sprintf_test_9156__);
tcase_add_test(tc1_1, s21_sprintf_test_9157__);
tcase_add_test(tc1_1, s21_sprintf_test_9158__);
tcase_add_test(tc1_1, s21_sprintf_test_9159__);
tcase_add_test(tc1_1, s21_sprintf_test_9160__);
tcase_add_test(tc1_1, s21_sprintf_test_9161__);
tcase_add_test(tc1_1, s21_sprintf_test_9162__);
tcase_add_test(tc1_1, s21_sprintf_test_9163__);
tcase_add_test(tc1_1, s21_sprintf_test_9164__);
tcase_add_test(tc1_1, s21_sprintf_test_9165__);
tcase_add_test(tc1_1, s21_sprintf_test_9166__);
tcase_add_test(tc1_1, s21_sprintf_test_9167__);
tcase_add_test(tc1_1, s21_sprintf_test_9168__);
tcase_add_test(tc1_1, s21_sprintf_test_9169__);
tcase_add_test(tc1_1, s21_sprintf_test_9170__);
tcase_add_test(tc1_1, s21_sprintf_test_9171__);
tcase_add_test(tc1_1, s21_sprintf_test_9172__);
tcase_add_test(tc1_1, s21_sprintf_test_9173__);
tcase_add_test(tc1_1, s21_sprintf_test_9174__);
tcase_add_test(tc1_1, s21_sprintf_test_9175__);
tcase_add_test(tc1_1, s21_sprintf_test_9176__);
tcase_add_test(tc1_1, s21_sprintf_test_9177__);
tcase_add_test(tc1_1, s21_sprintf_test_9178__);
tcase_add_test(tc1_1, s21_sprintf_test_9179__);
tcase_add_test(tc1_1, s21_sprintf_test_9180__);
tcase_add_test(tc1_1, s21_sprintf_test_9181__);
tcase_add_test(tc1_1, s21_sprintf_test_9182__);
tcase_add_test(tc1_1, s21_sprintf_test_9183__);
tcase_add_test(tc1_1, s21_sprintf_test_9184__);
tcase_add_test(tc1_1, s21_sprintf_test_9185__);
tcase_add_test(tc1_1, s21_sprintf_test_9186__);
tcase_add_test(tc1_1, s21_sprintf_test_9187__);
tcase_add_test(tc1_1, s21_sprintf_test_9188__);
tcase_add_test(tc1_1, s21_sprintf_test_9189__);
tcase_add_test(tc1_1, s21_sprintf_test_9190__);
tcase_add_test(tc1_1, s21_sprintf_test_9191__);
tcase_add_test(tc1_1, s21_sprintf_test_9192__);
tcase_add_test(tc1_1, s21_sprintf_test_9193__);
tcase_add_test(tc1_1, s21_sprintf_test_9194__);
tcase_add_test(tc1_1, s21_sprintf_test_9195__);
tcase_add_test(tc1_1, s21_sprintf_test_9196__);
tcase_add_test(tc1_1, s21_sprintf_test_9197__);
tcase_add_test(tc1_1, s21_sprintf_test_9198__);
tcase_add_test(tc1_1, s21_sprintf_test_9199__);
tcase_add_test(tc1_1, s21_sprintf_test_9200__);
tcase_add_test(tc1_1, s21_sprintf_test_9201__);
tcase_add_test(tc1_1, s21_sprintf_test_9202__);
tcase_add_test(tc1_1, s21_sprintf_test_9203__);
tcase_add_test(tc1_1, s21_sprintf_test_9204__);
tcase_add_test(tc1_1, s21_sprintf_test_9205__);
tcase_add_test(tc1_1, s21_sprintf_test_9206__);
tcase_add_test(tc1_1, s21_sprintf_test_9207__);
tcase_add_test(tc1_1, s21_sprintf_test_9208__);
tcase_add_test(tc1_1, s21_sprintf_test_9209__);
tcase_add_test(tc1_1, s21_sprintf_test_9210__);
tcase_add_test(tc1_1, s21_sprintf_test_9211__);
tcase_add_test(tc1_1, s21_sprintf_test_9212__);
tcase_add_test(tc1_1, s21_sprintf_test_9213__);
tcase_add_test(tc1_1, s21_sprintf_test_9214__);
tcase_add_test(tc1_1, s21_sprintf_test_9215__);
tcase_add_test(tc1_1, s21_sprintf_test_9216__);
tcase_add_test(tc1_1, s21_sprintf_test_9217__);
tcase_add_test(tc1_1, s21_sprintf_test_9218__);
tcase_add_test(tc1_1, s21_sprintf_test_9219__);
tcase_add_test(tc1_1, s21_sprintf_test_9220__);
tcase_add_test(tc1_1, s21_sprintf_test_9221__);
tcase_add_test(tc1_1, s21_sprintf_test_9222__);
tcase_add_test(tc1_1, s21_sprintf_test_9223__);
tcase_add_test(tc1_1, s21_sprintf_test_9224__);
tcase_add_test(tc1_1, s21_sprintf_test_9225__);
tcase_add_test(tc1_1, s21_sprintf_test_9226__);
tcase_add_test(tc1_1, s21_sprintf_test_9227__);
tcase_add_test(tc1_1, s21_sprintf_test_9228__);
tcase_add_test(tc1_1, s21_sprintf_test_9229__);
tcase_add_test(tc1_1, s21_sprintf_test_9230__);
tcase_add_test(tc1_1, s21_sprintf_test_9231__);
tcase_add_test(tc1_1, s21_sprintf_test_9232__);
tcase_add_test(tc1_1, s21_sprintf_test_9233__);
tcase_add_test(tc1_1, s21_sprintf_test_9234__);
tcase_add_test(tc1_1, s21_sprintf_test_9235__);
tcase_add_test(tc1_1, s21_sprintf_test_9236__);
tcase_add_test(tc1_1, s21_sprintf_test_9237__);
tcase_add_test(tc1_1, s21_sprintf_test_9238__);
tcase_add_test(tc1_1, s21_sprintf_test_9239__);
tcase_add_test(tc1_1, s21_sprintf_test_9240__);
tcase_add_test(tc1_1, s21_sprintf_test_9241__);
tcase_add_test(tc1_1, s21_sprintf_test_9242__);
tcase_add_test(tc1_1, s21_sprintf_test_9243__);
tcase_add_test(tc1_1, s21_sprintf_test_9244__);
tcase_add_test(tc1_1, s21_sprintf_test_9245__);
tcase_add_test(tc1_1, s21_sprintf_test_9246__);
tcase_add_test(tc1_1, s21_sprintf_test_9247__);
tcase_add_test(tc1_1, s21_sprintf_test_9248__);
tcase_add_test(tc1_1, s21_sprintf_test_9249__);
tcase_add_test(tc1_1, s21_sprintf_test_9250__);
tcase_add_test(tc1_1, s21_sprintf_test_9251__);
tcase_add_test(tc1_1, s21_sprintf_test_9252__);
tcase_add_test(tc1_1, s21_sprintf_test_9253__);
tcase_add_test(tc1_1, s21_sprintf_test_9254__);
tcase_add_test(tc1_1, s21_sprintf_test_9255__);
tcase_add_test(tc1_1, s21_sprintf_test_9256__);
tcase_add_test(tc1_1, s21_sprintf_test_9257__);
tcase_add_test(tc1_1, s21_sprintf_test_9258__);
tcase_add_test(tc1_1, s21_sprintf_test_9259__);
tcase_add_test(tc1_1, s21_sprintf_test_9260__);
tcase_add_test(tc1_1, s21_sprintf_test_9261__);
tcase_add_test(tc1_1, s21_sprintf_test_9262__);
tcase_add_test(tc1_1, s21_sprintf_test_9263__);
tcase_add_test(tc1_1, s21_sprintf_test_9264__);
tcase_add_test(tc1_1, s21_sprintf_test_9265__);
tcase_add_test(tc1_1, s21_sprintf_test_9266__);
tcase_add_test(tc1_1, s21_sprintf_test_9267__);
tcase_add_test(tc1_1, s21_sprintf_test_9268__);
tcase_add_test(tc1_1, s21_sprintf_test_9269__);
tcase_add_test(tc1_1, s21_sprintf_test_9270__);
tcase_add_test(tc1_1, s21_sprintf_test_9271__);
tcase_add_test(tc1_1, s21_sprintf_test_9272__);
tcase_add_test(tc1_1, s21_sprintf_test_9273__);
tcase_add_test(tc1_1, s21_sprintf_test_9274__);
tcase_add_test(tc1_1, s21_sprintf_test_9275__);
tcase_add_test(tc1_1, s21_sprintf_test_9276__);
tcase_add_test(tc1_1, s21_sprintf_test_9277__);
tcase_add_test(tc1_1, s21_sprintf_test_9278__);
tcase_add_test(tc1_1, s21_sprintf_test_9279__);
tcase_add_test(tc1_1, s21_sprintf_test_9280__);
tcase_add_test(tc1_1, s21_sprintf_test_9281__);
tcase_add_test(tc1_1, s21_sprintf_test_9282__);
tcase_add_test(tc1_1, s21_sprintf_test_9283__);
tcase_add_test(tc1_1, s21_sprintf_test_9284__);
tcase_add_test(tc1_1, s21_sprintf_test_9285__);
tcase_add_test(tc1_1, s21_sprintf_test_9286__);
tcase_add_test(tc1_1, s21_sprintf_test_9287__);
tcase_add_test(tc1_1, s21_sprintf_test_9288__);
tcase_add_test(tc1_1, s21_sprintf_test_9289__);
tcase_add_test(tc1_1, s21_sprintf_test_9290__);
tcase_add_test(tc1_1, s21_sprintf_test_9291__);
tcase_add_test(tc1_1, s21_sprintf_test_9292__);
tcase_add_test(tc1_1, s21_sprintf_test_9293__);
tcase_add_test(tc1_1, s21_sprintf_test_9294__);
tcase_add_test(tc1_1, s21_sprintf_test_9295__);
tcase_add_test(tc1_1, s21_sprintf_test_9296__);
tcase_add_test(tc1_1, s21_sprintf_test_9297__);
tcase_add_test(tc1_1, s21_sprintf_test_9298__);
tcase_add_test(tc1_1, s21_sprintf_test_9299__);
tcase_add_test(tc1_1, s21_sprintf_test_9300__);
tcase_add_test(tc1_1, s21_sprintf_test_9301__);
tcase_add_test(tc1_1, s21_sprintf_test_9302__);
tcase_add_test(tc1_1, s21_sprintf_test_9303__);
tcase_add_test(tc1_1, s21_sprintf_test_9304__);
tcase_add_test(tc1_1, s21_sprintf_test_9305__);
tcase_add_test(tc1_1, s21_sprintf_test_9306__);
tcase_add_test(tc1_1, s21_sprintf_test_9307__);
tcase_add_test(tc1_1, s21_sprintf_test_9308__);
tcase_add_test(tc1_1, s21_sprintf_test_9309__);
tcase_add_test(tc1_1, s21_sprintf_test_9310__);
tcase_add_test(tc1_1, s21_sprintf_test_9311__);
tcase_add_test(tc1_1, s21_sprintf_test_9312__);
tcase_add_test(tc1_1, s21_sprintf_test_9313__);
tcase_add_test(tc1_1, s21_sprintf_test_9314__);
tcase_add_test(tc1_1, s21_sprintf_test_9315__);
tcase_add_test(tc1_1, s21_sprintf_test_9316__);
tcase_add_test(tc1_1, s21_sprintf_test_9317__);
tcase_add_test(tc1_1, s21_sprintf_test_9318__);
tcase_add_test(tc1_1, s21_sprintf_test_9319__);
tcase_add_test(tc1_1, s21_sprintf_test_9320__);
tcase_add_test(tc1_1, s21_sprintf_test_9321__);
tcase_add_test(tc1_1, s21_sprintf_test_9322__);
tcase_add_test(tc1_1, s21_sprintf_test_9323__);
tcase_add_test(tc1_1, s21_sprintf_test_9324__);
tcase_add_test(tc1_1, s21_sprintf_test_9325__);
tcase_add_test(tc1_1, s21_sprintf_test_9326__);
tcase_add_test(tc1_1, s21_sprintf_test_9327__);
tcase_add_test(tc1_1, s21_sprintf_test_9328__);
tcase_add_test(tc1_1, s21_sprintf_test_9329__);
tcase_add_test(tc1_1, s21_sprintf_test_9330__);
tcase_add_test(tc1_1, s21_sprintf_test_9331__);
tcase_add_test(tc1_1, s21_sprintf_test_9332__);
tcase_add_test(tc1_1, s21_sprintf_test_9333__);
tcase_add_test(tc1_1, s21_sprintf_test_9334__);
tcase_add_test(tc1_1, s21_sprintf_test_9335__);
tcase_add_test(tc1_1, s21_sprintf_test_9336__);
tcase_add_test(tc1_1, s21_sprintf_test_9337__);
tcase_add_test(tc1_1, s21_sprintf_test_9338__);
tcase_add_test(tc1_1, s21_sprintf_test_9339__);
tcase_add_test(tc1_1, s21_sprintf_test_9340__);
tcase_add_test(tc1_1, s21_sprintf_test_9341__);
tcase_add_test(tc1_1, s21_sprintf_test_9342__);
tcase_add_test(tc1_1, s21_sprintf_test_9343__);
tcase_add_test(tc1_1, s21_sprintf_test_9344__);
tcase_add_test(tc1_1, s21_sprintf_test_9345__);
tcase_add_test(tc1_1, s21_sprintf_test_9346__);
tcase_add_test(tc1_1, s21_sprintf_test_9347__);
tcase_add_test(tc1_1, s21_sprintf_test_9348__);
tcase_add_test(tc1_1, s21_sprintf_test_9349__);
tcase_add_test(tc1_1, s21_sprintf_test_9350__);
tcase_add_test(tc1_1, s21_sprintf_test_9351__);
tcase_add_test(tc1_1, s21_sprintf_test_9352__);
tcase_add_test(tc1_1, s21_sprintf_test_9353__);
tcase_add_test(tc1_1, s21_sprintf_test_9354__);
tcase_add_test(tc1_1, s21_sprintf_test_9355__);
tcase_add_test(tc1_1, s21_sprintf_test_9356__);
tcase_add_test(tc1_1, s21_sprintf_test_9357__);
tcase_add_test(tc1_1, s21_sprintf_test_9358__);
tcase_add_test(tc1_1, s21_sprintf_test_9359__);
tcase_add_test(tc1_1, s21_sprintf_test_9360__);
tcase_add_test(tc1_1, s21_sprintf_test_9361__);
tcase_add_test(tc1_1, s21_sprintf_test_9362__);
tcase_add_test(tc1_1, s21_sprintf_test_9363__);
tcase_add_test(tc1_1, s21_sprintf_test_9364__);
tcase_add_test(tc1_1, s21_sprintf_test_9365__);
tcase_add_test(tc1_1, s21_sprintf_test_9366__);
tcase_add_test(tc1_1, s21_sprintf_test_9367__);
tcase_add_test(tc1_1, s21_sprintf_test_9368__);
tcase_add_test(tc1_1, s21_sprintf_test_9369__);
tcase_add_test(tc1_1, s21_sprintf_test_9370__);
tcase_add_test(tc1_1, s21_sprintf_test_9371__);
tcase_add_test(tc1_1, s21_sprintf_test_9372__);
tcase_add_test(tc1_1, s21_sprintf_test_9373__);
tcase_add_test(tc1_1, s21_sprintf_test_9374__);
tcase_add_test(tc1_1, s21_sprintf_test_9375__);
tcase_add_test(tc1_1, s21_sprintf_test_9376__);
tcase_add_test(tc1_1, s21_sprintf_test_9377__);
tcase_add_test(tc1_1, s21_sprintf_test_9378__);
tcase_add_test(tc1_1, s21_sprintf_test_9379__);
tcase_add_test(tc1_1, s21_sprintf_test_9380__);
tcase_add_test(tc1_1, s21_sprintf_test_9381__);
tcase_add_test(tc1_1, s21_sprintf_test_9382__);
tcase_add_test(tc1_1, s21_sprintf_test_9383__);
tcase_add_test(tc1_1, s21_sprintf_test_9384__);
tcase_add_test(tc1_1, s21_sprintf_test_9385__);
tcase_add_test(tc1_1, s21_sprintf_test_9386__);
tcase_add_test(tc1_1, s21_sprintf_test_9387__);
tcase_add_test(tc1_1, s21_sprintf_test_9388__);
tcase_add_test(tc1_1, s21_sprintf_test_9389__);
tcase_add_test(tc1_1, s21_sprintf_test_9390__);
tcase_add_test(tc1_1, s21_sprintf_test_9391__);
tcase_add_test(tc1_1, s21_sprintf_test_9392__);
tcase_add_test(tc1_1, s21_sprintf_test_9393__);
tcase_add_test(tc1_1, s21_sprintf_test_9394__);
tcase_add_test(tc1_1, s21_sprintf_test_9395__);
tcase_add_test(tc1_1, s21_sprintf_test_9396__);
tcase_add_test(tc1_1, s21_sprintf_test_9397__);
tcase_add_test(tc1_1, s21_sprintf_test_9398__);
tcase_add_test(tc1_1, s21_sprintf_test_9399__);
tcase_add_test(tc1_1, s21_sprintf_test_9400__);
tcase_add_test(tc1_1, s21_sprintf_test_9401__);
tcase_add_test(tc1_1, s21_sprintf_test_9402__);
tcase_add_test(tc1_1, s21_sprintf_test_9403__);
tcase_add_test(tc1_1, s21_sprintf_test_9404__);
tcase_add_test(tc1_1, s21_sprintf_test_9405__);
tcase_add_test(tc1_1, s21_sprintf_test_9406__);
tcase_add_test(tc1_1, s21_sprintf_test_9407__);
tcase_add_test(tc1_1, s21_sprintf_test_9408__);
tcase_add_test(tc1_1, s21_sprintf_test_9409__);
tcase_add_test(tc1_1, s21_sprintf_test_9410__);
tcase_add_test(tc1_1, s21_sprintf_test_9411__);
tcase_add_test(tc1_1, s21_sprintf_test_9412__);
tcase_add_test(tc1_1, s21_sprintf_test_9413__);
tcase_add_test(tc1_1, s21_sprintf_test_9414__);
tcase_add_test(tc1_1, s21_sprintf_test_9415__);
tcase_add_test(tc1_1, s21_sprintf_test_9416__);
tcase_add_test(tc1_1, s21_sprintf_test_9417__);
tcase_add_test(tc1_1, s21_sprintf_test_9418__);
tcase_add_test(tc1_1, s21_sprintf_test_9419__);
tcase_add_test(tc1_1, s21_sprintf_test_9420__);
tcase_add_test(tc1_1, s21_sprintf_test_9421__);
tcase_add_test(tc1_1, s21_sprintf_test_9422__);
tcase_add_test(tc1_1, s21_sprintf_test_9423__);
tcase_add_test(tc1_1, s21_sprintf_test_9424__);
tcase_add_test(tc1_1, s21_sprintf_test_9425__);
tcase_add_test(tc1_1, s21_sprintf_test_9426__);
tcase_add_test(tc1_1, s21_sprintf_test_9427__);
tcase_add_test(tc1_1, s21_sprintf_test_9428__);
tcase_add_test(tc1_1, s21_sprintf_test_9429__);
tcase_add_test(tc1_1, s21_sprintf_test_9430__);
tcase_add_test(tc1_1, s21_sprintf_test_9431__);
tcase_add_test(tc1_1, s21_sprintf_test_9432__);
tcase_add_test(tc1_1, s21_sprintf_test_9433__);
tcase_add_test(tc1_1, s21_sprintf_test_9434__);
tcase_add_test(tc1_1, s21_sprintf_test_9435__);
tcase_add_test(tc1_1, s21_sprintf_test_9436__);
tcase_add_test(tc1_1, s21_sprintf_test_9437__);
tcase_add_test(tc1_1, s21_sprintf_test_9438__);
tcase_add_test(tc1_1, s21_sprintf_test_9439__);
tcase_add_test(tc1_1, s21_sprintf_test_9440__);
tcase_add_test(tc1_1, s21_sprintf_test_9441__);
tcase_add_test(tc1_1, s21_sprintf_test_9442__);
tcase_add_test(tc1_1, s21_sprintf_test_9443__);
tcase_add_test(tc1_1, s21_sprintf_test_9444__);
tcase_add_test(tc1_1, s21_sprintf_test_9445__);
tcase_add_test(tc1_1, s21_sprintf_test_9446__);
tcase_add_test(tc1_1, s21_sprintf_test_9447__);
tcase_add_test(tc1_1, s21_sprintf_test_9448__);
tcase_add_test(tc1_1, s21_sprintf_test_9449__);
tcase_add_test(tc1_1, s21_sprintf_test_9450__);
tcase_add_test(tc1_1, s21_sprintf_test_9451__);
tcase_add_test(tc1_1, s21_sprintf_test_9452__);
tcase_add_test(tc1_1, s21_sprintf_test_9453__);
tcase_add_test(tc1_1, s21_sprintf_test_9454__);
tcase_add_test(tc1_1, s21_sprintf_test_9455__);
tcase_add_test(tc1_1, s21_sprintf_test_9456__);
tcase_add_test(tc1_1, s21_sprintf_test_9457__);
tcase_add_test(tc1_1, s21_sprintf_test_9458__);
tcase_add_test(tc1_1, s21_sprintf_test_9459__);
tcase_add_test(tc1_1, s21_sprintf_test_9460__);
tcase_add_test(tc1_1, s21_sprintf_test_9461__);
tcase_add_test(tc1_1, s21_sprintf_test_9462__);
tcase_add_test(tc1_1, s21_sprintf_test_9463__);
tcase_add_test(tc1_1, s21_sprintf_test_9464__);
tcase_add_test(tc1_1, s21_sprintf_test_9465__);
tcase_add_test(tc1_1, s21_sprintf_test_9466__);
tcase_add_test(tc1_1, s21_sprintf_test_9467__);
tcase_add_test(tc1_1, s21_sprintf_test_9468__);
tcase_add_test(tc1_1, s21_sprintf_test_9469__);
tcase_add_test(tc1_1, s21_sprintf_test_9470__);
tcase_add_test(tc1_1, s21_sprintf_test_9471__);
tcase_add_test(tc1_1, s21_sprintf_test_9472__);
tcase_add_test(tc1_1, s21_sprintf_test_9473__);
tcase_add_test(tc1_1, s21_sprintf_test_9474__);
tcase_add_test(tc1_1, s21_sprintf_test_9475__);
tcase_add_test(tc1_1, s21_sprintf_test_9476__);
tcase_add_test(tc1_1, s21_sprintf_test_9477__);
tcase_add_test(tc1_1, s21_sprintf_test_9478__);
tcase_add_test(tc1_1, s21_sprintf_test_9479__);
tcase_add_test(tc1_1, s21_sprintf_test_9480__);
tcase_add_test(tc1_1, s21_sprintf_test_9481__);
tcase_add_test(tc1_1, s21_sprintf_test_9482__);
tcase_add_test(tc1_1, s21_sprintf_test_9483__);
tcase_add_test(tc1_1, s21_sprintf_test_9484__);
tcase_add_test(tc1_1, s21_sprintf_test_9485__);
tcase_add_test(tc1_1, s21_sprintf_test_9486__);
tcase_add_test(tc1_1, s21_sprintf_test_9487__);
tcase_add_test(tc1_1, s21_sprintf_test_9488__);
tcase_add_test(tc1_1, s21_sprintf_test_9489__);
tcase_add_test(tc1_1, s21_sprintf_test_9490__);
tcase_add_test(tc1_1, s21_sprintf_test_9491__);
tcase_add_test(tc1_1, s21_sprintf_test_9492__);
tcase_add_test(tc1_1, s21_sprintf_test_9493__);
tcase_add_test(tc1_1, s21_sprintf_test_9494__);
tcase_add_test(tc1_1, s21_sprintf_test_9495__);
tcase_add_test(tc1_1, s21_sprintf_test_9496__);
tcase_add_test(tc1_1, s21_sprintf_test_9497__);
tcase_add_test(tc1_1, s21_sprintf_test_9498__);
tcase_add_test(tc1_1, s21_sprintf_test_9499__);
tcase_add_test(tc1_1, s21_sprintf_test_9500__);
tcase_add_test(tc1_1, s21_sprintf_test_9501__);
tcase_add_test(tc1_1, s21_sprintf_test_9502__);
tcase_add_test(tc1_1, s21_sprintf_test_9503__);
tcase_add_test(tc1_1, s21_sprintf_test_9504__);
tcase_add_test(tc1_1, s21_sprintf_test_9505__);
tcase_add_test(tc1_1, s21_sprintf_test_9506__);
tcase_add_test(tc1_1, s21_sprintf_test_9507__);
tcase_add_test(tc1_1, s21_sprintf_test_9508__);
tcase_add_test(tc1_1, s21_sprintf_test_9509__);
tcase_add_test(tc1_1, s21_sprintf_test_9510__);
tcase_add_test(tc1_1, s21_sprintf_test_9511__);
tcase_add_test(tc1_1, s21_sprintf_test_9512__);
tcase_add_test(tc1_1, s21_sprintf_test_9513__);
tcase_add_test(tc1_1, s21_sprintf_test_9514__);
tcase_add_test(tc1_1, s21_sprintf_test_9515__);
tcase_add_test(tc1_1, s21_sprintf_test_9516__);
tcase_add_test(tc1_1, s21_sprintf_test_9517__);
tcase_add_test(tc1_1, s21_sprintf_test_9518__);
tcase_add_test(tc1_1, s21_sprintf_test_9519__);
tcase_add_test(tc1_1, s21_sprintf_test_9520__);
tcase_add_test(tc1_1, s21_sprintf_test_9521__);
tcase_add_test(tc1_1, s21_sprintf_test_9522__);
tcase_add_test(tc1_1, s21_sprintf_test_9523__);
tcase_add_test(tc1_1, s21_sprintf_test_9524__);
tcase_add_test(tc1_1, s21_sprintf_test_9525__);
tcase_add_test(tc1_1, s21_sprintf_test_9526__);
tcase_add_test(tc1_1, s21_sprintf_test_9527__);
tcase_add_test(tc1_1, s21_sprintf_test_9528__);
tcase_add_test(tc1_1, s21_sprintf_test_9529__);
tcase_add_test(tc1_1, s21_sprintf_test_9530__);
tcase_add_test(tc1_1, s21_sprintf_test_9531__);
tcase_add_test(tc1_1, s21_sprintf_test_9532__);
tcase_add_test(tc1_1, s21_sprintf_test_9533__);
tcase_add_test(tc1_1, s21_sprintf_test_9534__);
tcase_add_test(tc1_1, s21_sprintf_test_9535__);
tcase_add_test(tc1_1, s21_sprintf_test_9536__);
tcase_add_test(tc1_1, s21_sprintf_test_9537__);
tcase_add_test(tc1_1, s21_sprintf_test_9538__);
tcase_add_test(tc1_1, s21_sprintf_test_9539__);
tcase_add_test(tc1_1, s21_sprintf_test_9540__);
tcase_add_test(tc1_1, s21_sprintf_test_9541__);
tcase_add_test(tc1_1, s21_sprintf_test_9542__);
tcase_add_test(tc1_1, s21_sprintf_test_9543__);
tcase_add_test(tc1_1, s21_sprintf_test_9544__);
tcase_add_test(tc1_1, s21_sprintf_test_9545__);
tcase_add_test(tc1_1, s21_sprintf_test_9546__);
tcase_add_test(tc1_1, s21_sprintf_test_9547__);
tcase_add_test(tc1_1, s21_sprintf_test_9548__);
tcase_add_test(tc1_1, s21_sprintf_test_9549__);
tcase_add_test(tc1_1, s21_sprintf_test_9550__);
tcase_add_test(tc1_1, s21_sprintf_test_9551__);
tcase_add_test(tc1_1, s21_sprintf_test_9552__);
tcase_add_test(tc1_1, s21_sprintf_test_9553__);
tcase_add_test(tc1_1, s21_sprintf_test_9554__);
tcase_add_test(tc1_1, s21_sprintf_test_9555__);
tcase_add_test(tc1_1, s21_sprintf_test_9556__);
tcase_add_test(tc1_1, s21_sprintf_test_9557__);
tcase_add_test(tc1_1, s21_sprintf_test_9558__);
tcase_add_test(tc1_1, s21_sprintf_test_9559__);
tcase_add_test(tc1_1, s21_sprintf_test_9560__);
tcase_add_test(tc1_1, s21_sprintf_test_9561__);
tcase_add_test(tc1_1, s21_sprintf_test_9562__);
tcase_add_test(tc1_1, s21_sprintf_test_9563__);
tcase_add_test(tc1_1, s21_sprintf_test_9564__);
tcase_add_test(tc1_1, s21_sprintf_test_9565__);
tcase_add_test(tc1_1, s21_sprintf_test_9566__);
tcase_add_test(tc1_1, s21_sprintf_test_9567__);
tcase_add_test(tc1_1, s21_sprintf_test_9568__);
tcase_add_test(tc1_1, s21_sprintf_test_9569__);
tcase_add_test(tc1_1, s21_sprintf_test_9570__);
tcase_add_test(tc1_1, s21_sprintf_test_9571__);
tcase_add_test(tc1_1, s21_sprintf_test_9572__);
tcase_add_test(tc1_1, s21_sprintf_test_9573__);
tcase_add_test(tc1_1, s21_sprintf_test_9574__);
tcase_add_test(tc1_1, s21_sprintf_test_9575__);
tcase_add_test(tc1_1, s21_sprintf_test_9576__);
tcase_add_test(tc1_1, s21_sprintf_test_9577__);
tcase_add_test(tc1_1, s21_sprintf_test_9578__);
tcase_add_test(tc1_1, s21_sprintf_test_9579__);
tcase_add_test(tc1_1, s21_sprintf_test_9580__);
tcase_add_test(tc1_1, s21_sprintf_test_9581__);
tcase_add_test(tc1_1, s21_sprintf_test_9582__);
tcase_add_test(tc1_1, s21_sprintf_test_9583__);
tcase_add_test(tc1_1, s21_sprintf_test_9584__);
tcase_add_test(tc1_1, s21_sprintf_test_9585__);
tcase_add_test(tc1_1, s21_sprintf_test_9586__);
tcase_add_test(tc1_1, s21_sprintf_test_9587__);
tcase_add_test(tc1_1, s21_sprintf_test_9588__);
tcase_add_test(tc1_1, s21_sprintf_test_9589__);
tcase_add_test(tc1_1, s21_sprintf_test_9590__);
tcase_add_test(tc1_1, s21_sprintf_test_9591__);
tcase_add_test(tc1_1, s21_sprintf_test_9592__);
tcase_add_test(tc1_1, s21_sprintf_test_9593__);
tcase_add_test(tc1_1, s21_sprintf_test_9594__);
tcase_add_test(tc1_1, s21_sprintf_test_9595__);
tcase_add_test(tc1_1, s21_sprintf_test_9596__);
tcase_add_test(tc1_1, s21_sprintf_test_9597__);
tcase_add_test(tc1_1, s21_sprintf_test_9598__);
tcase_add_test(tc1_1, s21_sprintf_test_9599__);
tcase_add_test(tc1_1, s21_sprintf_test_9600__);
tcase_add_test(tc1_1, s21_sprintf_test_9601__);
tcase_add_test(tc1_1, s21_sprintf_test_9602__);
tcase_add_test(tc1_1, s21_sprintf_test_9603__);
tcase_add_test(tc1_1, s21_sprintf_test_9604__);
tcase_add_test(tc1_1, s21_sprintf_test_9605__);
tcase_add_test(tc1_1, s21_sprintf_test_9606__);
tcase_add_test(tc1_1, s21_sprintf_test_9607__);
tcase_add_test(tc1_1, s21_sprintf_test_9608__);
tcase_add_test(tc1_1, s21_sprintf_test_9609__);
tcase_add_test(tc1_1, s21_sprintf_test_9610__);
tcase_add_test(tc1_1, s21_sprintf_test_9611__);
tcase_add_test(tc1_1, s21_sprintf_test_9612__);
tcase_add_test(tc1_1, s21_sprintf_test_9613__);
tcase_add_test(tc1_1, s21_sprintf_test_9614__);
tcase_add_test(tc1_1, s21_sprintf_test_9615__);
tcase_add_test(tc1_1, s21_sprintf_test_9616__);
tcase_add_test(tc1_1, s21_sprintf_test_9617__);
tcase_add_test(tc1_1, s21_sprintf_test_9618__);
tcase_add_test(tc1_1, s21_sprintf_test_9619__);
tcase_add_test(tc1_1, s21_sprintf_test_9620__);
tcase_add_test(tc1_1, s21_sprintf_test_9621__);
tcase_add_test(tc1_1, s21_sprintf_test_9622__);
tcase_add_test(tc1_1, s21_sprintf_test_9623__);
tcase_add_test(tc1_1, s21_sprintf_test_9624__);
tcase_add_test(tc1_1, s21_sprintf_test_9625__);
tcase_add_test(tc1_1, s21_sprintf_test_9626__);
tcase_add_test(tc1_1, s21_sprintf_test_9627__);
tcase_add_test(tc1_1, s21_sprintf_test_9628__);
tcase_add_test(tc1_1, s21_sprintf_test_9629__);
tcase_add_test(tc1_1, s21_sprintf_test_9630__);
tcase_add_test(tc1_1, s21_sprintf_test_9631__);
tcase_add_test(tc1_1, s21_sprintf_test_9632__);
tcase_add_test(tc1_1, s21_sprintf_test_9633__);
tcase_add_test(tc1_1, s21_sprintf_test_9634__);
tcase_add_test(tc1_1, s21_sprintf_test_9635__);
tcase_add_test(tc1_1, s21_sprintf_test_9636__);
tcase_add_test(tc1_1, s21_sprintf_test_9637__);
tcase_add_test(tc1_1, s21_sprintf_test_9638__);
tcase_add_test(tc1_1, s21_sprintf_test_9639__);
tcase_add_test(tc1_1, s21_sprintf_test_9640__);
tcase_add_test(tc1_1, s21_sprintf_test_9641__);
tcase_add_test(tc1_1, s21_sprintf_test_9642__);
tcase_add_test(tc1_1, s21_sprintf_test_9643__);
tcase_add_test(tc1_1, s21_sprintf_test_9644__);
tcase_add_test(tc1_1, s21_sprintf_test_9645__);
tcase_add_test(tc1_1, s21_sprintf_test_9646__);
tcase_add_test(tc1_1, s21_sprintf_test_9647__);
tcase_add_test(tc1_1, s21_sprintf_test_9648__);
tcase_add_test(tc1_1, s21_sprintf_test_9649__);
tcase_add_test(tc1_1, s21_sprintf_test_9650__);
tcase_add_test(tc1_1, s21_sprintf_test_9651__);
tcase_add_test(tc1_1, s21_sprintf_test_9652__);
tcase_add_test(tc1_1, s21_sprintf_test_9653__);
tcase_add_test(tc1_1, s21_sprintf_test_9654__);
tcase_add_test(tc1_1, s21_sprintf_test_9655__);
tcase_add_test(tc1_1, s21_sprintf_test_9656__);
tcase_add_test(tc1_1, s21_sprintf_test_9657__);
tcase_add_test(tc1_1, s21_sprintf_test_9658__);
tcase_add_test(tc1_1, s21_sprintf_test_9659__);
tcase_add_test(tc1_1, s21_sprintf_test_9660__);
tcase_add_test(tc1_1, s21_sprintf_test_9661__);
tcase_add_test(tc1_1, s21_sprintf_test_9662__);
tcase_add_test(tc1_1, s21_sprintf_test_9663__);
tcase_add_test(tc1_1, s21_sprintf_test_9664__);
tcase_add_test(tc1_1, s21_sprintf_test_9665__);
tcase_add_test(tc1_1, s21_sprintf_test_9666__);
tcase_add_test(tc1_1, s21_sprintf_test_9667__);
tcase_add_test(tc1_1, s21_sprintf_test_9668__);
tcase_add_test(tc1_1, s21_sprintf_test_9669__);
tcase_add_test(tc1_1, s21_sprintf_test_9670__);
tcase_add_test(tc1_1, s21_sprintf_test_9671__);
tcase_add_test(tc1_1, s21_sprintf_test_9672__);
tcase_add_test(tc1_1, s21_sprintf_test_9673__);
tcase_add_test(tc1_1, s21_sprintf_test_9674__);
tcase_add_test(tc1_1, s21_sprintf_test_9675__);
tcase_add_test(tc1_1, s21_sprintf_test_9676__);
tcase_add_test(tc1_1, s21_sprintf_test_9677__);
tcase_add_test(tc1_1, s21_sprintf_test_9678__);
tcase_add_test(tc1_1, s21_sprintf_test_9679__);
tcase_add_test(tc1_1, s21_sprintf_test_9680__);
tcase_add_test(tc1_1, s21_sprintf_test_9681__);
tcase_add_test(tc1_1, s21_sprintf_test_9682__);
tcase_add_test(tc1_1, s21_sprintf_test_9683__);
tcase_add_test(tc1_1, s21_sprintf_test_9684__);
tcase_add_test(tc1_1, s21_sprintf_test_9685__);
tcase_add_test(tc1_1, s21_sprintf_test_9686__);
tcase_add_test(tc1_1, s21_sprintf_test_9687__);
tcase_add_test(tc1_1, s21_sprintf_test_9688__);
tcase_add_test(tc1_1, s21_sprintf_test_9689__);
tcase_add_test(tc1_1, s21_sprintf_test_9690__);
tcase_add_test(tc1_1, s21_sprintf_test_9691__);
tcase_add_test(tc1_1, s21_sprintf_test_9692__);
tcase_add_test(tc1_1, s21_sprintf_test_9693__);
tcase_add_test(tc1_1, s21_sprintf_test_9694__);
tcase_add_test(tc1_1, s21_sprintf_test_9695__);
tcase_add_test(tc1_1, s21_sprintf_test_9696__);
tcase_add_test(tc1_1, s21_sprintf_test_9697__);
tcase_add_test(tc1_1, s21_sprintf_test_9698__);
tcase_add_test(tc1_1, s21_sprintf_test_9699__);
tcase_add_test(tc1_1, s21_sprintf_test_9700__);
tcase_add_test(tc1_1, s21_sprintf_test_9701__);
tcase_add_test(tc1_1, s21_sprintf_test_9702__);
tcase_add_test(tc1_1, s21_sprintf_test_9703__);
tcase_add_test(tc1_1, s21_sprintf_test_9704__);
tcase_add_test(tc1_1, s21_sprintf_test_9705__);
tcase_add_test(tc1_1, s21_sprintf_test_9706__);
tcase_add_test(tc1_1, s21_sprintf_test_9707__);
tcase_add_test(tc1_1, s21_sprintf_test_9708__);
tcase_add_test(tc1_1, s21_sprintf_test_9709__);
tcase_add_test(tc1_1, s21_sprintf_test_9710__);
tcase_add_test(tc1_1, s21_sprintf_test_9711__);
tcase_add_test(tc1_1, s21_sprintf_test_9712__);
tcase_add_test(tc1_1, s21_sprintf_test_9713__);
tcase_add_test(tc1_1, s21_sprintf_test_9714__);
tcase_add_test(tc1_1, s21_sprintf_test_9715__);
tcase_add_test(tc1_1, s21_sprintf_test_9716__);
tcase_add_test(tc1_1, s21_sprintf_test_9717__);
tcase_add_test(tc1_1, s21_sprintf_test_9718__);
tcase_add_test(tc1_1, s21_sprintf_test_9719__);
tcase_add_test(tc1_1, s21_sprintf_test_9720__);
tcase_add_test(tc1_1, s21_sprintf_test_9721__);
tcase_add_test(tc1_1, s21_sprintf_test_9722__);
tcase_add_test(tc1_1, s21_sprintf_test_9723__);
tcase_add_test(tc1_1, s21_sprintf_test_9724__);
tcase_add_test(tc1_1, s21_sprintf_test_9725__);
tcase_add_test(tc1_1, s21_sprintf_test_9726__);
tcase_add_test(tc1_1, s21_sprintf_test_9727__);
tcase_add_test(tc1_1, s21_sprintf_test_9728__);
tcase_add_test(tc1_1, s21_sprintf_test_9729__);
tcase_add_test(tc1_1, s21_sprintf_test_9730__);
tcase_add_test(tc1_1, s21_sprintf_test_9731__);
tcase_add_test(tc1_1, s21_sprintf_test_9732__);
tcase_add_test(tc1_1, s21_sprintf_test_9733__);
tcase_add_test(tc1_1, s21_sprintf_test_9734__);
tcase_add_test(tc1_1, s21_sprintf_test_9735__);
tcase_add_test(tc1_1, s21_sprintf_test_9736__);
tcase_add_test(tc1_1, s21_sprintf_test_9737__);
tcase_add_test(tc1_1, s21_sprintf_test_9738__);
tcase_add_test(tc1_1, s21_sprintf_test_9739__);
tcase_add_test(tc1_1, s21_sprintf_test_9740__);
tcase_add_test(tc1_1, s21_sprintf_test_9741__);
tcase_add_test(tc1_1, s21_sprintf_test_9742__);
tcase_add_test(tc1_1, s21_sprintf_test_9743__);
tcase_add_test(tc1_1, s21_sprintf_test_9744__);
tcase_add_test(tc1_1, s21_sprintf_test_9745__);
tcase_add_test(tc1_1, s21_sprintf_test_9746__);
tcase_add_test(tc1_1, s21_sprintf_test_9747__);
tcase_add_test(tc1_1, s21_sprintf_test_9748__);
tcase_add_test(tc1_1, s21_sprintf_test_9749__);
tcase_add_test(tc1_1, s21_sprintf_test_9750__);
tcase_add_test(tc1_1, s21_sprintf_test_9751__);
tcase_add_test(tc1_1, s21_sprintf_test_9752__);
tcase_add_test(tc1_1, s21_sprintf_test_9753__);
tcase_add_test(tc1_1, s21_sprintf_test_9754__);
tcase_add_test(tc1_1, s21_sprintf_test_9755__);
tcase_add_test(tc1_1, s21_sprintf_test_9756__);
tcase_add_test(tc1_1, s21_sprintf_test_9757__);
tcase_add_test(tc1_1, s21_sprintf_test_9758__);
tcase_add_test(tc1_1, s21_sprintf_test_9759__);
tcase_add_test(tc1_1, s21_sprintf_test_9760__);
tcase_add_test(tc1_1, s21_sprintf_test_9761__);
tcase_add_test(tc1_1, s21_sprintf_test_9762__);
tcase_add_test(tc1_1, s21_sprintf_test_9763__);
tcase_add_test(tc1_1, s21_sprintf_test_9764__);
tcase_add_test(tc1_1, s21_sprintf_test_9765__);
tcase_add_test(tc1_1, s21_sprintf_test_9766__);
tcase_add_test(tc1_1, s21_sprintf_test_9767__);
tcase_add_test(tc1_1, s21_sprintf_test_9768__);
tcase_add_test(tc1_1, s21_sprintf_test_9769__);
tcase_add_test(tc1_1, s21_sprintf_test_9770__);
tcase_add_test(tc1_1, s21_sprintf_test_9771__);
tcase_add_test(tc1_1, s21_sprintf_test_9772__);
tcase_add_test(tc1_1, s21_sprintf_test_9773__);
tcase_add_test(tc1_1, s21_sprintf_test_9774__);
tcase_add_test(tc1_1, s21_sprintf_test_9775__);
tcase_add_test(tc1_1, s21_sprintf_test_9776__);
tcase_add_test(tc1_1, s21_sprintf_test_9777__);
tcase_add_test(tc1_1, s21_sprintf_test_9778__);
tcase_add_test(tc1_1, s21_sprintf_test_9779__);
tcase_add_test(tc1_1, s21_sprintf_test_9780__);
tcase_add_test(tc1_1, s21_sprintf_test_9781__);
tcase_add_test(tc1_1, s21_sprintf_test_9782__);
tcase_add_test(tc1_1, s21_sprintf_test_9783__);
tcase_add_test(tc1_1, s21_sprintf_test_9784__);
tcase_add_test(tc1_1, s21_sprintf_test_9785__);
tcase_add_test(tc1_1, s21_sprintf_test_9786__);
tcase_add_test(tc1_1, s21_sprintf_test_9787__);
tcase_add_test(tc1_1, s21_sprintf_test_9788__);
tcase_add_test(tc1_1, s21_sprintf_test_9789__);
tcase_add_test(tc1_1, s21_sprintf_test_9790__);
tcase_add_test(tc1_1, s21_sprintf_test_9791__);
tcase_add_test(tc1_1, s21_sprintf_test_9792__);
tcase_add_test(tc1_1, s21_sprintf_test_9793__);
tcase_add_test(tc1_1, s21_sprintf_test_9794__);
tcase_add_test(tc1_1, s21_sprintf_test_9795__);
tcase_add_test(tc1_1, s21_sprintf_test_9796__);
tcase_add_test(tc1_1, s21_sprintf_test_9797__);
tcase_add_test(tc1_1, s21_sprintf_test_9798__);
tcase_add_test(tc1_1, s21_sprintf_test_9799__);
tcase_add_test(tc1_1, s21_sprintf_test_9800__);
tcase_add_test(tc1_1, s21_sprintf_test_9801__);
tcase_add_test(tc1_1, s21_sprintf_test_9802__);
tcase_add_test(tc1_1, s21_sprintf_test_9803__);
tcase_add_test(tc1_1, s21_sprintf_test_9804__);
tcase_add_test(tc1_1, s21_sprintf_test_9805__);
tcase_add_test(tc1_1, s21_sprintf_test_9806__);
tcase_add_test(tc1_1, s21_sprintf_test_9807__);
tcase_add_test(tc1_1, s21_sprintf_test_9808__);
tcase_add_test(tc1_1, s21_sprintf_test_9809__);
tcase_add_test(tc1_1, s21_sprintf_test_9810__);
tcase_add_test(tc1_1, s21_sprintf_test_9811__);
tcase_add_test(tc1_1, s21_sprintf_test_9812__);
tcase_add_test(tc1_1, s21_sprintf_test_9813__);
tcase_add_test(tc1_1, s21_sprintf_test_9814__);
tcase_add_test(tc1_1, s21_sprintf_test_9815__);
tcase_add_test(tc1_1, s21_sprintf_test_9816__);
tcase_add_test(tc1_1, s21_sprintf_test_9817__);
tcase_add_test(tc1_1, s21_sprintf_test_9818__);
tcase_add_test(tc1_1, s21_sprintf_test_9819__);
tcase_add_test(tc1_1, s21_sprintf_test_9820__);
tcase_add_test(tc1_1, s21_sprintf_test_9821__);
tcase_add_test(tc1_1, s21_sprintf_test_9822__);
tcase_add_test(tc1_1, s21_sprintf_test_9823__);
tcase_add_test(tc1_1, s21_sprintf_test_9824__);
tcase_add_test(tc1_1, s21_sprintf_test_9825__);
tcase_add_test(tc1_1, s21_sprintf_test_9826__);
tcase_add_test(tc1_1, s21_sprintf_test_9827__);
tcase_add_test(tc1_1, s21_sprintf_test_9828__);
tcase_add_test(tc1_1, s21_sprintf_test_9829__);
tcase_add_test(tc1_1, s21_sprintf_test_9830__);
tcase_add_test(tc1_1, s21_sprintf_test_9831__);
tcase_add_test(tc1_1, s21_sprintf_test_9832__);
tcase_add_test(tc1_1, s21_sprintf_test_9833__);
tcase_add_test(tc1_1, s21_sprintf_test_9834__);
tcase_add_test(tc1_1, s21_sprintf_test_9835__);
tcase_add_test(tc1_1, s21_sprintf_test_9836__);
tcase_add_test(tc1_1, s21_sprintf_test_9837__);
tcase_add_test(tc1_1, s21_sprintf_test_9838__);
tcase_add_test(tc1_1, s21_sprintf_test_9839__);
tcase_add_test(tc1_1, s21_sprintf_test_9840__);
tcase_add_test(tc1_1, s21_sprintf_test_9841__);
tcase_add_test(tc1_1, s21_sprintf_test_9842__);
tcase_add_test(tc1_1, s21_sprintf_test_9843__);
tcase_add_test(tc1_1, s21_sprintf_test_9844__);
tcase_add_test(tc1_1, s21_sprintf_test_9845__);
tcase_add_test(tc1_1, s21_sprintf_test_9846__);
tcase_add_test(tc1_1, s21_sprintf_test_9847__);
tcase_add_test(tc1_1, s21_sprintf_test_9848__);
tcase_add_test(tc1_1, s21_sprintf_test_9849__);
tcase_add_test(tc1_1, s21_sprintf_test_9850__);
tcase_add_test(tc1_1, s21_sprintf_test_9851__);
tcase_add_test(tc1_1, s21_sprintf_test_9852__);
tcase_add_test(tc1_1, s21_sprintf_test_9853__);
tcase_add_test(tc1_1, s21_sprintf_test_9854__);
tcase_add_test(tc1_1, s21_sprintf_test_9855__);
tcase_add_test(tc1_1, s21_sprintf_test_9856__);
tcase_add_test(tc1_1, s21_sprintf_test_9857__);
tcase_add_test(tc1_1, s21_sprintf_test_9858__);
tcase_add_test(tc1_1, s21_sprintf_test_9859__);
tcase_add_test(tc1_1, s21_sprintf_test_9860__);
tcase_add_test(tc1_1, s21_sprintf_test_9861__);
tcase_add_test(tc1_1, s21_sprintf_test_9862__);
tcase_add_test(tc1_1, s21_sprintf_test_9863__);
tcase_add_test(tc1_1, s21_sprintf_test_9864__);
tcase_add_test(tc1_1, s21_sprintf_test_9865__);
tcase_add_test(tc1_1, s21_sprintf_test_9866__);
tcase_add_test(tc1_1, s21_sprintf_test_9867__);
tcase_add_test(tc1_1, s21_sprintf_test_9868__);
tcase_add_test(tc1_1, s21_sprintf_test_9869__);
tcase_add_test(tc1_1, s21_sprintf_test_9870__);
tcase_add_test(tc1_1, s21_sprintf_test_9871__);
tcase_add_test(tc1_1, s21_sprintf_test_9872__);
tcase_add_test(tc1_1, s21_sprintf_test_9873__);
tcase_add_test(tc1_1, s21_sprintf_test_9874__);
tcase_add_test(tc1_1, s21_sprintf_test_9875__);
tcase_add_test(tc1_1, s21_sprintf_test_9876__);
tcase_add_test(tc1_1, s21_sprintf_test_9877__);
tcase_add_test(tc1_1, s21_sprintf_test_9878__);
tcase_add_test(tc1_1, s21_sprintf_test_9879__);
tcase_add_test(tc1_1, s21_sprintf_test_9880__);
tcase_add_test(tc1_1, s21_sprintf_test_9881__);
tcase_add_test(tc1_1, s21_sprintf_test_9882__);
tcase_add_test(tc1_1, s21_sprintf_test_9883__);
tcase_add_test(tc1_1, s21_sprintf_test_9884__);
tcase_add_test(tc1_1, s21_sprintf_test_9885__);
tcase_add_test(tc1_1, s21_sprintf_test_9886__);
tcase_add_test(tc1_1, s21_sprintf_test_9887__);
tcase_add_test(tc1_1, s21_sprintf_test_9888__);
tcase_add_test(tc1_1, s21_sprintf_test_9889__);
tcase_add_test(tc1_1, s21_sprintf_test_9890__);
tcase_add_test(tc1_1, s21_sprintf_test_9891__);
tcase_add_test(tc1_1, s21_sprintf_test_9892__);
tcase_add_test(tc1_1, s21_sprintf_test_9893__);
tcase_add_test(tc1_1, s21_sprintf_test_9894__);
tcase_add_test(tc1_1, s21_sprintf_test_9895__);
tcase_add_test(tc1_1, s21_sprintf_test_9896__);
tcase_add_test(tc1_1, s21_sprintf_test_9897__);
tcase_add_test(tc1_1, s21_sprintf_test_9898__);
tcase_add_test(tc1_1, s21_sprintf_test_9899__);
tcase_add_test(tc1_1, s21_sprintf_test_9900__);
tcase_add_test(tc1_1, s21_sprintf_test_9901__);
tcase_add_test(tc1_1, s21_sprintf_test_9902__);
tcase_add_test(tc1_1, s21_sprintf_test_9903__);
tcase_add_test(tc1_1, s21_sprintf_test_9904__);
tcase_add_test(tc1_1, s21_sprintf_test_9905__);
tcase_add_test(tc1_1, s21_sprintf_test_9906__);
tcase_add_test(tc1_1, s21_sprintf_test_9907__);
tcase_add_test(tc1_1, s21_sprintf_test_9908__);
tcase_add_test(tc1_1, s21_sprintf_test_9909__);
tcase_add_test(tc1_1, s21_sprintf_test_9910__);
tcase_add_test(tc1_1, s21_sprintf_test_9911__);
tcase_add_test(tc1_1, s21_sprintf_test_9912__);
tcase_add_test(tc1_1, s21_sprintf_test_9913__);
tcase_add_test(tc1_1, s21_sprintf_test_9914__);
tcase_add_test(tc1_1, s21_sprintf_test_9915__);
tcase_add_test(tc1_1, s21_sprintf_test_9916__);
tcase_add_test(tc1_1, s21_sprintf_test_9917__);
tcase_add_test(tc1_1, s21_sprintf_test_9918__);
tcase_add_test(tc1_1, s21_sprintf_test_9919__);
tcase_add_test(tc1_1, s21_sprintf_test_9920__);
tcase_add_test(tc1_1, s21_sprintf_test_9921__);
tcase_add_test(tc1_1, s21_sprintf_test_9922__);
tcase_add_test(tc1_1, s21_sprintf_test_9923__);
tcase_add_test(tc1_1, s21_sprintf_test_9924__);
tcase_add_test(tc1_1, s21_sprintf_test_9925__);
tcase_add_test(tc1_1, s21_sprintf_test_9926__);
tcase_add_test(tc1_1, s21_sprintf_test_9927__);
tcase_add_test(tc1_1, s21_sprintf_test_9928__);
tcase_add_test(tc1_1, s21_sprintf_test_9929__);
tcase_add_test(tc1_1, s21_sprintf_test_9930__);
tcase_add_test(tc1_1, s21_sprintf_test_9931__);
tcase_add_test(tc1_1, s21_sprintf_test_9932__);
tcase_add_test(tc1_1, s21_sprintf_test_9933__);
tcase_add_test(tc1_1, s21_sprintf_test_9934__);
tcase_add_test(tc1_1, s21_sprintf_test_9935__);
tcase_add_test(tc1_1, s21_sprintf_test_9936__);
tcase_add_test(tc1_1, s21_sprintf_test_9937__);
tcase_add_test(tc1_1, s21_sprintf_test_9938__);
tcase_add_test(tc1_1, s21_sprintf_test_9939__);
tcase_add_test(tc1_1, s21_sprintf_test_9940__);
tcase_add_test(tc1_1, s21_sprintf_test_9941__);
tcase_add_test(tc1_1, s21_sprintf_test_9942__);
tcase_add_test(tc1_1, s21_sprintf_test_9943__);
tcase_add_test(tc1_1, s21_sprintf_test_9944__);
tcase_add_test(tc1_1, s21_sprintf_test_9945__);
tcase_add_test(tc1_1, s21_sprintf_test_9946__);
tcase_add_test(tc1_1, s21_sprintf_test_9947__);
tcase_add_test(tc1_1, s21_sprintf_test_9948__);
tcase_add_test(tc1_1, s21_sprintf_test_9949__);
tcase_add_test(tc1_1, s21_sprintf_test_9950__);
tcase_add_test(tc1_1, s21_sprintf_test_9951__);
tcase_add_test(tc1_1, s21_sprintf_test_9952__);
tcase_add_test(tc1_1, s21_sprintf_test_9953__);
tcase_add_test(tc1_1, s21_sprintf_test_9954__);
tcase_add_test(tc1_1, s21_sprintf_test_9955__);
tcase_add_test(tc1_1, s21_sprintf_test_9956__);
tcase_add_test(tc1_1, s21_sprintf_test_9957__);
tcase_add_test(tc1_1, s21_sprintf_test_9958__);
tcase_add_test(tc1_1, s21_sprintf_test_9959__);
tcase_add_test(tc1_1, s21_sprintf_test_9960__);
tcase_add_test(tc1_1, s21_sprintf_test_9961__);
tcase_add_test(tc1_1, s21_sprintf_test_9962__);
tcase_add_test(tc1_1, s21_sprintf_test_9963__);
tcase_add_test(tc1_1, s21_sprintf_test_9964__);
tcase_add_test(tc1_1, s21_sprintf_test_9965__);
tcase_add_test(tc1_1, s21_sprintf_test_9966__);
tcase_add_test(tc1_1, s21_sprintf_test_9967__);
tcase_add_test(tc1_1, s21_sprintf_test_9968__);
tcase_add_test(tc1_1, s21_sprintf_test_9969__);
tcase_add_test(tc1_1, s21_sprintf_test_9970__);
tcase_add_test(tc1_1, s21_sprintf_test_9971__);
tcase_add_test(tc1_1, s21_sprintf_test_9972__);
tcase_add_test(tc1_1, s21_sprintf_test_9973__);
tcase_add_test(tc1_1, s21_sprintf_test_9974__);
tcase_add_test(tc1_1, s21_sprintf_test_9975__);
tcase_add_test(tc1_1, s21_sprintf_test_9976__);
tcase_add_test(tc1_1, s21_sprintf_test_9977__);
tcase_add_test(tc1_1, s21_sprintf_test_9978__);
tcase_add_test(tc1_1, s21_sprintf_test_9979__);
tcase_add_test(tc1_1, s21_sprintf_test_9980__);
tcase_add_test(tc1_1, s21_sprintf_test_9981__);
tcase_add_test(tc1_1, s21_sprintf_test_9982__);
tcase_add_test(tc1_1, s21_sprintf_test_9983__);
tcase_add_test(tc1_1, s21_sprintf_test_9984__);
tcase_add_test(tc1_1, s21_sprintf_test_9985__);
tcase_add_test(tc1_1, s21_sprintf_test_9986__);
tcase_add_test(tc1_1, s21_sprintf_test_9987__);
tcase_add_test(tc1_1, s21_sprintf_test_9988__);
tcase_add_test(tc1_1, s21_sprintf_test_9989__);
tcase_add_test(tc1_1, s21_sprintf_test_9990__);
tcase_add_test(tc1_1, s21_sprintf_test_9991__);
tcase_add_test(tc1_1, s21_sprintf_test_9992__);
tcase_add_test(tc1_1, s21_sprintf_test_9993__);
tcase_add_test(tc1_1, s21_sprintf_test_9994__);
tcase_add_test(tc1_1, s21_sprintf_test_9995__);
tcase_add_test(tc1_1, s21_sprintf_test_9996__);
tcase_add_test(tc1_1, s21_sprintf_test_9997__);
tcase_add_test(tc1_1, s21_sprintf_test_9998__);
tcase_add_test(tc1_1, s21_sprintf_test_9999__);
tcase_add_test(tc1_1, s21_sprintf_test_10000__);

   
    
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn19);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn20);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn21);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn22);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn23);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn24);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn25);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn26);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn27);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn28);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn30);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn31);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn32);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn33);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn34);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn35);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn37);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn38);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn39);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn40);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn41);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn42);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn43);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn44);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn45);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn46);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn47);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn48);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn49);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn50);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn51);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn52);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn53);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn54);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn55);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn56);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn57);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn58);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn59);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn60);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn61);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn62);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn63);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn64);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn65);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn66);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn67);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn68);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn69);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn70);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn71);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn72);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn73);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn74);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn88);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn89);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn90);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn91);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn92);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn93);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn94);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn95);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn96);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn97);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn98);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn99);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn100);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn101);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn102);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn103);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn104);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn105);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn106);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn107);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn108);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn109);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn110);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn111);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn112);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn113);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn114);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn115);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn116);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn155);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn156);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn157);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn158);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn159);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn160);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn161);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn162);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn163);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn164);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn165);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn166);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn167);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn168);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn169);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn170);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn171);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn172);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn173);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn174);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn175);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn176);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn177);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn183);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn184);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn185);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn186);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn187);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn188);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn189);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn190);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn191);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn192);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn193);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn194);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn195);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn196);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn197);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn198);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn199);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn200);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn201);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn202);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn203);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn204);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn205);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn206);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn207);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn208);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn209);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn210);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn211);
    tcase_add_test(tc1_1, SPRINTFTestdogletho1);
    tcase_add_test(tc1_1, SPRINTFTestdogletho2);
    tcase_add_test(tc1_1, SPRINTFTestdogletho6);
    tcase_add_test(tc1_1, SPRINTFTestdogletho52);
    tcase_add_test(tc1_1, SPRINTFTestdogletho53);
    tcase_add_test(tc1_1, SPRINTFTestdogletho54);
    tcase_add_test(tc1_1, SPRINTFTestdogletho55);
    tcase_add_test(tc1_1, SPRINTFTestdogletho56);
    tcase_add_test(tc1_1, SPRINTFTestdogletho68);
    tcase_add_test(tc1_1, SPRINTFTestdogletho69);
    tcase_add_test(tc1_1, SPRINTFTestdogletho127);
    tcase_add_test(tc1_1, SPRINTFTestdogletho128);
    tcase_add_test(tc1_1, SPRINTFTestdogletho129);
    tcase_add_test(tc1_1, SPRINTFTestdogletho130);
    tcase_add_test(tc1_1, SPRINTFTestdogletho131);
    tcase_add_test(tc1_1, SPRINTFTestdogletho187);
    tcase_add_test(tc1_1, SPRINTFTestdogletho190);
    tcase_add_test(tc1_1, SPRINTFTestdogletho197);
    tcase_add_test(tc1_1, SPRINTFTestdogletho198);
    tcase_add_test(tc1_1, SPRINTFTestdogletho218);
    tcase_add_test(tc1_1, SPRINTFTestdogletho219);
    tcase_add_test(tc1_1, SPRINTFTestdogletho220);
    tcase_add_test(tc1_1, SPRINTFTestdogletho221);
    tcase_add_test(tc1_1, SPRINTFTestdogletho232);
    tcase_add_test(tc1_1, SPRINTFTestdogletho233);
    tcase_add_test(tc1_1, SPRINTFTestdogletho234);
    tcase_add_test(tc1_1, SPRINTFTestdogletho235);
    tcase_add_test(tc1_1, SPRINTFTestdogletho236);
    tcase_add_test(tc1_1, SPRINTFTestdogletho237);
    tcase_add_test(tc1_1, SPRINTFTestdogletho239);
    tcase_add_test(tc1_1, SPRINTFTestdogletho259);
    tcase_add_test(tc1_1, SPRINTFTestdogletho261);
    tcase_add_test(tc1_1, SPRINTFTestdogletho282);
    tcase_add_test(tc1_1, SPRINTFTestdogletho283);
    tcase_add_test(tc1_1, SPRINTFTestRleonard1);
    tcase_add_test(tc1_1, SPRINTFTestRleonard3);
    tcase_add_test(tc1_1, SPRINTFTestRleonard6);
    tcase_add_test(tc1_1, SPRINTFTestRleonard7);
    tcase_add_test(tc1_1, SPRINTFTestRleonard9);
    tcase_add_test(tc1_1, SPRINTFTestRleonard12);
    tcase_add_test(tc1_1, SPRINTFTestRleonard13);
    tcase_add_test(tc1_1, SPRINTFTestRleonard14);

    // ###############################################################################################################################################


    tcase_add_test(tc1_1, s21_sprintf_test_percent);


    // ###############################################################################################################################################

    tcase_add_test(tc1_1, simple_int);
    tcase_add_test(tc1_1, precise_int);
    tcase_add_test(tc1_1, width_int);
    tcase_add_test(tc1_1, minus_width_int);
    tcase_add_test(tc1_1, plus_width_int);
    tcase_add_test(tc1_1, padding_int);
    tcase_add_test(tc1_1, flags_long_int);
    tcase_add_test(tc1_1, flags_short_int);
    tcase_add_test(tc1_1, zero_precision_zero_int);
    tcase_add_test(tc1_1, space_flag_int);
    tcase_add_test(tc1_1, unsigned_val);
    tcase_add_test(tc1_1, unsigned_val_width);
    tcase_add_test(tc1_1, unsigned_val_flags);
    tcase_add_test(tc1_1, unsigned_val_precision);
    tcase_add_test(tc1_1, unsigned_val_many_flags);
    tcase_add_test(tc1_1, unsigned_val_short);
    tcase_add_test(tc1_1, unsigned_val_long);
    tcase_add_test(tc1_1, unsigned_val_many);
    tcase_add_test(tc1_1, octal_short);
    tcase_add_test(tc1_1, unsigned_zero);
    tcase_add_test(tc1_1, one_char);
    tcase_add_test(tc1_1, one_precision);
    tcase_add_test(tc1_1, one_flags);
    tcase_add_test(tc1_1, one_width);
    tcase_add_test(tc1_1, one_many);
    tcase_add_test(tc1_1, one_many_flags);
    tcase_add_test(tc1_1, string);
    tcase_add_test(tc1_1, string_precision);
    tcase_add_test(tc1_1, string_width);
    tcase_add_test(tc1_1, string_flags);
    tcase_add_test(tc1_1, string_long);
    tcase_add_test(tc1_1, string_many);
    tcase_add_test(tc1_1, string_width_huge);
    tcase_add_test(tc1_1, float_flags);
    tcase_add_test(tc1_1, all_empty);
    tcase_add_test(tc1_1, empty_format_and_parameters);
    tcase_add_test(tc1_1, test_one_char);
    tcase_add_test(tc1_1, test_many_char);
    tcase_add_test(tc1_1, test_one_string);
    tcase_add_test(tc1_1, test_many_string);
    tcase_add_test(tc1_1, test_one_dec);
    tcase_add_test(tc1_1, test_many_dec);
    tcase_add_test(tc1_1, test_one_int);
    tcase_add_test(tc1_1, test_many_int);
    tcase_add_test(tc1_1, test_one_float);
    tcase_add_test(tc1_1, test_many_float);
    tcase_add_test(tc1_1, test_one_unsigned_dec);
    tcase_add_test(tc1_1, test_many_unsigned_dec);
    tcase_add_test(tc1_1, test_one_char_with_alignment_left);
    tcase_add_test(tc1_1, test_one_char_with_alignment_right);
    tcase_add_test(tc1_1, test_many_char_with_alignment);
    tcase_add_test(tc1_1, test_sprintf1);
    tcase_add_test(tc1_1, test_sprintf2);
    tcase_add_test(tc1_1, test_sprintf3);
    tcase_add_test(tc1_1, test_sprintf4);
    tcase_add_test(tc1_1, test_sprintf6);
    tcase_add_test(tc1_1, test_sprintf7);
    tcase_add_test(tc1_1, test_sprintf8);
    tcase_add_test(tc1_1, test_sprintf9);
    tcase_add_test(tc1_1, test_sprintf10);
    tcase_add_test(tc1_1, test_sprintf11);
    tcase_add_test(tc1_1, test_sprintf16);
    tcase_add_test(tc1_1, test_sprintf17);
    tcase_add_test(tc1_1, test_sprintf18);
    tcase_add_test(tc1_1, test_sprintf19);
    tcase_add_test(tc1_1, test_sprintf20);
    tcase_add_test(tc1_1, test_sprintf24);
    tcase_add_test(tc1_1, test_sprintf25);
    tcase_add_test(tc1_1, test_sprintf29);
    tcase_add_test(tc1_1, test_sprintf30);
    tcase_add_test(tc1_1, wide_char);
    tcase_add_test(tc1_1, width_char);
    tcase_add_test(tc1_1, minus_wide_char);
    tcase_add_test(tc1_1, wide_string);
    tcase_add_test(tc1_1, wide_string1);
    tcase_add_test(tc1_1, wide_string2);
    tcase_add_test(tc1_1, wide_string3);

    // ###############################################################################################################################################

    tcase_add_test(tc1_1, sprintf_pr_1);
    tcase_add_test(tc1_1, sprintf_pr_2);
    tcase_add_test(tc1_1, sprintf_c_1);
    tcase_add_test(tc1_1, sprintf_c_2);
    tcase_add_test(tc1_1, sprintf_c_3);
    tcase_add_test(tc1_1, sprintf_c_4);
    tcase_add_test(tc1_1, sprintf_c_5);
    tcase_add_test(tc1_1, sprintf_c_6);
    tcase_add_test(tc1_1, sprintf_c_7);
    tcase_add_test(tc1_1, sprintf_c_8);
    tcase_add_test(tc1_1, sprintf_c_9);
    tcase_add_test(tc1_1, sprintf_c_10);
    tcase_add_test(tc1_1, sprintf_d_1);
    tcase_add_test(tc1_1, sprintf_d_2);
    tcase_add_test(tc1_1, sprintf_d_3);
    tcase_add_test(tc1_1, sprintf_d_4);
    tcase_add_test(tc1_1, sprintf_d_5);
    tcase_add_test(tc1_1, sprintf_d_6);
    tcase_add_test(tc1_1, sprintf_d_7);
    tcase_add_test(tc1_1, sprintf_d_8);
    tcase_add_test(tc1_1, sprintf_d_9);
    tcase_add_test(tc1_1, sprintf_d_10);
    tcase_add_test(tc1_1, sprintf_d_11);
    tcase_add_test(tc1_1, sprintf_d_and_c_1);
    tcase_add_test(tc1_1, sprintf_1);
    tcase_add_test(tc1_1, sprintf_2);
    tcase_add_test(tc1_1, sprintf_3);
    tcase_add_test(tc1_1, sprintf_4);
    tcase_add_test(tc1_1, sprintf_5);
    tcase_add_test(tc1_1, sprintf_6);
    tcase_add_test(tc1_1, sprintf_7);
    tcase_add_test(tc1_1, sprintf_8);
    tcase_add_test(tc1_1, sprintf_9);
    tcase_add_test(tc1_1, sprintf_10);
    tcase_add_test(tc1_1, sprintf_11);
    tcase_add_test(tc1_1, sprintf_12);
    tcase_add_test(tc1_1, sprintf_13);
    tcase_add_test(tc1_1, sprintf_14);
    tcase_add_test(tc1_1, sprintf_15);
    tcase_add_test(tc1_1, sprintf_16);
    tcase_add_test(tc1_1, sprintf_17);
    tcase_add_test(tc1_1, sprintf_18);
    tcase_add_test(tc1_1, sprintf_19);
    tcase_add_test(tc1_1, sprintf_20);
    tcase_add_test(tc1_1, sprintf_21);
    tcase_add_test(tc1_1, sprintf_22);
    tcase_add_test(tc1_1, sprintf_23);
    tcase_add_test(tc1_1, sprintf_24);
    tcase_add_test(tc1_1, sprintf_25);
    tcase_add_test(tc1_1, sprintf_26);
    tcase_add_test(tc1_1, sprintf_27);
    tcase_add_test(tc1_1, sprintf_28);
    tcase_add_test(tc1_1, sprintf_29);
    tcase_add_test(tc1_1, sprintf_30);
    tcase_add_test(tc1_1, sprintf_31);
    tcase_add_test(tc1_1, sprintf_32);
    tcase_add_test(tc1_1, sprintf_33);
    tcase_add_test(tc1_1, sprintf_34);
    tcase_add_test(tc1_1, sprintf_35);
    tcase_add_test(tc1_1, sprintf_36);
    tcase_add_test(tc1_1, sprintf_37);
    tcase_add_test(tc1_1, sprintf_38);
    tcase_add_test(tc1_1, sprintf_39);
    tcase_add_test(tc1_1, sprintf_40);
    tcase_add_test(tc1_1, sprintf_41);
    tcase_add_test(tc1_1, sprintf_42);
    tcase_add_test(tc1_1, sprintf_43);
    tcase_add_test(tc1_1, sprintf_44);
    tcase_add_test(tc1_1, int_sprintf_pr_1);
    tcase_add_test(tc1_1, int_sprintf_pr_2);
    tcase_add_test(tc1_1, int_sprintf_c_1);
    tcase_add_test(tc1_1, int_sprintf_c_2);
    tcase_add_test(tc1_1, int_sprintf_c_3);
    tcase_add_test(tc1_1, int_sprintf_c_4);
    tcase_add_test(tc1_1, int_sprintf_c_5);
    tcase_add_test(tc1_1, int_sprintf_c_6);
    tcase_add_test(tc1_1, int_sprintf_c_7);
    tcase_add_test(tc1_1, int_sprintf_c_8);
    tcase_add_test(tc1_1, int_sprintf_c_9);
    tcase_add_test(tc1_1, int_sprintf_c_10);
    tcase_add_test(tc1_1, int_sprintf_d_1);
    tcase_add_test(tc1_1, int_sprintf_d_2);
    tcase_add_test(tc1_1, int_sprintf_d_3);
    tcase_add_test(tc1_1, int_sprintf_d_4);
    tcase_add_test(tc1_1, int_sprintf_d_5);
    tcase_add_test(tc1_1, int_sprintf_d_6);
    tcase_add_test(tc1_1, int_sprintf_d_7);
    tcase_add_test(tc1_1, int_sprintf_d_8);
    tcase_add_test(tc1_1, int_sprintf_d_9);
    tcase_add_test(tc1_1, int_sprintf_d_10);
    tcase_add_test(tc1_1, int_sprintf_d_11);
    tcase_add_test(tc1_1, int_sprintf_d_and_c_1);
    tcase_add_test(tc1_1, int_sprintf_1);
    tcase_add_test(tc1_1, int_sprintf_2);
    tcase_add_test(tc1_1, int_sprintf_3);
    tcase_add_test(tc1_1, int_sprintf_4);
    tcase_add_test(tc1_1, int_sprintf_5);
    tcase_add_test(tc1_1, int_sprintf_6);
    tcase_add_test(tc1_1, int_sprintf_7);
    tcase_add_test(tc1_1, int_sprintf_8);
    tcase_add_test(tc1_1, int_sprintf_9);
    tcase_add_test(tc1_1, int_sprintf_10);
    tcase_add_test(tc1_1, int_sprintf_11);
    tcase_add_test(tc1_1, int_sprintf_12);
    tcase_add_test(tc1_1, int_sprintf_13);
    tcase_add_test(tc1_1, int_sprintf_14);
    tcase_add_test(tc1_1, int_sprintf_15);
    tcase_add_test(tc1_1, int_sprintf_16);
    tcase_add_test(tc1_1, int_sprintf_17);
    tcase_add_test(tc1_1, int_sprintf_18);
    tcase_add_test(tc1_1, int_sprintf_19);
    tcase_add_test(tc1_1, int_sprintf_20);
    tcase_add_test(tc1_1, int_sprintf_21);
    tcase_add_test(tc1_1, int_sprintf_22);
    tcase_add_test(tc1_1, sprintf_221);
    tcase_add_test(tc1_1, sprintf_222);
    tcase_add_test(tc1_1, ssprintf_223);
    tcase_add_test(tc1_1, sprintf_224);
    tcase_add_test(tc1_1, sprintf_225);
    tcase_add_test(tc1_1, ssprintf_226);
    tcase_add_test(tc1_1, ssprintf_227);
    tcase_add_test(tc1_1, ssprintf_228);
    tcase_add_test(tc1_1, ssprintf_229);
    tcase_add_test(tc1_1, ssprintf_2210);
    tcase_add_test(tc1_1, ssprintf_2211);
    tcase_add_test(tc1_1, ssprintf_2212);
    tcase_add_test(tc1_1, ssprintf_2213);
    tcase_add_test(tc1_1, ssprintf_2214);
    tcase_add_test(tc1_1, sprintf_231);
    tcase_add_test(tc1_1, sprintf_232);
    tcase_add_test(tc1_1, sprintf_233);
    tcase_add_test(tc1_1, sprintf_234);
    tcase_add_test(tc1_1, sprintf_235);
    tcase_add_test(tc1_1, sprintf_236);
    tcase_add_test(tc1_1, sprintf_237);
    tcase_add_test(tc1_1, sprintf_238);
    tcase_add_test(tc1_1, sprintf_239);
    tcase_add_test(tc1_1, sprintf_2310);
    tcase_add_test(tc1_1, sprintf_2311);
    tcase_add_test(tc1_1, sprintf_2312);
    tcase_add_test(tc1_1, sprintf_2313);
    tcase_add_test(tc1_1, sprintf_2314);
    tcase_add_test(tc1_1, sprintf_2315);
    tcase_add_test(tc1_1, sprintf_2316);
    tcase_add_test(tc1_1, sprintf_2317);
    tcase_add_test(tc1_1, sprintf_2318);
    tcase_add_test(tc1_1, sprintf_2319);
    tcase_add_test(tc1_1, sprintf_2320);
    tcase_add_test(tc1_1, sprintf_2321);
    tcase_add_test(tc1_1, sprintf_2322);
    tcase_add_test(tc1_1, sprintf_2323);
    tcase_add_test(tc1_1, sprintf_2324);
    tcase_add_test(tc1_1, sprintf_2325);
    tcase_add_test(tc1_1, sprintf_2326);
    tcase_add_test(tc1_1, sprintf_2327);
    tcase_add_test(tc1_1, sprintf_2328);
    tcase_add_test(tc1_1, sprintf_2329);
    tcase_add_test(tc1_1, sprintf_2330);
    tcase_add_test(tc1_1, sprintf_2331);
    tcase_add_test(tc1_1, sprintf_2332);
    tcase_add_test(tc1_1, sprintf_2333);
    tcase_add_test(tc1_1, sprintf_2334);
    tcase_add_test(tc1_1, sprintf_2335);
    tcase_add_test(tc1_1, sprintf_2336);
    tcase_add_test(tc1_1, sprintf_2337);
    tcase_add_test(tc1_1, sprintf_2338);
    tcase_add_test(tc1_1, sprintf_2339);
    tcase_add_test(tc1_1, sprintf_2340);
    tcase_add_test(tc1_1, sprintf_2341);
    tcase_add_test(tc1_1, sprintf_2342);
    tcase_add_test(tc1_1, sprintf_2343);
    tcase_add_test(tc1_1, sprintf_2344);
    tcase_add_test(tc1_1, sprintf_2345);
    tcase_add_test(tc1_1, sprintf_2346);
    tcase_add_test(tc1_1, sprintf_2347);
    tcase_add_test(tc1_1, sprintf_2348);
    tcase_add_test(tc1_1, sprintf_2349);
    tcase_add_test(tc1_1, sprintf_2350);
    tcase_add_test(tc1_1, sprintf_2351);
    tcase_add_test(tc1_1, sprintf_2352);
    tcase_add_test(tc1_1, sprintf_2353);
    tcase_add_test(tc1_1, sprintf_2354);
    tcase_add_test(tc1_1, sprintf_2355);
    tcase_add_test(tc1_1, sprintf_2356);
    tcase_add_test(tc1_1, sprintf_2357);
    tcase_add_test(tc1_1, sprintf_2358);
    tcase_add_test(tc1_1, sprintf_2359);
    tcase_add_test(tc1_1, sprintf_2360);
    tcase_add_test(tc1_1, sprintf_2361);
    tcase_add_test(tc1_1, sprintf_2362);
    tcase_add_test(tc1_1, sprintf_2363);
    tcase_add_test(tc1_1, sprintf_2364);
    tcase_add_test(tc1_1, sprintf_2365);
    tcase_add_test(tc1_1, sprintf_2366);
    tcase_add_test(tc1_1, sprintf_2367);
    tcase_add_test(tc1_1, sprintf_2368);
    tcase_add_test(tc1_1, sprintf_2369);
    tcase_add_test(tc1_1, sprintf_2370);
    tcase_add_test(tc1_1, sprintf_2371);
    tcase_add_test(tc1_1, sprintf_2372);
    tcase_add_test(tc1_1, sprintf_2373);
    tcase_add_test(tc1_1, sprintf_2374);
    tcase_add_test(tc1_1, sprintf_2375);
    tcase_add_test(tc1_1, sprintf_2376);
    tcase_add_test(tc1_1, sprintf_2377);
    tcase_add_test(tc1_1, sprintf_2378);
    tcase_add_test(tc1_1, sprintf_2379);
    tcase_add_test(tc1_1, sprintf_2380);
    tcase_add_test(tc1_1, sprintf_2381);
    tcase_add_test(tc1_1, sprintf_2382);
    tcase_add_test(tc1_1, sprintf_2383);
    tcase_add_test(tc1_1, sprintf_2384);
    tcase_add_test(tc1_1, sprintf_2385);
    tcase_add_test(tc1_1, sprintf_2386);
    tcase_add_test(tc1_1, sprintf_2387);
    tcase_add_test(tc1_1, sprintf_2388);
    tcase_add_test(tc1_1, sprintf_2391);
    tcase_add_test(tc1_1, sprintf_2392);
    tcase_add_test(tc1_1, sprintf_2393);
    tcase_add_test(tc1_1, sprintf_2394);
    tcase_add_test(tc1_1, sprintf_2395);
    tcase_add_test(tc1_1, sprintf_2396);
    tcase_add_test(tc1_1, sprintf_2401);
    tcase_add_test(tc1_1, sprintf_2402);
    tcase_add_test(tc1_1, sprintf_2403);
    tcase_add_test(tc1_1, sprintf_2404);
    tcase_add_test(tc1_1, sprintf_2405);
    tcase_add_test(tc1_1, sprintf_070501);
    tcase_add_test(tc1_1, sprintf_070502);
    tcase_add_test(tc1_1, sprintf_070503);
    tcase_add_test(tc1_1, sprintf_070504);
    tcase_add_test(tc1_1, sprintf_070505);
    tcase_add_test(tc1_1, sprintf_070506);
    tcase_add_test(tc1_1, sprintf_070507);
    tcase_add_test(tc1_1, sprintf_070508);
    tcase_add_test(tc1_1, sprintf_070509);
    tcase_add_test(tc1_1, sprintf_070510);
    tcase_add_test(tc1_1, sprintf_070513);
    tcase_add_test(tc1_1, sprintf_2405x);
    tcase_add_test(tc1_1, sprintf_2406x);
    tcase_add_test(tc1_1, sprintf_2408);
    tcase_add_test(tc1_1, sprintf_2409);
    tcase_add_test(tc1_1, sprintf_2410);
    tcase_add_test(tc1_1, sprintf_2411);
    tcase_add_test(tc1_1, sprintf_2412);
    tcase_add_test(tc1_1, sprintf_2413);
    tcase_add_test(tc1_1, sprintf_2414);
    tcase_add_test(tc1_1, sprintf_2415);
    tcase_add_test(tc1_1, sprintf_2416);
    tcase_add_test(tc1_1, sprintf_2417);
    tcase_add_test(tc1_1, sprintf_2418);
    tcase_add_test(tc1_1, sprintf_2419);
    tcase_add_test(tc1_1, sprintf_2420);
    tcase_add_test(tc1_1, sprintf_2421);
    tcase_add_test(tc1_1, sprintf_2423);
    tcase_add_test(tc1_1, sprintf_2427);
    tcase_add_test(tc1_1, sprintf_2428);
    tcase_add_test(tc1_1, sprintf_2429);
    tcase_add_test(tc1_1, sprintf_2430);
    tcase_add_test(tc1_1, sprintf_2431);
    tcase_add_test(tc1_1, sprintf_2433);
    tcase_add_test(tc1_1, sprintf_2434);
    tcase_add_test(tc1_1, sprintf_2436);
    tcase_add_test(tc1_1, sprintf_2708);
    tcase_add_test(tc1_1, sprintf_2709);
    tcase_add_test(tc1_1, sprintf_2710);
    tcase_add_test(tc1_1, sprintf_2711);
    tcase_add_test(tc1_1, sprintf_2712);
    tcase_add_test(tc1_1, sprintf_2713);
    tcase_add_test(tc1_1, sprintf_2714);
    tcase_add_test(tc1_1, sprintf_2715);
    tcase_add_test(tc1_1, sprintf_2716);
    tcase_add_test(tc1_1, sprintf_2717);
    tcase_add_test(tc1_1, sprintf_2718);
    tcase_add_test(tc1_1, sprintf_2719);
    tcase_add_test(tc1_1, sprintf_2720);
    tcase_add_test(tc1_1, sprintf_2721);
    tcase_add_test(tc1_1, sprintf_2722);
    tcase_add_test(tc1_1, sprintf_2723);
    tcase_add_test(tc1_1, sprintf_2724);
    tcase_add_test(tc1_1, sprintf_2725);
    tcase_add_test(tc1_1, sprintf_2726);
    tcase_add_test(tc1_1, sprintf_2727);
    tcase_add_test(tc1_1, sprintf_2728);
    tcase_add_test(tc1_1, sprintf_2729);
    tcase_add_test(tc1_1, sprintf_2730);
    tcase_add_test(tc1_1, sprintf_2731);
    tcase_add_test(tc1_1, sprintf_2732);
    tcase_add_test(tc1_1, sprintf_2733);
    tcase_add_test(tc1_1, sprintf_2734);
    tcase_add_test(tc1_1, sprintf_2735);
    tcase_add_test(tc1_1, sprintf_2736);
    tcase_add_test(tc1_1, sprintf_2737);
    tcase_add_test(tc1_1, sprintf_2738);
    tcase_add_test(tc1_1, sprintf_2739);
    tcase_add_test(tc1_1, sprintf_2740);
    tcase_add_test(tc1_1, sprintf_2741);
    tcase_add_test(tc1_1, sprintf_2742);
    tcase_add_test(tc1_1, sprintf_2743);
    tcase_add_test(tc1_1, sprintf_2744);
    tcase_add_test(tc1_1, sprintf_2745);
    tcase_add_test(tc1_1, sprintf_2746);
    tcase_add_test(tc1_1, sprintf_2747);
    tcase_add_test(tc1_1, sprintf_2748);
    tcase_add_test(tc1_1, sprintf_2749);
    tcase_add_test(tc1_1, sprintf_2750);
    tcase_add_test(tc1_1, sprintf_2751);
    tcase_add_test(tc1_1, sprintf_2752);
    tcase_add_test(tc1_1, sprintf_2753);
    tcase_add_test(tc1_1, sprintf_2754);
    tcase_add_test(tc1_1, sprintf_2755);
    tcase_add_test(tc1_1, sprintf_2756);
    tcase_add_test(tc1_1, sprintf_2757);
    tcase_add_test(tc1_1, sprintf_2758);
    tcase_add_test(tc1_1, sprintf_2759);
    tcase_add_test(tc1_1, sprintf_2760);
    tcase_add_test(tc1_1, sprintf_2761);
    tcase_add_test(tc1_1, sprintf_2762);
    tcase_add_test(tc1_1, sprintf_2763);
    tcase_add_test(tc1_1, sprintf_2764);
    tcase_add_test(tc1_1, sprintf_2765);
    tcase_add_test(tc1_1, sprintf_2766);
    tcase_add_test(tc1_1, sprintf_2767);
    tcase_add_test(tc1_1, sprintf_2768);
    tcase_add_test(tc1_1, sprintf_2769);
    tcase_add_test(tc1_1, sprintf_2770);
    tcase_add_test(tc1_1, sprintf_2771);
    tcase_add_test(tc1_1, sprintf_2772);
    tcase_add_test(tc1_1, sprintf_2773);
    tcase_add_test(tc1_1, sprintf_2774);
    tcase_add_test(tc1_1, sprintf_2775);
    tcase_add_test(tc1_1, sprintf_2776);
    tcase_add_test(tc1_1, sprintf_2777);
    tcase_add_test(tc1_1, sprintf_2778);
    tcase_add_test(tc1_1, sprintf_2779);
    tcase_add_test(tc1_1, sprintf_2780);
    tcase_add_test(tc1_1, sprintf_2781);
    tcase_add_test(tc1_1, sprintf_2782);
    tcase_add_test(tc1_1, sprintf_2783);
    tcase_add_test(tc1_1, sprintf_2784);
    tcase_add_test(tc1_1, sprintf_2785);
    tcase_add_test(tc1_1, sprintf_2786);
    tcase_add_test(tc1_1, sprintf_2786_2);
    tcase_add_test(tc1_1, sprintf_2787);
    tcase_add_test(tc1_1, sprintf_2788);
    tcase_add_test(tc1_1, sprintf_2789);
    tcase_add_test(tc1_1, sprintf_2790);
    tcase_add_test(tc1_1, sprintf_2791);
    tcase_add_test(tc1_1, sprintf_2792);
    tcase_add_test(tc1_1, sprintf_2793);
    tcase_add_test(tc1_1, sprintf_2794);
    tcase_add_test(tc1_1, sprintf_2795);
    tcase_add_test(tc1_1, sprintf_2796);
    tcase_add_test(tc1_1, sprintf_2797);
    tcase_add_test(tc1_1, sprintf_2798);
    tcase_add_test(tc1_1, sprintf_2799);
    tcase_add_test(tc1_1, sprintf_2800);
    tcase_add_test(tc1_1, sprintf_2801);
    tcase_add_test(tc1_1, sprintf_2802);
    tcase_add_test(tc1_1, sprintf_2803);
    tcase_add_test(tc1_1, sprintf_2804);
    tcase_add_test(tc1_1, sprintf_2805);
    tcase_add_test(tc1_1, sprintf_2806);
    tcase_add_test(tc1_1, sprintf_2807);
    tcase_add_test(tc1_1, sprintf_2807_2);
    tcase_add_test(tc1_1, sprintf_2808);
    tcase_add_test(tc1_1, sprintf_2809);
    tcase_add_test(tc1_1, sprintf_2810);
    tcase_add_test(tc1_1, sprintf_2811);
    tcase_add_test(tc1_1, sprintf_2812);
    tcase_add_test(tc1_1, sprintf_2813);
    tcase_add_test(tc1_1, sprintf_2814);
    tcase_add_test(tc1_1, sprintf_2815);
    tcase_add_test(tc1_1, sprintf_2816);
    tcase_add_test(tc1_1, sprintf_2817);
    tcase_add_test(tc1_1, sprintf_2818);
    tcase_add_test(tc1_1, sprintf_2819);
    tcase_add_test(tc1_1, sprintf_2820);
    tcase_add_test(tc1_1, sprintf_2821);
    tcase_add_test(tc1_1, sprintf_2822);
    tcase_add_test(tc1_1, sprintf_2823);
    tcase_add_test(tc1_1, sprintf_2824);
    tcase_add_test(tc1_1, sprintf_2825);
    tcase_add_test(tc1_1, sprintf_2826);
    tcase_add_test(tc1_1, sprintf_2827);
    tcase_add_test(tc1_1, sprintf_2828);
    tcase_add_test(tc1_1, sprintf_2829);
    tcase_add_test(tc1_1, sprintf_2830);
    tcase_add_test(tc1_1, sprintf_2831);
    tcase_add_test(tc1_1, sprintf_2832);
    tcase_add_test(tc1_1, sprintf_2833);
    tcase_add_test(tc1_1, sprintf_2834);
    tcase_add_test(tc1_1, sprintf_2835);
    tcase_add_test(tc1_1, sprintf_2836);
    tcase_add_test(tc1_1, sprintf_2837);
    tcase_add_test(tc1_1, sprintf_2838);
    tcase_add_test(tc1_1, sprintf_2839);
    tcase_add_test(tc1_1, sprintf_2840);
    tcase_add_test(tc1_1, sprintf_2841);
    tcase_add_test(tc1_1, sprintf_2842);
    tcase_add_test(tc1_1, sprintf_2843);
    tcase_add_test(tc1_1, sprintf_2844);
    tcase_add_test(tc1_1, sprintf_2845);
    tcase_add_test(tc1_1, sprintf_2846);
    tcase_add_test(tc1_1, sprintf_2847);
    tcase_add_test(tc1_1, sprintf_2848);
    tcase_add_test(tc1_1, sprintf_2849);
    tcase_add_test(tc1_1, sprintf_2850);
    tcase_add_test(tc1_1, sprintf_2851);
    tcase_add_test(tc1_1, sprintf_2852);
    tcase_add_test(tc1_1, sprintf_2853);
    tcase_add_test(tc1_1, sprintf_2854);
    tcase_add_test(tc1_1, sprintf_2855);
    tcase_add_test(tc1_1, sprintf_2856);
    tcase_add_test(tc1_1, sprintf_2857);
    tcase_add_test(tc1_1, sprintf_2858);
    tcase_add_test(tc1_1, sprintf_2859);
    tcase_add_test(tc1_1, sprintf_2860);
    tcase_add_test(tc1_1, sprintf_2861);
    tcase_add_test(tc1_1, sprintf_2862);
    tcase_add_test(tc1_1, sprintf_2863);
    tcase_add_test(tc1_1, sprintf_2864);
    tcase_add_test(tc1_1, sprintf_2865);
    tcase_add_test(tc1_1, sprintf_2866);
    tcase_add_test(tc1_1, sprintf_2867);
    tcase_add_test(tc1_1, sprintf_2868);
    tcase_add_test(tc1_1, sprintf_2869);
    tcase_add_test(tc1_1, sprintf_2870);
    tcase_add_test(tc1_1, sprintf_2871);
    tcase_add_test(tc1_1, sprintf_2872);
    tcase_add_test(tc1_1, sprintf_2873);
    tcase_add_test(tc1_1, sprintf_2874);
    tcase_add_test(tc1_1, sprintf_2875);
    tcase_add_test(tc1_1, sprintf_2876);
    tcase_add_test(tc1_1, sprintf_2877);
    tcase_add_test(tc1_1, sprintf_2878);
    tcase_add_test(tc1_1, sprintf_2879);
    tcase_add_test(tc1_1, sprintf_2880);
    tcase_add_test(tc1_1, sprintf_2881);
    tcase_add_test(tc1_1, sprintf_2882);
    tcase_add_test(tc1_1, sprintf_2883);
    tcase_add_test(tc1_1, sprintf_2884);
    tcase_add_test(tc1_1, sprintf_2885);
    tcase_add_test(tc1_1, sprintf_2886);
    tcase_add_test(tc1_1, sprintf_2887);
    tcase_add_test(tc1_1, sprintf_2888);
    tcase_add_test(tc1_1, sprintf_2889);
    tcase_add_test(tc1_1, sprintf_2890);
    tcase_add_test(tc1_1, sprintf_2891);
    tcase_add_test(tc1_1, sprintf_2892);
    tcase_add_test(tc1_1, sprintf_2893);
    tcase_add_test(tc1_1, sprintf_2894);
    tcase_add_test(tc1_1, sprintf_2895);
    tcase_add_test(tc1_1, sprintf_2896);
    tcase_add_test(tc1_1, sprintf_2897);
    tcase_add_test(tc1_1, sprintf_2898);
    tcase_add_test(tc1_1, sprintf_2899);
    tcase_add_test(tc1_1, sprintf_2900);
    tcase_add_test(tc1_1, sprintf_2901);
    tcase_add_test(tc1_1, sprintf_2902);
    tcase_add_test(tc1_1, sprintf_2903);
    tcase_add_test(tc1_1, sprintf_2904);
    tcase_add_test(tc1_1, sprintf_2905);
    tcase_add_test(tc1_1, sprintf_2906);
    tcase_add_test(tc1_1, sprintf_3013);
    tcase_add_test(tc1_1, sprintf_3014);
    tcase_add_test(tc1_1, sprintf_3015);
    tcase_add_test(tc1_1, sprintf_3016);
    tcase_add_test(tc1_1, sprintf_3017);
    tcase_add_test(tc1_1, sprintf_3018);
    tcase_add_test(tc1_1, sprintf_3019);
    tcase_add_test(tc1_1, sprintf_3020);
    tcase_add_test(tc1_1, sprintf_3021);
    tcase_add_test(tc1_1, sprintf_3021_2);
    tcase_add_test(tc1_1, sprintf_3022);
    tcase_add_test(tc1_1, sprintf_3023);
    tcase_add_test(tc1_1, sprintf_3024);
    tcase_add_test(tc1_1, sprintf_3025);
    tcase_add_test(tc1_1, sprintf_3026);
    tcase_add_test(tc1_1, sprintf_3027);
    tcase_add_test(tc1_1, sprintf_3028);
    tcase_add_test(tc1_1, sprintf_3029);
    tcase_add_test(tc1_1, sprintf_3030);
    tcase_add_test(tc1_1, sprintf_3031);
    tcase_add_test(tc1_1, sprintf_3032);
    tcase_add_test(tc1_1, sprintf_3033);
    tcase_add_test(tc1_1, sprintf_3034);
    tcase_add_test(tc1_1, sprintf_3035);
    tcase_add_test(tc1_1, sprintf_3036);
    tcase_add_test(tc1_1, sprintf_3037);
    tcase_add_test(tc1_1, sprintf_3038);
    tcase_add_test(tc1_1, sprintf_3039);
    tcase_add_test(tc1_1, sprintf_3040);
    tcase_add_test(tc1_1, sprintf_3041);
    tcase_add_test(tc1_1, sprintf_3072);
    tcase_add_test(tc1_1, sprintf_3073);
    tcase_add_test(tc1_1, sprintf_3074);
    tcase_add_test(tc1_1, sprintf_3075);
    tcase_add_test(tc1_1, sprintf_3076);
    tcase_add_test(tc1_1, sprintf_3077);
    tcase_add_test(tc1_1, sprintf_3078);
    tcase_add_test(tc1_1, sprintf_3079);
    tcase_add_test(tc1_1, sprintf_3080);
    tcase_add_test(tc1_1, sprintf_3081);
    tcase_add_test(tc1_1, sprintf_3082);
    tcase_add_test(tc1_1, sprintf_3083);
    tcase_add_test(tc1_1, sprintf_3084);
    tcase_add_test(tc1_1, sprintf_3085);
    tcase_add_test(tc1_1, sprintf_3086);
    tcase_add_test(tc1_1, sprintf_3087);
    tcase_add_test(tc1_1, sprintf_3088);
    tcase_add_test(tc1_1, sprintf_3089);
    tcase_add_test(tc1_1, sprintf_3090);
    tcase_add_test(tc1_1, sprintf_3091);
    tcase_add_test(tc1_1, sprintf_3092);
    tcase_add_test(tc1_1, sprintf_3093);
    tcase_add_test(tc1_1, sprintf_3094);
    tcase_add_test(tc1_1, sprintf_3095);
    tcase_add_test(tc1_1, sprintf_3096);
    tcase_add_test(tc1_1, sprintf_3097);
    tcase_add_test(tc1_1, sprintf_3098);
    tcase_add_test(tc1_1, sprintf_3099);
    tcase_add_test(tc1_1, sprintf_3100);
    tcase_add_test(tc1_1, sprintf_3101);
    tcase_add_test(tc1_1, sprintf_3132);
    tcase_add_test(tc1_1, sprintf_3133);
    tcase_add_test(tc1_1, sprintf_3134);
    tcase_add_test(tc1_1, sprintf_3135);
    tcase_add_test(tc1_1, sprintf_3136);
    tcase_add_test(tc1_1, sprintf_3137);
    tcase_add_test(tc1_1, sprintf_3138);
    tcase_add_test(tc1_1, sprintf_3139);
    tcase_add_test(tc1_1, sprintf_3140);
    tcase_add_test(tc1_1, sprintf_3141);
    tcase_add_test(tc1_1, sprintf_3142);
    tcase_add_test(tc1_1, sprintf_3143);
    tcase_add_test(tc1_1, sprintf_3144);
    tcase_add_test(tc1_1, sprintf_3145);
    tcase_add_test(tc1_1, sprintf_3146);
    tcase_add_test(tc1_1, sprintf_3147);
    tcase_add_test(tc1_1, sprintf_3148);
    tcase_add_test(tc1_1, sprintf_3149);
    tcase_add_test(tc1_1, sprintf_3150);
    tcase_add_test(tc1_1, sprintf_3151);
    tcase_add_test(tc1_1, sprintf_3152);
    tcase_add_test(tc1_1, sprintf_3153);
    tcase_add_test(tc1_1, sprintf_3154);
    tcase_add_test(tc1_1, sprintf_3155);
    tcase_add_test(tc1_1, sprintf_3156);
    tcase_add_test(tc1_1, sprintf_3157);
    tcase_add_test(tc1_1, sprintf_3158);
    tcase_add_test(tc1_1, sprintf_3159);
    tcase_add_test(tc1_1, sprintf_3160);
    tcase_add_test(tc1_1, sprintf_3161);
    tcase_add_test(tc1_1, sprintf_3192);
    tcase_add_test(tc1_1, sprintf_3193);
    tcase_add_test(tc1_1, sprintf_3194);
    tcase_add_test(tc1_1, sprintf_3195);
    tcase_add_test(tc1_1, sprintf_3196);
    tcase_add_test(tc1_1, sprintf_3197);
    tcase_add_test(tc1_1, sprintf_3198);
    tcase_add_test(tc1_1, sprintf_3199);
    tcase_add_test(tc1_1, sprintf_3200);
    tcase_add_test(tc1_1, sprintf_3201);
    tcase_add_test(tc1_1, sprintf_3202);
    tcase_add_test(tc1_1, sprintf_3203);
    tcase_add_test(tc1_1, sprintf_3204);
    tcase_add_test(tc1_1, sprintf_3205);
    tcase_add_test(tc1_1, sprintf_3206);
    tcase_add_test(tc1_1, sprintf_3207);
    tcase_add_test(tc1_1, sprintf_3208);
    tcase_add_test(tc1_1, sprintf_3209);
    tcase_add_test(tc1_1, sprintf_3210);
    tcase_add_test(tc1_1, sprintf_3211);
    tcase_add_test(tc1_1, sprintf_3212);
    tcase_add_test(tc1_1, sprintf_3213);
    tcase_add_test(tc1_1, sprintf_3214);
    tcase_add_test(tc1_1, sprintf_3215);
    tcase_add_test(tc1_1, sprintf_3216);
    tcase_add_test(tc1_1, sprintf_3217);
    tcase_add_test(tc1_1, sprintf_3218);
    tcase_add_test(tc1_1, sprintf_3219);
    tcase_add_test(tc1_1, sprintf_3220);
    tcase_add_test(tc1_1, sprintf_3221);
    tcase_add_test(tc1_1, sprintf_3373);
    tcase_add_test(tc1_1, sprintf_3374);
    tcase_add_test(tc1_1, sprintf_3375);
    tcase_add_test(tc1_1, sprintf_3376);
    tcase_add_test(tc1_1, sprintf_3377);
    tcase_add_test(tc1_1, sprintf_3378);
    tcase_add_test(tc1_1, sprintf_3379);
    tcase_add_test(tc1_1, sprintf_3380);
    tcase_add_test(tc1_1, sprintf_3381);
    tcase_add_test(tc1_1, sprintf_3382);
    tcase_add_test(tc1_1, sprintf_3383);
    tcase_add_test(tc1_1, sprintf_3384);
    tcase_add_test(tc1_1, sprintf_3385);
    tcase_add_test(tc1_1, sprintf_3386);
    tcase_add_test(tc1_1, sprintf_3387);
    tcase_add_test(tc1_1, sprintf_3388);
    tcase_add_test(tc1_1, sprintf_3389);
    tcase_add_test(tc1_1, sprintf_3390);
    tcase_add_test(tc1_1, sprintf_3391);
    tcase_add_test(tc1_1, sprintf_3392);
    tcase_add_test(tc1_1, sprintf_3393);
    tcase_add_test(tc1_1, sprintf_3394);
    tcase_add_test(tc1_1, sprintf_3395);
    tcase_add_test(tc1_1, sprintf_3396);
    tcase_add_test(tc1_1, sprintf_3397);
    tcase_add_test(tc1_1, sprintf_3398);
    tcase_add_test(tc1_1, sprintf_3399);
    tcase_add_test(tc1_1, sprintf_3400);
    tcase_add_test(tc1_1, sprintf_3401);
    tcase_add_test(tc1_1, sprintf_3402);
    tcase_add_test(tc1_1, sprintf_3523);
    tcase_add_test(tc1_1, sprintf_3525);
    tcase_add_test(tc1_1, sprintf_3535);
    tcase_add_test(tc1_1, sprintf_3554);
    tcase_add_test(tc1_1, sprintf_3555);
    tcase_add_test(tc1_1, sprintf_2708_i);
    tcase_add_test(tc1_1, sprintf_2709_i);
    tcase_add_test(tc1_1, sprintf_2710_i);
    tcase_add_test(tc1_1, sprintf_2711i);
    tcase_add_test(tc1_1, sprintf_2712i);
    tcase_add_test(tc1_1, sprintf_2713i);
    tcase_add_test(tc1_1, sprintf_2714i);
    tcase_add_test(tc1_1, sprintf_2715i);
    tcase_add_test(tc1_1, sprintf_2716i);
    tcase_add_test(tc1_1, sprintf_2717i);
    tcase_add_test(tc1_1, sprintf_2718i);
    tcase_add_test(tc1_1, sprintf_2719i);
    tcase_add_test(tc1_1, sprintf_2720i);
    tcase_add_test(tc1_1, sprintf_2721i);
    tcase_add_test(tc1_1, sprintf_2722i);
    tcase_add_test(tc1_1, sprintf_2723i);
    tcase_add_test(tc1_1, sprintf_2724i);
    tcase_add_test(tc1_1, sprintf_2725i);
    tcase_add_test(tc1_1, sprintf_2726i);
    tcase_add_test(tc1_1, sprintf_2727i);
    tcase_add_test(tc1_1, sprintf_2728i);
    tcase_add_test(tc1_1, sprintf_2729i);
    tcase_add_test(tc1_1, sprintf_2730i);
    tcase_add_test(tc1_1, sprintf_2731i);
    tcase_add_test(tc1_1, sprintf_2732i);
    tcase_add_test(tc1_1, sprintf_2733i);
    tcase_add_test(tc1_1, sprintf_2734i);
    tcase_add_test(tc1_1, sprintf_2735i);
    tcase_add_test(tc1_1, sprintf_2736i);
    tcase_add_test(tc1_1, sprintf_2737i);
    tcase_add_test(tc1_1, sprintf_2738i);
    tcase_add_test(tc1_1, sprintf_2739i);
    tcase_add_test(tc1_1, sprintf_2740i);
    tcase_add_test(tc1_1, sprintf_2741i);
    tcase_add_test(tc1_1, sprintf_2742i);
    tcase_add_test(tc1_1, sprintf_2743i);
    tcase_add_test(tc1_1, sprintf_2744i);
    tcase_add_test(tc1_1, sprintf_2745i);
    tcase_add_test(tc1_1, sprintf_2746i);
    tcase_add_test(tc1_1, sprintf_2747i);
    tcase_add_test(tc1_1, sprintf_2748i);
    tcase_add_test(tc1_1, sprintf_2749i);
    tcase_add_test(tc1_1, sprintf_i_2750_i);
    tcase_add_test(tc1_1, sprintf_i_2751_i);
    tcase_add_test(tc1_1, sprintf_i_2752_i);
    tcase_add_test(tc1_1, sprintf_i_2753_i);
    tcase_add_test(tc1_1, sprintf_i_2754_i);
    tcase_add_test(tc1_1, sprintf_i_2755_i);
    tcase_add_test(tc1_1, sprintf_i_2756_i);
    tcase_add_test(tc1_1, sprintf_i_2757_i);
    tcase_add_test(tc1_1, sprintf_i_2758_i);
    tcase_add_test(tc1_1, sprintf_i_2759_i);
    tcase_add_test(tc1_1, sprintf_i_2760_i);
    tcase_add_test(tc1_1, sprintf_i_2761_i);
    tcase_add_test(tc1_1, sprintf_i_2762_i);
    tcase_add_test(tc1_1, sprintf_i_2763_i);
    tcase_add_test(tc1_1, sprintf_i_2764_i);
    tcase_add_test(tc1_1, sprintf_i_2765_i);
    tcase_add_test(tc1_1, sprintf_i_2766_i);
    tcase_add_test(tc1_1, sprintf_i_2767_i);
    tcase_add_test(tc1_1, sprintf_i_2768_i);
    tcase_add_test(tc1_1, sprintf_i_2769_i);
    tcase_add_test(tc1_1, sprintf_i_2770_i);
    tcase_add_test(tc1_1, sprintf_i_2771_i);
    tcase_add_test(tc1_1, sprintf_i_2772_i);
    tcase_add_test(tc1_1, sprintf_i_2773_i);
    tcase_add_test(tc1_1, sprintf_i_2774_i);
    tcase_add_test(tc1_1, sprintf_i_2775_i);
    tcase_add_test(tc1_1, sprintf_i_2776_i);
    tcase_add_test(tc1_1, sprintf_i_2777_i);
    tcase_add_test(tc1_1, sprintf_i_2778_i);
    tcase_add_test(tc1_1, sprintf_i_2779_i);
    tcase_add_test(tc1_1, sprintf_i_2780_i);
    tcase_add_test(tc1_1, sprintf_i_2781_i);
    tcase_add_test(tc1_1, sprintf_i_2782_i);
    tcase_add_test(tc1_1, sprintf_i_2783_i);
    tcase_add_test(tc1_1, sprintf_i_2784_i);
    tcase_add_test(tc1_1, sprintf_i_2785_i);
    tcase_add_test(tc1_1, sprintf_i_2786_i);
    tcase_add_test(tc1_1, sprintf_i_2786_2_i);
    tcase_add_test(tc1_1, sprintf_i_2787_i);
    tcase_add_test(tc1_1, sprintf_i_2788_i);
    tcase_add_test(tc1_1, sprintf_i_2789_i);
    tcase_add_test(tc1_1, sprintf_i_2790_i);
    tcase_add_test(tc1_1, sprintf_i_2791_i);
    tcase_add_test(tc1_1, sprintf_i_2792_i);
    tcase_add_test(tc1_1, sprintf_i_2793_i);
    tcase_add_test(tc1_1, sprintf_i_2794_i);
    tcase_add_test(tc1_1, sprintf_i_2795_i);
    tcase_add_test(tc1_1, sprintf_i_2796_i);
    tcase_add_test(tc1_1, sprintf_i_2800_i);
    tcase_add_test(tc1_1, sprintf_i_2802_i);
    tcase_add_test(tc1_1, sprintf_i_2803_i);
    tcase_add_test(tc1_1, sprintf_i_2804_i);
    tcase_add_test(tc1_1, sprintf_i_2805_i);
    tcase_add_test(tc1_1, sprintf_i_2806_i);
    tcase_add_test(tc1_1, sprintf_i_2807_i);
    tcase_add_test(tc1_1, sprintf_i_2807_2_i);
    tcase_add_test(tc1_1, sprintf_i_2808_i);
    tcase_add_test(tc1_1, sprintf_i_2809_i);
    tcase_add_test(tc1_1, sprintf_i_2810_i);
    tcase_add_test(tc1_1, sprintf_i_2811_i);
    tcase_add_test(tc1_1, sprintf_i_2812_i);
    tcase_add_test(tc1_1, sprintf_i_2813_i);
    tcase_add_test(tc1_1, sprintf_i_2814_i);
    tcase_add_test(tc1_1, sprintf_i_2815_i);
    tcase_add_test(tc1_1, sprintf_i_2816_i);
    tcase_add_test(tc1_1, sprintf_i_2817_i);
    tcase_add_test(tc1_1, sprintf_i_2818_i);
    tcase_add_test(tc1_1, sprintf_i_2819_i);
    tcase_add_test(tc1_1, sprintf_i_2820_i);
    tcase_add_test(tc1_1, sprintf_i_2821_i);
    tcase_add_test(tc1_1, sprintf_i_2822_i);
    tcase_add_test(tc1_1, sprintf_i_2823_i);
    tcase_add_test(tc1_1, sprintf_i_2824_i);
    tcase_add_test(tc1_1, sprintf_i_2825_i);
    tcase_add_test(tc1_1, sprintf_i_2826_i);
    tcase_add_test(tc1_1, sprintf_i_2827_i);
    tcase_add_test(tc1_1, sprintf_i_2828_i);
    tcase_add_test(tc1_1, sprintf_i_2829_i);
    tcase_add_test(tc1_1, sprintf_i_2830_i);
    tcase_add_test(tc1_1, sprintf_i_2831_i);
    tcase_add_test(tc1_1, sprintf_i_2832_i);
    tcase_add_test(tc1_1, sprintf_i_2833_i);
    tcase_add_test(tc1_1, sprintf_i_2834_i);
    tcase_add_test(tc1_1, sprintf_i_2835_i);
    tcase_add_test(tc1_1, sprintf_i_2836_i);
    tcase_add_test(tc1_1, sprintf_i_2837_i);
    tcase_add_test(tc1_1, sprintf_i_2838_i);
    tcase_add_test(tc1_1, sprintf_i_2839_i);
    tcase_add_test(tc1_1, sprintf_i_2840_i);
    tcase_add_test(tc1_1, sprintf_i_2841_i);
    tcase_add_test(tc1_1, sprintf_i_2842_i);
    tcase_add_test(tc1_1, sprintf_i_2843_i);
    tcase_add_test(tc1_1, sprintf_i_2844_i);
    tcase_add_test(tc1_1, sprintf_i_2845_i);
    tcase_add_test(tc1_1, sprintf_i_2846_i);
    tcase_add_test(tc1_1, sprintf_i_2847_i);
    tcase_add_test(tc1_1, sprintf_i_2848_i);
    tcase_add_test(tc1_1, sprintf_i_2849_i);
    tcase_add_test(tc1_1, sprintf_i_2850_i);
    tcase_add_test(tc1_1, sprintf_i_2851_i);
    tcase_add_test(tc1_1, sprintf_i_2852_i);
    tcase_add_test(tc1_1, sprintf_i_2853_i);
    tcase_add_test(tc1_1, sprintf_i_2854_i);
    tcase_add_test(tc1_1, sprintf_i_2855_i);
    tcase_add_test(tc1_1, sprintf_i_2856_i);
    tcase_add_test(tc1_1, sprintf_i_2857_i);
    tcase_add_test(tc1_1, sprintf_i_2858_i);
    tcase_add_test(tc1_1, sprintf_i_2859_i);
    tcase_add_test(tc1_1, sprintf_i_2860_i);
    tcase_add_test(tc1_1, sprintf_i_2861_i);
    tcase_add_test(tc1_1, sprintf_i_2862_i);
    tcase_add_test(tc1_1, sprintf_i_2863_i);
    tcase_add_test(tc1_1, sprintf_i_2864_i);
    tcase_add_test(tc1_1, sprintf_i_2865_i);
    tcase_add_test(tc1_1, sprintf_i_2866_i);
    tcase_add_test(tc1_1, sprintf_i_2867_i);
    tcase_add_test(tc1_1, sprintf_i_2868_i);
    tcase_add_test(tc1_1, sprintf_i_2869_i);
    tcase_add_test(tc1_1, sprintf_i_2870_i);
    tcase_add_test(tc1_1, sprintf_i_2871_i);
    tcase_add_test(tc1_1, sprintf_i_2872_i);
    tcase_add_test(tc1_1, sprintf_i_2873_i);
    tcase_add_test(tc1_1, sprintf_i_2874_i);
    tcase_add_test(tc1_1, sprintf_i_2875_i);
    tcase_add_test(tc1_1, sprintf_i_2876_i);
    tcase_add_test(tc1_1, sprintf_i_2877_i);
    tcase_add_test(tc1_1, sprintf_i_2878_i);
    tcase_add_test(tc1_1, sprintf_i_2879_i);
    tcase_add_test(tc1_1, sprintf_i_2880_i);
    tcase_add_test(tc1_1, sprintf_i_2881_i);
    tcase_add_test(tc1_1, sprintf_i_2882_i);
    tcase_add_test(tc1_1, sprintf_i_2883_i);
    tcase_add_test(tc1_1, sprintf_i_2884_i);
    tcase_add_test(tc1_1, sprintf_i_2885_i);
    tcase_add_test(tc1_1, sprintf_i_2886_i);
    tcase_add_test(tc1_1, sprintf_i_2887_i);
    tcase_add_test(tc1_1, sprintf_i_2888_i);
    tcase_add_test(tc1_1, sprintf_i_2889_i);
    tcase_add_test(tc1_1, sprintf_i_2890_i);
    tcase_add_test(tc1_1, sprintf_i_2891_i);
    tcase_add_test(tc1_1, sprintf_i_2892_i);
    tcase_add_test(tc1_1, sprintf_i_2893_i);
    tcase_add_test(tc1_1, sprintf_i_2894_i);
    tcase_add_test(tc1_1, sprintf_i_2895_i);
    tcase_add_test(tc1_1, sprintf_i_2896_i);
    tcase_add_test(tc1_1, sprintf_i_2897_i);
    tcase_add_test(tc1_1, sprintf_i_2898_i);
    tcase_add_test(tc1_1, sprintf_i_2899_i);
    tcase_add_test(tc1_1, sprintf_i_2900_i);
    tcase_add_test(tc1_1, sprintf_i_2904_i);
    tcase_add_test(tc1_1, sprintf_i_2905_i);
    tcase_add_test(tc1_1, sprintf_i_2906_i);
    tcase_add_test(tc1_1, sprintf_i_3013);
    tcase_add_test(tc1_1, sprintf_i_3014);
    tcase_add_test(tc1_1, sprintf_i_3015);
    tcase_add_test(tc1_1, sprintf_i_3016);
    tcase_add_test(tc1_1, sprintf_i_3017);
    tcase_add_test(tc1_1, sprintf_i_3018);
    tcase_add_test(tc1_1, sprintf_i_3019);
    tcase_add_test(tc1_1, sprintf_i_3020);
    tcase_add_test(tc1_1, sprintf_i_3021);
    tcase_add_test(tc1_1, sprintf_i_3021_2);
    tcase_add_test(tc1_1, sprintf_i_3022);
    tcase_add_test(tc1_1, sprintf_i_3023);
    tcase_add_test(tc1_1, sprintf_i_3024);
    tcase_add_test(tc1_1, sprintf_i_3025);
    tcase_add_test(tc1_1, sprintf_i_3026);
    tcase_add_test(tc1_1, sprintf_i_3027);
    tcase_add_test(tc1_1, sprintf_i_3028);
    tcase_add_test(tc1_1, sprintf_i_3029);
    tcase_add_test(tc1_1, sprintf_i_3030);
    tcase_add_test(tc1_1, sprintf_i_3031);
    tcase_add_test(tc1_1, sprintf_i_3032);
    tcase_add_test(tc1_1, sprintf_i_3033);
    tcase_add_test(tc1_1, sprintf_i_3034);
    tcase_add_test(tc1_1, sprintf_i_3035);
    tcase_add_test(tc1_1, sprintf_i_3036);
    tcase_add_test(tc1_1, sprintf_i_3037);
    tcase_add_test(tc1_1, sprintf_i_3038);
    tcase_add_test(tc1_1, sprintf_i_3039);
    tcase_add_test(tc1_1, sprintf_i_3040);
    tcase_add_test(tc1_1, sprintf_i_3041);
    tcase_add_test(tc1_1, sprintf_i_3072);
    tcase_add_test(tc1_1, sprintf_i_3073);
    tcase_add_test(tc1_1, sprintf_i_3074);
    tcase_add_test(tc1_1, sprintf_i_3075);
    tcase_add_test(tc1_1, sprintf_i_3076);
    tcase_add_test(tc1_1, sprintf_i_3077);
    tcase_add_test(tc1_1, sprintf_i_3078);
    tcase_add_test(tc1_1, sprintf_i_3079);
    tcase_add_test(tc1_1, sprintf_i_3080);
    tcase_add_test(tc1_1, sprintf_i_3081);
    tcase_add_test(tc1_1, sprintf_i_3082);
    tcase_add_test(tc1_1, sprintf_i_3083);
    tcase_add_test(tc1_1, sprintf_i_3084);
    tcase_add_test(tc1_1, sprintf_i_3085);
    tcase_add_test(tc1_1, sprintf_i_3086);
    tcase_add_test(tc1_1, sprintf_i_3087);
    tcase_add_test(tc1_1, sprintf_i_3088);
    tcase_add_test(tc1_1, sprintf_i_3089);
    tcase_add_test(tc1_1, sprintf_i_3090);
    tcase_add_test(tc1_1, sprintf_i_3091);
    tcase_add_test(tc1_1, sprintf_i_3092);
    tcase_add_test(tc1_1, sprintf_i_3093);
    tcase_add_test(tc1_1, sprintf_i_3094);
    tcase_add_test(tc1_1, sprintf_i_3095);
    tcase_add_test(tc1_1, sprintf_i_3096);
    tcase_add_test(tc1_1, sprintf_i_3097);
    tcase_add_test(tc1_1, sprintf_i_3098);
    tcase_add_test(tc1_1, sprintf_i_3099);
    tcase_add_test(tc1_1, sprintf_i_3100);
    tcase_add_test(tc1_1, sprintf_i_3101);
    tcase_add_test(tc1_1, sprintf_i_3132);
    tcase_add_test(tc1_1, sprintf_i_3133);
    tcase_add_test(tc1_1, sprintf_i_3134);
    tcase_add_test(tc1_1, sprintf_i_3135);
    tcase_add_test(tc1_1, sprintf_i_3136);
    tcase_add_test(tc1_1, sprintf_i_3137);
    tcase_add_test(tc1_1, sprintf_i_3138);
    tcase_add_test(tc1_1, sprintf_i_3139);
    tcase_add_test(tc1_1, sprintf_i_3140);
    tcase_add_test(tc1_1, sprintf_i_3141);
    tcase_add_test(tc1_1, sprintf_i_3142);
    tcase_add_test(tc1_1, sprintf_i_3143);
    tcase_add_test(tc1_1, sprintf_i_3144);
    tcase_add_test(tc1_1, sprintf_i_3145);
    tcase_add_test(tc1_1, sprintf_i_3146);
    tcase_add_test(tc1_1, sprintf_i_3147);
    tcase_add_test(tc1_1, sprintf_i_3148);
    tcase_add_test(tc1_1, sprintf_i_3149);
    tcase_add_test(tc1_1, sprintf_i_3150);
    tcase_add_test(tc1_1, sprintf_i_3151);
    tcase_add_test(tc1_1, sprintf_i_3152);
    tcase_add_test(tc1_1, sprintf_i_3153);
    tcase_add_test(tc1_1, sprintf_i_3154);
    tcase_add_test(tc1_1, sprintf_i_3155);
    tcase_add_test(tc1_1, sprintf_i_3156);
    tcase_add_test(tc1_1, sprintf_i_3157);
    tcase_add_test(tc1_1, sprintf_i_3158);
    tcase_add_test(tc1_1, sprintf_i_3159);
    tcase_add_test(tc1_1, sprintf_i_3160);
    tcase_add_test(tc1_1, sprintf_i_3161);
    tcase_add_test(tc1_1, sprintf_i_3192);
    tcase_add_test(tc1_1, sprintf_i_3193);
    tcase_add_test(tc1_1, sprintf_i_3194);
    tcase_add_test(tc1_1, sprintf_i_3195);
    tcase_add_test(tc1_1, sprintf_i_3196);
    tcase_add_test(tc1_1, sprintf_i_3197);
    tcase_add_test(tc1_1, sprintf_i_3198);
    tcase_add_test(tc1_1, sprintf_i_3199);
    tcase_add_test(tc1_1, sprintf_i_3200);
    tcase_add_test(tc1_1, sprintf_i_3201);
    tcase_add_test(tc1_1, sprintf_i_3202);
    tcase_add_test(tc1_1, sprintf_i_3203);
    tcase_add_test(tc1_1, sprintf_i_3204);
    tcase_add_test(tc1_1, sprintf_i_3205);
    tcase_add_test(tc1_1, sprintf_i_3206);
    tcase_add_test(tc1_1, sprintf_i_3207);
    tcase_add_test(tc1_1, sprintf_i_3208);
    tcase_add_test(tc1_1, sprintf_i_3209);
    tcase_add_test(tc1_1, sprintf_i_3210);
    tcase_add_test(tc1_1, sprintf_i_3211);
    tcase_add_test(tc1_1, sprintf_i_3212);
    tcase_add_test(tc1_1, sprintf_i_3213);
    tcase_add_test(tc1_1, sprintf_i_3214);
    tcase_add_test(tc1_1, sprintf_i_3215);
    tcase_add_test(tc1_1, sprintf_i_3216);
    tcase_add_test(tc1_1, sprintf_i_3217);
    tcase_add_test(tc1_1, sprintf_i_3218);
    tcase_add_test(tc1_1, sprintf_i_3219);
    tcase_add_test(tc1_1, sprintf_i_3220);
    tcase_add_test(tc1_1, sprintf_i_3221);
    tcase_add_test(tc1_1, sprintf_i_4001);
    tcase_add_test(tc1_1, sprintf_i_4002);
    tcase_add_test(tc1_1, sprintf_i_4004);
    tcase_add_test(tc1_1, sprintf_i_4005);
    tcase_add_test(tc1_1, sprintf_i_4006);
    tcase_add_test(tc1_1, sprintf_i_4007);
    tcase_add_test(tc1_1, sprintf_i_4008);
    tcase_add_test(tc1_1, sprintf_i_4009);
    tcase_add_test(tc1_1, sprintf_i_4010);
    tcase_add_test(tc1_1, sprintf_i_4011);
    tcase_add_test(tc1_1, sprintf_i_4012);
    tcase_add_test(tc1_1, sprintf_i_4013);
    tcase_add_test(tc1_1, sprintf_i_4014);
    tcase_add_test(tc1_1, sprintf_i_4015);
    tcase_add_test(tc1_1, sprintf_i_4016);
    tcase_add_test(tc1_1, sprintf_i_4017);
    tcase_add_test(tc1_1, sprintf_i_4018);
    tcase_add_test(tc1_1, sprintf_i_4019);
    tcase_add_test(tc1_1, sprintf_i_4020);
    tcase_add_test(tc1_1, sprintf_i_4021);
    tcase_add_test(tc1_1, sprintf_i_4022);
    tcase_add_test(tc1_1, sprintf_i_4023);
    tcase_add_test(tc1_1, sprintf_i_4024);
    tcase_add_test(tc1_1, sprintf_i_4025);
    tcase_add_test(tc1_1, sprintf_i_4026);
    tcase_add_test(tc1_1, sprintf_i_4027);
    tcase_add_test(tc1_1, sprintf_i_4028);
    tcase_add_test(tc1_1, sprintf_i_4029);
    tcase_add_test(tc1_1, sprintf_i_4030);
    tcase_add_test(tc1_1, sprintf_i_4031);
    tcase_add_test(tc1_1, sprintf_i_4032);
    tcase_add_test(tc1_1, sprintf_i_4033);
    tcase_add_test(tc1_1, sprintf_i_4034);
    tcase_add_test(tc1_1, sprintf_i_4035);
    tcase_add_test(tc1_1, sprintf_i_4036);
    tcase_add_test(tc1_1, sprintf_i_4037);
    tcase_add_test(tc1_1, sprintf_i_4038);
    tcase_add_test(tc1_1, sprintf_i_4039);
    tcase_add_test(tc1_1, sprintf_i_4040);
    tcase_add_test(tc1_1, sprintf_i_4041);
    tcase_add_test(tc1_1, sprintf_i_4042);
    tcase_add_test(tc1_1, sprintf_i_4043);
    tcase_add_test(tc1_1, sprintf_i_4044);
    tcase_add_test(tc1_1, sprintf_i_4045);

// ###############################################################################################################################################

    tcase_add_test(tc1_1, s21_sprintf_test_1);
    // tcase_add_test(tc1_1, s21_sprintf_test_2);
    // tcase_add_test(tc1_1, s21_sprintf_test_3);
    // tcase_add_test(tc1_1, s21_sprintf_test_4);
    // tcase_add_test(tc1_1, s21_sprintf_test_5);
    tcase_add_test(tc1_1, s21_sprintf_test_6);
    // tcase_add_test(tc1_1, s21_sprintf_test_7);
    // tcase_add_test(tc1_1, s21_sprintf_test_8);
    // tcase_add_test(tc1_1, s21_sprintf_test_9);
    // tcase_add_test(tc1_1, s21_sprintf_test_10);
    tcase_add_test(tc1_1, s21_sprintf_test_11);
    tcase_add_test(tc1_1, s21_sprintf_test_12);
    tcase_add_test(tc1_1, s21_sprintf_test_13);
    tcase_add_test(tc1_1, s21_sprintf_test_14);
    // tcase_add_test(tc1_1, s21_sprintf_test_15);
    tcase_add_test(tc1_1, s21_sprintf_test_16);
    tcase_add_test(tc1_1, s21_sprintf_test_17);
    tcase_add_test(tc1_1, s21_sprintf_test_18);
    tcase_add_test(tc1_1, s21_sprintf_test_19);

// ###############################################################################################################################################

    tcase_add_test(tc1_1, s21_sprintf_test);
    tcase_add_test(tc1_1, s21_sprintf_test1);
    tcase_add_test(tc1_1, s21_sprintf_test2);
    tcase_add_test(tc1_1, s21_sprintf_test3);
    tcase_add_test(tc1_1, s21_sprintf_test4);
    tcase_add_test(tc1_1, s21_sprintf_test_d);
    tcase_add_test(tc1_1, s21_sprintf_test_i);
    tcase_add_test(tc1_1, s21_sprintf_test_c);
    // tcase_add_test(tc1_1, s21_sprintf_test_e);
    // tcase_add_test(tc1_1, s21_sprintf_test_E);
    // tcase_add_test(tc1_1, s21_sprintf_test_f);
    // tcase_add_test(tc1_1, s21_sprintf_test_o);
    // tcase_add_test(tc1_1, s21_sprintf_test_x);
    // tcase_add_test(tc1_1, s21_sprintf_test_X);
    tcase_add_test(tc1_1, s21_sprintf_test_u);
    tcase_add_test(tc1_1, s21_sprintf_test_s);
    // tcase_add_test(tc1_1, s21_sprintf_test_p);
    tcase_add_test(tc1_1, s21_sprintf_test_percent1);
    // tcase_add_test(tc1_1, s21_sprintf_test_g);
    // tcase_add_test(tc1_1, s21_sprintf_test_G);
    tcase_add_test(tc1_1, printf_cTest);
    tcase_add_test(tc1_1, printf_dTest);
    tcase_add_test(tc1_1, printf_iTest);
    tcase_add_test(tc1_1, printf_fTest);
    tcase_add_test(tc1_1, printf_sTest);
    tcase_add_test(tc1_1, printf_uTest);

    // ###############################################################################################################################################


    tcase_add_test(tc1_1, SPRINTF_FLOAT);
    tcase_add_test(tc1_1, SPRINTF_FLOAT_PREC);
    tcase_add_test(tc1_1, SPRINTF_FLOAT_H);
    tcase_add_test(tc1_1, SPRINTF_FLOAT_H_PREC);
    tcase_add_test(tc1_1, SPRINTF_FLOAT_MINUS);
    tcase_add_test(tc1_1, SPRINTF_FLOAT_MINUS_DIGIT);
    tcase_add_test(tc1_1, SPRINTF_FLOAT_SPACE);
    tcase_add_test(tc1_1, SPRINTF_FLOAT_PLUS_H);
    tcase_add_test(tc1_1, SPRINTF_FLOAT_LONG);

    tcase_add_test(tc1_1, SPRINTF_DECIMAL);
    tcase_add_test(tc1_1, SPRINTF_DECIMAL_PREC);
    tcase_add_test(tc1_1, SPRINTF_DECIMAL_L);
    tcase_add_test(tc1_1, SPRINTF_DECIMAL_H);
    tcase_add_test(tc1_1, SPRINTF_DECIMAL_MINUS_DIGIT);
    tcase_add_test(tc1_1, SPRINTF_DECIMAL_PLUS_DIGIT);
    tcase_add_test(tc1_1, SPRINTF_DECIMAL_MINUS_H);
    tcase_add_test(tc1_1, SPRINTF_DECIMAL_SPACE);

    tcase_add_test(tc1_1, SPRINTF_UNSIGNED);
    tcase_add_test(tc1_1, SPRINTF_UNSIGNED_MINUS_DIGIT);
    tcase_add_test(tc1_1, SPRINTF_UNSIGNED_LONG);
    tcase_add_test(tc1_1, SPRINTF_UNSIGNED_SHORT);
    tcase_add_test(tc1_1, SPRINTF_UNSIGNED_MINUS_H);
    tcase_add_test(tc1_1, SPRINTF_UNSIGNED_H);
    tcase_add_test(tc1_1, SPRINTF_UNSIGNED_SPACE);

    tcase_add_test(tc1_1, SPRINTF_CHAR);
    tcase_add_test(tc1_1, SPRINTF_CHAR_DIGIT);
    tcase_add_test(tc1_1, SPRINTF_CHAR_H);
    tcase_add_test(tc1_1, SPRINTF_CHAR_MINUS_H);
    tcase_add_test(tc1_1, SPRINTF_CHAR_SPACE);

    tcase_add_test(tc1_1, SPRINTF_STRING);
    tcase_add_test(tc1_1, SPRINTF_STRING_SYMBOLS);
    tcase_add_test(tc1_1, SPRINTF_STRING_MINUS_H);
    tcase_add_test(tc1_1, SPRINTF_STRING_H);
    tcase_add_test(tc1_1, SPRINTF_STRING_SPACE);

    tcase_add_test(tc1_1, SPRINTF_I_DEC);
    tcase_add_test(tc1_1, SPRINTF_I_OCTAL);
    tcase_add_test(tc1_1, SPRINTF_I_HEX);
    tcase_add_test(tc1_1, SPRINTF_I_H);
    tcase_add_test(tc1_1, SPRINTF_I_MINUS_H);
    tcase_add_test(tc1_1, SPRINTF_I_PLUS);
    tcase_add_test(tc1_1, SPRINTF_I_PLUS_H);
    tcase_add_test(tc1_1, SPRINTF_I_SPACE);

    // ###############################################################################################################################################

    tcase_add_test(tc1_1, s21_sprintf_d);
    tcase_add_test(tc1_1, s21_sprintf_u);
    tcase_add_test(tc1_1, s21_sprintf_cs);
    tcase_add_test(tc1_1, s21_sprintf_f);
    // tcase_add_test(tc1_1, s21_sprintf_eE);
    // tcase_add_test(tc1_1, s21_sprintf_xX);
    // tcase_add_test(tc1_1, s21_sprintf_o);
    tcase_add_test(tc1_1, s21_sprintf_i);
    // tcase_add_test(tc1_1, s21_sprintf_p);
    // tcase_add_test(tc1_1, s21_sprintf_n);
    tcase_add_test(tc1_1, s21_sprintf_s);
	tcase_add_test(tc1_1, s21_sprintf_h);
	tcase_add_test(tc1_1, s21_sprintf_l);
	// tcase_add_test(tc1_1, s21_sprintf_L);
	// tcase_add_test(tc1_1, s21_sprintf_gG);
	tcase_add_test(tc1_1, s21_sprintf_star);
    tcase_add_test(tc1_1, s21_sprintf_empty);
    tcase_add_test(tc1_1, s21_sprintf_diu_whith_str);
    tcase_add_test(tc1_1, s21_sprintf_f_with_str);


    // ###############################################################################################################################################



    suite_add_tcase(s25, tc1_1);
    return s25;
}