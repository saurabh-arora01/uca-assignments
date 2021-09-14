/* Swapping of two numbers without using extra variables
 *
 *@Saurabh 1910990417
 *DOS: 02-08-2021
 *Assignment: Assignment 1 - C Foundations
 *Compilation: gcc -o 1-swap 1-swap.c
 *Execution: ./1-swap
 */

#include<stdio.h>

int main () {

    int a, b;

    printf("Enter 1st number: ");
    scanf("%d", &a);

    printf("Enter 2nd number: ");
    scanf("%d", &b);

    a += b;
    b = a - b;
    a -= b;

    printf("1st: %d, 2nd: %d\n", a, b);

    return 0;
}
