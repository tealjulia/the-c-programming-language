#include <stdio.h>

/* count blank chars and new line chars
    from stdin. print totals. 
*/

main () {
    int b, t, nl, c;

    nl = 1;
    b = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') ++nl;
        if (c == ' ') ++b;
    }
    
    printf("blanks: %.0d  | lines: %.0d\n", b, nl);
}