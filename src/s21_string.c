// Copyright [2022] <Copyright Bobbie>
#include "s21_string.h"

#include <stdlib.h>
#include <string.h>

typedef long unsigned s21_size_t;

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

// Копирует символ c (беззнаковый тип) в первые n символов строки, на которую
// указывает аргумент str.
void *s21_memset(void *src, int c, s21_size_t n) {
  char *to = src;
  for (s21_size_t i = 0; i < n; i++) {
    *to++ = c;
  }
  return src;
}

// Копирует строку, на которую указывает src, в dest.
char *s21_strcpy(char *dest, const char *src) {
  int i = 0;
  while (src[i]) {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
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

// все в верхний регистр
void *s21_to_upper(const char *str) {
  int flag;
  char *dest = malloc((strlen(str) + 1) * sizeof(char));
  if (str[0] == '\0' || str == NULL || !dest) {
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
  char *dest = malloc((strlen(str) + 1) * sizeof(char));
  if (str[0] == '\0' || str == NULL || !dest) {
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
  char *tmp;
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
