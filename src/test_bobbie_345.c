#include <stdio.h>  //Для printf
#include <string.h>
#include "s21_string.h"

void s21_strncpy_test();

int main (void) {
   #ifdef STRNCPY
        s21_strncpy_test();
   #endif
   
   /*// Массив источник данных
   unsigned char src[10]="123456";
 
   // Массив приемник данных
   unsigned char dst[10]="";

   // Копируем 6 байт из массива src в массив dst
   memcpy(dst, src, 4);

   // Вывод массива dst на консоль
   printf ("dst: %s\n",dst);*/

   

   return 0;
}

void s21_strncpy_test() {
   char str1[]= "To be or not to be";
   char str2[40];
   char str3[40];


   s21_strncpy(str2, str1, 8);
   str2[8] = '\0';

   s21_strncpy(str3, str2, 5);
   str3[5] = '\0';

   puts (str1);
   puts (str2);
   puts (str3);
}