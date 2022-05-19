#include <string.h>
#include <stdio.h>
#include <stdbool.h>


char *s21_strstr(const char *haystack, const char *needle);


int main() {
    char *src = "Hello Aisha and Nail";
    char *sub = "R";
    char *find;
    char *my_find;

    find = strstr(src, sub);
    my_find = s21_strstr(src, sub);
    if (find != NULL) {
        printf("%lld\n", find - src + 1);
    } else {
        printf("ERROR\n");
    }
    if (my_find != NULL) {
        printf("%lld", find - src + 1);
    } else {
        printf("ERROR");
    }
}



char *s21_strstr(const char *haystack, const char *needle) {
    // if (!*needle)
    //     return (char *) haystack;
    int exit_code = 0;
    char *_res = "";
    while (true) {
        const char needle_first  = *needle;

        haystack = strchr(haystack, needle_first);
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

            if (sums_diff == 0 && needle_first == *sub_start && memcmp(sub_start, needle, needle_len_1) == 0)
                exit_code = 2; // (char*) sub_start
        }
            if (exit_code == -1) {
                _res = (char *)haystack;
                break;
            }
            // else if (exit_code == 1)
            //     _res = NULL;
            else if (exit_code == 2){
                _res = (char *) sub_start;
                break;
            }
    }


    return (exit_code != 1) ? _res : NULL;
}
