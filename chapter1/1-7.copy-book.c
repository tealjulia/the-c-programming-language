#include <stdio.h>

/**
 * copy a string from input to output, replacing any 
 * sequence of multiple blanks (' ') with a single blank
*/

int main(void)
{
    char c; 
    char last_c = '\0';

    while ((c = getchar()) != EOF) {
        if (c == ' ' && last_c == ' '){
            continue;
        }
        putchar(c);
        last_c = c;
    }
      return 0;
}
