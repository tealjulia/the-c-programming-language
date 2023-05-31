#include <stdio.h>

#define TABSTOP 4
#define TRUE  1
#define FALSE 0

int
main(void)
{
    int blank_count, i, c, spaces, in_blanks, tabs;

    in_blanks = FALSE;
    spaces = 0;
    tabs = 0;
    blank_count = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            in_blanks = TRUE;
            spaces++;
        } else {
            if (in_blanks == TRUE) {
                if (spaces >= TABSTOP) {
                    tabs = spaces / TABSTOP;
                    blank_count = spaces % TABSTOP;
                    for (i = 0; i < tabs; i++)
                        putchar('\t');
                    for (i = 0; i < blank_count; i++)
                        putchar(' ');
                } else {
                    for (i = 0; i < spaces; i++)
                        putchar(' ');
                }
                spaces = 0;
                putchar(c);
                in_blanks = FALSE;
            } else {
                putchar(c);
            }
        }
    }
    return 0;
}