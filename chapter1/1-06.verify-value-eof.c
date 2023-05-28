 #include <stdio.h>
 
   /* Verify that the expression getchar() != EOF is 0 or 1. */

main() {
int c;
  while ((c = getchar()) != EOF)
    if ((c != EOF) == 1)
     printf("1");
    else printf("unexpected value");
  if ((c != EOF) == 0)
    printf("0");
  else printf("unexpected value");

}