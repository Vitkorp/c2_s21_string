#include "s21_string.h"

void *s21_memchr(const void *str, int c, s21_size_t n) {
    s21_size_t i;
    int found = 0;
    for (i = 0; i < n; i++)
        if (*((char *)str + i) == c) {
            found = 1;
            break; 
        }
    return found ? ((char *)str + i) : S21_NULL;
}

char *s21_strchr(const char *str, int c) {
    s21_size_t i = 0;
    int found = 0;
    while (str[i] && str[i] != c){
        i++;
        if (str[i] == c) {
            found = 1;
            break;
        }
    }
    return found ? ((char *)str + i) : S21_NULL;
}

// char *test_strpbrk(const char *s1, const char *s2) {
// 	const char *scanp;
// 	int c, sc;

// 	while ((c = *s1++) != 0) {
// 		for (scanp = s2; (sc = *scanp++) != '\0';)
// 			if (sc == c)
// 				return ((char *)(s1 - 1));
// 	}
// 	return (NULL);
// }

char *s21_strpbrk(const char *str1, const char *str2) {
    const char *scanp;
    int c, sc;
    char * _res = ""; 
    // int exit_code = 0;
    while ((c = *str1++) != 0) {
        for (scanp = str2; (sc = *scanp++) != '\0';) {
            if (sc == c) {
                _res = ((char*)(str1 - 1));
                // exit_code = 1;
                break;
                // return ((char *)(str1 - 1));
            }
        }
    }
    return _res;
    // return S21_NULL;

    // return S21_NULL;
    //return exit_code ? ((char *)str1 - 1) : S21_NULL;
    // return S21_NULL;
}

char *s21_strrchr(const char *str, int c) {
    int found = 0;
    s21_size_t i;
    for (i = s21_strlen(str); i > 0; i--) {
        if (str[i] == c) {
            found = 1;
            break;
        }
    }
    return found ? ((char *)str + i) : S21_NULL;
}

char *s21_strstr(const char *haystack, const char *needle) {
    // if (!*needle)
    //     return (char *) haystack;
    int exit_code = 0;
    char *_res = "";

    const char needle_first  = *needle;

    haystack = s21_strchr(haystack, needle_first);
    if (!haystack)
        exit_code = 1; // S21_NULL

    const char  *i_haystack = haystack + 1,
                *i_needle = needle + 1;

    unsigned int sums_diff = *haystack;
    bool identical = true;

    while (*i_haystack && *i_needle) {
        sums_diff += *i_haystack;
        sums_diff -= *i_needle;
        identical &= *i_haystack++ == *i_needle++;
    }

    if (*i_needle)
        exit_code = 1; // S21_NULL
    else if (identical)
        exit_code = -1; //(char *)haystack

    size_t needle_len = i_needle - needle;
    size_t needle_len_1 = needle_len - 1;

    const char *sub_start;
    for (sub_start = haystack; *i_haystack; i_haystack++) {
        sums_diff -= *sub_start++;
        sums_diff += *i_haystack;

        if (
               sums_diff == 0
            && needle_first == *sub_start
            && memcmp(sub_start, needle, needle_len_1) == 0
        )
            exit_code = 2; // (char*) sub_start
    }

    if (exit_code == -1)
        _res = (char *)haystack;
    else if (exit_code == 1)
        _res = S21_NULL;
    else if (exit_code == 2)
        _res = (char *) sub_start;

    return _res;
}

s21_size_t s21_strlen(const char *str) {
    s21_size_t _len = 0;
    for (_len = 0; str[_len]; _len++) {}
        return _len;
}


int main() {
    char *p;
    char *my;
    p = strpbrk ("this is a test", "absj");
    my = s21_strpbrk("this is a test", "absj");
    printf(p);
    printf("||");
    printf(my);

    return 0;
}