#include "string.h"
#include <stdio.h>

void rm_space(char *s);
int lenStr(char *s);

int main() {
    char s[] = "   hello    ";
    rm_space(s);

    printf("%s", s);
    return 0;
}

void rm_space(char *s) {
    char *p = s;
    while (*p == ' ') {
        p++;
    }

    char *start = s;  
    while (*p != '\0') {
        *start++ = *p++;
    }
    *start = '\0';

    if (start > s) {
        char *end = start - 1;
        while (end > s && *end == ' ') {
            *end-- = '\0';
        }
    }
}
int lenStr(char *s) {
    int count = 0;
    while(*s != '\0') {
        count += 1;
        s++;
    } return count;
}