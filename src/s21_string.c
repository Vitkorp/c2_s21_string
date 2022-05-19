#include "s21_string.h"

void *s21_memchr(const void *str, int c, s21_size_t n) {
    s21_size_t i;
    int found = 0;
    for (i = 0; i < n; i++)
        if (*((char *)str + i) == c) {
            found = 1;
            break; 
        }
    return found ? ((char *)str + i) : s21_NULL;
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
    return found ? ((char *)str + i) : s21_NULL;
}

char *s21_strpbrk(const char *str1, const char *str2) {
    s21_size_t i;
    s21_size_t j;
    int found = 0;
    for (i = 0; (i < s21_strlen(str1)) && (found == 0); i++) {
        for (j = 0; (j < s21_strlen(str2)) && (found == 0); j++) {
            if (str2[j] == str1[i]) {
                found = 1;
            }
        }
    }
    return found ? ((char *)str1 + i) : s21_NULL;
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
    return found ? ((char *)str + i) : s21_NULL;
}

char *s21_strstr(const char *haystack, const char *needle) {
    // if (!*needle)
    //     return (char *) haystack;
    int exit_code = 0;
    char *_res = "";
    char needle_first;
    char   *sub_start;

    if (*needle) {
        needle_first = *needle;

        haystack = s21_strchr(haystack, needle_first);
        if (haystack) {
            // exit_code = 1;
            // return s21_NULL;
        
        
            const char *i_haystack = haystack + 1,
                       *i_needle   = needle   + 1;

            unsigned int sums_diff = *haystack;
            short identical = 1;

            while (*i_haystack && *i_needle) {
                sums_diff += *i_haystack;
                sums_diff -= *i_needle;
                identical &= *i_haystack++ == *i_needle++;
            }

            if (*i_needle) {
                exit_code = 1;  // == s21_NULL
                // return s21_NULL;
            } else if (identical) {
                exit_code = -1;  // == s21_NULL
                // return (char *) haystack;
            } else {

                s21_size_t needle_len = i_needle - needle;
                s21_size_t needle_len_1 = needle_len - 1;

                for (sub_start = haystack; *i_haystack; i_haystack++) {
                    sums_diff -= *sub_start++;
                    sums_diff += *i_haystack;

                    if (
                        sums_diff == 0
                        && needle_first == *sub_start
                        && memcmp(sub_start, needle, needle_len_1) == 0 //заменить memcmp на s21_memcmp
                    ) {
                        exit_code = 2;  // (char *) sub_start
                        break;
                    }
                }
                if (exit_code == 0) {
                    exit_code = 1;
                }
            }
        } else {
            exit_code = 1;  // == s21_NULL
        }
    } else {
        exit_code = -1;  // == (char *) haystack
    }

    if (exit_code == -1) {
        _res = (char *) haystack;
    } else if (exit_code == 1) {
        _res = s21_NULL;
    } else if (exit_code == 2) {
        _res = (char *) sub_start;
    }

    return _res;
}


s21_size_t s21_strlen(const char *str) {
    s21_size_t _len = 0;
    for (_len = 0; *str; str++, _len++) {}
    return _len;
}

int main() {
    char str[] =    "lazy";
    char string[] = "The quick brown dog jumps over the lazy fox";
    char fmt1[] =   "         1         2         3         4         5";
    char fmt2[] =   "12345678901234567890123456789012345678901234567890";
    
    char *pdest;
    int  result;
    printf( "String to be searched:\n   %s\n", string );
    printf( "   %s\n   %s\n\n", fmt1, fmt2 );
    pdest = s21_strstr( string, str );
    result = (int)(pdest - string + 1);
    if ( pdest != NULL )
        printf( "%s found at position %d\n", str, result );
    else
        printf( "%s not found\n", str );
}
