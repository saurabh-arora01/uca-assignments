/* Check if string 2 exists at the end of string 1 or not
 *
 *@Saurabh 1910990417
 *DOS: 02-08-2021
 *Assignment: Assignment 1 - C Foundations
 *Compilation: gcc -o 13-strend 13-strend.c
 *Execution: ./13-strend
 */

#include<stdio.h>
#include<string.h>

int strend (char* s, char* t);

int main() {

    char s[100], t[100];

    fgets(s, 100, stdin);
    fgets(t, 100, stdin);

    printf("%d\n", strend(s, t));

    return 0;
}

int strend (char* s, char* t) {

    int lenS = strlen(s) - 1, lenT = strlen(t) - 1;
    int isPresent = 1;

    if(lenS < lenT) {
        return 0;
    }

    for(int i = lenS-1, j = lenT-1 ; j > -1 ; i--, j--) {
   
        if(s[i] != t[j]) {
	    isPresent = 0;
	    break;
	}
    }

    return isPresent;
}
