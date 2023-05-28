#include <stdio.h>

#define BUFFER 1000

int main(void) {
    int h[BUFFER];
    int hlen = 0;
    int maxlen = 0;
    int idx;
    char c;
    int wcidx;

    // pre-load array with 0's
    for (idx = 0; idx < BUFFER; ++idx) {
        h[idx] = 0;
    }

    while ((c = getchar())) {
        if (c == ' ' || c == '\t' || c == '\n' || c == EOF){
            // store the data
            if (wcidx > 0) {
                // increment the value at whatever the length is
                ++h[wcidx - 1];
                // if this is the longest word we've seen, make a note
                if (h[wcidx -1] > maxlen) {
                    maxlen = h[wcidx - 1];
                }
                // if this is the furthest we've gone in the histogram array, make a note
                if (hlen < wcidx - 1) {
                    hlen = wcidx -1;
                }
                wcidx = 0;
            }
            if (c == EOF) {
                break;
            }
        } else {
            // keep counting
            ++wcidx;

        }
    }

    // now print out the horizontal histogram
    int colidx = 0;
    int lidx = 0;
    int j = hlen;


    printf("Longest Word Count -- Horizontal \n\n");

    while (j > 0){
        printf("%3d: \t", colidx + 1);

        for (lidx = 0; lidx < h[colidx]; ++lidx) {
            putchar('#');
        }
        putchar('\n');
        ++colidx;
        --j;
    }

    putchar('\n');

    // vertical histogram

    printf("Longest Word Count -- Vertical \n\n");

    for(lidx = maxlen; lidx >= 0; --lidx) {
        colidx = 0;

        while(colidx != hlen) {
            if (lidx == 0) {
                printf("%2d", colidx + 1);
                printf("\t");
            } else if (h[colidx] >= lidx) {
                printf("##");
                printf("\t");
            } else {
                printf("\t");
            }
            ++colidx;
        }
        putchar('\n');
    }
    return 0;
}
