// Copyright [2022] <Copyright Bobbie>
#include <string.h>
#include "s21_string.h"

void *s21_memcpy(void *dest, const void *src, size_t n) {
    char *to = dest;
    const char *from = src;
    for (size_t i = 0; i < n; i++) {
        *to++ = *from++;
    }
    return dest;
}

// копирует n сивловов из src в dest. whithout overlap
void *s21_memmove(void *dest, const void *src, size_t n) {
    char *to = dest;
    const char *from = src;

    char *to_end = (to + n - 1);
    const char *from_end = (from + n - 1);

    if (to < from) {
        for (size_t i = 0; i < n; i++) {
        *to++ = *from++;
        }
    } else {
        while (n) {
            *to_end-- = *from_end--;
            n--;
        }
    }
    return dest;
}

// Копирует символ c (беззнаковый тип) в первые n символов строки, на которую указывает аргумент str.
void *s21_memset(void *src, int c, size_t n) {
    char *to = src;
    for (size_t i = 0; i < n; i++) {
        *to++ = c;
    }
    return src;
}

// Копирует строку, на которую указывает src, в dest.
char *s21_strcpy(char *dest, const char *src) {
    int i = 0;
    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i]='\0';
    return dest;
}

// Копирует до n символов из строки, на которую указывает src, в dest.
char *s21_strncpy(char *dest, const char *src, size_t n) {
    size_t i;
    for (i = 0; i < n; i++) {
        if (src[i] != '\0') {
            dest[i] = src[i];
        } else {
            break;
        }
    }
    while (i < n) {
        dest[i] = '\0';
        i++;
    }
    return dest;
}
/*
// Все буквы в верхний регистр
void *s21_to_upper(const char *str) {
    char *dest = "first str second ssq";  // эти -Wall пропускает, но не работает
    dest = s21_strcpy(dest, str);
    // char *dest;  эти строчки работают, но на них -Wall жалуется
    // s21_strcpy(dest, str);
    for (size_t j = 0; j < strlen(str); j++) {
        if (('a' <= dest[j] && 'z' >= dest[j] )) {
            dest[j] += 'A' - 'a';
        }
    }
    return dest;
}

// Все буквы в нижний регистр
void *s21_to_lower(const char *str) {
    // char *dest = "first str second ssq";  // эти -Wall пропускает, но не работает
    // dest = s21_strcpy(dest, str);
    char *dest;  // эти строчки работают, но на них -Wall жалуется
    s21_strcpy(dest, str);
    for (size_t j = 0; j < strlen(str); j++) {
        if (('A' <= dest[j] && 'Z' >= dest[j] )) {
            dest[j] += 'a' - 'A';
        }
    }
    return  dest;
}
*/
