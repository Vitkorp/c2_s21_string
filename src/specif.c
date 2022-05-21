#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main() {
    static char mass[10000] = {'\0'};
    static char arr[10000] = {'\0'};

    long double exp = 0.0, num = 123.456;
    double n = 0.0;
    // scanf("%Lf", &num);
    long double f = num;
    int i = 0;
    if (num <= -0.0) {
        mass[i++] = '-';
        num *= -1;
    }
    exp = modf(num, &n);
    short precision = 6;
    short num_deci_digits = precision;
    int deci_num = round(n);
    if (deci_num == 0) {
        mass[i++] = '0';
    }
    // num -= deci_num;
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
        exp *= 10.0;
        int tmp = exp;
        mass[i++] = tmp + 48;
        exp -= tmp;
    }
    mass[i] = '\0';
    printf("string %s\n", mass);
    sprintf(arr, "%Lf", f);
    printf("orig   %s", arr);
    return 0;
}
