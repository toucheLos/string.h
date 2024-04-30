#include "string.h"
#include <stdio.h>
#include <stdlib.h>

char *str_connect(char **strs, int n, char c);

int main() {
    char s[] = "hello";
    printf("\n");
    return 0; 
}

char *str_connect(char **strs, int n, char c) {
    int total_length = 0;
    for (int i = 0; i < n; i++) {
        char *p = strs[i];
        while (*p) {
            total_length++;
            p++;
        }
        if (i < n - 1) total_length++; // Add space for separator
    }

    char *result = malloc(total_length + 1);
    char *res_ptr = result;
    for (int i = 0; i < n; i++) {
        char *s = strs[i];
        while (*s) {
            *res_ptr++ = *s++;
        }
        if (i < n - 1) {
            *res_ptr++ = c;
        }
    }
    *res_ptr = '\0';
    return result;
}
