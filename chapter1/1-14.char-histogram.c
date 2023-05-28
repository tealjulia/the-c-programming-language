#include <stdio.h>
#include <ctype.h>

#define ASCII_COUNT 128

int main(void) {
    int h[ASCII_COUNT];
    int hlen = 0;
    int maxlen = 0;
    int idx;
    char c;
    int wcidx;

    // pre-load array with 0's
    for (idx = 0; idx < ASCII_COUNT; ++idx) {
        h[idx] = 0;
    }

    // read each char, increment the counter at its idx
    while ((c = getchar()) != EOF) {
        ++h[c];
    }

    // now print out the histogram
    int colidx = 0;
    int lidx = 0;
    int j = 128;


    printf("Character Frequency -- Horizontal \n\n");
    while (j > 0){
        if (h[colidx] != 0)
        {
            // if it's non-print, print its hexademical equivalent
            if (!isprint(colidx)){
                printf("\\x%02x: \t", colidx);
            
            // if it's a space, print SPACE
            } else if (colidx == ' '){
                printf("%s: \t", "SPACE");
            }
            // otherwise, just print the character
            else {
            printf("%c: \t", colidx);
            }
            for (lidx = 0; lidx < h[colidx]; ++lidx) {
                putchar('#');
            }
            putchar('\n');
        }

        ++colidx;
        --j;
    }

    putchar('\n');
    return 0;
}
