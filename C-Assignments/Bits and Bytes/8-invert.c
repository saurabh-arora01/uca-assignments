/*
 * Invert bits
 *@Saurabh 1910990417
 *DOS: 21-08-2021
 *Assignment: Bits and Bytes
 *Compilation: gcc -o 8-invert 8-invert.c
 *Execution: ./8-invert
 */
#include <stdio.h>

int invert (int x, int p, int n) {
    int temp = ~(~0<<n)<<p-1;
    return temp^x;
}

int main()
{   
    int x, p, n;
    scanf("%d %d %d",&x, &p, &n);

    printf("%d\n",invert(x, p, n));

    return 0;
}
