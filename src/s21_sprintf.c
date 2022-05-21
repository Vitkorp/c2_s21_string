#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int a = 5;
    char s[50] = "";
    sprintf(s, "Hello %-------+#10.5d endl",  a);
    printf("%s", s);
    return 0;
}

// #include <s21_sprintf.h>

// int main () {
//     return 0;
// }