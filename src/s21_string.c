#include "s21_string.h"
#include <string.h>
#include <stdio.h>

s21_size_t s21_strlen(const char *str) {
    s21_size_t _len = 0;
    for (_len = 0; str[_len]; _len++) {}
    return _len;
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

char* s21_strerror(int errnum) {
    err errlist[] = S21_ERRLIST;  
    int count;
#if defined(__APPLE__) && defined(__MACH__)
    char baseMsg[50] = "Unknown error: ";
    count = 60;
#elif defined(__linux__)
    char baseMsg[50] = "Unknown error ";
    count = 76;
#endif
    char b[12] = "";
    int found = 0;
    char res[1000] = "";
    snprintf(b,10, "%d",errnum);
    strcat(baseMsg, b);      
    for (int i = 0; i < count; i++) {
        if (errnum == errlist[i].id) {
            strcpy(res, errlist[i].null_str);
            found = 1;
            break;
        }
    }
    return (found) ? res : baseMsg;
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