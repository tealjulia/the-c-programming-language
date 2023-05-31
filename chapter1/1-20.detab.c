#include <stdio.h>

#define TABSTOP 4

/* Write a program detab that replaces tabs in the input with the proper 
    number of blanks to space to the next tab stop. Assume a fixed set of 
    tab stops, say every n columns. Should n be a variable or a symbolic parameter?*/

int main (void) {\
    int c;
    int toNextTabStop = TABSTOP;

    while ((c = getchar()) != EOF){
        if (c == '\t'){
            for (int i = 0; i < toNextTabStop; ++i){
                putchar('#');
            }
        } else {
            putchar(c);
        }

        if (--toNextTabStop == 0){
            toNextTabStop = TABSTOP;
        };
    }
    return 0;
}