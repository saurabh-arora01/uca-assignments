/*
 * bitXor using only ~ and &
 *@Saurabh 1910990417
 *DOS: 21-08-2021
 *Assignment: Bits and Bytes
 *Compilation: gcc -o 2-bitXor 1-bitXor.c
 *Execution: ./2-bitXor
 */

#include <stdio.h>

int bitXor (int x, int y) {
    return ~(~(x & ~y) & ~(~x & y));
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d\n", bitXor(x, y));
    
    return 0;
}
