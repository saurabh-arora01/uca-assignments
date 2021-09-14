/* Convert hexadecimal string to integer
 *
 *@Saurabh 1910990417
 *DOS: 02-08-2021
 *Assignment: Assignment 1 - C Foundations
 *Compilation: gcc -o 9-htoi 9-htoi.c -lm
 *Execution: ./9-htoi
 */

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<math.h>

int htoi (char hexa[]);

int main () {

    char hexa[100];
    fgets (hexa,100,stdin);

    printf("%d\n", htoi(hexa));

    return 0;
}

int htoi (char hexa[]) {

    int decimal = 0, exponent = 0,  ptr = strlen(hexa) - 2; // for leaving /n and /0

    while(ptr > -1) {
        
        char current = toupper(hexa[ptr]);

	if(current == 'X') {
	    break;
	}

	if(current >= 'A' && current <= 'F') {
	    current -= 55; // ascii value of A is 65 so it will convert it to 10 and so on
	}
	else {
	    current -= 48; //ascii value of 0 is 48
	}

	decimal += current * (int) pow(16, exponent);
	exponent++;
    
	ptr--;
    }

    return decimal;
}
