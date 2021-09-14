/* Check if string is a palindrome or not
 *
 *@Saurabh 1910990417
 *DOS: 02-08-2021
 *Assignment: Assignment 1 - C Foundations
 *Compilation: gcc -o 6-palindrome 6-palindrome.c
 *Execution: ./6-palindrome
 */

#include<stdio.h>
#include<string.h>

void lowercaseString(char line[]);

int main () {

    char line[100];
    fgets(line, 100, stdin);

    int isPalindrome = 1;
    int len = strlen(line) - 1;

    lowercaseString(line);

    for(int pt1 = 0, pt2 = len - 1; pt1 < len/2 ; pt1++ , pt2--) {

        //leaving spaces

        while(line[pt1] == ' ') {  
	    pt1++;
	}
	while(line[pt2] == ' ') {
	    pt2--;
	}


	if(line[pt1] != line[pt2]) {
	    isPalindrome = 0;
	}
    }

    if(isPalindrome == 1) {
        printf("true\n");
    }
    else {
        printf("false\n");
    }

    return 0;
}

void lowercaseString(char line[]) {

    for(int i = 0; line[i] != '\n' ; i++) {
    
        if(line[i] >='A' && line[i] <= 'Z') {
	    line[i] += 32;
	}
    }
}
