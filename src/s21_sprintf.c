
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
        printf("it:{%d}", _pos + len);
        _pos += len;
    }
    return _pos;
}

// int sprintf(char *str, const char *format, ...) 
int s21_sprintf(char *str, const char *format, ...) {
    int count = 0;
    printf("len \n");
    fmt formats;
    int i_src = 0;
    s21_size_t slen = (str) ? strlen(str) : 0;
    printf("strlen = %ld\n", slen);
    char *tmp;
    s21_strcpy(tmp, str);
    while (format[i_src]) {
        printf("i_src={%d}, char={'%c'}     ", i_src, format[i_src]);
        if (format[i_src] != '%') {
            count++;
            if (slen <= (s21_size_t)count) {
                tmp = (char *)realloc(str, count * sizeof(char));
                str = tmp;
            }
            str[count - 1] = format[i_src];
            printf("str[%d]='%c',    format[%d]='%c'\n", count-1, str[count-1], i_src, format[i_src]);
            
            printf("\n");
        } else {
            int startFmtPosition = i_src;
            int endFmrPosition = endfmt(format, startFmtPosition);
            printf("startFmtPosition={%d}, endFmrPosition={%d}\n\n", startFmtPosition, endFmrPosition);
        }
        i_src++;
    }   
    printf("pointer = %p, result = %s\n", str, str);
    tmp = S21_NULL;
     s21_strcpy(tmp, str);
    // free(str);
     str = tmp;
    return slen = (str) ? strlen(str) : 0;
}

int main() {
    int a = 5;
    char *s;
    int len = s21_sprintf(s, "Heool!!!!!!! %+-10.5 d ddddddn\n", a);

    printf("pointer = %p, len = %d\n2.1: %s", s, len, s);
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