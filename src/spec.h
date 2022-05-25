#ifndef SRC_SPEC_H_
#define SRC_SPEC_H_

// #include <math.h>
#include "s21_string.h"
#include "s21_sprintf.h"

char *s21_spec_s(fmt format, regs regs);
char *s21_spec_f(fmt format, regs regs);
char *s21_spec_c(fmt format, regs regs);
char *int_to_str(fmt format, regs regs);

#endif  //  SRC_SPEC_H_
