/* Print n even numbers of fibonnaci series
 *
 *@Saurabh 1910990417
 *DOS: 28-08-2021
 *Assignment: Assignment-8: Algorithm
 *Compilation: gcc -o 1-fib 1-fib.c
 *Execution: ./1-fib
 */


#include<stdio.h>

void fibEven(int n) {

    int last3rdFib = 0, last6thFib = 0;
    int currentFib;

    for(int i = 1; i <= n ; i++) {
    
        if(i == 1) {
	    
	    currentFib = 2;
	}
	else if(i == 2) {

	    currentFib = 8;
	}
	else {

	    currentFib = (4 * last3rdFib) + last6thFib; 
	}
	
	last6thFib = last3rdFib;
        last3rdFib = currentFib;
		
        printf("%d ", currentFib);
    }

    printf("\n");
}

int main() {

    int n;
    scanf("%d", &n);

    fibEven(n);

    return 0;
}
