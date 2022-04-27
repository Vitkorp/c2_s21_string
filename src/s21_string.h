#ifndef SRC_S21_STRING_H_
#define SRC_S21_STRING_H_

#ifndef NULL
#define NULL (void *)0
#endif  // NULL

typedef unsigned long int size_t;

/*
 * 13. Вычисляет длину начального сегмента str1, который полностью 
 * состоит из символов, не входящих в str2.
 */
size_t s21_strcspn(const char *str1, const char *str2);

/*
 * 14. Выполняет поиск во внутреннем массиве номера ошибки errnum и возвращает 
 * указатель на строку с сообщением об ошибке. Нужно объявить макросы, 
 * содержащие массивы сообщений об ошибке для операционных систем mac и linux. 
 * Описания ошибок есть в оригинальной библиотеке. Проверка текущей ОС 
 * осуществляется с помощью директив.
 */
char *s21_strerror(int errnum);

// 15. Вычисляет длину строки str, не включая завершающий нулевой символ.
size_t s21_strlen(const char *str);

/* 
 * 18. Вычисляет длину начального сегмента str1, который полностью состоит 
 * из символов str2.
 */
size_t s21_strspn(const char *str1, const char *str2);


#endif  // SRC_S21_STRING_H_
