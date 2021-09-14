/*
 * conditional - same as x?y:z 
 *@Saurabh 1910990417
 *DOS: 21-08-2021
 *Assignment: Bits and Bytes
 *Compilation: gcc -o 6-conditional 6-conditional.c
 *Execution: ./6-conditonal
 */

#include <stdio.h>

int conditional(int x, int y, int z) {
    x = ~!!x + 1;
    return (x & y) | (~x & z);
}

int main()
{   
    int x,y,z;
    scanf("%d %d %d",&x, &y, &z);

    printf("%d\n", conditional(x,y,z));
    return 0;
}
