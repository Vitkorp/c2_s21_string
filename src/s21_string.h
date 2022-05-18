#ifndef SRC_S21_STRING_H_
#define SRC_S21_STRING_H_
    #include <stdio.h>
    // #include <corecrt.h>
    #include <string.h>
    #include <stdbool.h>
    // #include <check.h>
    #include <stdlib.h>

    #ifndef S21_NULL
        #define S21_NULL (void *)0
    #endif // S21_NULL

    typedef unsigned long int s21_size_t;

    /* func 1:
        Выполняет поиск первого вхождения
        символа c (беззнаковый тип) в первых n байтах строки,
        на которую указывает аргумент str.
    */

    void *s21_memchr(const void *str, int c, s21_size_t n);

    /* func 8:
        Выполняет поиск первого вхождения
        символа c (беззнаковый тип) в строке,
        на которую указывает аргумент str.
    */

    char *s21_strchr(const char *str, int c);

    /* func 16:
        Находит первый символ в строке str1,
        который соответствует любому символу,
        указанному в str2.
    */

    char *s21_strpbrk(const char *str1, const char *str2);

    /* func 17:
        Выполняет поиск последнего вхождения
        символа c (беззнаковый тип) в строке,
        на которую указывает аргумент str.
    */

    char *s21_strrchr(const char *str, int c);

    /* func 18:
        Находит первое вхождение
        всей строки needle (не включая завершающий нулевой символ),
        которая появляется в строке haystack
    */

    char *s21_strstr(const char *haystack, const char *needle);

    s21_size_t s21_strlen(const char *str);

#endif // SRC_S21_STRING_H_