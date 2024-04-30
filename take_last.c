#include "string.h"
#include <stdio.h>

void take_last(char *s, int n);

int main() {
    char s[] = "hello";
    printf("\n");
    return 0; 
}

void take_last(char *s, int n) {
    int length = 0;
    char *p = s;

    while (*p) {
        length++;
        p++;
    }
    if (n >= length) return; 
    
  
    for (int i = 0; i < n; i++) {
        s[i] = s[length - n + i];
    }
    s[n] = '\0'; 
}
