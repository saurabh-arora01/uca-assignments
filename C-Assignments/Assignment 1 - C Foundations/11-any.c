/* Find first location of any character from str2 in str1
 *
 *@Saurabh 1910990417
 *DOS: 02-08-2021
 *Assignment: Assignment 1 - C Foundations
 *Compilation: gcc -o 11-any 11-any.c
 *Execution: ./11-any
 */

#include<stdio.h>
#include<string.h>

int any (char* s1, char* s2);

int main() {

    char s1[100], s2[100];

    fgets(s1, 100, stdin);
    fgets(s2, 100, stdin);

    printf("%d\n", any(s1, s2));

    return 0;
}

int any (char* s1, char* s2) {

    int len1 = strlen(s1)-1, len2 = strlen(s2)-1;
    int ansIndex = -1;
    int countCharacter[256] = {0};  

    for(int i = 0; i < len2 ; i++) {
     
        countCharacter[s2[i]]++;  //storing the characters present in s2
    }

    for(int i = 0; i < len1 ; i++) {
    
        if(countCharacter[s1[i]] > 0) {
	    ansIndex = i;
	    break;
	}
    }

    return ansIndex;
}
