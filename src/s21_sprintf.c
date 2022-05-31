#include "s21_sprintf.h"
#include "s21_string.h"
#include "spec.h"




/**
 * @brief Вычисление положение конца сгмента формата включая символ спецификатора
 * 
 * @param str[in] исходная строка
 * @param start[in] стартовая позиция - положение символа '%'
 * @return int положение за спецификатором
 */
int endfmt(const char *str, int start) {
    int _pos = start;
    int len;
    if (str[start+1] == '%') {
        _pos += 1;
    } else if ((len = s21_strcspn(str + start, "cdeEfgGosuxXpni")) != 0) {
        _pos += len + 1;
    }
    return _pos;
}

int s21_atoi(const char *str) {
  int i = 0;
  int res = 0;
  int sign = 1;
  while (str[i] == '0' || str[i] == ' ') i++;
  if (str[i] == '-') {
    sign = -1;
    i++;
  }
  while ('0' <= str[i] && str[i] <= '9') {
    res = res * 10 + ((int)str[i] - '0');
    i++;
  }
  return res * sign;
}

// выделение памяти
char *retpointer(char *ptr, int count) {
    s21_size_t slen = (ptr) ? s21_strlen(ptr) : 0;
    if (slen <= (s21_size_t)count) {
        s21_strcat(ptr, "\0");
    }
    return ptr;
}

int checkSpec(fmt *val, const char *str) {
    int count = 0;
    if (*(str)) {
         val->spec = *str;
         count = 1;
    } else {
        val->spec = '?';
    }
    return count;
}

int checkFlags(fmt *val, const char *str) {
    int count = 1;
    switch (*str) {
        case '#': {
            val->flags.hash = 1;
            break;
        }
        case '-': {
            val->flags.minus = 1;
            break;
        }
        case '+': {
            val->flags.plus = 1;
            break;
        }
        case ' ': {
            val->flags.space = 1;
            break;
        }
        case '0': {
            val->flags.zero = 1;
            break;
        }
        default: {
            count = 0;
        }
    }
    return count;
}

int checkWidth(fmt *val, const char *str) {
    int count1 = 0;
    int count2 = 0;
    if ((count1 = s21_strspn(str,"0123456789")) != 0) {
        char *_res = malloc((count1 + 1) * sizeof(char));
        for (s21_size_t i = 0; i < (s21_size_t)(count1 + 1); i++) {
            _res[i] = str[i];
        }
        val->width.number = s21_atoi(_res);
        free(_res);
    }
    if ((count2 = s21_strspn(str,"*")) != 0) {
        val->width.starchar = 1;
    }
    return (count1) ? count1 : count2;
}

int checkDotPrecision(const char *str) {
    int count = 0;
    if (*str == '.') {
        count = 1;
    }
    return count;
}

int checkPrecision(fmt *val, const char *str) {
    int count1 = 0;
    int count2 = 0;
    if ((count1 = s21_strspn(str,"0123456789")) != 0) {
        char *_res = malloc((count1 + 1) * sizeof(char));
        for (s21_size_t i = 0; i < (s21_size_t)count1 + 1; i++) {
            _res[i] = str[i];
        }
        val->precision.number = s21_atoi(_res);
        free(_res);
    }
    if ((count2 = s21_strspn(str,"*")) != 0) {
        val->precision.starchar = 1;
    }
    return (count1) ? count1 : count2;
}

int parseStr(fmt *val, const char *fmtstr, int startFmtPosition, int len) {

    // printf("source: ");
    for (int i = 0; i < len; i++) printf("%c", fmtstr[startFmtPosition + i]);
    // printf("\nc = {%c}\n", fmtstr[startFmtPosition + len - 1]);
    checkSpec(val, &fmtstr[startFmtPosition + len - 1]);
    for (int i = startFmtPosition; i < startFmtPosition + len; ) {
        printf("%c", fmtstr[i]);
        int t = i;
        i += checkFlags(val, &fmtstr[i]);
        i += checkWidth(val, &fmtstr[i]);
        if (checkDotPrecision(&fmtstr[i])) {
            i++;
            i+= checkPrecision(val, &fmtstr[i]);
        }
        i += checkPrecision(val, &fmtstr[i]);
        if (i == t) i++;
        
    }
    return 0;
}

void * reuseRegister(void *val, void *newCell) {
    if (val != S21_NULL) {
        free(val);
    }
    return newCell;
}

regs prepareRegisters(fmt form, regs registers, va_list arglist) {
    if (form.width.starchar != 0) {
        int *p_val = malloc(sizeof(int));
        *p_val = va_arg(arglist, int);
        registers.pWidth = p_val;
    }

    if (form.precision.starchar != 0) {
        int *p_val = malloc(sizeof(int));
        *p_val = va_arg(arglist, int);
        registers.pPrecision = p_val;
    }

    // сканирование данных в соответствии с типами
    if (form.spec != '?') {
        switch (form.spec) {
            case 'c': {
                int *p_val = malloc(sizeof(int));
                *p_val = va_arg(arglist, int);
                registers.pValue = reuseRegister(registers.pValue, p_val);
                break;
            }
            case 'd': {
                long long int *p_val = malloc(sizeof(long long int));
                *p_val = va_arg(arglist, long long int);
                registers.pValue = reuseRegister(registers.pValue, p_val);
                break;
            }
            // case 'e': {
            //     break;
            // }
            // case 'E': {
            //     break;
            // }
            case 'f': {
                    long double *p_val = malloc(sizeof( long double));
                    *p_val = va_arg(arglist, double);
                    registers.pValue = reuseRegister(registers.pValue, p_val);
                // }
                break;
            }
            // case 'g': {
            //     break;
            // }
            // case 'G': {
            //     break;
            // }
            // case 'o': {
            //     break;
            // }
            case 's': {
                char *s = va_arg(arglist, char *);
                char *ps = malloc(s21_strlen(s) + 1);
                s21_strcpy(ps, s);
                registers.pValue = reuseRegister(registers.pValue, ps);
                break;
            }
            case 'u': {
                unsigned long long *p_val = malloc(sizeof(unsigned long long));
                *p_val = va_arg(arglist, unsigned long long);
                registers.pValue = reuseRegister(registers.pValue, p_val);
                break;
            }
            // case 'x': {                    
            //     break;
            // }
            // case 'X': {
            //     break;
            // }
            // case 'p': {
            //     break;
            // }
            // case 'n': {
            //     break;
            // }
            case 'i': {
                long long *p_val = malloc(sizeof(long long));
                *p_val = va_arg(arglist, long long);
                registers.pValue = reuseRegister(registers.pValue, p_val);
                break;
            }
            // case '%': {
            //     break;
            // }
            default: 
                break;
        }
    }
    return registers;
}   



regs clearRegisters(regs reg) {
    if (reg.pPrecision) {
        free(reg.pPrecision);
        reg.pPrecision = S21_NULL;
    }
    if (reg.pWidth) {
        free(reg.pWidth);
        reg.pWidth = S21_NULL;
    }
    if (reg.pValue) {
        free(reg.pValue);
        reg.pValue = S21_NULL;
    }
    return reg;
}



// int sprintf(char *str, const char *format, ...) 
int s21_sprintf(char *str, const char *format, ...) {
    va_list arglist;
    va_start(arglist, format);
    int count = 0;
    int i_src = 0;
    char *tmp = "";
    fmt form;


    while (format[i_src]) {
        // printf("count = %d, sym = %c\n", count, format[i_src]);
        if (format[i_src] != '%') {
            if ((tmp = retpointer(str, count)) != 0) {
                str = tmp;
                str[count] = format[i_src];
                i_src++;
                count++;
            }
        } else {
            
            form.flags.hash  = 0;
            form.flags.minus = 0;
            form.flags.plus  = 0;
            form.flags.space = 0;
            form.flags.zero  = 0;

            form.length.h = 0;
            form.length.l = 0;
            form.length.L = 0;
    
            form.precision.number   = -1;
            form.precision.starchar = 0;

            form.spec = '?';
    
            form.width.number   = -1;
            form.width.starchar = 0;
            // == '%'
            int startFmtPosition = i_src;
            int endFmrPosition   = endfmt(format, startFmtPosition);
            int len = endFmrPosition - startFmtPosition;
            if (len) {
                i_src += len + 0;
            } else {
                i_src++;
            }
            regs registers;
            registers.pPrecision = S21_NULL;
            registers.pValue     = S21_NULL;
            registers.pWidth     = S21_NULL;

            // printf("startFmtPosition={%d}, endFmrPosition={%d},   i_src = {%d}\n\n", startFmtPosition, endFmrPosition, i_src);
            parseStr(&form, format, startFmtPosition, len);
            registers = prepareRegisters(form, registers, arglist);
            // cdeEfgGosuxXpni

            // вызов целевых функций
            
            switch (form.spec) {
                case 'c': {
                    char *a = s21_spec_c(form, registers);
                    str = s21_strcat(str, a);
                    count += s21_strlen(a);
                    break;
                }
                case 'd': {
                    // if (registers.pWidth) {printf("registers.pWidth = {%4d}  ", *((int *)registers.pWidth));}
                    // if (registers.pPrecision) {printf("registers.pPrecision = {%4d}  ", *((int *)registers.pPrecision));}
                    // if (registers.pValue) {printf("registers.pValue = {%lld}  \n", *((long long int *)registers.pValue));}
                    char *a = s21_spec_d(form, registers);
                    str = s21_strcat(str, a);
                    count += s21_strlen(a);
                    break;
                }
                // case 'e': {
                //     break;
                // }
                // case 'E': {
                //     break;
                // }
                case 'f': {
                    // if (registers.pWidth) {printf("registers.pWidth = {%4d}  ", *((int *)registers.pWidth));}
                    // if (registers.pPrecision) {printf("registers.pPrecision = {%4d}  ", *((int *)registers.pPrecision));}
                    // if (registers.pValue) {printf("registers.pValue = {%Lf}  \n", *((long double *)registers.pValue));}
                    // s21_strcat(str, func_f(form, registers));
                    char *a = s21_spec_f(form, registers);
                    str = s21_strcat(str, a);
                    count += s21_strlen(a);
                    break;
                }
                // case 'g': {
                //     break;
                // }
                // case 'G': {
                //     break;
                // }
                // case 'o': {
                //     break;
                // }
                case 's': {
                    char *a = s21_spec_s(form, registers);
                    str = s21_strcat(str, a);
                    count += s21_strlen(a);
                    break;
                }
                case 'u': {
                    // if (registers.pWidth) {printf("registers.pWidth = {%4d}  ", *((int *)registers.pWidth));}
                    // if (registers.pPrecision) {printf("registers.pPrecision = {%4d}  ", *((int *)registers.pPrecision));}
                    // if (registers.pValue) {printf("registers.pValue = {%llu}  \n", *((unsigned long long int *)registers.pValue));}
                    char *a = s21_spec_d(form, registers);
                    str = s21_strcat(str, a);
                    count += s21_strlen(a);
                    break;
                }
                // case 'x': {
                //     break;
                // }
                // case 'X': {
                //     break;
                // }
                // case 'p': {
                //     break;
                // }
                // case 'n': {
                //     break;
                // }
                case 'i': {
                    char *a = s21_spec_d(form, registers);
                    str = s21_strcat(str, a);
                    count += s21_strlen(a);
                    break;
                }                
                case '%': {
                    //printf("%%\n");
                    str = s21_strcat(str, "%");
                    count++;
                    break;
                }
                default: 
                    break;
            }
            // printf("form.spec:  %c\n", form.spec);
            // printf("form.flags:\n{\n");
            // printf("      hash: %d\n", form.flags.hash);
            // printf("     minus: %d\n", form.flags.minus);
            // printf("      plus: %d\n", form.flags.plus);
            // printf("     space: %d\n", form.flags.space);
            // printf("      zero: %d\n}\n\n", form.flags.zero);

            // printf("form.width:\n{\n");
            // printf("    number: %d\n", form.width.number);
            // printf("  starchar: %d\n}\n\n", form.width.starchar);

            // printf("form.precision:\n{\n");
            // printf("    number: %d\n", form.precision.number);
            // printf("  starchar: %d\n}\n\n", form.precision.starchar);

            // printf("form.length:\n{\n");
            // printf("         h: %d\n", form.length.h);
            // printf("         l: %d\n", form.length.l);
            // printf("         L: %d\n}\n\n", form.length.L);

            registers = clearRegisters(registers);
        }
    }   
    str = tmp;
    va_end(arglist);
    return count;
}


// int main() {
//     int a = 1555;
//     char s[10000] = {'\0'};
//     printf("format: Heool!!!!!!! %%+-10.5d %%*.*d  d ddddddn\n");
//     int len = s21_sprintf(s, "Heool!!!!!!! %+-10.5d %*.*d  d ddddddn\n", a, 8, 6, 44);
//     printf("pointer = %p, len = %d\n  2.1: %s", s, len, s);
//     printf("\n===================================\n");

//     char x[10000] = {'\0'};
//     printf("Hello my friends! %%%% %%d %%s %%-010d %%*.*f in the air\n");
//     len = s21_sprintf(x, "Hello my friends! %% %d %s %-010d %*.*f in the air\n", a+10, "airp5", 125, 20, 19, 18.0);
//     printf("pointer = %p, len = %d\n  2.2: %s", x, len, x);
//     printf("\n===================================\n");

//     char y[10000] = {'\0'};
//     printf("Hello my friends! %%%%%%d%%s%%-010d %%*.*f in the air\n");
//     len = s21_sprintf(y, "Hello my friends! %%%d%s%-010d %*.*f in the air\n", a+10, "airp+5", 125, 20, 19, 18.0);
//     printf("pointer = %p, len = %d\n  2.3: %s", y, len, y);
//     printf("\n===================================\n");
//     // sprintf(s, "Hello %----+#######8.5 lj k  %endl\n");
//     // printf("%s", s);
//     // sprintf(s, "Hello %\n");
//     // printf("%s", s);
//     // sprintf(s, "%e\n");
//     // printf("%s", s);
//     // sprintf(s, "%s\n");
//     // printf("%s", s);
//     // sprintf(s, "%c\n");
//     // printf("%s", s);
//     // sprintf(s, "%d\n");
//     // printf("%s", s);
//     // sprintf(s, "%lu\n");
//     // printf("%s", s);
//     // sprintf(s, "%llu\n");
//     // printf("%s", s);
//     // sprintf(s, "%lld\n");
//     // printf("%s", s);

//     return 0;
// }

// // #include <s21_sprintf.h>

// // int main () {
// //     return 0;
// // }
