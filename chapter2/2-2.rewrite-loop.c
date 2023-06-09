/*
    rewrite the following loop without using && or ||:
     for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
       s[i] = c;
*/

#include <stdio.h>

int main(void){
    int i, c;
    int lim = 100;
    char s[lim];

    for (i = 0; i < lim - 1; ++i) {
        c = getchar();
        if (c == '\n') {
            break;
        }
        if (c == EOF) {
            break;
        }
        s[i] = c;
    }

    return 0;
}