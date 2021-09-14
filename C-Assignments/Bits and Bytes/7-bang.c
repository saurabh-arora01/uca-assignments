/*
 * compute !x without using !
 *@Saurabh 1910990417
 *DOS: 21-08-2021
 *Assignment: Bits and Bytes
 *Compilation: gcc -o 7-bang 7-bang.c
 *Execution: ./7-bang
 */

#include <stdio.h>

int bang(int x) {
    return (((x>>31) + ((~x+1)>>31))) + 1;
}

int main()
{   
    int x; 
    scanf("%d", &x);

    printf("%d\n", bang(x));

    return 0;
}
