#include <stdio.h>

main () {
    int b, t, nl, c;

    nl = 1;
    b = 0;
    t = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n') ++nl;
        if (c == ' ') ++b;
    }
    
    printf("blanks: %.0d  | lines: %.0d\n", b, nl);
}