#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
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
int main() {
    static char mass[10000] = {'\0'};
    static char arr[10000] = {'\0'};
    long double exp = 0.0, num = 0.0;
    long double n = 0.0;
    scanf("%Lf", &num);
    long double f = num;
    int i = 0;
    if (num <= -0.0) {
        mass[i++] = '-';
        num *= -1;
    }
    exp = modfl(num, &n);
    short precision = 6;
    short num_deci_digits = precision;
    long long deci_num = n;
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
    printf("right %Lf\n", exp);
    for (int j = 0; j < precision; j++) {
        exp *= 10.0;
    }
    char mass_2[32] = {'\0'};
    exp = roundl(exp);
    int_to_str(exp, mass_2);
    // printf("string %s\n", mass_2);
    strcat(mass, mass_2);
    // printf("string %s\n", mass);
    // sprintf(arr, "%Lf", f);
    // printf("orig   %s", arr);
    return 0;
}
