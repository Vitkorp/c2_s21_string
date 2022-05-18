// Copyright [2022] <Copyright Bobbie>
#include <string.h>
#include "s21_string.h"
#include <string.h>
#include <stdio.h>

int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
    const char* string1 = (char*)str1;
    const char* string2 = (char*)str2;
    int flag = 0;
    s21_size_t i = 0;
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

// копирует n сивловов из src в dest
void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
    char *to = dest;
    const char *from = src;
    for (s21_size_t i = 0; i < n; i++) {
        *to++ = *from++;
    }
    return dest;
}

// копирует n сивловов из src в dest. whithout overlap
void *s21_memmove(void *dest, const void *src, s21_size_t n) {
    char *to = dest;
    const char *from = src;

    char *to_end = (to + n - 1);
    const char *from_end = (from + n - 1);

    if (to < from) {
        for (s21_size_t i = 0; i < n; i++) {
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
void *s21_memset(void *src, int c, s21_size_t n) {
    char *to = src;
    for (s21_size_t i = 0; i < n; i++) {
        *to++ = c;
    }
    return src;
}

int s21_strcmp(const char *str1, const char *str2) {
    int flag = 0;
    s21_size_t i = 0;
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

int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
    int flag = 0;
    s21_size_t i = 0;
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
char *s21_strncpy(char *dest, const char *src, s21_size_t n) {
    s21_size_t i;
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
    char baseMsg[1024] = {"Unknown error: "};
    count = 60;
    char b[12] = "";
    int found = 0;
    char res[1000] = {'\0'};
    snprintf(b,10, "%d",errnum);
    strcat(baseMsg, b);  // заменить на s21_strcat
    for (int i = 0; i < count; i++) {
        if (errnum == errlist[i].id) {
            strcpy(res, errlist[i].null_str);
            found = 1;
            break;
        }
    }
#elif defined(__linux__)
    char baseMsg[50] = "Unknown error ";
    count = 76;
    char b[12] = "";
    int found = 0;
    char res[1000] = "";
    snprintf(b,10, "%d",errnum);
    strcat(baseMsg, b);  // заменить на s21_strcat
    for (int i = 0; i < count; i++) {
        if (errnum == errlist[i].id) {
            strcpy(res, errlist[i].null_str);
            found = 1;
            break;
        }
    }
#endif

    return (found) ? res : baseMsg;
}

s21_size_t s21_strlen(const char *str) {
    s21_size_t _len = 0;
    for (_len = 0; str[_len]; _len++) {}
    return _len;
}

// Расчет длины начального сегмента str1, полностью состоящий из str2
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

void *s21_to_upper(const char *str) {
    int flag;
    char dest[strlen(str)];
    if (str[0] == '\0') {
        flag = 0;
    } else {
        s21_strcpy(dest, str);
        for (s21_size_t j = 0; j < strlen(str); j++) {
            if (('a' <= dest[j] && 'z' >= dest[j])) {
                dest[j] += 'A' - 'a';
            }
        }
        flag = 1;
    }
    switch (flag)
    {
    case 1:
        char *copy_str = dest;
        return  copy_str;
    
    default:
        return NULL;
    }
    
}


void *s21_to_lower(const char *str) {
    int flag;
    char dest[strlen(str)];
    if (str[0] == '\0') {
        flag = 0;
    } else {
        s21_strcpy(dest, str);
        for (s21_size_t j = 0; j < strlen(str); j++) {
            if (('A' <= dest[j] && 'Z' >= dest[j])) {
                dest[j] += 'a' - 'A';
            }
        }
        flag = 1;
    }
    switch (flag)
    {
    case 1:
        char *copy_str = dest;
        return  copy_str;
    
    default:
        return NULL;
    }
}
