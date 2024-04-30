#include "string.h"
#include <stdio.h>

int is_empty(char*s);

int main() {
    char * s = "   t  ";
    printf("%d\n", is_empty(s));
    return 0;
}

int is_empty(char *s) {
    if (!s || !*s) return 1;
    while (*s) {
        if (*s != ' ' && *s != '\t' && *s != '\n') return 0;
        s++;
    }
    return 1;
}
