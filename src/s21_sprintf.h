#include <string.h>
#include <stdlib.h>
#include "s21_string.h"
#include <stdio.h>
#include <stdarg.h>

// %[флаги][ширина][.точность][длина]спецификатор

// {-} {+} {' '} {#} {0}
// количество вхождений флага
typedef struct _flags {
    long long minus;
    long long plus;
    long long space;
    long long hash;
    long long zero;
} fl;

// {0..9} {*} 
// количество вхождений флага ширины
typedef struct _width {
    long long number;
    long long starchar;
} w;

// {0..9} {*} 
// количество вхождений флага точности
typedef struct _precision {
    long long number;
    long long starchar;
} pr;

// {h} {l} {L}
// количество вхождений флага длины.
typedef struct _length {
    long long h;
    long long l;
    long long L;
} len;

typedef struct _format{
    fl flags;
    w  width;
    pr precision;
    len length;
    char spec;
} fmt;

// int sprintf(char *str, const char *format, ...) 
int s21_sprintf(char *str, const char *format, ...);

//  позиция указателя до конца подстроки замещаемой части формата
int endfmt(const char *str, long long start);