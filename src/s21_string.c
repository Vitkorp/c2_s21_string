#include "s21_string.h"
//#include <string.h>

void *s21_memchr(const void *str, int c, size_t n) {
    size_t i;
    for (i = 0; i < n; i++)
        if (*((char *)str + i) == c) 
            return (char *)str + i;
    return NULL;
}

char *s21_strchr(const char *str, int c) {
    int i = 0;
    while (str[i] && str[i] != c){
        ++i;
        if (str[i] == c)
            return (char *)str + i;
    }
    return NULL;

}

size_t s21_strlen(const char *str) {
    int _len = 0;
    for (_len = 0; *str; str++, _len++) {}
    return _len;
}


