/* Print lines greater than 80 characters
 *
 *@Saurabh 1910990417
 *DOS: 02-08-2021
 *Assignment: Assignment 1 - C Foundations
 *Compilation: gcc -o 7-file 7-file.c
 *Execution: ./7-file
 */

#include<stdio.h>
#include<string.h>

int main () {

    FILE *fp = fopen("7-file-text.txt", "r");

    if(fp == NULL) {
        printf("File does not exists");
    }
    else {
    
        char fileContent[101], substring[100];
	int ptr = 0;

	while(fgets (fileContent, 100, fp) != NULL) {
          
	    for(int i = 0 ; fileContent[i] != '\0' ; i++) {
	      
		substring[ptr] = fileContent[i];
		ptr++;

	        if(fileContent[i] == '\n') {

		    substring[ptr] = '\0';

		    if(strlen(substring) > 80) {

		        printf("%s", substring);
		    }

		    ptr = 0;
		}
	    }
	    
	}
    
    }

    fclose(fp);

    return 0;
}

