// работают все функции для декомпозиции ширины. работает случай, когда точность больше ширины и число отрицательное или флаг +
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "s21_sprintf.h"
char *spec_d_u(fmt *format, const void *number);
// int l_or_h (fmt *format, const void *number);
char *width_flag_minus(fmt *format, char *str, int flag);
char *width_flag_plus(fmt *format, char *str, int flag);
void *int_to_str(long long int number, char *str);
char *width_plus_short(fmt *format, char *str, int flag);
char *width_min_short(fmt *format, char *str, int flag);
char *precision_int(fmt *format, char *str, long int num);

int main() {
    long int i;
    scanf("%ld", &i);
    fmt format;
    format.flags.minus = 0;
    format.flags.plus  = 0;
    format.flags.space = 0;
    format.precision.number = 10;
    format.width.number     = 5;
    format.length.l = 0;

    printf("\nrezalt  = >%s<\n", spec_d_u(&format, &i));
    char TEMP[1000] = {0};
    sprintf(TEMP, "%-+5.10ld", i);
    printf("orig -+ = >%s<\n", TEMP);
    sprintf(TEMP, "%+-5.10ld", i);
    printf("orig +- = >%s<\n", TEMP);

    sprintf(TEMP, "%-5.10ld", i);
    printf("orig -  = >%s<\n", TEMP);
    sprintf(TEMP, "%+5.10ld", i);
    printf("orig +  = >%s<\n", TEMP);

    sprintf(TEMP, "% 5.10ld", i);
    printf("orig pr = >%s<\n", TEMP);
    sprintf(TEMP, "%5.10ld", i);
    printf("orig n  = >%s<\n", TEMP);
    // sprintf(TEMP, "%.20Lf\n", f);
    // printf("оригинал  = %s\n", TEMP);
    return 0;
}

/*int l_or_h (fmt *format, const void *number) {
    if (format -> length.h == 1) {
        short int n = *((char *)number);
        
    } else if (format -> length.h == 2) {
        short int n = *((short int *)number);
        
    } else if (format -> length.l == 1) {
        long long int n = *((long long int *)number);

    } else if (format -> length.l == 2) {
        long long int n = *((long long int *)number);

    } else {
        
    }
    return 0;
}*/

void *int_to_str(long long int number, char *str) {
    if (number < 0) {
        number = number * -1;
    }
    long long int del = 1, copy_number = number;
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
    return 0;
}

char *spec_d_u(fmt *format, const void *number) {
    static char str[1000] = {'\0'};
    long int num = *((long int *)number);
    int i = 0, count = 0, flag = 0;
    if (num < 0) {
        flag = 1;
    }
    char *mass_precision = precision_int(format, str, num);
    strcpy(str, mass_precision);
    if (format -> width.number > (int)strlen(mass_precision)) {
        if ((format -> flags.minus == 1) && (format -> flags.plus == 1)) {
            char *mass_width = width_plus_short(format, str, flag);
            strcpy(str, mass_width);
        } else if (format -> flags.minus == 1) {
            char *mass_width = width_min_short(format, str, flag);
            strcpy(str, mass_width);
        } else if (format -> flags.plus == 1) {
            char *mass_width = width_plus_short(format, str, flag);
            strcpy(str, mass_width);
        } else {
            char *mass_width = width_min_short(format, str, flag);
            strcpy(str, mass_width);
        }
    } else {
        if (flag != 0) {
            char minuz[2] = "-";
            strcat(minuz, str);
            strcpy(str, minuz);
        } else {
            if (((format -> flags.minus == 1) && (format -> flags.plus == 1)) || format -> flags.plus == 1) {
                char pluz[2] = "+";
                strcat(pluz, str);
                strcpy(str, pluz);
            } else if (format -> flags.space == 1) {
                char spaze[2] = " ";
                strcat(spaze, str);
                strcpy(str, spaze);
            }
        }
    }
    return &(str[0]);
}

char *width_flag_minus(fmt *format, char *str, int flag) {
    char mass_2[1000] = {0};
    int leng = format -> width.number - (int)strlen(str);
    if (flag == 0 && format -> flags.plus == 0 /*&& format -> flags.space == 0*/) {
        for (int i = 0; i < leng; i++) {
            mass_2[i] = ' ';
        }
    } else {
        for (int i = 0; i < (leng - 1); i++) {
            mass_2[i] = ' ';
        }
    }
    mass_2[-1] = '\0';
    char *done = mass_2;
    return done;
}

char *width_plus_short(fmt *format, char *str, int flag) {
    char *mass_1 = width_flag_minus(format, str, flag);
    char mass_2[1000] = {0};
    if (flag != 0) {
        char minuz[2] = "-";
        strcat(minuz, str);
        if (format -> flags.minus != 1) {
            strcat(mass_1, minuz);
        } else {
            strcat(minuz, mass_1);
            strcpy(mass_1, minuz);
        }
    } else {
        char pluz[2] = "+";
        strcat(pluz, str);
        if (format -> flags.minus != 1) {
            strcat(mass_1, pluz);
        } else {
            strcat(pluz, mass_1);
            strcpy(mass_1, pluz);
        }
    }
    return mass_1;
}

char *width_min_short(fmt *format, char *str, int flag) {
    char *mass_1 = width_flag_minus(format, str, flag);
    char mass_2[1000] = {0};
    if (flag != 0) {
        char minuz[2] = "-";
        strcat(minuz, str);
        if (format -> flags.minus != 0) {
            strcat(minuz, mass_1);
            strcpy(mass_1, minuz);
            strcpy(mass_2, mass_1); 
        } else {
            strcat(mass_1, minuz);
            strcpy(mass_2, mass_1);
        }
    } else {
        if (format -> flags.minus != 0) {
            char min_copy[1000] = {0};
            strcpy(min_copy, str);
            strcat(min_copy, mass_1);
            strcpy(mass_2, min_copy);
        } else {
            strcat(mass_1, str);
            strcpy(mass_2, mass_1);
        }
    }
    char *done = mass_2;
    return done;
}

char *precision_int(fmt *format, char *str, long int num) {
    int_to_str((long long)num, str);
    int len = format -> precision.number - (int)strlen(str);
    char mass[1000] = {0};
    for (int i = 0; i < len; i++) {
        mass[i] = '0';
    }
    strcat(mass, str);
    char *done = mass;
    return done;
}
