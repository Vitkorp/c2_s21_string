// Copyright [2022] <Copyright ONDREWVI>
#include "s21_string.h"
#include "s21_sprintf.h"
#include <stdio.h>

int s21_memcmp(const void *str1, const void *str2, s21_size_t n) {
    const char* string1 = (char*)str1;
    const char* string2 = (char*)str2;
    int flag = 0;
    s21_size_t i = 0;
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
    }
    if (string1[i] != string2[i] && (int)string1[i] < (int)string2[i]) {
        flag = ((int)string2[i] - (int)string1[i]) * (-1);
    }
    return flag;
}

// копирует n сивловов из src в dest
void *s21_memcpy(void *dest, const void *src, s21_size_t n) {
    char *to = (char *)dest;
    const char *from = (char *)src;
    for (s21_size_t i = 0; i < n; i++) {
        *to++ = *from++;
    }
    return dest;
}

// void* s21_memcpy(void* dest, const void* src, s21_size_t n) {
//   unsigned char* dest_ptr = (unsigned char*)dest;
//   const unsigned char* src_ptr = (const unsigned char*)src;

//   while (n--) *dest_ptr++ = *src_ptr++;
//   return dest;
// }

void *s21_memchr(const void *str, int c, s21_size_t n) {
    const char *src = (const char *)str;
    int flag = 0;
    while (n-- > 0) {
        if (*src == c) {
            flag = 1;
            break;
        }
        src++;
    }
    return flag ? (char *)src : S21_NULL;
}

// копирует n сивловов из src в dest. whithout overlap
void *s21_memmove(void *dest, const void *src, s21_size_t n) {
    char *to = (char *)dest;
    const char *from = (char *)src;

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

// char* s21_strcat(char* dest, const char* src) {
//     s21_strcpy(dest + s21_strlen(dest), src);
//     return dest;
// }


// Копирует символ c (беззнаковый тип) в первые n символов строки, на которую указывает аргумент str.
void *s21_memset(void *src, int c, s21_size_t n) {
    char *to = (char *)src;
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
        }
        if (str1[i] == '\n' || str2[i] == '\n' || str1[i] != str2[i]) {
            break;
        }
    }
    if (str1[i] != str2[i] && (int)str1[i] > (int)str2[i]) {
        flag = (int)str1[i] - (int)str2[i];
    }
    if (str1[i] != str2[i] && (int)str1[i] < (int)str2[i]) {
        flag = ((int)str2[i] - (int)str1[i]) * (-1);
    }
    return flag;
}


int s21_strncmp(const char *str1, const char *str2, s21_size_t n) {
    int flag = 0;
    s21_size_t i = 0;
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

char *s21_strchr(const char *str, int c) {
    s21_size_t i = 0;
    int found = 0;
    while (str[i] && str[i] != c) {
        i++;
        if (str[i] == c) {
            found = 1;
            break;
        }
    }
    return (found == 1) ? ((char *)(str + i)) : (char *)S21_NULL;
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
        if (exit_code == 1) {
            break;
        }
    }
    return exit_code ? _res : (char *)S21_NULL;
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

// char* s21_strcpy(char* dest, const char* src) {
//   return s21_memcpy(dest, src, s21_strlen(src) + 1);
// }


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


char *s21_strerror(int errnum) {
    err errlist[] = S21_ERRLIST;
    int count;
#if defined(__APPLE__) && defined(__MACH__)
    char baseMsg[1024] = {"Unknown error: "};
    count = 60;
    char b[12] = "";
    int found = 0;
    char res[1000] = {'\0'};
    snprintf(b, 10, "%d", errnum);
    s21_strcat(baseMsg, b);  // заменить на s21_strcat
    for (int i = 0; i < count; i++) {
        if (errnum == errlist[i].id) {
            s21_strcpy(res, errlist[i].null_str);
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
    s21_sprintf(b, "%d", errnum);
    s21_strcat(baseMsg, b);  // заменить на s21_strcat
    for (int i = 0; i < count; i++) {
        if (errnum == errlist[i].id) {
            s21_strcpy(res, errlist[i].null_str);
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

char *s21_strstr(const char *haystack, const char *needle) {
    const size_t needle_len = s21_strlen(needle);
    char *res = "";
    int exit_code = 0;
    while (*haystack != '\0') {
        // printf("%s\n", haystack);
        // printf("%d ", s21_strncmp(haystack, needle, needle_len));
        // printf("%d\n ", strncmp(haystack, needle, needle_len));
        // printf("%d\n", my_strncmp(haystack, needle, needle_len));
        if (s21_strncmp(haystack, needle, needle_len) == 0) {
            res = (char *)haystack;
            exit_code = 1;
            break;
        } else {
            haystack++;
        }
    }

    return exit_code ? res : (char *)S21_NULL;
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

char *s21_strrchr(const char *str, int c) {
    int found = 0;
    s21_size_t i;
    for (i = s21_strlen(str); i > 0; i--) {
        if (str[i] == c) {
            found = 1;
            break;
        }
    }
    return found ? ((char *)str + i) : (char *)S21_NULL;
}

// int main() {
//     char *src = "Hello world";
//     char *sub = "lo";
//     char *p;
//     char *native;
//     native = strstr(src, sub);
//     p = s21_strstr(src, sub);
//     printf("NATIVE - %s\n", native);
//     printf("MY - %s\n", p);
    
//     int test1;
//     int test2;
//     int test3;
//     test1 = strncmp(src, sub, s21_strlen(sub));
//     test2 = s21_strncmp(src, sub, s21_strlen(sub));
//     test3 = my_strncmp(src, sub, s21_strlen(sub));
//     printf("NATIVE - %d\n", test1);
//     printf("MY - %d\n", test2);
//     printf("ANOTHER - %d\n", test3);
// }

void *s21_to_upper(const char *str) {
  int flag;
  char *dest = malloc((s21_strlen(str) + 1) * sizeof(char));
  if (str[0] == '\0' || str == NULL || !dest) {
    flag = 0;
  } else {
    s21_strcpy(dest, str);
    for (s21_size_t j = 0; j < s21_strlen(str); j++) {
      if (('a' <= dest[j] && 'z' >= dest[j])) {
        dest[j] += 'A' - 'a';
      }
    }
    flag = 1;
  }
  char *copy_str;
  if (flag == 0) {
    copy_str = NULL;
  } else {
    copy_str = dest;
  }
  return copy_str;
}

// все в нижний регистр
void *s21_to_lower(const char *str) {
  int flag;
  char *dest = malloc((s21_strlen(str) + 1) * sizeof(char));
  if (str[0] == '\0' || str == NULL || !dest) {
    flag = 0;
  } else {
    s21_strcpy(dest, str);
    for (s21_size_t j = 0; j < s21_strlen(str); j++) {
      if (('A' <= dest[j] && 'Z' >= dest[j])) {
        dest[j] += 'a' - 'A';
      }
    }
    flag = 1;
  }
  char *copy_str;
  if (flag == 0) {
    copy_str = NULL;
  } else {
    copy_str = dest;
  }
  return copy_str;
}

/*Возвращает новую строку, в которой указанная строка (str)
вставлена в указанную позицию (start_index) в данной строке (src).
В случае какой-либо ошибки следует вернуть значение NULL*/

void *s21_insert(const char *src, const char *str, size_t start_index) {
  char *tmp = NULL;
  int flag = 0;
  s21_size_t size = s21_strlen(src) + s21_strlen(str) + 1;
  if (s21_strlen(src) >= start_index) {
    char *tmp = malloc(size * sizeof(char));
    if (tmp) {
      s21_strncpy(tmp, src, start_index);
      s21_strcpy(tmp + start_index, str);
      s21_strcpy(tmp + start_index + s21_strlen(str), src + start_index);
      flag = 1;
    }
  }
  char *copy_str;
  if (flag == 0) {
    copy_str = NULL;
  } else {
    copy_str = tmp;
  }
  return copy_str;
}

// void *s21_trim(const char *src, const char *trim_chars) {
//     char *result;
//     char *s2;
//     s21_size_t start;
//     s21_size_t end;
//     s21_size_t buf_size;
//     s2 = (char *)src;
//     result = 0;
//     if (src != 0 && trim_chars != 0) {
//         start = 0;
//         end = s21_strlen(src);
//         while (src[start] && s21_strchr(trim_chars, src[start]))
//             ++start;
//         while (src[end - 1] && s21_strchr(trim_chars, src[end - 1]) && end > start)
//             --end;
//         buf_size = end - start + 1;
//         result = (char *)malloc(sizeof(char) * (buf_size));
//         if (result)
//             s21_strncpy(result, &s2[start], (buf_size));
//     }
//     return (result);
// }
