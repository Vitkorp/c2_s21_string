#include "s21_sprintf.h"
#include "s21_string.h"
#include <string.h>
#include <stdarg.h>

int main() {
    char *tokenstring = "02.0 -111 60  5x ";                                  
    // char num[100];      
    char v;
    int num1 = 0;       
    double fl = 0.0;                                                   
    // sscanf(tokenstring, "%i", &num1);
    s21_sscanf(tokenstring, "%d %c %f", &num1, &v, &fl);
    // printf("%i", num1);
    printf("%d%c%f", num1, v, fl);
    return 0;
}

int s21_sscanf(const char *str, const char *format, ...) {
    va_list args;
    va_start(args, format);
    int count = 0;
    for (size_t i = 0; i < s21_strlen(format); i++) {
        if (format[i] == '%' && format[i + 1] != '*') {
            if (format[i + 1] == 'c' || format[i + 1] == 'd' || format[i + 1] == 'i' || format[i + 1] == 'f' || format[i + 1] == 's' || format[i + 1] == 'u' || format[i + 1] == '%') {
                switch(format[i + 1]) {
                    case 'c': {
                        char *p = va_arg(args, char*);
                        *p = *str++;
                        count++;
                        break;      
                    }
                    case 'd': {
                        char mass[20] = {0};
                        for (int j = 0; *str != ' '; j++) {
                            mass[j] = *str++;
                        }
                        int *p = va_arg(args, int*);
                        *p = s21_atoi(mass);
                        count++;
                        break;    
                    }
                    // case 'i': {
                    //     char mass[20] = {0};
                    //     for (int j = 0; *str != ' '; j++) {
                    //         mass[j] = *str++;
                    //     }
                    // }
                    case 'f': {
                        char mass[30] = {0};
                        for (int j = 0; *str != ' '; j++) {
                            mass[j] = *str++;
                        }
                        double *p = va_arg(args, double*);
                        *p = atof(mass);
                        count++;
                        break;
                    }
                }
            }
        }
    }
    return count;
}

