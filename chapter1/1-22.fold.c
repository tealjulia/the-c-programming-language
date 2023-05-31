#include <stdio.h>

#define MAX_LINE_LENGTH 50

int main(void) {
    int c, i, last_blank;
    char line[MAX_LINE_LENGTH + 2]; // +2 to account for a null character and a possible new line character

    i = 0;
    last_blank = -1;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            // set the null character
            line[i] = '\0';
            // print
            printf("%s\n", line);
            // reset counters
            i = 0;
            last_blank = -1;
            continue;
        }

        line[i] = c;

        if (c == ' ' || c == '\t') {
            // denote idx in case we have to wrap here
            last_blank = i;
        }

        if (i == MAX_LINE_LENGTH) {
            if (last_blank != -1) {
                line[last_blank] = '\0';
                printf("%s\n", line);
                i -= last_blank;
                for (int j = 0; j <= i; j++) {
                    line[j] = line[last_blank + j + 1];
                }
                last_blank = -1;
            } else {
                line[i] = '\0';
                printf("%s\n", line);
                i = 0;
            }
        } else {
            i++;
        }
    }

    if (i > 0) {
        line[i] = '\0';
        printf("%s\n", line);
    }

    return 0;
}
