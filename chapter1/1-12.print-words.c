#include <stdio.h>

/* copy words from from stdin and place
    printing each word on a new line
*/

#define OUT 0
#define IN 1

int main(void)
{
  int c;
  int state;

  state = FALSE;
  while ((c = getchar()) != EOF)
  {
    if (c != ' ' && c != '\t' && c != '\n')
    {
      putchar(c);
      state = TRUE;
    }
    else if (state)
    {
      putchar('\n');
      state = FALSE;
    }
  }

  return 0;
}