#include <stdio.h>

/*
    Write a program to check a C program for rudimentary syntax 
    errors like unmatched parentheses, brackets and braces. Don't 
    forget about quotes, both single and double, escape sequences, 
    and comments. (This program is hard if you do it in full generality.)
*/

/*
    BRAIN DUMP:
    - could use an array to store ascii values seen so far and check if closing brackets
        are equal to opening brackets
        - while looping to fill the array, would need to check for escaped values!
        - but what if there are nested brackets? this only works for one level of brackets and/or for
            linting a finished program without giving any hint as to where the error occurred

*/

int main(void){
    int c;
    while ((c=getchar()) != EOF){

    }
}