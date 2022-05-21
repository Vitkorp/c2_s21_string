#include "s21_2_9_10.h"

int main() {
    const char* str1 = "lo world";
    const char* str2 = "lo";
    if (s21_strcmp(str1, str2) == 0) {
        puts("equal");
    } else {
        puts("different");
    }
    printf("%d", s21_memcmp(str1, str2, 2));
}

int s21_memcmp(const void *str1, const void *str2, size_t n) {
    const char* string1 = (char*)str1;
    const char* string2 = (char*)str2;
    int flag = 0;
    size_t i = 0;
    while (i < n) {
        if (i == n - 1 && string1[i] == string2[i]) {
            break;
        }
        if (string1[i] == string2[i]) {
            i++;
        } else {
            break;
        }
    }
    if (string1[i] != string2[i] && (int)string1[i] > (int)string2[i]) {
        flag = (int)string1[i] - (int)string2[i];
    } if (string1[i] != string2[i] && (int)string1[i] < (int)string2[i]) {
        flag = ((int)string2[i] - (int)string1[i]) * (-1);
    }
    return flag;
}

int s21_strncmp(const char *str1, const char *str2, size_t n) {
    int flag = 0;
    size_t i = 0;
    while (i < n) {
        if (i == n - 1 && str1[i] == str2[i]) {
            break;
        }
        if (str1[i] == str2[i]) {
            i++;
        } else {
            break;
        }
    }
    if (str1[i] != str2[i] && (int)str1[i] > (int)str2[i]) {
        flag = (int)str1[i] - (int)str2[i];
    } if (str1[i] != str2[i] && (int)str1[i] < (int)str2[i]) {
        flag = ((int)str2[i] - (int)str1[i]) * (-1);
    }
    return flag;
}

int s21_strcmp(const char *str1, const char *str2) {
    int flag = 0;
    size_t i = 0;
    while (1) {
        if (str1[i] == str2[i]) {
            i++;
        } if (str1[i] == '\n' || str2[i] == '\n' || str1[i] != str2[i]) {
            break;
        }
    }
    if (str1[i] != str2[i] && (int)str1[i] > (int)str2[i]) {
        flag = (int)str1[i] - (int)str2[i];
    } if (str1[i] != str2[i] && (int)str1[i] < (int)str2[i]) {
        flag = ((int)str2[i] - (int)str1[i]) * (-1);
    }
    return flag;
}