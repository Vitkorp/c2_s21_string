#ifndef SRC_S21_2_9_10_H_
#define SRC_S21_2_9_10_H_

#include <stdio.h>
#include <string.h>
/*
 * 2. Сравнивает первые n байтов str1 и str2. 
 */
int s21_memcmp(const void *str1, const void *str2, size_t n);

/*
 * 10. Сравнивает не более первых n байтов str1 и str2.
 */
int s21_strncmp(const char *str1, const char *str2, size_t n);

/*
 * 9. Сравнивает строку, на которую указывает str1, со строкой, на которую указывает str2.
 */
int s21_strcmp(const char *str1, const char *str2);

#endif  //  SRC_S21_2_9_10_H_