// #include <stdio.h>
// #include <math.h>
// #include "s21_sprintf.h"
// #include "s21_string.h"
// // #define isdigit(ch) (ch >= '0' && ch <= '9')

// double s21_atof(const char* str);

// int main() {
//     char str[50] = "14.3252";
//     printf("%f\n", s21_atof(str));

//     return 0;
// }

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
//         printf("precision = %d\n", precision);
//         res /= pow(10, precision);

//   return res * sign;
// }

