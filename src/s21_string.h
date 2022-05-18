#ifndef S21_STRING_GELLERTI_S21_STRING_H
#define S21_STRING_GELLERTI_S21_STRING_H

#define s21_NULL (void*)0
typedef long unsigned s21_size_t;

s21_size_t s21_strlen(const char *str);
char *s21_strcat(char *dest, const char *src);
char *s21_strncat(char *dest, const char *src, s21_size_t n);
char *s21_strtok(char * str, const char * delim);

//добавить в s21_dtring.c
s21_size_t s21_strspn(const char *str1, const char *str2);
s21_size_t s21_strcspn(const char *str1, const char *str2);
#endif //S21_STRING_GELLERTI_S21_STRING_H
