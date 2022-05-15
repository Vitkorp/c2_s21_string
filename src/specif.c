#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

char* specif_f(char* str, float num);

int main() {
    // printf("%s\n", specif_f("float value: %f", -2.6));
    // printf("%f", -2.6);
    float num = -13.46;
    float saved_num = num;
    char mass[32];
    int i = 0;
    if (num < 0.0) {
        mass[i++] = '-';
        num *= -1;
    }
    short precision = 6;
    short num_deci_digits = precision;
    int deci_num = num;
    num -= deci_num;
    while(num_deci_digits >= 0) {
        int exponent = pow(10, num_deci_digits);
		int res = deci_num / exponent;
		if(res > 0) {
			break;
		}
	    num_deci_digits--;
	}
    num_deci_digits += 1;
    for (int j = num_deci_digits; j > 0; j--) {
        int exponent = pow(10, j - 1);
        int res = deci_num / exponent;
        mass[i++] = res + 48;
        deci_num %= exponent;
    }
    mass[i++] = '.';
    for (int j = 0; j < precision; j++) {
        num *= 10.0;
        int tmp = num;
        mass[i++] = tmp + 48;
        num -= tmp;
    }
    mass[i] = '\0';
    printf("float  %f\n", saved_num);
	printf("string %s\n", mass);
    return 0;
}

// char* specif_f(char* str, float num) {
//     int n = 0;
//     float temp = num;
//     char* mass = NULL;
//     mass = malloc(n * sizeof(char));
//     for (size_t i = 0; i < strlen(str); i++) {
//         if (str[i] == '%' && str[i + 1] == 'f') {
//             mass[n] = 
//         }
//     }
//         printf("%d\n", n);
//         free(mass);
//     return mass;    
// }