#include "string.h"
#include <stdio.h>
#include <stdlib.h>

char **str_chop_all(char *s, char c);

int main() {
    char s[] = "hello";
    printf("\n");
    return 0; 
}

char **str_chop_all(char *s, char c) {
    int count = 1;
    char *p = s;
    while (*p) {
        if (*p == c) {
            count++;
        }
        p++;
    }

    char **result = malloc((count + 1) * sizeof(char *));
    if (!result) return NULL;
    
    int index = 0;
    char *start = s;
    while (*s) {
        if (*s == c) {
            *s = '\0';
            result[index++] = start;
            start = s + 1;
        }
        s++;
    }
    if (*start) result[index++] = start;
    result[index] = NULL;
    
    return result;
}
