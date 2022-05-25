#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "s21_sprintf.h"
#include "spec.h"

char *s21_spec_d(fmt format, regs regs);
// int l_or_h (fmt *format, const void *number);
char *width_flag_minus_space (fmt format, char *str);
char *width_flag_plus_plumin (fmt format, char *str);

// int main() {
//     long int i = 15;
//     // scanf("%ld", &i);
//     fmt format;
//     format.flags.minus = 1;
//     format.flags.plus = 0;
//     format.flags.space = 0;
//     format.precision.number = 6;
//     format.width.number = 10;
//     format.length.l = 0;
//     printf("\nrezult  = >%s<\n", int_to_str(&format, &i));
//     char TEMP[1000] = {0};
//     sprintf(TEMP, "%-+10.6ld", i);
//     printf("orig -+ = >%s<\n", TEMP);
//     sprintf(TEMP, "%+-10.6ld", i);
//     printf("orig +- = >%s<\n", TEMP);
//     sprintf(TEMP, "%-10.6ld", i);
//     printf("orig -  = >%s<\n", TEMP);
//     sprintf(TEMP, "%+10.6ld", i);
//     printf("orig +  = >%s<\n", TEMP);
//     sprintf(TEMP, "% 10.6ld", i);
//     printf("orig pr = >%s<\n", TEMP);
//     sprintf(TEMP, "%10.6ld", i);
//     printf("orig n  = >%s<\n", TEMP);
//     //sprintf(TEMP, "%.20Lf\n", f);
//     //printf("оригинал  = %s\n", TEMP);
//     return 0;
// }

// int l_or_h (fmt format, const void *number) {
//     if (format.length.h == 1) {
//         short int n = *((short int *)number);
        
//     } else if (format.length.h == 2) {
//         short int n = *((short int *)number);
        
//     } else if (format.length.l == 1) {
//         long long int n = *((long long int *)number);

//     } else if (format.length.l == 2) {
//         long long int n = *((long long int *)number);

//     } /*else {
//     } */
//     return 0;
// }

char *s21_spec_d(fmt format, regs regs) {
    static char str[10000] = {'\0'};
    // char empty_str[1000] = {0};
    long int num = *((long int *)regs.pValue);
    int i = 0, count = 0;
    if (num < 0) {
        num = num * -1;
    }
    long long int del = 1, copy_num = num;
    while (copy_num >= 10) {
        copy_num = copy_num / 10;
        del = del * 10;
        count++;
    }
    count++;
    while (del > 0) {
        str[i++] = '0' + num / del;
        num = num % del;
        del = del / 10;
    }
    int len = format.precision.number - (int)s21_strlen(str);
    char mass[1000] = {0};
    for (int i = 0; i < len; i++) {
        mass[i] = '0';
    }
    s21_strcat(mass, str);
    s21_strcpy(str, mass);

    if (format.width.number > (int)s21_strlen(mass)) {
        char *mass_1 = width_flag_minus_space (format, str);
        char *mass_2 = width_flag_plus_plumin (format, str);

        if (format.flags.minus == 1 && format.flags.plus == 1){
            char pluz[2] = "+";
            s21_strcat(pluz, str);
            s21_strcat(pluz, mass_2);
            s21_strcpy(str, pluz);
        } else if (format.flags.minus == 1) {
            s21_strcat(str, mass_1);
            
        } else if (format.flags.plus == 1) {
            char pluz[2] = "+";
            s21_strcat(pluz, str);
            s21_strcat(mass_2, pluz);
            s21_strcpy(str, mass_2);
        } else {
            s21_strcat(mass_2, str);
            s21_strcpy(str, mass_1);
        }
    }
    return &(str[0]);
}

char *width_flag_minus_space (fmt format, char *str) {
    int leng = format.width.number - (int)s21_strlen(str);
    char mass_2[1000] = {0};
    for (int i = 0; i < leng; i++) {
        mass_2[i] = ' ';
    }
    char *done = mass_2;
    return done;
}

char *width_flag_plus_plumin (fmt format, char *str) {
    int leng = format.width.number - (int)s21_strlen(str) - 1;
    char mass_2[1000] = {0};
    for (int i = 0; i < leng; i++) {
        mass_2[i] = ' ';
    }
    char *done = mass_2;
    return done;
}
