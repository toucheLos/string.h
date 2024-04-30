#include "string.h"
#include <stdio.h>

int len_diff(char *s1, char *s2);
int lenStr(char *s);

int main () {
    char *s1 = "hello";
    char *s2 = "goodbye";

    printf("%d\n", len_diff(s1, s2));
    return 0;
}

int len_diff(char *s1, char *s2) {
    return lenStr(s1) - lenStr(s2);
}

int lenStr(char *s) {
    int count = 0;
    while (*s != '\0') {
        count ++;
        s++;
    } return count;
}