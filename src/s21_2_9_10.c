#include <stdio.h>
#include <string.h>

int s21_memcmp(const void *str1, const void *str2, size_t n);
int s21_strncmp(const char *str1, const char *str2, size_t n);

int main() {
    const char* str1 = "12e34567890g";
    const char* str2 = "1234567890";
    if (s21_strncmp(str1, str2, 5) == 0) {
        puts("equal");
    } else {
        puts("different");
    }
}

int s21_memcmp(const void *str1, const void *str2, size_t n) {
    size_t i = 0;
    int flag = 0;
    while (i < n) {
        if ((char *)str1 == (char *)str2) {
            i++;
        } else {
            break;
        }
    }
    printf("\n%ld\n", i);
    if (i != n) {
        flag = 1;
    }
    return flag;
}


int s21_strncmp(const char *str1, const char *str2, size_t n) {
    size_t i = 0;
    while (i < n) {
        if (str1[i] == str2[i]) {
            i++;
            printf("%ld", i);
        } if (str1[i] == '\0' || str2[i] == '\0' || str1[i] != str2[i]) {
            break;
        }
    }
    int size_str1 = strlen(str1);
    int size_str2 = strlen(str2);

    // printf("\n%d\n", size_str1);
    // printf("%d\n", size_str2);
    // printf("i == %ld\n", i);

    if (str1[i] == str2[i] || size_str1 == size_str2) {
        i = 0;
    } else if (size_str1 > size_str2) {
        i = (int)str1[i];
    } else if (size_str1 < size_str2) {
        i = (int)str2[i] * (-1);
    }
    // printf("%ld\n", i);
    return i;
}
