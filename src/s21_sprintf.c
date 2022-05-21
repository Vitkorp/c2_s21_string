#include <string.h>
#include <stdlib.h>
#include "s21_sprintf.h"
#include "s21_string.h"
#include <stdio.h>

int endfmt(const char *str, int start) {
    int _pos = start;

    return _pos;
}

// int sprintf(char *str, const char *format, ...) 
int s21_sprintf(char *str, const char *format, ...) {
    int count = 0;
    fmt formats;
    int i_src = 0;
    s21_size_t slen = s21_strlen(str);
    char *tmp = S21_NULL;
    while (format[i_src]) {
        printf("i_src={%d}, char={'%c'}     ", i_src, format[i_src]);
        if (format[i_src] != '%') {
            count++;
            // if (slen <= (s21_size_t)count) {
            //     tmp = realloc(str, count * sizeof(char));
            //     str = tmp;
            // }
            // str[count - 1] = format[i_src];
            // printf("str[%d]='%c',    format[%d]='%c'\n", count, str[count], i_src, format[i_src]);
            
            printf("\n");
        } else {
            int startFmtPosition = i_src + 1;
            int endFmrPosition = endfmt(format, startFmtPosition);
            printf("startFmtPosition={%d}, endFmrPosition={%d}\n", startFmtPosition, endFmrPosition);
        }
        i_src++;
    }   

    return count;
}

int main() {
    int a = 5;
    char *s;
    s21_sprintf(s, "Heool!!!!!!! %+-10.5 d ddddddn\n", a);
    printf("%s", s);
    printf("\n\n\n\n\n");
    sprintf(s, "Hello %----+#######8.5 lj k  %endl\n");
    printf("%s", s);
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