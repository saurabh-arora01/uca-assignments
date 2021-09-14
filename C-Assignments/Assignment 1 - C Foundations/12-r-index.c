/* Rightmost index of string 2 in string 1
 *
 *@Saurabh 1910990417
 *DOS: 02-08-2021
 *Assignment: Assignment 1 - C Foundations
 *Compilation: gcc -o 12-index 12-index.c
 *Execution: ./12-index
 */

#include<stdio.h>
#include<string.h>

int findRightmostIndex (char *s, char *t);

int main() {

    char s[100], t[100];

    fgets(s, 100, stdin);
    fgets(t, 100, stdin);

    printf("%d\n", findRightmostIndex(s, t));

    return 0;
}

int findRightmostIndex(char *s, char *t) {

    int lenS = strlen(s) - 1, lenT = strlen(t) - 1;

    for(int i = lenS-lenT ; i >= 0 ; i--) {
    
	int match = 0;

	for(int j = i ; j < i + lenT ; j++) {  //for every character checking if the next lenT characters are same in str t or not
	
	    if(s[j] == t[match]) {
	        match++;
	    }
	    else {
	        match = 0;
		break;
	    }

	    if(match == lenT) {
	        return i;
	    }
	}
    }

    return -1;
}
