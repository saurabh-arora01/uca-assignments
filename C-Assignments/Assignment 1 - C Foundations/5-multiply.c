/* Multiply 2 given matrices
 *
 *@Saurabh 1910990417
 *DOS: 02-08-2021
 *Assignment: Assignment 1 - C Foundations
 *Compilation: gcc -o 5-mutiply 5-multiply.c
 *Execution: ./5-multiply
 */

#include<stdio.h>

int main() {

    int size;

    printf("Enter Size: ");
    scanf("%d", &size);

    int m1[size][size], m2[size][size], m3[size][size];

    printf("Enter first matrix: ");
    for(int i = 0; i < size ; i++) {
        for(int j = 0; j < size ; j++) {
	    scanf("%d", &m1[i][j]);
	}
    }
    
    printf("Enter second matrix: ");
    for(int i = 0; i < size ; i++) {
        for(int j = 0; j < size ; j++) {
	    scanf("%d", &m2[i][j]);
	}
    }


 // i for row(1), j for column(2) and k for both row(2) and column(1)

    for (int i = 0 ; i < size ; i++) {
    
        for(int j = 0 ; j < size ; j++) {
	
	    int sum = 0;

 	    for(int k = 0 ; k < size ; k++) {
	    
               sum += m1[i][k] * m2[k][j];
	    }

	    m3[i][j] = sum;
	}
    }


    for (int i = 0 ; i < size ; i++) {
    
        for(int j = 0 ; j < size ; j++) {
	    
            printf("%d ",m3[i][j]);
	}
	printf("\n");
    }

    return 0;
}
