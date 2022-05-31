#ifndef SRC_S21_SPRINTF_H_
#define SRC_S21_SPRINTF_H_

#include <stdarg.h>
#include <math.h>



// %[флаги][ширина][.точность][длина]спецификатор

// {-} {+} {' '} {#} {0}
// количество вхождений флага
typedef struct _flags {
    int minus;
    int plus;
    int space;
    int hash;
    int zero;
} fl;

// {0..9} {*} 
// количество вхождений флага ширины
typedef struct _width {
    int number;
    int starchar;
} w;

// {0..9} {*} 
// количество вхождений флага точности
typedef struct _precision {
    int number;
    int starchar;
} pr;

// {h} {l} {L}
// количество вхождений флага длины.
typedef struct _length {
    int h;
    int l;
    int L;
} len;

typedef struct _format{
    fl flags;
    w  width;
    pr precision;
    len length;
    char spec;  
} fmt;

typedef struct _regs{
    void *pValue;
    void *pWidth;
    void *pPrecision;
} regs;

// int sprintf(char *str, const char *format, ...) 
int s21_sprintf(char *str, const char *format, ...);

//  позиция указателя до конца подстроки замещаемой части формата
int endfmt(const char *str, int start);

#endif