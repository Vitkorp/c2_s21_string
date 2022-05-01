#include "s21_string.h"

void *s21_memchr(const void *str, int c, s21_size_t n) {
    s21_size_t i;
    for (i = 0; i < n; i++)
        if (*((char *)str + i) == c) 
            return (char *)str + i;
    return NULL;
}

char *s21_strchr(const char *str, int c) {
    int i = 0;
    while (str[i] && str[i] != c){
        i++;
        if (str[i] == c)
            return (char *)str + i;
    }
    return NULL;
}

char *s21_strpbrk(const char *str1, const char *str2) {
    s21_size_t i;
    s21_size_t j;
    for (i = 0; i < s21_strlen(str1); i++) {
        for (j = 0; j < s21_strlen(str2); j++) {
            if (str2[j] == str1[i]) {
                return (char *)str1 + i;
            }
        }
    }
    return NULL;
}

char *s21_strrchr(const char *str, int c) {
    for (int i = s21_strlen(str); i > 0; i--) {
        if (str[i] == c) {
            return (char *)str + i;
        }
    }
    return NULL;
}

char *s21_strstr(const char *haystack, const char *needle) {
    if (!*needle)
        return (char *) haystack;

    const char needle_first = *needle;

    haystack = s21_strchr(haystack, needle_first);
    if (!haystack)
        return NULL;

    const char *i_haystack = haystack + 1,
                *i_needle = needle + 1;

    unsigned int sums_diff = *haystack;
    bool identical = true;

    while (*i_haystack && *i_needle) {
        sums_diff += *i_haystack;
        sums_diff -= *i_needle;
        identical &= *i_haystack++ == *i_needle++;
    }
    if (*i_needle)
        return NULL;
    else if (identical)
        return (char *) haystack;

    s21_size_t needle_len = i_needle - needle;
    s21_size_t needle_len_1 = needle_len - 1;

    const char   *sub_start;
    for (sub_start = haystack; *i_haystack; i_haystack++) {
        sums_diff -= *sub_start++;
        sums_diff += *i_haystack;

        if (
               sums_diff == 0
            && needle_first == *sub_start
            && memcmp(sub_start, needle, needle_len_1) == 0 //заменить memcmp на s21_memcmp
        )
            return (char *) sub_start;
    }
    return NULL;
}


s21_size_t s21_strlen(const char *str) {
    int _len = 0;
    for (_len = 0; *str; str++, _len++) {}
    return _len;
}
