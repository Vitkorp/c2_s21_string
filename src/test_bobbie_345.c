#include <stdio.h>  //Для printf
#include <string.h>
#include "s21_string.h"

void s21_strncpy_test();
void s21_strcpy_test();
void s21_memset_test();
void s21_c_test();
void s21_memcpy_test();

int main (void) {
   printf("\n\n00000 memcpy 00000\n");
   char buf1[50]="when farid puppin", buf2[50];
   memcpy(buf2, buf1, 15);
   printf(buf2);

   printf("\n\n22222 memcpy 22222\n");
   char q1[50] = "when farid puppin", q2[50];
   s21_memcpy(q2, q1, 15);
   printf(q2);

   char src[1024]="first str second str";
   printf ("\nsrc: %s\n",src);
   char *dst;
   dst = s21_to_upper(src);
   printf ("\ndst: %s\n", dst);

   char srcq[1024]="QWWERTY111qwerr FGH ghjkdSSC";
   printf ("\nsrcq: %s\n",srcq);
   char *dst1;
   dst1 = s21_to_lower(srcq);
   printf ("\ndst1: %s\n", dst1);

   return 0;
}

void s21_strncpy_test() {
   char dest[40];
   char src1[] = "1.It's Monday and it's raining";
   char src2[] = "2.It's Monday\0 and\0 it's raining";
   char src3[] = "3.It's 10th day off";
   char src4[] = "4.It's a dog: @";
   char src5[] = "5.It's tab: \t. It's bar:\n.";
   char dest1[40];

   printf("strncpy:");
   strncpy(dest,src1,15);
   printf("1/\n%s", dest);
   strncpy(dest,src2,15);
   printf("2/\n%s", dest);
   strncpy(dest,src3,15);
   printf("3/\n%s", dest);
   strncpy(dest,src4,strlen(src4));
   printf("4/\n%s", dest);
   strncpy(dest,src5,strlen(src5));
   printf("5/\n%s", dest);

   printf("\n\nS21_strncpy");
   s21_strncpy(dest1,src1,15);
   printf("\n%s", dest1);
   s21_strncpy(dest1,src2,15);
   printf("\n%s", dest1);
   s21_strncpy(dest1,src3,15);
   printf("\n%s", dest1);
   s21_strncpy(dest1,src4,strlen(src4));
   printf("\n%s", dest1);
   s21_strncpy(dest1,src5,strlen(src5));
   printf("\n%s", dest1);
}