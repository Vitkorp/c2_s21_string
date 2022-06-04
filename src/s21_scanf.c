#include "s21_scanf.h"
#include <string.h>
#include <stdarg.h>

int main() {
    char *tokenstring = " -10111 60  5x ";                                  
    // char num[100];      
    char n;     
    int num1 = 1;                                                                                             
    sscanf(tokenstring, "%d%c", &num1, &n);
    // s21_sscanf(tokenstring, "%f", &s21_f);
    printf("%d%c", num1, n);
    return 0;
}


int s21_sscanf(const char *str, const char *format, ...) {
    va_list arglist;
    va_start(arglist, format);
    char spec;
    char tmp_string[12000] = {0};
    int str_i;
    for (int i = 0; i < s21_strlen(format); i++) {
        if (format[i] == '%' && format[++i] != '*') {
            if (format[++i] == 'c' || format[++i] == 'd' || format[++i] == 'i' || format[++i] == 'f' || format[++i] == 's' || format[++i] == 'u' || format[++i] == '%') {
                spec = ++i;
                switch(spec) {
                    case 'c': {
                        char c = *str++;
                        
                        break;      
                    }
                }
            }
        }
    }
    return 0;
}

