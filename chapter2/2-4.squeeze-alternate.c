/* Write an alternative version of squeeze(s1,s2) that deletes each character 
    in s1 that matches any character in the string s2.

original: squeeze:  delete all c from s 
   void squeeze(char s[], int c)
    {
    int i, j;
        for (i = j = 0; s[i] != '\0'; i++)
            if (s[i] != c)
                s[j++] = s[i];
        s[j] = '\0';
    }
*/
#include <stdio.h>

#define FALSE 0
#define TRUE 1

void squeeze(char s1[], char s2[]);
int contains(char s[], char c);

int main(void)
{
    int i;

    char str1[5][50] = {
        "apple",
        "hat",
        "the quick brown fox",
        "the lazy dog boy",
        "the quick brown fox jumps over the lazy dog"
    };

    char str2[5][20] = {
        "aeiou",
        "cat",
        "the",
        "banana",
        "the quick brown fox",
    };

    printf("%30s \n","result");

    for(i = 0; i < 5; i++) {
        squeeze(str1[i], str2[i]);
        printf("%30s \n", str1[i]);
    }
    return 0;
}

void squeeze(char s1[], char s2[]) {
    int k, j = 0;

    for (k = 0; s1[k] != '\0'; k++) {
        if (!contains(s2, s1[k])) {
            s1[j++] = s1[k];
        }
    }
    s1[j] = '\0';
}

int contains(char s[], char c) {
    int l;
    for(l = 0; s[l] != '\0'; ++l) {
        if(s[l] == c) {
            return TRUE;
        }
    }
    return FALSE;
}
