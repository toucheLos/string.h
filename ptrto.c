#include "string.h"
#include <stdio.h>

char *ptr_to(char *h, char *n);

int main() {
    char *h = "heoololo";
    char *n = "lo";

    return 0;
}

char *ptr_to(char *h, char *n) {
    while (*h) {
        char *start = h, *pattern = n;
        while (*h && *pattern && *h == *pattern) {
            h++;
            pattern++;
        }
        if (!*pattern) return start;
        h = start + 1;
    }
    return NULL;
}