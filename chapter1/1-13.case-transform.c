#include <stdio.h>
#include <ctype.h>


/* returns c if c is not a letter
    returns lowercase if it is
*/


int lower(int c) {
    if (!isalpha(c)) {
        return c;
    } else {
        return tolower(c); // safer way to convert to lowercase
    }
}

int main (void) {
   int c;

   while (((c = lower(getchar())) != EOF))
   { putchar(c);
   }

   return 0;
}