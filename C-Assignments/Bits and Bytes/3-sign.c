/*
 * sign - return 1 if positive, 0 if zero, and -1 if negative
 *@Saurabh 1910990417
 *DOS: 21-08-2021
 *Assignment: Bits and Bytes
 *Compilation: gcc -o 3-sign 3-sign.c
 *Execution: ./3-sign
 */

#include <stdio.h>

int sign(int x) {
   return  (x >> 31) - (-x >> 31);
}

int main()
{   
    int x;
    scanf("%d",&x);

    printf("%d\n", sign(x));
    return 0;
}
