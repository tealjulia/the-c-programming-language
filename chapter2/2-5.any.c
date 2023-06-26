/* Write the function any(s1,s2), which returns the first location 
    in a string s1 where *any* character from the string s2 occurs, 
    or -1 if s1 contains no characters from s2. (The standard library 
    function strpbrk does the same job but returns a pointer to the location.)
*/

#include <stdio.h>

#define FALSE 0
#define TRUE 1

int any(char s1[], char s2[]);

int main (void) {

int i;

    char str1[6][50] = {
        "apple",
        "hat",
        "the quick brown fox",
        "the lazy dog boy",
        "the quick brown fox jumps over the lazy dog",
        "the quilter"
    };

    char str2[6][20] = {
        "aeiou",
        "cat",
        "the",
        "banana",
        "the quick brown fox",
        "banana"
    };

    printf("%10s \n","result");

    for(i = 0; i < 6; i++) {
        any(str1[i], str2[i]);
        printf("%10i \n", any(str1[i], str2[i]));
    }


    return 0;
}

int any(char s1[], char s2[]) {
    int i, j;

    for (i = 0; s1[i] != '\0'; i++) {

        for (j = 0; s2[j] != '\0'; j++) {
            
            if (s1[i] == s2[j]) {
                return i;
            }
        }
    }

    return -1;
}