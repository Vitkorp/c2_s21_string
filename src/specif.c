#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

char* specif_f(float num);

int main() {
    printf("string %s\n", specif_f(245.606));
    printf("float  %.1f", 245.606);

    return 0;
}

char* specif_f(float num) {
    static char mass[32];
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
    if(precision != 0) {
        mass[i++] = '.';
    }
    for (int j = 0; j < precision; j++) {
        num *= 10.0;
        int tmp = num;
        mass[i++] = tmp + 48;
        num -= tmp;
        printf("%d", tmp);
    }
    printf("\n");
    mass[i] = '\0';
    return &(mass[0]);    
}
