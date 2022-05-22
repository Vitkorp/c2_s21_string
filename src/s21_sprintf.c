
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
    if (len = s21_strcspn(str + start, "cdeEfgGosuxXpni")) {
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
    char *tmp2;
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
    if (count1 = s21_strspn(str,"0123456789")) {
        char *_res = malloc((count1 + 1) * sizeof(char));
        for (size_t i = 0; i < count1 + 1; i++) {
            _res[i] = str[i];
        }
        val->width.number = s21_atoi(_res);
        free(_res);
    }
    if (count2 = s21_strspn(str,"*")) {
        val->width.starchar = 1;
    }
    return (count1) ? count1 : count2;
}

int checkDotPrecision(fmt *val, const char *str) {
    int count = 0;
    if (*str == '.') {
        count = 1;
    }
    return count;
}

int checkPrecision(fmt *val, const char *str) {
    int count1 = 0;
    int count2 = 0;
    if (count1 = s21_strspn(str,"0123456789")) {
        char *_res = malloc((count1 + 1) * sizeof(char));
        for (size_t i = 0; i < count1 + 1; i++) {
            _res[i] = str[i];
        }
        val->precision.number = s21_atoi(_res);
        free(_res);
    }
    if (count2 = s21_strspn(str,"*")) {
        val->precision.starchar = 1;
    }
    return (count1) ? count1 : count2;
}

int parseStr(fmt *val, const char *fmtstr, int startFmtPosition, int len) {
    printf("%s\n", fmtstr);
    checkSpec(val, &fmtstr[startFmtPosition + len - 1]);
    for (int i = startFmtPosition; i < startFmtPosition + len; ) {
        printf("%c", fmtstr[i]);
        i += checkFlags(val, &fmtstr[i]);
        i += checkWidth(val, &fmtstr[i]);
        if (int x = checkDotPrecision(val, &fmtstr[i])) {
            i++;
            i+= checkPrecision(val, &fmtstr[i]);
        }
        i += checkPrecision(val, &fmtstr[i]);
    }
    printf("\n");
    return 0;
}

void prepareRegisters(fmt form, regs *registers, int *argc, va_list arglist) {
    if (form.width != -1) {
        registers->width = *((int *)va_arg(arglist, int));
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

    form.flags.hash  = 0;
    form.flags.minus = 0;
    form.flags.plus  = 0;
    form.flags.space = 0;
    form.flags.zero  = 0;

    form.length.l_short  = -1;
    form.length.starchar = 0;
    
    form.precision.number   = -1;
    form.precision.starchar = 0;

    form.spec = '?';
    
    form.width.number   = -1;
    form.width.starchar = 0;

    
    while (format[i_src]) {
        if (format[i_src] != '%') {
            count++;
            printf("count = %d, sym = %c\n", count, format[i_src]);
            if (tmp = retpointer(str, count)) {
                str = tmp;
                str[count - 1] = format[i_src];
            }
        } else {
            // == '%'
            int startFmtPosition = i_src;
            int endFmrPosition   = endfmt(format, startFmtPosition);
            int len = endFmrPosition - startFmtPosition;
            regs registers;
            registers.precision = S21_NULL;
            registers.value     = S21_NULL;
            registers.width     = S21_NULL;

            printf("startFmtPosition={%d}, endFmrPosition={%d}\n\n", startFmtPosition, endFmrPosition);
            parseStr(&form, format, startFmtPosition, len);
            prepareRegisters(form, &registers, arglist);
            // cdeEfgGosuxXpni
            switch (form.spec): {
                case 'c': {
                    // func_c(form, void *v1, void *v2, void *v3)
                    break;
                }
                case 'd': {
                    break;
                }
                case 'e': {
                    break;
                }
                case 'E': {
                    break;
                }
                case 'f': {
                    break;
                }
                case 'g': {
                    break;
                }
                case 'G': {
                    break;
                }
                case 'o': {
                    break;
                }
                case 's': {
                    break;
                }
                case 'u': {
                    break;
                }
                case 'x': {
                    break;
                }
                case 'X': {
                    break;
                }
                case 'p': {
                    break;
                }
                case 'n': {
                    break;
                }
                case 'i': {
                    break;
                }
                case '%': {
                    break;
                }
                default: 
                    break;
            }

            // char *fmtstr = "";
            // for (int i = 0; i < len; i++) {
            //     s21_strncat(fmtstr, "\0", 1);
            // }
            // tmp = s21_strncpy(fmtstr, format + startFmtPosition + 1, len);
            // parseStr(&form, tmp);
            // char *tmp2 = s21_strcat(str, "\0");
            // i_src += len - 1;
        }
        i_src++;
    }   
    str = tmp;
    va_end(arglist);
    return count;
}

int main() {
    int a = 5;
    char *s;
    int len = s21_sprintf(s, "Heool!!!!!!! %+-10.5 d ddddddn\n", a);
    printf("pointer = %p, len = %d\n  2.1: %s", s, len, s);
    printf("\n\n");
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