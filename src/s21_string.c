#include "s21_string.h"

void *s21_memchr(const void *str, int c, s21_size_t n) {
    s21_size_t i;
    int found = 0;
    for (i = 0; i < n; i++)
        if (*((char *)str + i) == c) {
            found = 1;
            break; 
        }
    return found ? ((char *)str + i) : S21_NULL;
}

char *s21_strchr(const char *str, int c) {
    s21_size_t i = 0;
    int found = 0;
    while (str[i] && str[i] != c){
        i++;
        if (str[i] == c) {
            found = 1;
            break;
        }
    }
    return found ? ((char *)str + i) : S21_NULL;
}

char *s21_strpbrk(const char *str1, const char *str2) {
    const char *scanp;
    int c, sc;
    char * _res = ""; 
    int exit_code = 0;
    while ((c = *str1++) != 0) {
        for (scanp = str2; (sc = *scanp++) != '\0';) {
            if (sc == c) {
                _res = ((char*)(str1 - 1));
                exit_code = 1;
                break;
            }
        }
        if (exit_code == 1){
            break;
        }
    }
    return exit_code ? _res : S21_NULL;
}

char *s21_strrchr(const char *str, int c) {
    int found = 0;
    s21_size_t i;
    for (i = s21_strlen(str); i > 0; i--) {
        if (str[i] == c) {
            found = 1;
            break;
        }
    }
    return found ? ((char *)str + i) : S21_NULL;
}

char *s21_strstr(const char *haystack, const char *needle) {
    const size_t needle_len = s21_strlen(needle);
    char *res = "";
    int exit_code = 0;
    while (*haystack != '\0') {
        if (strncmp(haystack, needle, needle_len) == 0) {
            res = (char *)haystack;
            exit_code = 1;
            break;
        }
        else {
            haystack++;
        }
    }

    return exit_code ? res : S21_NULL;
}

s21_size_t s21_strlen(const char *str) {
    s21_size_t _len = 0;
    for (_len = 0; str[_len]; _len++) {}
        return _len;
}

int main() {
    char *src = "this is a test!";
    char *sub = "!";
    char *p;
    char *my;

    p = strstr(src, sub);
    my = s21_strstr(src, sub);
    
    if (p == NULL) {
        printf("Error\n");
    } else {
        printf("Position 1: %ld\n", p - src + 1);
    }
    if (my == S21_NULL) {
        printf("ERROR");
    } else {
        printf("Position 2: %ld\n", my - src + 1);
    }

    return 0;
}