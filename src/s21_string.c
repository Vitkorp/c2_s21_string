// Copyright [2022] <Copyright Bobbie>
// #include <string.h>
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

char *s21_strncat(char *dest, const char *src, s21_size_t n) {
    char *tmp = dest;
    int i = s21_strlen(dest), j = 0;
    if (n > 0) {
        while (src[j] != '\0') {
            tmp[i + j] = src[j];
            j++;
            n--;
            if (n == 0) {
                tmp[i + j] = '\0';
                break;
            }
        }
    }

    return dest;
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
    char baseMsg[1024] = "Unknown error ";
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
    s21_size_t i;
    s21_size_t j;
    int found = 0;
    for (i = 0; (i < s21_strlen(str1)) && (found == 0); i++) {
        for (j = 0; (j < s21_strlen(str2)) && (found == 0); j++) {
            if (str2[j] == str1[i]) {
                found = 1;
            }
        }
    }
    return found ? ((char *)str1 + i - 1) : S21_NULL;
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
    // if (!*needle)
    //     return (char *) haystack;
    int exit_code = 0;
    char *_res = "";
    char needle_first;
    char   *sub_start;

    if (*needle) {
        needle_first = *needle;

        haystack = s21_strchr(haystack, needle_first);
        if (haystack) {
            // exit_code = 1;
            // return s21_NULL;
        
            const char *i_haystack = haystack + 1,
                       *i_needle   = needle   + 1;

            unsigned int sums_diff = *haystack;
            short identical = 1;

            while (*i_haystack && *i_needle) {
                sums_diff += *i_haystack;
                sums_diff -= *i_needle;
                identical &= *i_haystack++ == *i_needle++;
            }

            if (*i_needle) {
                exit_code = 1;  // == s21_NULL
                // return s21_NULL;
            } else if (identical) {
                exit_code = -1;  // == s21_NULL
                // return (char *) haystack;
            } else {

                s21_size_t needle_len = i_needle - needle;
                s21_size_t needle_len_1 = needle_len - 1;

                for (sub_start = haystack; *i_haystack; i_haystack++) {
                    sums_diff -= *sub_start++;
                    sums_diff += *i_haystack;

                    if (
                        sums_diff == 0
                        && needle_first == *sub_start
                        && memcmp(sub_start, needle, needle_len_1) == 0 //заменить memcmp на s21_memcmp
                    ) {
                        exit_code = 2;  // (char *) sub_start
                        break;
                    }
                }
                if (exit_code == 0) {
                    exit_code = 1;
                }
            }
        } else {
            exit_code = 1;  // == s21_NULL
        }
    } else {
        exit_code = -1;  // == (char *) haystack
    }

    if (exit_code == -1) {
        _res = (char *) haystack;
    } else if (exit_code == 1) {
        _res = S21_NULL;
    } else if (exit_code == 2) {
        _res = (char *) sub_start;
    }

    return _res;
}
