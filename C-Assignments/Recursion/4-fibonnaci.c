/* Print every 3rd element of fibonnaci series
 *
 *@Saurabh 1910990417
 *DOS: 06-08-2021
 *Assignment: Recursion
 *Compilation: gcc -o 4-fibonnaci 4-fibonnaci.c
 *Execution: ./4-fibonnaci
 */


#include<stdio.h>


//Iterative
void fibI(int n) {

    int last3rdFib = 0, last6thFib = 0;
    int currentFib;

    for(int i = 1; i <= n ; i++) {
    
        if(i == 1) {
	    
	    currentFib = 2;  // fib(3)
	}
	else if(i == 2) {

	    currentFib = 8;  //fib(6)
	}
	else {
	
	    currentFib = (4 * last3rdFib) + last6thFib;  //fibonnaci of every number is equal to addition of 4 times the fib(n - 3) and 1 time fib(n - 6)
	}
	
	last6thFib = last3rdFib;
        last3rdFib = currentFib;
		
        printf("%d ", currentFib);
    }

    printf("\n");
}


//Recursive
void fibR(int n, int i, int last3rdFib, int last6thFib) {

    if(i == n + 1) {
        return; 
    }

    int currentFib;

    if(i == 1) {

        currentFib = 2; 
    }
    else if(i == 2) {

	currentFib = 8;
    }
    else {

        currentFib = (4 * last3rdFib) + last6thFib;
    }
 
    printf("%d ", currentFib);

    last6thFib = last3rdFib;
    last3rdFib = currentFib;

    fibR(n, i + 1, last3rdFib, last6thFib);
}



int main() {

    int n;
    scanf("%d", &n);

    fibI(n);
    //fibR(n, 1, 0, 0);

    return 0;
}
