/*
 * bitAnd using only ~ and |
 *@Saurabh 1910990417
 *DOS: 21-08-2021
 *Assignment: Bits and Bytes
 *Compilation: gcc -o 1-bitAnd 1-bitAnd.c
 *Execution: ./1-bitAnd
 */

#include <stdio.h>

int bitAnd (int x, int y){
    
    x = ~x;
    y = ~y;

    return ~(x | y);
}

int main()
{
    int x, y;
    scanf("%d %d",&x, &y);

    printf("%d\n", bitAnd(x, y));

    return 0;
}
