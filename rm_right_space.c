#include "string.h"
#include <stdio.h>

void rm_right_space(char *s);
int lenStr(char *s);

int main () {
    char s[] = "hello   ";
    rm_right_space(s);
    printf("%s\n", s);
    if (s[6] == ' ') {
        puts("True"); 
    }
    return 0;
}

void rm_right_space(char *s) {
    for (size_t i = lenStr(s); i > 0; i--) {
        if (s[i] == ' ') {
            s[i] = '\0';
        }
    }
}

int lenStr(char *s) {
    int count = 0;
    while(*s != '\0') {
        count += 1;
        s++;
    } return count;
}