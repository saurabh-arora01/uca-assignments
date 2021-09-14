/* Print pyramid of given steps
 *
 *@Saurabh 1910990417
 *DOS: 02-08-2021
 *Assignment: Assignment 1 - C Foundations
 *Compilation: gcc -o 2-pyramid 2-pyramid.c
 *Execution: ./2-pyramid
 */

#include<stdio.h>

int main () {

    int steps;

    printf("Enter no. of steps: ");
    scanf("%d", &steps);

    for(int row = 1 ; row <= steps ; row++) {
    
	//printing spaces before blocks
        for(int before = 1 ; before <= steps - row ; before++) {
	    printf(" ");
	}

	//printing blocks
	for(int column = 1 ; column <= row ; column++) {
	    printf("# ");
	}

	//printing spaces after blocks
	for(int after = 1; after <= steps - row - 1 ; after++) {
	    printf(" ");
	}

	    printf("\n");
    }

    return 0;
}
