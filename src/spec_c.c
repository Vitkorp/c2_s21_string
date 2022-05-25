#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "s21_sprintf.h"
#include "spec.h"

char *s21_spec_c(fmt format, regs regs) {
    const void *val = regs.pValue;
    static char mass[100] = {'\0'};
    char c = *((char *)val);
    int i = 0;
    mass[i] = c;
    
     if (format.flags.minus == 1 && format.width.number > 1) {
        int leng = format.width.number - 1;
        char mass_2[100] = {0};
        for (int i = 0; i < leng; i++) {
            mass_2[i] = ' ';
        }
        s21_strcat(mass, mass_2);
    } else if (format.flags.minus != 1 && format.width.number > 1) {
        int leng = format.width.number - 1;
        char mass_2[100] = {0};
        for (int i = 0; i < leng; i++) {
            mass_2[i] = ' ';
        }
        s21_strcat(mass_2, mass);
        s21_strcpy(mass, mass_2);
    }
    return &(mass[0]);
}

// int main() {
//     char c;
//     scanf("%c", &c);
//     fmt format;
//     format.flags.minus = 1;
//     format.flags.plus = 0;
//     format.flags.space = 0;
//     format.precision.number = 6;
//     format.width.number = 20;
//     format.length.L = 0;
//     printf("%s", s21_spec_f(&format, &c));
//     return 0;
// }
