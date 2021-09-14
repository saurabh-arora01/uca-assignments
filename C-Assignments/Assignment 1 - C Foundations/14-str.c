/* write library functions of strncmp, strncat and strncpy
 *
 *@Saurabh 1910990417
 *DOS: 02-08-2021
 *Assignment: Assignment 1 - C Foundations
 *Compilation: gcc -o 14-str 14-str.c
 *Execution: ./14-str
 */

#include<stdio.h>
#include<string.h>

void strnCpy (char *s, char *t, int n);
void strnCat (char *s, char *t, int n);
int strnCmp (char *s, char *t, int n);
int getSmaller (char *t, int n);

int main() {

    char s[200], t[100];
    int n;

    printf("Enter first string: ");
    fgets(s, 100, stdin);

    printf("Enter second string: ");
    fgets(t, 100, stdin);

    printf("Enter value of n: ");
    scanf("%d", &n);

    //strnCpy(s, t, n);
    //strnCat(s, t, n);
    
    //printf("%s\n", s);

    //printf("%d\n",strnCmp(s, t, n));

    return 0;
}

void strnCpy (char *s, char *t, int n) {
 
    int end = getSmaller (t, n);

    for (int i = 0 ; i < end ; i++ ) {
    
	s[i] = t[i];
    }
}

void strnCat (char *s, char *t, int n) {

     int lenS = strlen(s) - 1;
     int end = getSmaller (t, n);

     for(int i = 0; i < end ; i++) {
         s[lenS + i] = t [i];
     }

     s[end + lenS] = '\0';
}

int strnCmp (char *s, char *t, int n) {

    int end = getSmaller(t, n);

    for(int i = 0 ; i < end ; i++) {
    
        if (s[i] < t[i]) {
	    return -1;
	}    
	else if (s[i] > t[i]) {
	    return 1;
	}
    }

    return 0;
}

int getSmaller (char *t, int n) {

    int lenT = strlen(t)-1;

    return lenT < n ? lenT : n;
}
