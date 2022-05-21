#include <string.h>
#include <stdio.h>
#include <stdbool.h>


char *s21_strstr(const char *haystack, const char *needle);


int main() {
    char *src = "Hello world";
    char *sub = "world";
    
    char *find;
    char *my_find;
    // char *find_native;
    

    find = strstr(src, sub);
    my_find = s21_strstr(src, sub);
    // find_native = naive_strstr(src, sub);
    if (find != NULL) {
        printf("NATIVE - %ld\n", find - src + 1);
    } else {
        printf("NATIVE - ERROR\n");
    }
    if (my_find != NULL) {
        printf("MY STRSTR - %ld\n", my_find - src + 1);
    } else {
        printf("MY STR STR - ERROR\n");
    }
}
//     if (find_native != NULL) {
//         printf("NAIVE - %ld\n", find_native - src + 1);
//     } else {
//         printf("NAIVE - ERROR\n");
//     } 
// }



// char *s21_strstr(const char *haystack, const char *needle) {
//     int exit_code = 0;
//     char *_res = "";
//     int exit_code_t = 0;
//     while (true) {
//         if (!*needle){
//             exit_code = -1; //*(char *) haystack
//             _res = (char *) haystack;
//             exit_code_t = 1;
//             break;
//         }

//         const char needle_first  = *needle;

//         haystack = strchr(haystack, needle_first);
//         if (!haystack){
//             exit_code = 3; // S21_NULL
//             exit_code_t = -1;
//             break;
//         }

//         const char  *i_haystack = haystack + 1,
//                     *i_needle = needle + 1;

//         unsigned int sums_diff = *haystack;
//         bool identical = true;

//         while (*i_haystack && *i_needle) {
//             sums_diff += *i_haystack;
//             sums_diff -= *i_needle;
//             identical &= *i_haystack++ == *i_needle++;
//         }

//         if (*i_needle){
//             exit_code = 3; // S21_NULL
//             exit_code_t = -1;
//             break;
//         }
//         else if (identical){
//             exit_code = -1; //(char *)haystack
//             exit_code_t = 1;
//             _res = (char *)haystack;
//             break;
//         }
//         size_t needle_len = i_needle - needle;
//         size_t needle_len_1 = needle_len - 1;

//         const char *sub_start;
//         for (sub_start = haystack; *i_haystack; i_haystack++) {
//             sums_diff -= *sub_start++;
//             sums_diff += *i_haystack;

//             if (sums_diff == 0 && needle_first == *sub_start && memcmp(sub_start, needle, needle_len_1) == 0){
//                 exit_code = 2; // (char*) sub_start
//                 exit_code_t = 1;
//                 _res = (char *)sub_start;
//                 break;
//             }
//         }
//         break;
//         // if (exit_code == -1) {
//         //     _res = (char *)haystack;
//         //     // exit_code_t = 1;
//         //     // break;
//         // }
//         // // else if (exit_code == 1)
//         // //     _res = NULL;
//         // else if (exit_code == 2){
//         //     _res = (char *) sub_start;
//         //     // exit_code_t = 1;
//         //     // break;
//         // }
//         // else if (exit_code == 3) {
//         //     // exit_code_t = 0;
//         //     // break;
//         // }
//     }
//     return exit_code_t ? _res : NULL;
//     // return exit_code_t ? _res : NULL;
// }


/**
 * Finds the first occurrence of the sub-string needle in the string haystack.
 * Returns NULL if needle was not found.
 */
// char *s21_strstr(const char *haystack, const char *needle) {
//     char *res = "";
//     int exit_code = 0;
//     int exit_code_t = 0;
//     const char *sub_start;


//     while (true) {
//         if (!*needle) { // Empty needle.
//             exit_code = 1; // (char *)haystack;
//             // res = (char *) haystack;
//             break;
//             // return (char *) haystack;
//         }

//         const char    needle_first  = *needle;

//         haystack = strchr(haystack, needle_first);
//         if (!haystack){
//             exit_code = -1; // NULL;
//             break;
//             // return NULL;
//         }

//         const char   *i_haystack    = haystack + 1
//                 ,   *i_needle      = needle   + 1;

//         unsigned int  sums_diff     = *haystack;
//         bool          identical     = true;

//         while (*i_haystack && *i_needle) {
//             sums_diff += *i_haystack;
//             sums_diff -= *i_needle;
//             identical &= *i_haystack++ == *i_needle++;
//         }

//         // i_haystack now references the (needle_len + 1)-th character.

//         if (*i_needle) { // haystack is smaller than needle. 
//             exit_code = -1; // NULL;
//             break;
//             // return NULL;
//         }
//         else if (identical) {
//             exit_code = 1;
//             // res = (char *)haystack;
//             break;
//              // (char *)haystack;
//             // return (char *) haystack;
//         }

//         size_t needle_len = i_needle - needle;
//         size_t needle_len_1 = needle_len - 1;

//         for (sub_start = haystack; *i_haystack; i_haystack++) {
//             sums_diff -= *sub_start++;
//             sums_diff += *i_haystack;

//             if (sums_diff == 0 && needle_first == *sub_start && memcmp(sub_start, needle, needle_len_1) == 0) {
//                 exit_code = 2; // sub_start;
//                 // res = (char *)sub_start;
//                 break;
//                 // return (char *) sub_start;
//             }
//         }
//         break;
//     }
//     printf("%d\n", exit_code);
//     if (exit_code == 1) {
//         res = (char *)haystack;
//         exit_code_t = 1;
//     } else if (exit_code == 2) {
//         res = (char *)sub_start;
//         exit_code_t = 1;
//     } 
//     else {
//         exit_code_t = 0;
//     }
//     return exit_code_t ? res : NULL;
//     // return NULL;
// }

char *s21_strstr(const char *haystack, const char *needle) {
    const size_t needle_len = strlen(needle);
    char *res = "";
    int exit_code = 0;
    while (*haystack != '\0') {
        if (strncmp(haystack, needle, needle_len) == 0) {
            res = (char *)haystack;
            exit_code = 1;
            break;
        }
        else {
            haystack++;
        }
    }

    return exit_code ? res : NULL;
}