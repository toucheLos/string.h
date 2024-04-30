#include "string.h"
#include <stdio.h>
#include <stdlib.h>

char *replace(char *s, char *pat, char *rep);

int main() {
    char s[] = "hello";
    printf("\n");
    return 0; 
}

char *replace(char *s, char *pat, char *rep) {
    int s_len = 0, pat_len = 0, rep_len = 0;
    char *p = s;
    while (*p++) s_len++;
    p = pat;
    while (*p++) pat_len++;
    p = rep;
    while (*p++) rep_len++;

    // Count occurrences of pat in s
    int count = 0;
    char *temp = s;
    while (*temp) {
        if (*temp == *pat) {
            char *s_ptr = temp;
            char *pat_ptr = pat;
            while (*pat_ptr && *s_ptr == *pat_ptr) {
                s_ptr++;
                pat_ptr++;
            }
            if (!*pat_ptr) {
                count++;
                temp = s_ptr - 1;
            }
        }
        temp++;
    }

    int new_length = s_len + count * (rep_len - pat_len);
    char *result = malloc(new_length + 1);
    char *res_ptr = result;

    while (*s) {
        if (*s == *pat) {
            char *s_ptr = s;
            char *pat_ptr = pat;
            while (*pat_ptr && *s_ptr == *pat_ptr) {
                s_ptr++;
                pat_ptr++;
            }
            if (!*pat_ptr) {
                // Copy rep to result
                char *rep_ptr = rep;
                while (*rep_ptr) {
                    *res_ptr++ = *rep_ptr++;
                }
                s = s_ptr;
                continue;
            }
        }
        *res_ptr++ = *s++;
    }
    *res_ptr = '\0';
    return result;
}
