/* Write a function setbits(x,p,n,y) that returns x with the n bits 
    that begin at position p set to the rightmost n bits of y, 
    leaving the other bits unchanged. 
*/

#include <stdio.h>
unsigned setbits(unsigned x, int p, int n, unsigned y);
unsigned getbits(unsigned x, int p, int n);

int main(void)
{
	int x = 42;	
	int y = 35;   

    int xarray[3] = {42, 950, 4200};
    int yarray[3] = {35, 100, 478};
    int parray[3] = {8, 5, 10};
    int narray[3] = {5, 3, 4};
	
    printf("result: %d\n", setbits(xarray[0],parray[0],narray[0],yarray[0])); // should be 58
    printf("result: %d\n", setbits(xarray[1],parray[1],narray[1],yarray[1])); // should be 950
    printf("result: %d\n", setbits(xarray[2],parray[2],narray[2],yarray[2])); // should be 5992
	return 0;
}

/* getbits:  get n bits from position p */
   unsigned getbits(unsigned x, int p, int n)
   {
       return (x >> (p+1-n)) & ~(~0 << n);
}

unsigned setbits(unsigned x, /* the number we are looking at */
            int p, /* the position we start with in x */
            int n, /* the number of bits to evaluate */
            unsigned y /* the second number we are looking at */) {

    int mask = getbits(y, n-1, n); 
    mask = mask << (p+1-n);
    x = x | mask;

    return x;
}

