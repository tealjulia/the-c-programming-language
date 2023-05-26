#include <stdio.h>
#include <ctype.h>


#define YES 1
#define NO  0

main() /* count lines, words, chars in input */
{
    int c, nl, nw, nc, inword;

    inword = NO;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == '\n' )
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t' )
            inword = NO;
        if (!isalpha(c) && c != '\'') {
            if (inword) --nw;
            inword = NO;
        }
        else if (inword == NO && (isalpha(c)) ) {
            inword = YES;
            ++nw;
        }
    }
    printf("lines: %d words: %d characters: %d\n", nl, nw, nc);
}