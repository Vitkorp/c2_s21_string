#include "s21_2_9_10.h"

int main() {
    const char* str1 = "1a234567890g";
    const char* str2 = "1234567890";
    if (s21_strcmp(str1, str2) == 0) {
        puts("equal");
    } else {
        puts("different");
    }
    printf("%d", s21_strcmp(str1, str2));
}

int s21_memcmp(const void *str1, const void *str2, size_t n) {
    const char* string1 = (char*)str1;
    const char* string2 = (char*)str2;
    int flag = 0;
    size_t i = 0;
    while (i < n) {
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
    // size_t i = 0;
    // while (i < n) {
    //     if (str1[i] == str2[i]) {
    //         i++;
    //     } if (str1[i] == '\0' || str2[i] == '\0' || str1[i] != str2[i]) {
    //         break;
    //     }
    // }
    // int size_str1 = strlen(str1);
    // int size_str2 = strlen(str2);
    // if (str1[i] == str2[i] || size_str1 == size_str2) {
    //     i = 0;
    // } else if (size_str1 > size_str2) {
    //     i = (int)str1[i] - (int)str2[i];
    // } else if (size_str1 < size_str2) {
    //     i = ((int)str2[i] - (int)str1[i])* (-1);
    // }
    // return i;
    int flag = 0;
    size_t i = 0;
    while (i < n) {
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