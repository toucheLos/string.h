#include "string.h"
#include <stdio.h>

int strcmp_ign_case(char *s1, char *s2);
char my_tolower(char c);

int main() {
    char s1[] = "hello";
    char s2[] = "goodbye";
    printf("Strcmp ign case: %d\n", strcmp_ign_case(s1, s2));
    return 0; 
}

int strcmp_ign_case(char *s1, char *s2) {
    while (*s1 && *s2 && my_tolower(*s1) == my_tolower(*s2)) {
        s1++;
        s2++;
    }
    return my_tolower(*s1) - my_tolower(*s2);
}

char my_tolower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}
