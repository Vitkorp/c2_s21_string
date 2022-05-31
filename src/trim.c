#include "s21_string.h"
#include <stdio.h>

void *s21_trim(const char *str1, const char* str2) {
    char trimed_char[s21_strlen(str1) + 1];
    char *temp1 = "";

    // копируем строку str1 в trimmed_char
    s21_strcpy(trimed_char, str1);

    // пропускаем через алгоритм в прямом и обратном порядке
    for (int i = 0; i < 2; i++) {
        // вычисляем длину подстроки в соответствии с шаблоном
        s21_size_t len_left = s21_strspn(trimed_char, str2);

        int length = s21_strlen(trimed_char);
        char temp2[length - len_left + 1];
        // копируем начиная с первого символа вне шаблона в новую подстроку
        s21_strcpy(temp2, &trimed_char[len_left]);


        char temp3[length - len_left + 1];
        for (int i = 0, j = s21_strlen(temp2); j != 0; i++, j--) {
            temp3[i] = temp2[j-1];
            if (j == 1) {
                temp3[i+1] = '\0';
            }
        }
        s21_strcpy(trimed_char, temp3);
        
    }
    s21_size_t len = s21_strlen(trimed_char) + 1;
    temp1 = malloc(len * sizeof(char));
    s21_strcpy(temp1, trimed_char);

    return temp1;
}

int main() {
    char str1[30] = "h2ello worldd";
    char str2[11] = "5, 2, h, d";
    char *s = (char *)s21_trim(str1, str2);
    printf("res: %s\n", s);
    free(s);
    return 0;
}