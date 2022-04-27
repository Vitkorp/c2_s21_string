#include "s21_string.h"

size_t s21_strlen(const char *str) {
    int _len = 0;
    for (_len = 0; *str; str++, _len++) {}
    return _len;
}