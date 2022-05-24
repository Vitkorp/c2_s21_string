#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "s21_sprintf.h"

char *s21_spec_s(fmt *format, const void *val) {
    char *mass = {'\0'};
    mass = (char *)val;
    
    if (format -> flags.minus == 1 && format -> width.number > 1) {
        int leng = format -> width.number - (int)strlen(mass);
        char mass_2[1000] = {0};
        for (int i = 0; i < leng; i++) {
            mass_2[i] = ' ';
        }
        strcat(mass, mass_2);
    } else if (format -> flags.minus != 1 && format -> width.number > 1) {
        int leng = format -> width.number - (int)strlen(mass);
        char mass_2[1000] = {0};
        for (int i = 0; i < leng; i++) {
            mass_2[i] = ' ';
            // printf("[%c]", mass_2[i]);
        }
        strcat(mass_2, mass);
        strcpy(mass, mass_2);
    }
    return mass;
}

int main() {
    char s[19999];
    scanf("%s", s);
    fmt format;
    format.flags.minus = 1;
    format.flags.plus = 0;
    format.flags.space = 0;
    format.precision.number = 6;
    format.width.number = 15;
    format.length.L = 0;
    
    printf("%s", s21_spec_s(&format, &s));
    return 0;
}
