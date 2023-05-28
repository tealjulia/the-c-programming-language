#include <stdio.h>

/* find out what happens when printfs arguemnt string contains
    other escaped characters than those mentioned above
*/
int main(void)
{
    printf("hello, world \a"); 
    printf("\n");

    return 0;
}
