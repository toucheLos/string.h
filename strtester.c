#include "string.h"
#include <stdio.h>
#include <stdlib.h>

int main () {

    puts("Checking all functions: ");
    char s[] = "hello";
    char s1[] = "sirSIRburburrburrrr";
    char s2[] = "sir";
    
    printf("1. all_letters: \n");
    printf("Input: %s | Output: %d\n\n", s, all_letters(s));

    printf("2. num_in_range: \n");
    char b = 'd', t = 'l';
    printf("Input: *s1 = %s, b = %c, t = %c | Output: %d\n\n", s, b, t, num_in_range(s, b, t));

    printf("3. diff: \n");
    printf("Input: *s1 = %s, *s2 = %s | Output: %d\n\n", s1, s2, diff(s1, s2));

    printf("4. shorten: \n");
    int new_len = 5;
    char toShorten[] = "Shorten this string";
    printf("Before shortening: %s\n", toShorten);
    shorten(toShorten, new_len);
    printf("After shortening to %d characters: %s\n\n", new_len, toShorten);

    printf("5. len_diff: \n");
    printf("Input: *s1 = %s, *s2 = %s | Output = %d\n\n", s1, s2, len_diff(s1, s2));

    printf("6. rm_left_space: \n");
    for (int i = 0; i < 3; i++) {
        char spaces[] = "   spaces left and right    ";
        if (i == 0) {
            printf("Input: s = %s | ", spaces);
            rm_left_space(spaces);
            printf("Output: %s\n\n", spaces);
        }

        else if (i == 1) {
            printf("7. remove_right_space: \n");
            printf("Input: s = %s | ", spaces);
            rm_right_space(spaces);
            printf("Output: %s\n\n", spaces);
        }

        else if (i == 2) {
            printf("8. rm_space: \n");
            printf("Input: %s | ", spaces);
            rm_space(spaces);
            printf("Output: %s\n\n", spaces);
        } else { break; }
    }
    // char spaces2[] = "   spaces left and right    ";
    // char spaces3[] = "   spaces left and right    ";
    // char spaces4[] = "   spaces left and right    ";

    printf("9. find: \n");
    printf("Input: *h = %s, *n = %s | Output: %d", s1, s2, find(s1, s2));

    printf("10. *ptr_to: \n");
    printf("Input: *h = %s, *n = %s Output: %p\n\n", s1, s2, ptr_to(s1, s2));

    printf("11. is_empty: \n");
    char empty_string[] = "    ";
    printf("Input: Empty string | Output: %d\n", is_empty(empty_string));
    printf("Input: %s | Output: %d\n\n", s1, is_empty(s1));

    printf("12. str_zip: \n");
    printf("Input: s1 = %s, s2 = %s | Output: %c\n\n", s1, s2, *str_zip(s1, s2));

    printf("13. capitalize: \n");
    char toCapitalizeDemo[] = "capitalize this string";
    char toCapitalize[] = "capitalize this string";
    capitalize(toCapitalize);
    printf("Input: %s | Output: %s", toCapitalizeDemo, toCapitalize);

    printf("14. strcmp_ign_case: \n");
    printf("Input: s1 = %s, s2 = %s | Output: %d\n\n", s1, s2, strcmp_ign_case(s1, s2));

    printf("15. take_last: \n");
    int take_last_int = 5;
    char take_last_string[] = "this string";
    printf("Input: s = %s, n = %d | ", s, take_last_int);
    take_last(s, take_last_int);
    printf("Output: %s\n\n", s);

    printf("16. dedup: \n");
    char s_dedup[] = "There's always money in the banana stand.";
    char *deduped = dedup(s_dedup);
    printf("Input: %s | Output: %s\n\n", s_dedup, deduped);
    free(deduped);

    printf("17. pad: \n");
    char s_pad[] = "Padding";
    int pad_length = 3;
    char *padded = pad(s_pad, pad_length);
    printf("Input: %s | Pad Length: %d | Output: %s\n\n", s_pad, pad_length, padded);
    free(padded);

    printf("18. ends_with_ignore_case: \n");
    char s_ends[] = "CaseInsensitive.ed";
    char suff_ends[] = "ED";
    printf("Input: %s, Suffix: %s | Output: %d\n\n", s_ends, suff_ends, ends_with_ignore_case(s_ends, suff_ends));

    printf("19. repeat: \n");
    char s_repeat[] = "all right";
    int times = 3;
    char sep = ',';
    char *repeated = repeat(s_repeat, times, sep);
    printf("Input: %s | Times: %d | Separator: %c | Output: %s\n\n", s_repeat, times, sep, repeated);
    free(repeated);

    printf("20. replace: \n");
    char s_replace[] = "NBA X";
    char pat_replace[] = "X";
    char rep_replace[] = "rocks";
    char *replaced = replace(s_replace, pat_replace, rep_replace);
    printf("Input: %s | Pattern: %s | Replacement: %s | Output: %s\n\n", s_replace, pat_replace, rep_replace, replaced);
    free(replaced);

    printf("21. str_connect: \n");
    char *strs[] = {"Washington", "Adams", "Jefferson", NULL};
    int n_connect = 3;
    char sep_connect = '+';
    char connected = *str_connect(strs, n_connect, sep_connect);
    printf("Input: %s, %s, %s | Separator: %c | Output: %c\n\n", strs[0], strs[1], strs[2], sep_connect, connected);

    printf("22. rm_empties: \n");
    char *words_rm[] = {"first", "", "second", "third", NULL};
    rm_empties(words_rm);
    printf("Input: {\"first\", \"\", \"second\", \"third\", NULL} | Output: {");
    for (int i = 0; words_rm[i] != NULL; i++) {
        printf("\"%s\"", words_rm[i]);
        if (words_rm[i+1] != NULL) printf(", ");
    }
    printf("}\n\n");

    printf("23. str_chop_all: \n");
    char s_chop[] = "I am ready for a nice vacation";
    char delim = ' ';
    char **chopped = str_chop_all(s_chop, delim);
    printf("Input: %s | Delimiter: %c | Output: {", s_chop, delim);
    for (int i = 0; chopped[i] != NULL; i++) {
        printf("\"%s\"", chopped[i]);
        if (chopped[i+1] != NULL) printf(", ");
    }
    printf("}\n\n");
    for (int i = 0; chopped[i] != NULL; i++) {
        free(chopped[i]);
    }
    free(chopped);

    return 0;
}