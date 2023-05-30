#include <stdio.h>
#define MAXLINE 1000   /* maximum input line length */

int get_line(char line[], int maxline);

/* revise the main routine of this program to print the 
longest input line for an arbitrarily long input */

/* I am assuming this means to print the length + contents of all lines,
    not that I am to adjust to lines that are longer than MAXLINE and
    solve the problem of "wrapping"
*/

int main(void)
{
int len = 0;
char line[MAXLINE];

while ((len = get_line(line, MAXLINE)) > 0)
  {
    printf("LENGTH:  %d\n", len);
    printf("LINE CONENTS:  %s\n", line);
  }

return 0; 
}
   /* get_line:  read a line into s, return length  */
   int get_line(char s[],int lim)
{
int c, i;
       for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
           s[i] = c;
       if (c == '\n') {
           s[i] = c;
++i; }
s[i] = '\0';
return i; 
}
