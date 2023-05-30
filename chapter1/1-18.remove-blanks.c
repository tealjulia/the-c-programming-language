#include <stdio.h>

#define MAX_LEN 1000

void rtrim(char *str, int len) {
    while (len > 0 && (str[len-1] == ' ' || str[len-1] == '\t')) {
        str[--len] = '\0';
    }
}

int is_empty_line(char *str) {
    while (*str) {
        if (*str != ' ' && *str != '\t' && *str != '\n' && *str != '\r') {
            return 0;
        }
        str++;
    }
    return 1;
}

void print_line(char *line) {
    for(int i = 0; line[i]; i++) {
        putchar(line[i]);
    }
    putchar('\n');
}

int main() {
    char line[MAX_LEN];
    int len = 0;
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            line[len] = '\0';
            rtrim(line, len);

            if (!is_empty_line(line)) {
                print_line(line);
            }

            len = 0;
        } else if (len < MAX_LEN - 1) {
            line[len++] = c;
        }
    }

    if (len > 0) {
        line[len] = '\0';
        rtrim(line, len);

        if (!is_empty_line(line)) {
            print_line(line);
        }
    }

    return 0;
}