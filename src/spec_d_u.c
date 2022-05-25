#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "s21_sprintf.h"
#include "spec.h"

char *s21_spec_d(fmt format, regs regs);
// int l_or_h (fmt *format, const void *number);
char *width_flag_minus_space (fmt *format, char *str);
char *width_flag_plus_plumin (fmt *format, char *str);

int l_or_h (fmt *format, const void *number) {
    if (format -> length.h == 1) {
        short int n = *((char *)number);
        
    } else if (format -> length.h == 2) {
        short int n = *((short int *)number);
        
    } else if (format -> length.l == 1) {
        long long int n = *((long long int *)number);

    } else if (format -> length.l == 2) {
        long long int n = *((long long int *)number);

    } /*else {
        
    } */
    return 0;
}

char *int_to_str(fmt *format, const void *number) {
    static char str[1000] = {'\0'};
    char empty_str[1000] = {0};
    long int num = *((long int *)number);
    int i = 0, count = 0, flag = 0;
    if (num < 0) {
        num = num * -1;
        flag = 1;
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
    str[i++] = '\0';
    int len = format -> precision.number - (int)strlen(str);
    char mass[1000] = {0};
    for (int i = 0; i < len; i++) {
        mass[i] = '0';
    }
    strcat(mass, str);
    strcpy(str, mass);

    if (format -> width.number > (int)strlen(mass)) {
        if ((format -> flags.minus == 1) && (format -> flags.plus == 1)){
            int leng = format -> width.number - (int)strlen(str) - 1;
            char mass_2[leng];
            for (int i = 0; i < leng; i++) {
                mass_2[i] = ' ';
            }
            if (flag != 0) {
                char minuz[2] = "-";
                strcat(minuz, str);
                strcat(minuz, mass_2);
                strcpy(str, minuz);
            } else {
                char pluz[2] = "+";
                strcat(pluz, str);
                strcat(pluz, mass_2);
                strcpy(str, pluz);
            }
        } else if (format -> flags.minus == 1) {
            int leng = format -> width.number - (int)strlen(str);
            char mass_2[leng];
            for (int i = 0; i < leng; i++) {
                mass_2[i] = ' ';
            }
            if (flag != 0) {
                char minuz[2] = "-";
                strcat(minuz, str);
                strcpy(str, minuz);
                strcat(str, mass_2);
            } else {
                strcat(str, mass_2);
            }
            
        } else if (format -> flags.plus == 1) {
            int leng = format -> width.number - (int)strlen(str) - 1;
            char mass_2[leng];
            for (int i = 0; i < leng; i++) {
                mass_2[i] = ' ';
            }
            if (flag != 0) {
                char minuz[2] = "-";
                strcat(minuz, str);
                strcpy(str, minuz);
                strcat(mass_2, minuz);
                strcpy(str, mass_2);
            } else {
                char pluz[2] = "+";
                strcat(pluz, str);
                strcat(mass_2, pluz);
                strcpy(str, mass_2);
            }
        } else {
            if (flag != 0) {
                int leng = format -> width.number - (int)strlen(str) - 1;
                char mass_2[leng];
                for (int i = 0; i < leng; i++) {
                    mass_2[i] = ' ';
                }
                char minuz[2] = "-";
                strcat(minuz, str);
                strcpy(str, minuz);
                strcat(mass_2, minuz);
                strcpy(str, mass_2);
            } else {
                int leng = format -> width.number - (int)strlen(str);
                char mass_2[leng];
                for (int i = 0; i < leng; i++) {
                    mass_2[i] = ' ';
                }
                strcat(mass_2, str);
                strcpy(str, mass_2);
            }
            // strcat(mass_2, str);
            // strcpy(str, mass_2);
        }
    }
    /*if (format -> width.number > (int)strlen(mass)) {
        char *mass_1 = width_flag_minus_space (format, str);
        char *mass_2 = width_flag_plus_plumin (format, str);

        if (format -> flags.minus == 1 && format -> flags.plus == 1){
            char pluz[2] = "+";
            strcat(pluz, str);
            strcat(pluz, mass_2);
            strcpy(str, pluz);
        } else if (format -> flags.minus == 1) {
            strcat(str, mass_1);
            
        } else if (format -> flags.plus == 1) {
            char pluz[2] = "+";
            strcat(pluz, str);
            strcat(mass_2, pluz);
            strcpy(str, mass_2);
        } else {
            strcat(mass_1, str);
            strcpy(str, mass_1);
        }
    }*/
    return &(str[0]);
}

char *width_flag_minus_space (fmt *format, char *str) {
    int leng = format -> width.number - (int)strlen(str);
    char mass_1[1000] = {0};
    int i;
    for (i = 0; i < leng; i++) {
        mass_1[i] = ' ';
    }
    mass_1[i++] = '\0';
    char *done = mass_1;
    return done;
}

char *width_flag_plus_plumin (fmt *format, char *str) {
    int leng = format -> width.number - (int)strlen(str) - 1;
    char mass_2[1000] = {0};
    int i;
    for (int i = 0; i < leng; i++) {
        mass_2[i] = ' ';
    }
    mass_2[i++] = '\0';
    char *done = mass_2;
    return done;
}
