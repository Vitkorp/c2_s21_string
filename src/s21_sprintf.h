#ifndef SRC_S21_SPRINTF_H_
#define SRC_S21_SPRINTF_H_

#include <stdarg.h>
#include <stdlib.h>
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

// перевод числа, записанного в строке, в целочисленное значение
int s21_atoi(const char *str);

char *retpointer(char *ptr, int count);

int checkSpec(fmt *val, const char *str);

int checkFlags(fmt *val, const char *str);

int checkWidth(fmt *val, const char *str);

int checkDotPrecision(const char *str);

int checkPrecision(fmt *val, const char *str);

int checkLength(fmt *val, const char *str);

int parseStr(fmt *val, const char *fmtstr, int startFmtPosition, int len);

void *reuseRegister(void *val, void *newCell);

regs prepareRegisters(fmt form, regs registers, va_list arglist);

regs clearRegisters(regs reg);

void *dec_to_str(long long int number, char *str);

char *width_flag_minus_space (fmt *format, char *str);

char *width_flag_plus_plumin (fmt *format, char *str);

char *s21_spec_s(fmt format, regs regs);

char *s21_spec_f(fmt format, regs regs);

char *s21_spec_c(fmt format, regs regs);

char *s21_spec_d(fmt format, regs regs);



#endif

