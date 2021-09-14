/* Reverse a 1-D array
 *
 *@Saurabh 1910990417
 *DOS: 02-08-2021
 *Assignment: Assignment 1 - C Foundations
 *Compilation: gcc -o 4-reverse 4-reverse.c
 *Execution: ./4-reverse
 */

#include<stdio.h>

void reverse (int arr[], int size);
void scanArray (int arr[] ,int size);
void printArray (int arr[], int size);

int main () {

    int size;
    scanf("%d",&size);

    int arr[size];

    scanArray(arr, size);

    reverse(arr, size);

    printArray(arr, size);

    return 0;
}


void reverse (int arr[], int size) {

    for(int i = 0 ; i < size / 2 ; i++) {

	int swap = arr[i];
        arr[i] = arr[size-1-i];
	arr[size-1-i] = swap;
    }
}

void scanArray (int arr[], int size) {

    for(int i = 0; i < size ; i++) {
    
        scanf("%d", &arr[i]);
    }

}

void printArray (int arr[], int size) {

    for(int i = 0 ; i < size ; i++) {

        printf("%d ", arr[i]);    
    }

    printf("\n");
}
