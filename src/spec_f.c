#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "s21_sprintf.h"

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

char *s21_spec_f(fmt *format, const void *val) {
    static char mass[10000] = {'\0'};
    long double num = *((long double *)val);
    long double exp = 0.0;
    long double n = 0.0;
    int i = 0;
    if (num <= -0.0) {
        mass[i++] = '-';
        num *= -1;
    }
    exp = modfl(num, &n);
    short num_deci_digits = format -> precision.number;
    long long deci_num = n;
    if (deci_num == 0) {
        mass[i++] = '0';
    }
    while(num_deci_digits >= 0) {
        int exponent = pow(10, num_deci_digits);
		int res = deci_num / exponent;
		if(res > 0) {
			break;
		}
	    num_deci_digits--;
	}
    num_deci_digits += 1;
    for (int j = num_deci_digits; j > 0; j--) {
        int exponent = pow(10, j - 1);
        int res = deci_num / exponent;
        mass[i++] = res + 48;
        deci_num %= exponent;
    }
    if(format -> precision.number != 0) {
        mass[i++] = '.';
    }
    for (int j = 0; j < format -> precision.number; j++) {
        exp *= 10.0;
    }
    char mass_2[32] = {'\0'};
    exp = roundl(exp);
    int_to_str(exp, mass_2);
    strcat(mass, mass_2);

    if (format -> flags.minus == 1 && format -> width.number > (int)strlen(mass)) {
        int leng = format -> width.number - (int)strlen(mass);
        char mass_2[leng];
        for (int i = 0; i < leng; i++) {
            mass_2[i] = ' ';
        }
        strcat(mass, mass_2);
    } else if (format -> flags.minus != 1 && format -> width.number > (int)strlen(mass)) {
        int leng = format -> width.number - (int)strlen(mass);
        char mass_2[leng];
        for (int i = 0; i < leng; i++) {
            mass_2[i] = ' ';
        }
        strcat(mass_2, mass);
        strcpy(mass, mass_2);
    }

    return &(mass[0]);
}

int main() {
    long double f = 0.0;
    scanf("%Lf", &f);
    fmt format;
    format.flags.minus = 0;
    format.flags.plus = 0;
    format.flags.space = 0;
    format.precision.number = 6;
    format.width.number = 20;
    format.length.L = 0;
    
    printf("%s", s21_spec_f(&format, &f));
    return 0;
}

/* 
typedef struct _flags {
    int minus;
    int plus;
    int space;
    int hash;
    int zero;
} fl; */