#include "string.h"
#include <stdio.h>

int find(char *h, char *n);
int lenStr(char *s);

int main() {
    char *h = "heoololo";
    char *n = "lo";

    printf("First occurence of %s in %s is at index: %d\n", n, h, find(h, n));

    return 0;
}

int find (char *h, char *n) {
    int n_len = lenStr(n);
    size_t i = 0, count = 0;

    while (i + n_len != '\0') {
        for (size_t index = 0; index < n_len; index ++) {
            if (h[i + index] == n[index]) {
                count += 1;
            } else {
                count = 0;
                break;
            } 
            if (count == n_len) {
                return i;
            }
        }
        i++;
    } return -1;
}

int lenStr(char *s) {
    int count = 0;
    while (*s) {
        count ++;
        s ++;
    } return count;
}