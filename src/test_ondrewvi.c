#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include "s21_string.h"


int main(int argc, char** argv) {
    switch (argc){
        case (0): {
            printf("Не правильное число параметров\n");
            break;
        }

        case (1): {
            printf("Распознан 1 аргумент: %s\n", argv[0]);
            printf("Результат работы функции strlen(): %lu \n", strlen(argv[0]));
            printf("Результат работы функции s21_strlen(): %lu \n", s21_strlen(argv[0]));
            break;
        }
        case (2): {
            printf("Распознан 1 аргумент: %s\n", argv[1]);
            printf("Результат работы функции strlen(): %lu \n", strlen(argv[1]));
            printf("Результат работы функции s21_strlen(): %lu \n", s21_strlen(argv[1]));
            break;
        }
        case (3): {
            printf("Распознаны 2 аргумента: %s\n", argv[1]);
            printf("Результат работы функции strlen(): %lu \n", strlen(argv[1]));
            printf("Результат работы функции s21_strlen(): %lu \n", s21_strlen(argv[1]));
            printf("Результат работы функции strcspn(): %lu \n", strcspn(argv[1], argv[2]));
            printf("Результат работы функции s21_strcspn(): %lu \n", s21_strcspn(argv[1], argv[2]));
            printf("Результат работы функции strspn(): %lu \n", strspn(argv[1], argv[2]));
            printf("Результат работы функции s21_strspn(): %lu \n", s21_strspn(argv[1], argv[2]));
            break;
        }

    }
    return 0;
}
