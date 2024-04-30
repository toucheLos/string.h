#include "string.h"
#include <stdio.h>

void shorten(char *s, int new_len);
int lenStr (char *s);

int main (){
    char s[] = "this string";
    shorten(s, 5);

    printf("%s\n", s);
    return 0;
}


void shorten(char *s, int new_len) {
    int length = lenStr(s);
    if (new_len < length) {
        s[new_len] = '\0'; 
    }
}


int lenStr (char *s) {
    int count = 0;
    while (*s != '\0') {
        count ++;
        s++;
    } 
    return count;
}