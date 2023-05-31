#include <stdio.h>

#define MAXLEN 1000
#define TRUE 1
#define FALSE 0

/*  Exercise 1-23. Write a program to remove all comments from a C program. 
    Don't forget to handle quoted strings and character constants properly. 
    C comments don't nest.
    
    Note: the following solution could be optimized using a line buffer to 
    remove any leading tabs/spaces in the line containing the comment start...
    but it does not currently.
*/

    int main(void) {
        int c, lastc;
        int multiline = FALSE;
        int in = FALSE;

        while ((c=getchar()) != EOF) {
            // if we are in a comment
            if (in){
                if (multiline == FALSE){
                    if (c == '\n'){
                        in = FALSE;
                    }
                } else{
                    if (c == '*'){
                        if ((c=getchar()) == '/'){
                            in = FALSE;
                        }
                    }
                }
               
            } else {
            // if we are not in a comment
                // if we reach the start of a comment
                if (c == '/' && lastc != '\\'){
                    if ((c=getchar()) == '*'){
                        in = TRUE;
                        multiline = TRUE;
                    } else if (c == '/'){
                        in = TRUE;
                        multiline = FALSE;
                    }
                } else {
                    // if we are not in a comment, print the character
                    putchar(c);
                }
                }
            lastc = c;
        }
    return 0;
    }