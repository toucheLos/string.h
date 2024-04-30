#include "string.h"
#include <stdio.h>
#include <stdlib.h>

char *pad(char *s, int d);
int lenStr(char *s);
void my_strcpy(char *result, const char *src);

int main() {
    char s[] = "hello";
    printf("\n");
    return 0; 
}

char *pad(char *s, int d) {
    if (!s) return NULL;
    int len = lenStr(s);
    int pad_length = (d - (len % d)) % d;
    char *result = malloc(len + pad_length + 1);
    if (!result) return NULL;
    
    my_strcpy(result, s);
    for (int i = 0; i < pad_length; i++) {
        result[len + i] = ' ';
    }
    result[len + pad_length] = '\0';
    
    return result;
}

int lenStr(char *s)
{
char *t=s;
while (*t!='\0')
t++;
return t-s;
}

void my_strcpy(char *result, const char *src) {
    while (*src) {
        *result++ = *src++; 
    }
    *result = '\0'; 
}
