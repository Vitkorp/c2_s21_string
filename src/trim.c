#include "s21_string.h"
// #include <string.h>

char *s21_trim(const char *str1, const char* str2) {
    char *trimed_char = "";
    char *temp2;
    char *temp3;
    char *temp1 = s21_strcpy(trimed_char, str1);

    for (int i = 0; i < 2; i++) {
        s21_size_t len_left = s21_strspn(trimed_char, str2);
        printf("len_left = %ld,   trimed_char = %s \n", len_left, trimed_char);
        // int length = s21_strlen(trimed_char);
        if ((temp2 = s21_strcpy(trimed_char, temp1))) {
            if ((temp3 = s21_strcpy(trimed_char, &temp2[len_left]))) {
                trimed_char = temp3;
            }
        }
        printf("%d step: %s\n", i+1, trimed_char);

        if ((temp2 = s21_strcpy(temp1, trimed_char))) {
            for (int i = 0, j = s21_strlen(trimed_char); j != 0; i++, j--) {
                trimed_char[i] = temp1[j-1];
                printf("%c ", trimed_char[i]);
            }
        }
        printf("\ntrimed_char(prev loop) = %s \n", trimed_char);
        if ((temp2 = s21_strcpy(trimed_char, temp1))) {
            trimed_char = temp2;

        }
        printf("trimed_char(end loop) = %s \n", trimed_char);

    }
    
    // if (temp2 = s21_strcat(trimed_char, "\0")) {
    //     trimed_char = temp2;
    // }

    if ((temp1 = s21_strcpy(trimed_char, temp2))) {
        trimed_char = temp1;
    }

    return trimed_char;
}

int main() {
    char str1[30] = "h2ello worldd";
    char str2[11] = "5, 2, h, d";
    printf("step3 %s", s21_trim(str1, str2));
    return 0;
}