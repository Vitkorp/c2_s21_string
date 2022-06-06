#include "s21_sprintf.h"
#include "s21_string.h"
#include <string.h>
#include <stdarg.h>
#include "atof.c"


// double s21_atof(const char *str) {
//     int i = 0;
//     double res = 0;
//     int sign = 1;
//     while (str[i] == '0' || str[i] == ' ') i++;
//         if (str[i] == '-') {
//             sign = -1;
//             i++;
//         }
//         while ('0' <= str[i] && str[i] <= '9') {
//             res = res * 10 + ((int)str[i] - '0');
//             i++;
//         }
//         short precision = 0;
//         if (str[i] == '.') {
//             i++;
//             while ('0' <= str[i] && str[i] <= '9') {
//                 res = res * 10 + ((int)str[i] - '0');
//                 i++;
//                 precision++;
//             }
//         }
//         // printf("precision = %d\n", precision);
//         res /= pow(10, precision);
//   return res * sign;
// }


int main() {
    char *tokenstring = "214.128 2 -993.4 x -112.94 60  5x ";                                  
    // char num[100];      
    // char v;
    int num1 = 0;   
    double fl = 0.0;     
    char vvv;
    int num2 = 0;       
    double fffl = 0.0;                                  
    // sscanf(tokenstring, "%i", &num1);
    sscanf(tokenstring, "%c %d %lf", &vvv, &num2, &fffl);
    s21_sscanf(tokenstring, "%f %d", &fl, &num1);
    // printf("%i", num1);
    printf("original - {%c}%d[%f]\n", vvv, num2, fffl);
    printf("s21_     - [%f]%d\n", fl, num1);
    return 0;
}

int s21_sscanf(const char *str, const char *format, ...) {
    va_list args;
    va_start(args, format);
    int count = 0;
    for (size_t i = 0; i < strlen(format); i++) {
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
                        *p = s21_atof(mass);
                        count++;
                        break;
                    }
                }
            }
        }
    }
    return count;
}

