#include <stdio.h>
#include <ctype.h>

#define MAXLINE 1000 /* maximum input line size */

/* write a function reverse() that reverses a line.
    use it to write a program that reverses its input
    one line at a time
*/

int     getLine(char [], int);
void    reverse(char []);

/* copy the line into s, return its length */
int getLine(char s[], int len) {

    int c, i;

    for (i = 0; i < len - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if (c == '\n'){
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}

/* reverse characters in s, in-place */
void reverse(char s[]) {
    int i, j, len, temp;

    len = 0;
    for (i = 0; s[i] != '\0'; ++i) 
        ++len;
    /* copy first half's char into temp, set it to second half's char
        then set second half's char to temp
    */
    for (i = 0, j = len - 1; i < len / 2; ++i, --j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main(void) {
    int     len;
    char    line[MAXLINE];

    while ((len = getLine(line, MAXLINE)) > 0) {
        line[--len] = '\0';
        reverse(line);
        printf("%s\n", line);
    }
    return 0;
}