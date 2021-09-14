/*
 * extract byte n from x
 *@Saurabh 1910990417
 *DOS: 21-08-2021
 *Assignment: Bits and Bytes
 *Compilation: gcc -o 4-getByte 4-getByte.c
 *Execution: ./4-getByte
 */

#include <stdio.h>

int getByte(int x, int n) {
    return (x >> 8*n) & 0xff;
}


int main()
{   
    int x, n;
    scanf("%x %d", &x, &n);

    printf("%x\n", getByte(x, n));
    
    return 0;
}
