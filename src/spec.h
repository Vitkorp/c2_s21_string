#ifndef SRC_SPEC_H_
#define SRC_SPEC_H_

#include <math.h>
#include "s21_string.h"

char *s21_spec_s(fmt *format, const void *val);
char *s21_spec_f(fmt *format, const void *val);
char *s21_spec_c(fmt *format, regs regs);
char *int_to_str(fmt *format, const void *number);

#endif  //  SRC_SPEC_H_
