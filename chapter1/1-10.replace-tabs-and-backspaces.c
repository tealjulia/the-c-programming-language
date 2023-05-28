#include <stdio.h>

/* Write a program to copy its input to its output, replacing each tab by \t, 
    each backspace by \b, and each backslash by \\. This makes tabs and backspaces 
    visible in an unambiguous way.
*/

int main(void)
{
    char c; 

    while ((c = getchar()) != EOF) {
        if (c == '\t'){ 
            putchar('\\');
            putchar('t');
        }
        if (c == '\b') { 
            putchar('\\');
            putchar('b');
        }
        else {
            putchar(c);
        }
    }
      return 0;
}
