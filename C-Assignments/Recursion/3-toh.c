/* Tower of Hanoi
 *
 *@Saurabh 1910990417
 *DOS: 06-08-2021
 *Assignment: Recursion
 *Compilation: gcc -o 3-toh 3-toh.c
 *Execution: ./3-toh
 */

#include<stdio.h>

void toh(int n, char start, char end, char aux) {

    if(n == 1) {
        printf("%c to %c\n", start, end);
	return;
    }

    toh(n - 1, start, aux, end);
    
    printf("%c to %c\n", start, end);

    toh(n - 1, aux, end, start);
}


int main() {

    int height;
    printf("Enter height of tower: ");
    scanf("%d", &height);

    toh(height, 'A', 'C', 'B');

    return 0;
}

