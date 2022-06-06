// я в шоке. оно работает!!!!!

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "s21_sprintf.h"

void unsigned_int_to_str (unsigned long int number, char *str);
char *spec_u(fmt *format, const void *number);
char *precision_umsigned_int(fmt *format, char *str, unsigned long int num);
char *width_add_space(fmt *format, char *str);

int main () {
   unsigned int i;
   scanf("%u", &i);
   fmt format;
   format.flags.minus = 0;
   format.flags.plus  = 0;
   format.flags.space = 0;
   format.precision.number = 10;
   format.width.number     = 5;
   format.length.l = 0;

   printf("\nrezalt  = >%s<\n", spec_u(&format, &i));
   char TEMP[1000] = {0};
   sprintf(TEMP, "%-+5.10u", i);
   printf("orig -+ = >%s<\n", TEMP);
   sprintf(TEMP, "%+-5.10u", i);
   printf("orig +- = >%s<\n", TEMP);

   sprintf(TEMP, "%-5.10u", i);
   printf("orig -  = >%s<\n", TEMP);
   sprintf(TEMP, "%+5.10u", i);
   printf("orig +  = >%s<\n", TEMP);

   sprintf(TEMP, "% 5.10u", i);
   printf("orig pr = >%s<\n", TEMP);
   sprintf(TEMP, "%5.10u", i);
   printf("orig n  = >%s<\n", TEMP);
   /*char str[80];
   unsigned int u = -1;
   scanf("%u", &u);
   printf("width = 13, precision = 5\n");
   // sprintf(str, "Value 0 =  >%013.5u<", u);
   // puts(str);
   // sprintf(str, "Value +- = >%+-13.5u<", u);
   // puts(str);
   // sprintf(str, "Value -+ = >%-+13.5u<", u);
   puts(str);
   sprintf(str, "Value  - = >%-13.5u<", u);
   puts(str);
   // sprintf(str, "Value  + = >%+13.5u<", u);
   // puts(str);
   // sprintf(str, "Value  ''= >% 13.5u<", u);
   puts(str);*/
   return(0);
}

void unsigned_int_to_str (unsigned long int number, char *str) {
   unsigned long long int del = 1, copy_number = number;
   while (copy_number >= 10) {
        copy_number = copy_number / 10;
        del = del * 10;
    }
    while (del > 0) {
        *str++ = '0' + number / del;
        number = number % del;
        del = del / 10;
    }
    *str++ = '\0';
}

char *spec_u(fmt *format, const void *number) {
    static char str[1000] = {'\0'};
    unsigned long int num = *((unsigned long int *)number);
    char *mass_precision = precision_umsigned_int(format, str, num);
    strcpy(str, mass_precision);
    if ((format -> flags.minus == 1)) {
        char *mass_width = width_add_space(format, str);
        strcat(str, mass_width);
    } else {
        char *mass_width = width_add_space(format, str);
        strcat(mass_width, str);
        strcpy(str, mass_precision);
    }
    return &(str[0]);
}

char *precision_umsigned_int(fmt *format, char *str, unsigned long int num) {
    unsigned_int_to_str((unsigned long int)num, str);
    int len = format -> precision.number - (int)strlen(str);
    char mass[1000] = {0};
    for (int i = 0; i < len; i++) {
        mass[i] = '0';
    }
    strcat(mass, str);
    char *done = mass;
    return done;
}

char *width_add_space(fmt *format, char *str) {
    char mass_2[1000] = {0};
    int leng = format -> width.number - (int)strlen(str);
   for (int i = 0; i < leng; i++) {
      mass_2[i] = ' ';
   }
    mass_2[-1] = '\0';
    char *done = mass_2;
    return done;
}
