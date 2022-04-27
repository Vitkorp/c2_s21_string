#include <stdio.h>

void s21_memchr(const void *str, int c, size_t n);
int memcmp(const void *str1, const void *str2, size_t n);


int main() {

}

void s21_memchr(const void *str, int c, size_t n) {
    size_t i;
    for (i = 0; i < n; i++)
        if (*((char *)str + i) == c) 
            return (char *) str + i;
    return NULL;
}

int 