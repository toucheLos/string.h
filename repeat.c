#include "string.h"
#include <stdio.h>
#include <stdlib.h>

char *repeat(char *s, int x, char sep);
int lenStr(char *s);
void my_strcpy(char *dest, const char *src);

int main() {
    char s[] = "hello";
    printf("\n");
    return 0; 
}

char *repeat(char *s, int x, char sep) {
    if (!s) return NULL;
    int len = lenStr(s);
    int total_length = x * len + (x - 1); 
    char *result = malloc(total_length + 1);
    if (!result) return NULL;
    
    char *ptr = result;
    for (int i = 0; i < x; i++) {
        my_strcpy(ptr, s);
        ptr += len;
        if (i < x - 1) *ptr++ = sep;
    }
    *ptr = '\0';
    
    return result;
}

int lenStr(char *s)
{
char *t=s;
while (*t!='\0')
t++;
return t-s;
}

void my_strcpy(char *dest, const char *src) {
    while (*src) {
        *dest++ = *src++;
    }
    *dest = '\0'; 
}
