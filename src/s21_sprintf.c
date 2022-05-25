
#include "s21_sprintf.h"



/**
 * @brief Вычисление положение конца сгмента формата до символа спецификатора
 * 
 * @param str исходная строка
 * @param start стартовая позиция - положение символа '%'
 * @return int положение перед спецификатором
 */
int endfmt(const char *str, int start) {
    int _pos = start;
    int len;
    if ((len = s21_strcspn(str + start, "cdeEfgGosuxXpni")) != 0) {
        _pos += len + 1;
    } else if ((len = s21_strcspn(str + start, "%")) != 0) {
        _pos = 1;
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
    printf("source: %s\n", fmtstr);
    printf("c = {%c}\n", fmtstr[startFmtPosition + len - 1]);
    checkSpec(val, &fmtstr[startFmtPosition + len - 1]);
    for (int i = startFmtPosition + 1; i < startFmtPosition + len; ) {
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
    printf("\n");
    return 0;
}

void reuseRegister(void *val, void *newCell) {
    if (val) {
        free(val);
    }
    val = newCell;
}

void prepareRegisters(fmt form, regs *registers, va_list arglist) {
    if (form.width.starchar != 0) {
        int *p_val = malloc(sizeof(int));
        *p_val = va_arg(arglist, int);
        registers->pWidth = p_val;
    }

    if (form.precision.starchar != 0) {
        int *p_val = malloc(sizeof(int));
        *p_val = va_arg(arglist, int);
        registers->pPrecision = p_val;
    }

    // сканирование данных в соответствии с типами
    if (form.spec != '?') {
        switch (form.spec) {
            case 'c': {
                int *p_val = malloc(sizeof(int));
                *p_val = va_arg(arglist, int);
                reuseRegister(registers->pValue, p_val);
                break;
            }
            case 'd': {
                long long *p_val = malloc(sizeof(long long));
                *p_val = va_arg(arglist, long long);
                reuseRegister(registers->pValue, p_val);
                break;
            }
            // case 'e': {
            //     break;
            // }
            // case 'E': {
            //     break;
            // }
            case 'f': {
                // if (!form.length.L) {
                //     double *p_val = malloc(sizeof(double));
                //     *p_val = va_arg(arglist, double);
                //     reuseRegister(registers->pValue, p_val);
                // } else {
                    long double *p_val = malloc(sizeof(long double));
                    *p_val = va_arg(arglist, long double);
                    reuseRegister(registers->pValue, p_val);
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
                reuseRegister(registers->pValue, va_arg(arglist, char *));
                break;
            }
            case 'u': {
                unsigned long long *p_val = malloc(sizeof(unsigned long long));
                *p_val = va_arg(arglist, unsigned long long);
                reuseRegister(registers->pValue, p_val);
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
                reuseRegister(registers->pValue, p_val);
                break;
            }
            // case '%': {
            //     break;
            // }
            default: 
                break;
        }
    }
}   



void clearRegisters(regs *reg) {
    if (reg->pPrecision) {
        free(reg->pPrecision);
        reg->pPrecision = S21_NULL;
    }

    if (reg->pWidth) {
        free(reg->pWidth);
        reg->pWidth = S21_NULL;
    }

    if (reg->pValue) {
        free(reg->pValue);
        reg->pValue = S21_NULL;
    }
}

// int sprintf(char *str, const char *format, ...) 
int s21_sprintf(char *str, const char *format, ...) {
    va_list arglist;
    va_start(arglist, format);
    int count = 0;
    int i_src = 0;
    char *tmp = "";
    fmt form;

    // инициализация структуры fmt значениями по умолчанию
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

    
    while (format[i_src]) {
        if (format[i_src] != '%') {
            count++;
            printf("count = %d, sym = %c\n", count, format[i_src]);
            if ((tmp = retpointer(str, count)) != 0) {
                str = tmp;
                str[count - 1] = format[i_src];
            }
        } else {
            // == '%'
            int startFmtPosition = i_src;
            int endFmrPosition   = endfmt(format, startFmtPosition);
            int len = endFmrPosition - startFmtPosition;
            regs registers;
            registers.pPrecision = S21_NULL;
            registers.pValue     = S21_NULL;
            registers.pWidth     = S21_NULL;

            printf("startFmtPosition={%d}, endFmrPosition={%d}\n\n", startFmtPosition, endFmrPosition);
            parseStr(&form, format, startFmtPosition, len);
            prepareRegisters(form, &registers, arglist);
            // cdeEfgGosuxXpni

            // вызов целевых функций
            
            switch (form.spec) {
                case 'c': {
                    if (registers.pWidth) {printf("registers.pWidth = {%4d}  ", *((int *)registers.pWidth));}
                    if (registers.pPrecision) {printf("registers.pPrecision = {%4d}  ", *((int *)registers.pPrecision));}
                    if (registers.pValue) {printf("registers.pValue = {%c}  \n", *((char *)registers.pValue));}
                    break;
                }
                case 'd': {
                    if (registers.pWidth) {printf("registers.pWidth = {%4d}  ", *((int *)registers.pWidth));}
                    if (registers.pPrecision) {printf("registers.pPrecision = {%4d}  ", *((int *)registers.pPrecision));}
                    if (registers.pValue) {printf("registers.pValue = {%ld}  \n", *((long int *)registers.pValue));}
                    break;
                }
                // case 'e': {
                //     break;
                // }
                // case 'E': {
                //     break;
                // }
                case 'f': {
                    if (registers.pWidth) {printf("registers.pWidth = {%4d}  ", *((int *)registers.pWidth));}
                    if (registers.pPrecision) {printf("registers.pPrecision = {%4d}  ", *((int *)registers.pPrecision));}
                    if (registers.pValue) {printf("registers.pValue = {%Lf}  \n", *((long double *)registers.pValue));}
                    // s21_strcat(str, func_f(form, registers));
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
                    if (registers.pWidth) {printf("registers.pWidth = {%4d}  ", *((int *)registers.pWidth));}
                    if (registers.pPrecision) {printf("registers.pPrecision = {%4d}  ", *((int *)registers.pPrecision));}
                    if (registers.pValue) {printf("registers.pValue = {%s}  \n", (char *)registers.pValue);}
                    break;
                }
                case 'u': {
                    if (registers.pWidth) {printf("registers.pWidth = {%4d}  ", *((int *)registers.pWidth));}
                    if (registers.pPrecision) {printf("registers.pPrecision = {%4d}  ", *((int *)registers.pPrecision));}
                    if (registers.pValue) {printf("registers.pValue = {%lu}  \n", *((unsigned long int *)registers.pValue));}
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
                    if (registers.pWidth) {printf("registers.pWidth = {%4d}  ", *((int *)registers.pWidth));}
                    if (registers.pPrecision) {printf("registers.pPrecision = {%4d}  ", *((int *)registers.pPrecision));}
                    if (registers.pValue) {printf("registers.pValue = {%ld}  \n", *((long int *)registers.pValue));}
                    break;
                }                
                case '%': {
                    printf("%%\n");
                    s21_strcat(str, "%");
                    
                    break;
                }
                default: 
                    break;
            }
            printf("form.spec:  %c\n", form.spec);
            printf("form.flags:\n {");
            printf("      hash: %d\n", form.flags.hash);
            printf("     minus: %d\n", form.flags.minus);
            printf("      plus: %d\n", form.flags.plus);
            printf("     space: %d\n", form.flags.space);
            printf("      zero: %d\n}\n\n", form.flags.zero);

            printf("form.width:\n {");
            printf("    number: %d\n", form.width.number);
            printf("  starchar: %d\n}\n\n", form.width.starchar);

            printf("form.precision:\n {");
            printf("    number: %d\n", form.precision.number);
            printf("  starchar: %d\n}\n\n", form.precision.starchar);

            printf("form.length:\n {");
            printf("         h: %d\n", form.length.h);
            printf("         l: %d\n", form.length.l);
            printf("         L: %d\n}\n\n", form.length.L);




            // char *fmtstr = "";
            // for (int i = 0; i < len; i++) {
            //     s21_strncat(fmtstr, "\0", 1);
            // }
            // tmp = s21_strncpy(fmtstr, format + startFmtPosition + 1, len);
            // parseStr(&form, tmp);
            // char *tmp2 = s21_strcat(str, "\0");
            // i_src += len - 1;
            clearRegisters(&registers);
        }
        i_src++;
    }   
    str = tmp;
    va_end(arglist);
    return count;
}

int main() {
    int a = 5;
    char s[10000] = {'\0'};
    int len = s21_sprintf(s, "Heool!!!!!!! %+-10.5 d ddddddn\n", a);
    printf("pointer = %p, len = %d\n  2.1: %s", s, len, s);
    printf("\n===================================\n");

    len = s21_sprintf(s, "Hello my friends! %% %d %s %-010din the air\n", a+10, "airplane+5", 125);
    printf("pointer = %p, len = %d\n  2.1: %s", s, len, s);
    printf("\n===================================\n");
    // sprintf(s, "Hello %----+#######8.5 lj k  %endl\n");
    // printf("%s", s);
    // sprintf(s, "Hello %\n");
    // printf("%s", s);
    // sprintf(s, "%e\n");
    // printf("%s", s);
    // sprintf(s, "%s\n");
    // printf("%s", s);
    // sprintf(s, "%c\n");
    // printf("%s", s);
    // sprintf(s, "%d\n");
    // printf("%s", s);
    // sprintf(s, "%lu\n");
    // printf("%s", s);
    // sprintf(s, "%llu\n");
    // printf("%s", s);
    // sprintf(s, "%lld\n");
    // printf("%s", s);

    return 0;
}

// #include <s21_sprintf.h>

// int main () {
//     return 0;
// }