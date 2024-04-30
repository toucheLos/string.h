#include "string.h"
#include <stdio.h>
#include <stdlib.h>

char *str_zip(char *s1, char *s2);

int main() {
    char s1[] = "hello";
    char s2[] = "goodbyte";
    printf("\n");
    return 0; 
}

char *str_zip(char *s1, char *s2) {
    int len1 = 0, len2 = 0;
    for (len1 = 0; s1[len1]; len1++);
    for (len2 = 0; s2[len2]; len2++);
    
    char *result = malloc(len1 + len2 + 1);
    if (!result) return NULL;
    
    int index = 0, i = 0, j = 0;
    while (s1[i] && s2[j]) {
        result[index++] = s1[i++];
        result[index++] = s2[j++];
    }
    while (s1[i]) result[index++] = s1[i++];
    while (s2[j]) result[index++] = s2[j++];
    result[index] = '\0';
    
    return result;
}
