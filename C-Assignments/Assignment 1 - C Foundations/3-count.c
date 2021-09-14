/* Count number of vowels and consonants
 *
 *@Saurabh 1910990417
 *DOS: 02-08-2021
 *Assignment: Assignment 1 - C Foundations
 *Compilation: gcc -o 3-count 3-count.c
 *Execution: ./3-count
 */

#include<stdio.h>

int main() {

    char line[100];
    fgets(line, 100, stdin);

    int countVowel = 0,  countConsonant = 0;

    for(int i = 0 ; line[i] != '\n' ; i++) {
 
	char current = line[i];

	if(current >= 'A' && current <= 'Z') {
	    current += 32; //converting to lowercase
	}		

        if (current >= '0' && current <= '9') {
	    continue;
	}
	else if (current == 'a' || current == 'e' || current == 'i' || current == 'o' || current == 'u') {
	    countVowel++;
	}
	else {
	    countConsonant++;
	}
    }

    printf("Count of Vowel's: %d \nCount of Consonants's: %d\n", countVowel, countConsonant);

    return 0;
}
