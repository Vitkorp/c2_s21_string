#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "s21_sprintf.h"

char *s21_spec_c(fmt *format, const void *val) {
    static char mass[100] = {'\0'};
    char c = *((char *)val);
    int i = 0;
    mass[i] = c;
    
     if (format -> flags.minus == 1 && format -> width.number > 1) {
        int leng = format -> width.number - 1;
        char mass_2[leng];
        for (int i = 0; i < leng; i++) {
            mass_2[i] = ' ';
        }
        strcat(mass, mass_2);
    } else if (format -> flags.minus != 1 && format -> width.number > 1) {
        int leng = format -> width.number - 1;
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
    char c;
    scanf("%c", &c);
    fmt format;
    format.flags.minus = 1;
    format.flags.plus = 0;
    format.flags.space = 0;
    format.precision.number = 6;
    format.width.number = 20;
    format.length.L = 0;
    
    printf("%s", s21_spec_f(&format, &c));
    return 0;
}
