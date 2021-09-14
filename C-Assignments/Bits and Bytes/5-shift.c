/*
 * shift x to the right by n
 *@Saurabh 1910990417
 *DOS: 21-08-2021
 *Assignment: Bits and Bytes
 *Compilation: gcc -o 5-shift 5-shift.c
 *Execution: ./5-shift
 */

#include <stdio.h>

int logicalShift(int x, int n) {
    x = x>>1 & 0x7fffffff;
    return (x >> (n-1));
}

int main()
{   
    int x, n;
    scanf("%x %d", &x, &n);

    printf("%x\n",logicalShift(x, n));
    return 0;
}
