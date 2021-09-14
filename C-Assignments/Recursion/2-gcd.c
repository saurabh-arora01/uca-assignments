/* Find GCD recursively
 *
 *@Saurabh 1910990417
 *DOS: 06-08-2021
 *Assignment: Recursion
 *Compilation: gcc -o 2-gcd 2-gcd.c
 *Execution: ./2-gcd
 */


#include<stdio.h>

int gcd();

int main() {

    int a, b;
    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);


    printf("Gcd of %d and %d is %d\n", a, b, gcd(a, b));

    return 0;
}

int gcd(int a, int b) {

    if(a % b == 0) {
        return b;
    }

    return gcd( b, a % b);
}


