#ifndef SRC_SPEC_H_
#define SRC_SPEC_H_

// #include <math.h>
#include "s21_sprintf.h"
#include "s21_string.h"

char *s21_spec_s(fmt format, regs regs);
char *s21_spec_f(fmt format, regs regs);
char *s21_spec_c(fmt format, regs regs);
char *s21_spec_d(fmt format, regs regs);

#endif  //  SRC_SPEC_H_
