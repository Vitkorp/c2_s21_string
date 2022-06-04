#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "s21_string.h"

void  v1strcat(char  *dest, const char *src);
// void  v1strcpy(char  *dest, const char *src);
// char* c1strcat(char  *dest, const char *src);
// char* c1strcpy(char  *dest, const char *src);
// int   i1strcat(char  *dest, const char *src);
// int   i1strcpy(char  *dest, const char *src);

// void  v2strcat(char **dest, const char *src);
// void  v2strcpy(char **dest, const char *src);
// char* c2strcat(char **dest, const char *src);
// char* c2strcpy(char **dest, const char *src);
// int   i2strcat(char **dest, const char *src);
// int   i2strcpy(char **dest, const char *src);

// void  v3strcat(char  *dest, const char **src);
// void  v3strcpy(char  *dest, const char **src);
// char* c3strcat(char  *dest, const char **src);
// char* c3strcpy(char  *dest, const char **src);
// int   i3strcat(char  *dest, const char **src);
// int   i3strcpy(char  *dest, const char **src);

// void  v4strcat(char **dest, const char **src);
// void  v4strcpy(char **dest, const char **src);
// char* c4strcat(char **dest, const char **src);
// char* c4strcpy(char **dest, const char **src);
// int   i4strcat(char **dest, const char **src);
// int   i4strcpy(char **dest, const char **src);

int main() {
    // int a = 10;
    //printf("hhhh ____ ____ %0 1. -65---l\nl", 6000000);

    char *b = "";
    // char *c = NULL;
    // char *d = "";
    char *e = "abc";
    char  f = '0';
    char *g = &f;

    char ab[] = "";
    char ac[] = {};
    char ad[] = "abc";
    // char ae   = '1';
    // char af[] = &ae;

    char bb[8] = "";
    char bc[8] = {};
    char bd[8] = "abc";
    // char be   = '1';
    // char bf[8] = &be;

    const char *end   = " variable endline";
    // const char *start = "variable startline ";
    printf("char *b = \"\"\n");
    v1strcat(b, end);
    printf("v1strcat: result outside function: result = %s\n\n", b);

    printf("char *e = \"abc\"\n");
    v1strcat(e, end);
    printf("v1strcat: result outside function: result = %s\n\n", b);

    printf("char *g = &f -> \'0\'\n");
    v1strcat(g, end);
    printf("v1strcat: result outside function: result = %s\n\n", b);

    printf("char ab[] = \"\"\n");
    v1strcat(ab, end);
    printf("v1strcat: result outside function: result = %s\n\n", b);

    printf("char ac[] = {}\n");
    v1strcat(ac, end);
    printf("v1strcat: result outside function: result = %s\n\n", b);

    printf("char ad[] = \"abc\"\n");
    v1strcat(ad, end);
    printf("v1strcat: result outside function: result = %s\n\n", b);

    // printf("char af[] = &ae -> \'1\'\n");
    // v1strcat(af, end);
    // printf("v1strcat: result outside function: result = %s\n\n", b);
    
    printf("char bb[] = \"\"\n");
    v1strcat(bb, end);
    printf("v1strcat: result outside function: result = %s\n\n", b);

    printf("char bc[] = {}\n");
    v1strcat(bc, end);
    printf("v1strcat: result outside function: result = %s\n\n", b);

    printf("char bd[] = \"abc\"\n");
    v1strcat(bd, end);
    printf("v1strcat: result outside function: result = %s\n\n", b);

    // printf("char bf[] = &be -> \'1\'\n");
    // v1strcat(bf, end);
    // printf("v1strcat: result outside function: result = %s\n\n", b);
    
    long long int a = 4928323;
    long long int *p = malloc(sizeof(long long int));
    void *c = (void *)p;

    *p = a;
    printf("1: %lld\n", a);
    printf("2: %lld\n", *p);
    printf("3: %lld\n", *(long long int *)c);

    free(c);
    return 0;
}

void  v1strcat(char *dest, const char *src) {
    s21_size_t len1 = strlen(dest);
    s21_size_t len2 = strlen(src);
    s21_size_t rlen_est = len1 + len2;
    char c[rlen_est + 1];
    for (s21_size_t i = 0; i < len1; i++) {
        c[i] = dest[i];
    }
    for (s21_size_t i = 0; i < len2; i++) {
        c[len1+i] = src[i];
    }
    s21_size_t rlen_fact = strlen(c);
    
    
    printf("%10c |  len1  |  len2  |  rlen_est  | rlen_fact \n", ' ');
    printf("  v1strcat | %5ld  | %5ld  | %7ld    | %6ld \n", len1, len2, rlen_est, rlen_fact);
    printf("v1strcat: sources inside function: dest = %s\n", dest);
    printf("v1strcat: sources inside function: src = %s\n", src);
    dest = &c[0];
    printf("v1strcat: result inside function: result = %s\n", dest);
}

char* c1strcat(char  *dest, const char *src);