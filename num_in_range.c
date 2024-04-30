#include "string.h"
#include <stdio.h>

// returns the number of characters c in s1 such that b<=c<=t
int num_in_range (char *s1, char b, char t); 

int main(void) {
    char *s1 = "this is a string";
    char b = 'i';
    char t = 't';

    printf("%d\n", num_in_range(s1, b, t));
}

int num_in_range(char *s1, char b, char t) {
    int answer = 0;

    while (*s1 && answer == 0) {
        if (*s1 == b) {
            answer++;
            while (*s1 != t) {
                answer++;
                s1++;
            }
        }
        s1++;
    } return answer++;
}