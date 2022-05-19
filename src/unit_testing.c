#include "s21_string.h"
#include <check.h>

START_TEST(test_memchr) {
    #define test_memchr1             "ABCCDEFG", 'D', 8
    #define test_memchr2             "ABCCDEFG", 'C', 8
    #define test_memchr3             "ABCCDEFG", 'E', 8
    #define test_memchr4             "ABCCDEFG", 'R', 8
    #define test_memchr5             "ABCCDEFG",   0, 8

    #define test_memchr6             "ABCCDEFG", 'D', 4
    #define test_memchr7             "ABCCDEFG", 'C', 4
    #define test_memchr8             "ABCCDEFG", 'E', 4
    #define test_memchr9             "ABCCDEFG", 'R', 4
    #define test_memchr10            "ABCCDEFG",   0, 4

    #define test_memchr11            "ABCCDEFG", 'D', 2
    #define test_memchr12            "ABCCDEFG", 'C', 2
    #define test_memchr13            "ABCCDEFG", 'E', 2
    #define test_memchr14            "ABCCDEFG", 'R', 2
    #define test_memchr15            "ABCCDEFG",   0, 2
    
    #define test_memchr16            "ABCCDEFG", 'D', 20
    #define test_memchr17            "ABCCDEFG", 'C', 20
    #define test_memchr18            "ABCCDEFG", 'E', 20
    #define test_memchr19            "ABCCDEFG", 'R', 20
    #define test_memchr20            "ABCCDEFG",   0, 20

    #define test_memchr21 "ABCCDEFG fjehiedjhf", 'f', 15
    #define test_memchr22 "ABCCDEFG fjehiedjhf", 'e', 15
    #define test_memchr23 "ABCCDEFG fjehiedjhf", 'E', 15
    #define test_memchr24 "ABCCDEFG fjehiedjhf", 'R', 15
    #define test_memchr25 "ABCCDEFG fjehiedjhf",   0, 15

    #define test_memchr26 "ABCCDEFG fjehiedjhf", 'f', 8
    #define test_memchr27 "ABCCDEFG fjehiedjhf", 'e', 8
    #define test_memchr28 "ABCCDEFG fjehiedjhf", 'E', 8
    #define test_memchr29 "ABCCDEFG fjehiedjhf", 'R', 8
    #define test_memchr30 "ABCCDEFG fjehiedjhf",   0, 8
    
    #define test_memchr31 "ABCCDEFG fjehiedjhf", 'f', 50
    #define test_memchr32 "ABCCDEFG fjehiedjhf", 'e', 50
    #define test_memchr33 "ABCCDEFG fjehiedjhf", 'E', 50
    #define test_memchr34 "ABCCDEFG fjehiedjhf", 'R', 50
    #define test_memchr35 "ABCCDEFG fjehiedjhf",   0, 50

    #define test_memchr36                    "", 'f', 0
    #define test_memchr37                    "", 'e', 0
    #define test_memchr38                    "", 'E', 0
    #define test_memchr39                    "", 'R', 0
    #define test_memchr40                    "",   0, 0

    #define test_memchr41                    "", 'f', 5
    #define test_memchr42                    "", 'e', 5
    #define test_memchr43                    "", 'E', 5
    #define test_memchr44                    "", 'R', 5
    #define test_memchr45                    "",   0, 5

    #define test_memchr46                  NULL, 'f', 5
    #define test_memchr47                  NULL, 'e', 5
    #define test_memchr48                  NULL, 'E', 5
    #define test_memchr49                  NULL, 'R', 5
    #define test_memchr50                  NULL,   0, 5

    #define test_memchr51                  NULL, 'f', 0
    #define test_memchr52                  NULL, 'e', 0
    #define test_memchr53                  NULL, 'E', 0
    #define test_memchr54                  NULL, 'R', 0
    #define test_memchr55                  NULL,   0, 0

    ck_assert_str_eq(s21_memchr(test_memchr1),  memchr(test_memchr1));
    ck_assert_str_eq(s21_memchr(test_memchr2),  memchr(test_memchr2));
    ck_assert_str_eq(s21_memchr(test_memchr3),  memchr(test_memchr3));
    ck_assert_str_eq(s21_memchr(test_memchr4),  memchr(test_memchr4));
    ck_assert_str_eq(s21_memchr(test_memchr5),  memchr(test_memchr5));
    ck_assert_str_eq(s21_memchr(test_memchr6),  memchr(test_memchr6));
    ck_assert_str_eq(s21_memchr(test_memchr7),  memchr(test_memchr7));
    ck_assert_str_eq(s21_memchr(test_memchr8),  memchr(test_memchr8));
    ck_assert_str_eq(s21_memchr(test_memchr9),  memchr(test_memchr9));
    ck_assert_str_eq(s21_memchr(test_memchr10), memchr(test_memchr10));
    ck_assert_str_eq(s21_memchr(test_memchr11), memchr(test_memchr11));
    ck_assert_str_eq(s21_memchr(test_memchr12), memchr(test_memchr12));
    ck_assert_str_eq(s21_memchr(test_memchr13), memchr(test_memchr13));
    ck_assert_str_eq(s21_memchr(test_memchr14), memchr(test_memchr14));
    ck_assert_str_eq(s21_memchr(test_memchr15), memchr(test_memchr15));
    ck_assert_str_eq(s21_memchr(test_memchr16), memchr(test_memchr16));
    ck_assert_str_eq(s21_memchr(test_memchr17), memchr(test_memchr17));
    ck_assert_str_eq(s21_memchr(test_memchr18), memchr(test_memchr18));
    ck_assert_str_eq(s21_memchr(test_memchr19), memchr(test_memchr19));
    ck_assert_str_eq(s21_memchr(test_memchr20), memchr(test_memchr20));
    ck_assert_str_eq(s21_memchr(test_memchr21), memchr(test_memchr21));
    ck_assert_str_eq(s21_memchr(test_memchr22), memchr(test_memchr22));
    ck_assert_str_eq(s21_memchr(test_memchr23), memchr(test_memchr23));
    ck_assert_str_eq(s21_memchr(test_memchr24), memchr(test_memchr24));
    ck_assert_str_eq(s21_memchr(test_memchr25), memchr(test_memchr25));
    ck_assert_str_eq(s21_memchr(test_memchr26), memchr(test_memchr26));
    ck_assert_str_eq(s21_memchr(test_memchr27), memchr(test_memchr27));
    ck_assert_str_eq(s21_memchr(test_memchr28), memchr(test_memchr28));
    ck_assert_str_eq(s21_memchr(test_memchr29), memchr(test_memchr29));
    ck_assert_str_eq(s21_memchr(test_memchr30), memchr(test_memchr30));
    ck_assert_str_eq(s21_memchr(test_memchr31), memchr(test_memchr31));
    ck_assert_str_eq(s21_memchr(test_memchr32), memchr(test_memchr32));
    ck_assert_str_eq(s21_memchr(test_memchr33), memchr(test_memchr33));
    ck_assert_str_eq(s21_memchr(test_memchr34), memchr(test_memchr34));
    ck_assert_str_eq(s21_memchr(test_memchr35), memchr(test_memchr35));
    ck_assert_str_eq(s21_memchr(test_memchr36), memchr(test_memchr36));
    ck_assert_str_eq(s21_memchr(test_memchr37), memchr(test_memchr37));
    ck_assert_str_eq(s21_memchr(test_memchr38), memchr(test_memchr38));
    ck_assert_str_eq(s21_memchr(test_memchr39), memchr(test_memchr39));
    ck_assert_str_eq(s21_memchr(test_memchr40), memchr(test_memchr40));
    ck_assert_str_eq(s21_memchr(test_memchr41), memchr(test_memchr41));
    ck_assert_str_eq(s21_memchr(test_memchr42), memchr(test_memchr42));
    ck_assert_str_eq(s21_memchr(test_memchr43), memchr(test_memchr43));
    ck_assert_str_eq(s21_memchr(test_memchr44), memchr(test_memchr44));
    ck_assert_str_eq(s21_memchr(test_memchr45), memchr(test_memchr45));
    ck_assert_str_eq(s21_memchr(test_memchr46), memchr(test_memchr46));
    ck_assert_str_eq(s21_memchr(test_memchr47), memchr(test_memchr47));
    ck_assert_str_eq(s21_memchr(test_memchr48), memchr(test_memchr48));
    ck_assert_str_eq(s21_memchr(test_memchr49), memchr(test_memchr49));
    ck_assert_str_eq(s21_memchr(test_memchr50), memchr(test_memchr50));
    ck_assert_str_eq(s21_memchr(test_memchr51), memchr(test_memchr51));
    ck_assert_str_eq(s21_memchr(test_memchr52), memchr(test_memchr52));
    ck_assert_str_eq(s21_memchr(test_memchr53), memchr(test_memchr53));
    ck_assert_str_eq(s21_memchr(test_memchr54), memchr(test_memchr54));
    ck_assert_str_eq(s21_memchr(test_memchr55), memchr(test_memchr55));
}
END_TEST

// START_TEST(test_strchr) {
//     #define test_strchr1             "ABCCDEFG", 'D'
//     #define test_strchr2             "ABCCDEFG", 'C'
//     #define test_strchr3             "ABCCDEFG", 'E'
//     #define test_strchr4             "ABCCDEFG", 'R'
//     #define test_strchr5             "ABCCDEFG",   0

//     #define test_strchr6  "ABCCDEFG fjehiedjhf", 'f'
//     #define test_strchr7  "ABCCDEFG fjehiedjhf", 'e'
//     #define test_strchr8  "ABCCDEFG fjehiedjhf", 'E'
//     #define test_strchr9  "ABCCDEFG fjehiedjhf", 'R'
//     #define test_strchr10 "ABCCDEFG fjehiedjhf",   0

//     #define test_strchr11                    "", 'f'
//     #define test_strchr12                    "", 'e'
//     #define test_strchr13                    "", 'E'
//     #define test_strchr14                    "", 'R'
//     #define test_strchr15                    "",   0

//     #define test_strchr16                  NULL, 'f'
//     #define test_strchr17                  NULL, 'e'
//     #define test_strchr18                  NULL, 'E'
//     #define test_strchr19                  NULL, 'R'
//     #define test_strchr20                  NULL,   0

//     ck_assert_str_eq(s21_memchr(test_strchr1),  memchr(test_strchr1));
//     ck_assert_str_eq(s21_memchr(test_strchr2),  memchr(test_strchr2));
//     ck_assert_str_eq(s21_memchr(test_strchr3),  memchr(test_strchr3));
//     ck_assert_str_eq(s21_memchr(test_strchr4),  memchr(test_strchr4));
//     ck_assert_str_eq(s21_memchr(test_strchr5),  memchr(test_strchr5));
//     ck_assert_str_eq(s21_memchr(test_strchr6),  memchr(test_strchr6));
//     ck_assert_str_eq(s21_memchr(test_strchr7),  memchr(test_strchr7));
//     ck_assert_str_eq(s21_memchr(test_strchr8),  memchr(test_strchr8));
//     ck_assert_str_eq(s21_memchr(test_strchr9),  memchr(test_strchr9));
//     ck_assert_str_eq(s21_memchr(test_strchr10), memchr(test_strchr10));
//     ck_assert_str_eq(s21_memchr(test_strchr11), memchr(test_strchr11));
//     ck_assert_str_eq(s21_memchr(test_strchr12), memchr(test_strchr12));
//     ck_assert_str_eq(s21_memchr(test_strchr13), memchr(test_strchr13));
//     ck_assert_str_eq(s21_memchr(test_strchr14), memchr(test_strchr14));
//     ck_assert_str_eq(s21_memchr(test_strchr15), memchr(test_strchr15));
//     ck_assert_str_eq(s21_memchr(test_strchr16), memchr(test_strchr16));
//     ck_assert_str_eq(s21_memchr(test_strchr17), memchr(test_strchr17));
//     ck_assert_str_eq(s21_memchr(test_strchr18), memchr(test_strchr18));
//     ck_assert_str_eq(s21_memchr(test_strchr19), memchr(test_strchr19));
//     ck_assert_str_eq(s21_memchr(test_strchr20), memchr(test_strchr20));
// }
// END_TEST
// /////////////////////////////////////
// START_TEST(test_strpbrk) {

//     char *text1 = "ABCCDEFG";
//     #define test_strpbrk1 text1, "GEB"
//     #define test_strpbrk2 text1, "at6"
//     #define test_strpbrk3 text1, "at6E"
//     #define test_strpbrk4 text1, "6f "
//     #define test_strpbrk5 text1, ""
//     #define test_strpbrk6 text1, "5555"
//     #define test_strpbrk7 text1, NULL
//     #define test_strpbrk8 text1, (text1 + 3)
//     #define test_strpbrk9 text1, (text1 + 5)

//     char *text2 = "ABCCDEFG dkkuthlkdfj 23985625";
//     #define test_strpbrk10 text2, "GEB"
//     #define test_strpbrk11 text2, "at0"
//     #define test_strpbrk12 text2, "at0d"
//     #define test_strpbrk13 text2, "at0dE"
//     #define test_strpbrk14 text2, ""
//     #define test_strpbrk15 text2, "5555"
//     #define test_strpbrk16 text2, NULL
//     #define test_strpbrk17 text2, (text2 + 3)
//     #define test_strpbrk18 text2, (text2 + 5)
//     #define test_strpbrk19 text2, (text2 + 15)
//     #define test_strpbrk20 text2, (text2 + 20)

//     char *text3 = "";
//     #define test_strpbrk21 text3, "GEB"
//     #define test_strpbrk22 text3, "at0"
//     #define test_strpbrk23 text3, "at0d"
//     #define test_strpbrk24 text3, "at0dE"
//     #define test_strpbrk25 text3, ""
//     #define test_strpbrk26 text3, "5555"
//     #define test_strpbrk27 text3, NULL
//     #define test_strpbrk28 text3, (text3 + 3)
//     #define test_strpbrk29 text3, (text3 + 5)
//     #define test_strpbrk30 text3, (text3 + 15)
//     #define test_strpbrk31 text3, (text3 + 20)

//     char *text4 = NULL;
//     #define test_strpbrk32 text4, "GEB"
//     #define test_strpbrk33 text4, "at0"
//     #define test_strpbrk34 text4, "at0d"
//     #define test_strpbrk35 text4, "at0dE"
//     #define test_strpbrk36 text4, ""
//     #define test_strpbrk37 text4, "5555"
//     #define test_strpbrk38 text4, NULL
//     #define test_strpbrk39 text4, (text4 + 3)
//     #define test_strpbrk40 text4, (text4 + 5)
//     #define test_strpbrk41 text4, (text4 + 15)
//     #define test_strpbrk42 text4, (text4 + 20)


//     ck_assert_str_eq(s21_memchr(test_strpbrk1),  memchr(test_strpbrk1));
//     ck_assert_str_eq(s21_memchr(test_strpbrk2),  memchr(test_strpbrk2));
//     ck_assert_str_eq(s21_memchr(test_strpbrk3),  memchr(test_strpbrk3));
//     ck_assert_str_eq(s21_memchr(test_strpbrk4),  memchr(test_strpbrk4));
//     ck_assert_str_eq(s21_memchr(test_strpbrk5),  memchr(test_strpbrk5));
//     ck_assert_str_eq(s21_memchr(test_strpbrk6),  memchr(test_strpbrk6));
//     ck_assert_str_eq(s21_memchr(test_strpbrk7),  memchr(test_strpbrk7));
//     ck_assert_str_eq(s21_memchr(test_strpbrk8),  memchr(test_strpbrk8));
//     ck_assert_str_eq(s21_memchr(test_strpbrk9),  memchr(test_strpbrk9));
//     ck_assert_str_eq(s21_memchr(test_strpbrk10), memchr(test_strpbrk10));
//     ck_assert_str_eq(s21_memchr(test_strpbrk11), memchr(test_strpbrk11));
//     ck_assert_str_eq(s21_memchr(test_strpbrk12), memchr(test_strpbrk12));
//     ck_assert_str_eq(s21_memchr(test_strpbrk13), memchr(test_strpbrk13));
//     ck_assert_str_eq(s21_memchr(test_strpbrk14), memchr(test_strpbrk14));
//     ck_assert_str_eq(s21_memchr(test_strpbrk15), memchr(test_strpbrk15));
//     ck_assert_str_eq(s21_memchr(test_strpbrk16), memchr(test_strpbrk16));
//     ck_assert_str_eq(s21_memchr(test_strpbrk17), memchr(test_strpbrk17));
//     ck_assert_str_eq(s21_memchr(test_strpbrk18), memchr(test_strpbrk18));
//     ck_assert_str_eq(s21_memchr(test_strpbrk19), memchr(test_strpbrk19));
//     ck_assert_str_eq(s21_memchr(test_strpbrk20), memchr(test_strpbrk20));
//     ck_assert_str_eq(s21_memchr(test_strpbrk21), memchr(test_strpbrk21));
//     ck_assert_str_eq(s21_memchr(test_strpbrk22), memchr(test_strpbrk22));
//     ck_assert_str_eq(s21_memchr(test_strpbrk23), memchr(test_strpbrk23));
//     ck_assert_str_eq(s21_memchr(test_strpbrk24), memchr(test_strpbrk24));
//     ck_assert_str_eq(s21_memchr(test_strpbrk25), memchr(test_strpbrk25));
//     ck_assert_str_eq(s21_memchr(test_strpbrk26), memchr(test_strpbrk26));
//     ck_assert_str_eq(s21_memchr(test_strpbrk27), memchr(test_strpbrk27));
//     ck_assert_str_eq(s21_memchr(test_strpbrk28), memchr(test_strpbrk28));
//     ck_assert_str_eq(s21_memchr(test_strpbrk29), memchr(test_strpbrk29));
//     ck_assert_str_eq(s21_memchr(test_strpbrk30), memchr(test_strpbrk30));
//     ck_assert_str_eq(s21_memchr(test_strpbrk31), memchr(test_strpbrk31));
//     ck_assert_str_eq(s21_memchr(test_strpbrk32), memchr(test_strpbrk32));
//     ck_assert_str_eq(s21_memchr(test_strpbrk33), memchr(test_strpbrk33));
//     ck_assert_str_eq(s21_memchr(test_strpbrk34), memchr(test_strpbrk34));
//     ck_assert_str_eq(s21_memchr(test_strpbrk35), memchr(test_strpbrk35));
//     ck_assert_str_eq(s21_memchr(test_strpbrk36), memchr(test_strpbrk36));
//     ck_assert_str_eq(s21_memchr(test_strpbrk37), memchr(test_strpbrk37));
//     ck_assert_str_eq(s21_memchr(test_strpbrk38), memchr(test_strpbrk38));
//     ck_assert_str_eq(s21_memchr(test_strpbrk39), memchr(test_strpbrk39));
//     ck_assert_str_eq(s21_memchr(test_strpbrk40), memchr(test_strpbrk40));
//     ck_assert_str_eq(s21_memchr(test_strpbrk41), memchr(test_strpbrk41));
//     ck_assert_str_eq(s21_memchr(test_strpbrk42), memchr(test_strpbrk42));

// END_TEST

// START_TEST(test_strrchr) {
//     #define test_strrchr1             "ABCCDEFG", 'D'
//     #define test_strrchr2             "ABCCDEFG", 'C'
//     #define test_strrchr3             "ABCCDEFG", 'E'
//     #define test_strrchr4             "ABCCDEFG", 'R'
//     #define test_strrchr5             "ABCCDEFG",   0

//     #define test_strrchr6  "ABCCDEFG fjehiedjhf", 'f'
//     #define test_strrchr7  "ABCCDEFG fjehiedjhf", 'e'
//     #define test_strrchr8  "ABCCDEFG fjehiedjhf", 'E'
//     #define test_strrchr9  "ABCCDEFG fjehiedjhf", 'R'
//     #define test_strrchr10 "ABCCDEFG fjehiedjhf",   0

//     #define test_strrchr11                    "", 'f'
//     #define test_strrchr12                    "", 'e'
//     #define test_strrchr13                    "", 'E'
//     #define test_strrchr14                    "", 'R'
//     #define test_strrchr15                    "",   0

//     #define test_strrchr16                  NULL, 'f'
//     #define test_strrchr17                  NULL, 'e'
//     #define test_strrchr18                  NULL, 'E'
//     #define test_strrchr19                  NULL, 'R'
//     #define test_strrchr20                  NULL,   0

//     ck_assert_str_eq(s21_memchr(test_strrchr1),  memchr(test_strrchr1));
//     ck_assert_str_eq(s21_memchr(test_strrchr2),  memchr(test_strrchr2));
//     ck_assert_str_eq(s21_memchr(test_strrchr3),  memchr(test_strrchr3));
//     ck_assert_str_eq(s21_memchr(test_strrchr4),  memchr(test_strrchr4));
//     ck_assert_str_eq(s21_memchr(test_strrchr5),  memchr(test_strrchr5));
//     ck_assert_str_eq(s21_memchr(test_strrchr6),  memchr(test_strrchr6));
//     ck_assert_str_eq(s21_memchr(test_strrchr7),  memchr(test_strrchr7));
//     ck_assert_str_eq(s21_memchr(test_strrchr8),  memchr(test_strrchr8));
//     ck_assert_str_eq(s21_memchr(test_strrchr9),  memchr(test_strrchr9));
//     ck_assert_str_eq(s21_memchr(test_strrchr10), memchr(test_strrchr10));
//     ck_assert_str_eq(s21_memchr(test_strrchr11), memchr(test_strrchr11));
//     ck_assert_str_eq(s21_memchr(test_strrchr12), memchr(test_strrchr12));
//     ck_assert_str_eq(s21_memchr(test_strrchr13), memchr(test_strrchr13));
//     ck_assert_str_eq(s21_memchr(test_strrchr14), memchr(test_strrchr14));
//     ck_assert_str_eq(s21_memchr(test_strrchr15), memchr(test_strrchr15));
//     ck_assert_str_eq(s21_memchr(test_strrchr16), memchr(test_strrchr16));
//     ck_assert_str_eq(s21_memchr(test_strrchr17), memchr(test_strrchr17));
//     ck_assert_str_eq(s21_memchr(test_strrchr18), memchr(test_strrchr18));
//     ck_assert_str_eq(s21_memchr(test_strrchr19), memchr(test_strrchr19));
//     ck_assert_str_eq(s21_memchr(test_strrchr20), memchr(test_strrchr20));
// }
// END_TEST

// START_TEST(test_strstr) {

//     char *text1 = "ABCCDEFG";
//     #define test_strstr1 text1, "ABC"
//     #define test_strstr2 text1, "CDE"
//     #define test_strstr3 text1, "C"
//     #define test_strstr4 text1, "6f "
//     #define test_strstr5 text1, ""
//     #define test_strstr6 text1, "5555"
//     #define test_strstr7 text1, NULL
//     #define test_strstr8 text1, (text1 + 3)
//     #define test_strstr9 text1, (text1 + 5)

//     char *text2 = "ABCCDEFG dkkuthlkdfj 23985625";
//     #define test_strstr10 text2, "ABC"
//     #define test_strstr11 text2, "thl"
//     #define test_strstr12 text2, "CDE"
//     #define test_strstr13 text2, "234"
//     #define test_strstr14 text2, ""
//     #define test_strstr15 text2, "239"
//     #define test_strstr16 text2, NULL
//     #define test_strstr17 text2, (text2 + 3)
//     #define test_strstr18 text2, (text2 + 5)
//     #define test_strstr19 text2, (text2 + 15)
//     #define test_strstr20 text2, (text2 + 20)

//     char *text3 = "";
//     #define test_strstr21 text3, "ABC"
//     #define test_strstr22 text3, "thl"
//     #define test_strstr23 text3, "CDE"
//     #define test_strstr24 text3, "234"
//     #define test_strstr25 text3, ""
//     #define test_strstr26 text3, "239"
//     #define test_strstr27 text3, NULL
//     #define test_strstr28 text3, (text3 + 3)
//     #define test_strstr29 text3, (text3 + 5)
//     #define test_strstr30 text3, (text3 + 15)
//     #define test_strstr31 text3, (text3 + 20)

//     char *text4 = NULL;
//     #define test_strstr32 text4, "ABC"
//     #define test_strstr33 text4, "thl"
//     #define test_strstr34 text4, "CDE"
//     #define test_strstr35 text4, "234"
//     #define test_strstr36 text4, ""
//     #define test_strstr37 text4, "239"
//     #define test_strstr38 text4, NULL
//     #define test_strstr39 text4, (text4 + 3)
//     #define test_strstr40 text4, (text4 + 5)
//     #define test_strstr41 text4, (text4 + 15)
//     #define test_strstr42 text4, (text4 + 20)


//     ck_assert_str_eq(s21_memchr(test_strstr1),  memchr(test_strstr1));
//     ck_assert_str_eq(s21_memchr(test_strstr2),  memchr(test_strstr2));
//     ck_assert_str_eq(s21_memchr(test_strstr3),  memchr(test_strstr3));
//     ck_assert_str_eq(s21_memchr(test_strstr4),  memchr(test_strstr4));
//     ck_assert_str_eq(s21_memchr(test_strstr5),  memchr(test_strstr5));
//     ck_assert_str_eq(s21_memchr(test_strstr6),  memchr(test_strstr6));
//     ck_assert_str_eq(s21_memchr(test_strstr7),  memchr(test_strstr7));
//     ck_assert_str_eq(s21_memchr(test_strstr8),  memchr(test_strstr8));
//     ck_assert_str_eq(s21_memchr(test_strstr9),  memchr(test_strstr9));
//     ck_assert_str_eq(s21_memchr(test_strstr10), memchr(test_strstr10));
//     ck_assert_str_eq(s21_memchr(test_strstr11), memchr(test_strstr11));
//     ck_assert_str_eq(s21_memchr(test_strstr12), memchr(test_strstr12));
//     ck_assert_str_eq(s21_memchr(test_strstr13), memchr(test_strstr13));
//     ck_assert_str_eq(s21_memchr(test_strstr14), memchr(test_strstr14));
//     ck_assert_str_eq(s21_memchr(test_strstr15), memchr(test_strstr15));
//     ck_assert_str_eq(s21_memchr(test_strstr16), memchr(test_strstr16));
//     ck_assert_str_eq(s21_memchr(test_strstr17), memchr(test_strstr17));
//     ck_assert_str_eq(s21_memchr(test_strstr18), memchr(test_strstr18));
//     ck_assert_str_eq(s21_memchr(test_strstr19), memchr(test_strstr19));
//     ck_assert_str_eq(s21_memchr(test_strstr20), memchr(test_strstr20));
//     ck_assert_str_eq(s21_memchr(test_strstr21), memchr(test_strstr21));
//     ck_assert_str_eq(s21_memchr(test_strstr22), memchr(test_strstr22));
//     ck_assert_str_eq(s21_memchr(test_strstr23), memchr(test_strstr23));
//     ck_assert_str_eq(s21_memchr(test_strstr24), memchr(test_strstr24));
//     ck_assert_str_eq(s21_memchr(test_strstr25), memchr(test_strstr25));
//     ck_assert_str_eq(s21_memchr(test_strstr26), memchr(test_strstr26));
//     ck_assert_str_eq(s21_memchr(test_strstr27), memchr(test_strstr27));
//     ck_assert_str_eq(s21_memchr(test_strstr28), memchr(test_strstr28));
//     ck_assert_str_eq(s21_memchr(test_strstr29), memchr(test_strstr29));
//     ck_assert_str_eq(s21_memchr(test_strstr30), memchr(test_strstr30));
//     ck_assert_str_eq(s21_memchr(test_strstr31), memchr(test_strstr31));
//     ck_assert_str_eq(s21_memchr(test_strstr32), memchr(test_strstr32));
//     ck_assert_str_eq(s21_memchr(test_strstr33), memchr(test_strstr33));
//     ck_assert_str_eq(s21_memchr(test_strstr34), memchr(test_strstr34));
//     ck_assert_str_eq(s21_memchr(test_strstr35), memchr(test_strstr35));
//     ck_assert_str_eq(s21_memchr(test_strstr36), memchr(test_strstr36));
//     ck_assert_str_eq(s21_memchr(test_strstr37), memchr(test_strstr37));
//     ck_assert_str_eq(s21_memchr(test_strstr38), memchr(test_strstr38));
//     ck_assert_str_eq(s21_memchr(test_strstr39), memchr(test_strstr39));
//     ck_assert_str_eq(s21_memchr(test_strstr40), memchr(test_strstr40));
//     ck_assert_str_eq(s21_memchr(test_strstr41), memchr(test_strstr41));
//     ck_assert_str_eq(s21_memchr(test_strstr42), memchr(test_strstr42));
// }
// END_TEST

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