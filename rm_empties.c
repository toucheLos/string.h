#include "string.h"
#include <stdio.h>

void rm_empties(char **words);

int main() {
    char s[] = "hello";
    printf("\n");
    return 0; 
}

void rm_empties(char **words) {
    char **read = words;
    char **write = words;
    while (*read) {
        char *s = *read++;
        if (*s) {
            *write++ = s;
        }
    }
    *write = NULL;
}
