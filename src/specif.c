#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* specif_f(char* str, float num);

int main() {
    printf("%s\n", specif_f("float value: %f", -2.6));
    printf("%f", -2.6);
    return 0;
}

char* specif_f(char* str, float num) {
    int n = 0;
    float temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }
    char* mass = NULL;
    mass = malloc(n * sizeof(char));
    size_t i = 0;
    for (   ; i < strlen(str); i++) {
        if (str[i] == '%' && str[i + 1] == 'f') {
            gcvt(num, n, mass);
            }
        }
        printf("%d\n", n);
    return mass;    
}