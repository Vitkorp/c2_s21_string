#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "s21_sprintf.h"

char *s21_spec_f(fmt *format, const void *val) {
    // static char mass[4000] = {'\0'};
    const char *s = *((char *)val);
    

    // int i = 0;

    return &(s[0]);
}

int main() {
    const char *s = (char*) calloc(10000, sizeof(char));
    for (long unsigned i = 0; i < sizeof(s); i++) {
        scanf("%c", &s[i]);
    }
     
    fmt format;
    format.flags.minus = 0;
    format.flags.plus = 0;
    format.flags.space = 0;
    format.precision.number = 6;
    format.width.number = 20;
    format.length.L = 0;
    
    printf("%s", s21_spec_f(&format, &s));
    free(s);
    return 0;
}
