/*
    Write a function invert(x,p,n) that returns x with the n bits 
    that begin at position p inverted (i.e., 1 changed into 0 and vice versa), 
    leaving the others unchanged.
*/
#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main(void) {
    unsigned xarray[3] = {490, 950, 4200};
    int parray[3] = {4, 5, 10};
    int narray[3] = {5, 3, 4};

    printf("result: %u\n", invert(xarray[0], parray[0], narray[0])); // 501
    printf("result: %u\n", invert(xarray[1], parray[1], narray[1])); // 910
    printf("result: %u\n", invert(xarray[2], parray[2], narray[2])); 

    return 0;
}

unsigned invert(unsigned x, int p, int n) {
    unsigned mask = ((1U << n) - 1) << (p - n + 1);
    return x ^ mask;
}


