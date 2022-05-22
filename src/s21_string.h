
#ifndef SRC_S21_STRING_H_
#define SRC_S21_STRING_H_
#include <stdio.h>

typedef long unsigned s21_size_t;

void *s21_memcpy(void *dest, const void *src, s21_size_t n);
void *s21_memmove(void *dest, const void *src, s21_size_t n);
void *s21_memset(void *str, int c, s21_size_t n);
char *s21_strcpy(char *dest, const char *src);
char *s21_strncpy(char *dest, const char *src, s21_size_t n);
void *s21_to_upper(const char *str);
void *s21_to_lower(const char *str);
void *s21_insert(const char *src, const char *str, s21_size_t start_index);
void *trim(const char *src, const char *trim_chars);
s21_size_t s21_strlen(const char *str);

#endif  // SRC_S21_STRING_H_
