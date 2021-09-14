/* Reverse string
 *
 *@Saurabh 1910990417
 *DOS: 02-08-2021
 *Assignment: Assignment 1 - C Foundations
 *Compilation: gcc -o 8-reverse 8-reverse.c
 *Execution: ./8-reverse
 */

#include<stdio.h>
#include<string.h>

void reverse (char line[]);

int main() {

    char line[100];
    fgets(line, 100, stdin);

    reverse(line);

    printf("%s", line);
    return 0;
}

void reverse(char* s) {

    int len = strlen(s) - 1;

    for(int i = 0; i < len/2 ; i++) {
    
        char swap = s[i];
	s[i] = s[len-1-i];
	s[len-1-i] = swap;
    }
}
