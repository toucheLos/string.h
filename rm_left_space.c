#include "string.h"
#include <stdio.h>

void rm_left_space(char *s);

int main () {
    char s[] = "   hello";
    rm_left_space(s);
    printf("%s\n", s); 
    return 0;
}

void rm_left_space(char *s) {
    char *p = s;

    while (*p == ' ') {
        p++;
    }

    while (*p != '\0') {
        *s++ = *p++;
    }

    *s = '\0';
}