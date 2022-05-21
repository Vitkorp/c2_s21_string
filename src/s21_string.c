#include "s21_string.h"

s21_size_t s21_strlen(const char *str) {
    s21_size_t len = 0;
    for (; str[len]; len++);
    return len + 1;
}

char *s21_strcat(char *dest, const char *src) {
    int i = 0, j = 0;
    if (src != S21_NULL) {
        while (dest[i]) {
            i++;
        }
        while (src[j]) {
            dest[i + j] = src[j];
            j++;
        }
        dest[i + j] = '\0';
    }
    return dest;
}

char *s21_strncat(char *dest, const char *src, s21_size_t n) {
    char *tmp = dest;
    int i = s21_strlen(dest), j = 0;
    if (n > 0) {
        while (src[j] != '\0') {
            dest[i + j] = src[j];
            j++;
            n--;
            if (n == 0) {
                break;
            }
        }
    }
    return tmp;
}

char *s21_strtok(char *str, const char *delim) {
    char *tok = str;
    if (tok != S21_NULL) {
        str = tok + s21_strspn(tok, delim);
        tok = str + s21_strcspn(str, delim);
        if (tok == str) {
            str = 0;
        } else {
            if (*tok) {
                *tok = 0;
                tok += 1;
            } else {
                tok = 0;
            }
        }
    }
    return str;
}

s21_size_t s21_strcspn(const char *str1, const char *str2) {
    s21_size_t i;
    int continuesFlag = 1;

    for (i = 0; (i < s21_strlen(str1)) && (continuesFlag != 0);) {
        for (s21_size_t j = 0; (str2[j] != 0) && (continuesFlag != 0); j++) {
            if (str1[i] == str2[j]) {
                continuesFlag = 0;
            }
        }
        if (continuesFlag != 0) {
            i++;
        }
    }
    return i;
}

s21_size_t s21_strspn(const char *str1, const char *str2) {
    s21_size_t len = 0;
    int continuesFlag = 1;

    for (len = 0; (str1[len] != 0) && (continuesFlag != 0); ) {
        int consist = 0;
        for (s21_size_t i = 0; (str2[i] != 0); i++) {
            if (str1[len] == str2[i]) {
                consist += 1;
            }
        }
        if (consist == 0) {
            continuesFlag = 0;
        } else {
            len++;
        }
    }
    return len;
}
