#include "s21_sprintf.h"
#include "s21_string.h"
// #include "spec.h"



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
            // printf("startFmtPosition={%d}, endFmrPosition={%d},   i_src = {%d}\n\n", startFmtPosition, endFmrPosition, i_src);
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
            // printf("\n\n ********************** end format part *********************** \n\n");

            registers = clearRegisters(registers);
        }
    }   
    str = tmp;
    va_end(arglist);
    return count;
}



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
        _pos += 2;
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
    if (str[0] == '0') val->flags.zero = 1;
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

int checkLength(fmt *val, const char *str) {
    int i = 0;
    switch (str[i]) {
        case 'l':
            val->length.l++;
            break;
        case 'L':
            val->length.L++;
            break;
        case 'h':
            val->length.h++;
            break;
        default:
            i--;
            break;
    }
    i++;
    // if (str[i]) i--;
    return i;
}

int parseStr(fmt *val, const char *fmtstr, int startFmtPosition, int len) {

    // отладочная информация
    // for (int i = 0; i < len; i++) printf("%c", fmtstr[startFmtPosition + i]);
    // printf("\n\n");


    checkSpec(val, &fmtstr[startFmtPosition + len - 1]);
    for (int i = startFmtPosition + 1; i < startFmtPosition + len - 1; ) {
        // printf("%c", fmtstr[i]);

        int t = i;
        i += checkFlags(val, &fmtstr[i]);

        i += checkWidth(val, &fmtstr[i]);
        if (checkDotPrecision(&fmtstr[i])) {
            i++;
            i+= checkPrecision(val, &fmtstr[i]);
        }
        i += checkLength(val, &fmtstr[i]);
        if (i == t) i++;
        // printf("i = %d\n", i);
    }

    printf("\n");
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
                unsigned long long int *p_val = malloc(sizeof(unsigned long long int));
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
                long long int *p_val = malloc(sizeof(long long int));
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

void *dec_to_str(long long int number, char *str) {
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

char *s21_spec_s(fmt format, regs regs) {
    char *mass = {'\0'};
    mass = (char *)regs.pValue;
    
    if (format.flags.minus == 1 && format.width.number > 1) {
        int leng = format.width.number - (int)s21_strlen(mass);
        char mass_2[1000] = {0};
        for (int i = 0; i < leng; i++) {
            mass_2[i] = ' ';
        }
        s21_strcat(mass, mass_2);
    } else if (format.flags.minus != 1 && format.width.number > 1) {
        int leng = format.width.number - (int)s21_strlen(mass);
        char mass_2[1000] = {0};
        for (int i = 0; i < leng; i++) {
            mass_2[i] = ' ';
            // printf("[%c]", mass_2[i]);
        }
        s21_strcat(mass_2, mass);
        s21_strcpy(mass, mass_2);
    }
    return mass;
}

char *s21_spec_f(fmt format, regs regs) {
    static char mass[10000] = {'\0'};
    long double num = *((long double *)regs.pValue);
    long double exp = 0.0;
    long double n = 0.0;
    int i = 0;
    if (num < 0.0 || signbit(num) != 0) {
        mass[i++] = '-';
        num *= -1;
    }
    exp = modfl(num, &n);
    int num_deci_digits = format.precision.number;
    long long deci_num = n;
    if (deci_num == 0) {
        mass[i++] = '0';
    }
    while(num_deci_digits >= 0) {
        long long exponent = pow(10, num_deci_digits);
		long long res = deci_num / exponent;
		if(res > 0) {
			break;
		}
	    num_deci_digits--;
	}
    num_deci_digits += 1;
    for (int j = num_deci_digits; j > 0; j--) {
        long long exponent = pow(10, j - 1);
        long long res = deci_num / exponent;
        mass[i++] = res + 48;
        deci_num %= exponent;
    }
    if(format.precision.number != 0) {
        mass[i++] = '.';
    }
    for (int j = 0; j < format.precision.number; j++) {
        exp *= 10.0;
    }
    char mass_buff[32] = {'\0'};
    exp = roundl(exp);
    long long buff_exp = exp;
    int count = 0;

    while (buff_exp != 0) {
        buff_exp /= 10;
        count++;
    }
    // printf("counter = %d", count);
    // printf("\nprecision %d\n", format -> precision.number);
    for (int i = 0; i < format.precision.number - count; i++) {
        mass_buff[i] = '0';
        // printf("i %d, ", i);
    }
    // printf("buf[%s]", mass_buff);
    char mass_str[32] = {'\0'};
    // printf("\nexp = [%Lf]", exp);
    dec_to_str((long long)exp, mass_str);
    // printf("\nstr[%s]", mass_str);
    if (count != 0) {
        s21_strcat(mass_buff, mass_str);
    }
        s21_strcat(mass, mass_buff);
    if (format.flags.minus == 1 && format.width.number > (int)s21_strlen(mass)) {
        int leng = format.width.number - (int)s21_strlen(mass);
        char mass_2[1000] = {0};
        for (int i = 0; i < leng; i++) {
            mass_2[i] = ' ';
        }
        s21_strcat(mass, mass_2);
    } else if (format.flags.minus != 1 && format.width.number > (int)s21_strlen(mass)) {
        int leng = format.width.number - (int)s21_strlen(mass);
        char mass_2[1000] = {0};
        for (int i = 0; i < leng; i++) {
            mass_2[i] = ' ';
        }
        s21_strcat(mass_2, mass);
        s21_strcpy(mass, mass_2);
    }
    return &(mass[0]);
}

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

char *s21_spec_d(fmt format, regs regs) {
    static char str[1000] = {'\0'};
    long int num = *((long int *)regs.pValue);
    int i = 0, count = 0, flag = 0;
    if (num < 0) {
        num = num * -1;
        flag = 1;
    }
    long long int del = 1, copy_num = num;
    while (copy_num >= 10) {
        copy_num = copy_num / 10;
        del = del * 10;
        count++;
    }
    count++;
    while (del > 0) {
        str[i++] = '0' + num / del;
        num = num % del;
        del = del / 10;
    }
    str[i++] = '\0';
    int len = format.precision.number - (int)s21_strlen(str);
    char mass[1000] = {0};
    for (int i = 0; i < len; i++) {
        mass[i] = '0';
    }
    s21_strcat(mass, str);
    s21_strcpy(str, mass);

    if (format.width.number > (int)s21_strlen(mass)) {
        if ((format.flags.minus == 1) && (format.flags.plus == 1)){
            int leng = format.width.number - (int)s21_strlen(str) - 1;
            char mass_2[1000] = {0};
            for (int i = 0; i < leng; i++) {
                mass_2[i] = ' ';
            }
            if (flag != 0) {
                char minuz[2] = "-";
                s21_strcat(minuz, str);
                s21_strcat(minuz, mass_2);
                s21_strcpy(str, minuz);
            } else {
                char pluz[2] = "+";
                s21_strcat(pluz, str);
                s21_strcat(pluz, mass_2);
                s21_strcpy(str, pluz);
            }
        } else if (format.flags.minus == 1) {
            int leng = format.width.number - (int)s21_strlen(str);
            char mass_2[1000] = {0};
            for (int i = 0; i < leng; i++) {
                mass_2[i] = ' ';
            }
            if (flag != 0) {
                char minuz[2] = "-";
                s21_strcat(minuz, str);
                s21_strcpy(str, minuz);
                s21_strcat(str, mass_2);
            } else {
                s21_strcat(str, mass_2);
            }
            
        } else if (format.flags.plus == 1) {
            int leng = format.width.number - (int)s21_strlen(str) - 1;
            char mass_2[1000] = {0};
            for (int i = 0; i < leng; i++) {
                mass_2[i] = ' ';
            }
            if (flag != 0) {
                char minuz[2] = "-";
                s21_strcat(minuz, str);
                s21_strcpy(str, minuz);
                s21_strcat(mass_2, minuz);
                s21_strcpy(str, mass_2);
            } else {
                char pluz[2] = "+";
                s21_strcat(pluz, str);
                s21_strcat(mass_2, pluz);
                s21_strcpy(str, mass_2);
            }
        } else {
            if (flag != 0) {
                int leng = format.width.number - (int)s21_strlen(str) - 1;
                char mass_2[1000] = {0};
                for (int i = 0; i < leng; i++) {
                    mass_2[i] = ' ';
                }
                char minuz[2] = "-";
                s21_strcat(minuz, str);
                s21_strcpy(str, minuz);
                s21_strcat(mass_2, minuz);
                s21_strcpy(str, mass_2);
            } else {
                int leng = format.width.number - (int)s21_strlen(str);
                char mass_2[1000] = {0};
                for (int i = 0; i < leng; i++) {
                    mass_2[i] = ' ';
                }
                s21_strcat(mass_2, str);
                s21_strcpy(str, mass_2);
            }
            // strcat(mass_2, str);
            // strcpy(str, mass_2);
        }
    }
        /*if (format -> width.number > (int)strlen(s21_
        if (format -> flags.minus == 1 && format -> flags.plus == 1){
            char pluz[2] = "+";
            strcat(pluz, str);
            strcat(pluz, mass_2);
            strcpy(str, pluz);
        } else if (format -> flags.minus == 1) {
            strcat(str, mass_1);
            
        } else if (format -> flags.plus == 1) {
            char pluz[2] = "+";
            strcat(pluz, str);
            strcat(mass_2, pluz);
            strcpy(str, mass_2);
        } else {
            strcat(mass_1, str);
            strcpy(str, mass_1);
        }
    }*/
    return &(str[0]);
}


char *width_flag_minus_space (fmt *format, char *str) {
    int leng = format -> width.number - (int)s21_strlen(str);
    char mass_1[1000] = {0};
    int i;
    for (i = 0; i < leng; i++) {
        mass_1[i] = ' ';
    }
    mass_1[i++] = '\0';
    char *done = mass_1;
    return done;
}

char *width_flag_plus_plumin (fmt *format, char *str) {
    int leng = format -> width.number - (int)s21_strlen(str) - 1;
    char mass_2[1000] = {0};
    int i = 0;;
    for (int i = 0; i < leng; i++) {
        mass_2[i] = ' ';
    }
    mass_2[i++] = '\0';
    char *done = mass_2;
    return done;
}




// int main() {
//     int a = 1555;
//     char s1[10000] = {'\0'};
//     char s2[10000] = {'\0'};
//     double f = 15.5;
    //printf("format: Heool!!!!!!! %%+-10.5d %%*.*d  d ddddddn\n");
    // int len = s21_sprintf(s, "Heool!!!!!!! %+-10.5d %*.*d  d ddddddn\n", a, 8, 6, 44);
    // int len2 = sprintf(s2, "Heool!!!!!!! %+-10.5d %*.*d  d ddddddn\n", a, 8, 6, 44);
    // printf("pointer  = %15p, len  = %10d   res: %s", s, len, s);
    // printf("pointer2 = %15p, len2 = %10d  res2: %s", s2, len2, s2);
    // printf("\n===================================\n");

    // int len = s21_sprintf(s1, "hello %f\n", f);
    // int len2 = sprintf(s2, "hello %f\n", f);
    // printf("res1: %s", s1);
    // printf("res2: %s", s2);
    // printf("\n===================================\n");

    // char x[10000] = {'\0'};
    // char x2[10000] = {'\0'};
    // //printf("Hello my friends! %%%% %%d %%s %%-010d %%*.*f in the air\n");
    // len = s21_sprintf(x, "Hello my friends! %% %d %s %-010d %*.*f in the air\n", a+10, "airp5", 125, 20, 19, 18.0);
    // len2 = sprintf(x2, "Hello my friends! %% %d %s %-010d %*.*f in the air\n", a+10, "airp5", 125, 20, 19, 18.0);
    // printf("pointer  = %15p, len  = %10d   res: %s", x, len, x);
    // printf("pointer2 = %15p, len2 = %10d  res2: %s", x2, len2, x2);
    // printf("\n===================================\n");

    // char y[10000] = {'\0'};
    // char y2[10000] = {'\0'};
    // //printf("Hello my friends! %%%%%%d%%s%%-010d %%*.*f in the air333\n");
    // len = s21_sprintf(y, "Hello my friends! %%%d%s%-010d %*.*f in the air   \n", a+10, "airp+5", 125, 20, 19, 18.0);
    // len2 = sprintf(y2, "Hello my friends! %%%d%s%-010d %*.*f in the air   \n", a+10, "airp+5", 125, 20, 19, 18.0);
    // printf("pointer  = %15p, len  = %10d   res: %s", y, len, y);
    // printf("pointer2 = %15p, len2 = %10d  res2: %s", y2, len2, y2);
    // printf("\n===================================\n");

    // char z[10000] = {'\0'};
    // char z2[10000] = {'\0'};
    // //printf("Hello my friends! %%%%%%d%%s%%-010d %%*.*f in the air333\n");
    // len = s21_sprintf(z, "Hello my friends! %%%d%s%010d %015.8f in the air  %c %4c  \n", a+10, "airp+5", 125, 20, 19, 18.123, 'f', 'g');
    // len2 = sprintf(z2, "Hello my friends! %%%d%s%010d %015.8f in the air  %c %4c  \n", a+10, "airp+5", 125, 20, 19, 18.123, 'f', 'g');
    // printf("pointer  = %15p, len  = %10d   res: %s", z, len, z);
    // printf("pointer2 = %15p, len2 = %10d  res2: %s", z2, len2, z2);
    // printf("\n===================================\n");

    // len = s21_sprintf(s, "Heool!!!!!!! %+-10.5d %*.*lld  d ddddddn\n", a, 8, 6, 44);
    // len2 = sprintf(s2, "Heool!!!!!!! %+-10.5d %*.*lld  d ddddddn\n", a, 8, 6, 44);
    // printf("pointer  = %15p, len  = %10d   res: %s", s, len, s);
    // printf("pointer2 = %15p, len2 = %10d  res2: %s", s2, len2, s2);
    // printf("\n===================================\n");

    // len = s21_sprintf(s, "Heool!!!!!!! %+-10.5ld %*.*hd  d ddddddn\n", a, 8, 6, 44);
    // len2 = sprintf(s2, "Heool!!!!!!! %+-10.5ld %*.*hd  d ddddddn\n", a, 8, 6, 44);
    // printf("pointer  = %15p, len  = %10d   res: %s", s, len, s);
    // printf("pointer2 = %15p, len2 = %10d  res2: %s", s2, len2, s2);
    // printf("\n===================================\n");

    // len = s21_sprintf(s, "Heool!!!!!!! %+-10.5Ld %*.*hd  d ddddddn\n", a, 8, 6, 44);
    // len2 = sprintf(s2, "Heool!!!!!!! %+-10.5Ld %*.*hd  d ddddddn\n", a, 8, 6, 44);
    // printf("pointer  = %15p, len  = %10d   res: %s", s, len, s);
    // printf("pointer2 = %15p, len2 = %10d  res2: %s", s2, len2, s2);
    // printf("\n===================================\n");

    // len = s21_sprintf(s, "Heool!!!!!!! %+-010.5Ld %*.*hd  d ddddddn\n", a, 8, 6, 44);
    // len2 = sprintf(s2, "Heool!!!!!!! %+-010.5Ld %*.*hd  d ddddddn\n", a, 8, 6, 44);
    // printf("pointer  = %15p, len  = %10d   res: %s", s, len, s);
    // printf("pointer2 = %15p, len2 = %10d  res2: %s", s2, len2, s2);
    // printf("\n===================================\n");


    // len = s21_sprintf(s, "Heool!!!!!!! %+-10.5Ld %f  d ddddddn\n", a, 8, 6, 44.38726384);
    // len2 = sprintf(s2, "Heool!!!!!!! %+-10.5Ld %f  d ddddddn\n", a, 8, 6, 44.38726384);
    // printf("pointer  = %15p, len  = %10d   res: %s", s, len, s);
    // printf("pointer2 = %15p, len2 = %10d  res2: %s", s2, len2, s2);
    // printf("\n===================================\n");
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

//     return 0;
// }


// // #include <s21_sprintf.h>

// // int main () {
// //     return 0;
// // }
