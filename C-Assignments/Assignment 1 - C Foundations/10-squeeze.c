/* Write squeeze function
 *
 *@Saurabh 1910990417
 *DOS: 02-08-2021
 *Assignment: Assignment 1 - C Foundations
 *Compilation: gcc -o 10-squeeze 10-squeeze.c
 *Execution: ./10-squeeze
 */

#include<stdio.h>
#include<string.h>

void squeeze (char s1[], char s2[]);

int main() {

    char s1[100], s2[100];

    printf("Enter First String: ");
    fgets(s1, 100, stdin);

    printf("Enter Second String: ");
    fgets(s2, 100, stdin);

    squeeze(s1, s2);

    printf("%s\n", s1);

    return 0;
}

void squeeze (char* s1, char* s2) {

    int len1 = strlen(s1)-1, len2 = strlen(s2)-1;

    int charPresent [256] = {0};  // Contains the count of every character from s2
    char ans[len1];

    for(int i = 0; i < len2 ; i++) {
        charPresent[s2[i]]++;
    }

    int k = 0;

    for(int i = 0; i < len1 ; i++) {
    
        if(!(charPresent[s1[i]] > 0)) {  //checking if a character in s1 exists in s2
	    ans[k] = s1[i];
	    k++;
	}
    }

    ans[k] = '\0';

    for(int i = 0; ans[i] != '\0' ; i++) {
        s1[i] = ans[i];
    }

    s1[k] = '\0';

}
