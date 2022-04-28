#include "s21_string.h"
//#include <string.h>

void *s21_memchr(const void *str, int c, size_t n) {
    size_t i;
    for (i = 0; i < n; i++)
        if (*((char *)str + i) == c) 
            return (char *)str + i;
    return NULL;
}

char *s21_strchr(const char *str, int c) {
    int i = 0;
    while (str[i] && str[i] != c){
        ++i;
        if (str[i] == c)
            return (char *)str + i;
    }
    return NULL;
}

char *s21_strpbrk(const char *str1, const char *str2) {
    size_t i;
    size_t j;
    for (i = 0; i < s21_strlen(str1); i++) {
        for (j = 0; j < s21_strlen(str2); j++) {
            if (str2[j] == str1[i]) {
                return (char *)str1 + i;
            }
        }
    }

    return NULL;
}

size_t s21_strlen(const char *str) {
    int _len = 0;
    for (_len = 0; *str; str++, _len++) {}
    return _len;
}

 
int main ()
{    
   // Массив со строкой для поиска
   char str [11] = "NAIL";
   // Набор символов, которые должны входить в искомый сегмент
   char sym [10]="ROA";
   // Переменная, в которую будет занесен адрес первого найденного символа
   char *isym;

   //Поиск символов
   isym = (char *)s21_strpbrk (str,sym);

   //Вывод результата поиска на консоль
   if ( isym == NULL)
      printf ("Символы не найдены\n");
   else
      printf ("Искомый символ на позиции %lld\n", isym - str + 1);

   return 0;
}