/* Recursive implementation of selection sort
 *
 *@Saurabh 1910990417
 *DOS: 06-08-2021
 *Assignment: Recursion
 *Compilation: gcc -o 1-selection-sort 1-selection-sort.c
 *Execution: ./1-selection-sort
 */

#include<stdio.h>

void selectionSort();
int findSmallestToRight();
void swap();
void printArray();

int main() {

    int size;
    printf("Entrt size of array: ");
    scanf("%d", &size);

    int arr[size];

    for(int i = 0 ; i < size ; i++ ) {
        scanf("%d", &arr[i]);
    }

    selectionSort(arr, size, 0);

    printArray(arr, size);

    return 0;
}


void selectionSort(int arr[], int size, int n) {

    if(n == size) {
        return;
    }

    int smallest = findSmallestToRight(arr, size, n, n);

    if(smallest != n) {
        swap(arr, smallest, n);
    }

    selectionSort(arr, size, n + 1);
}


int findSmallestToRight(int arr[], int size, int  smallest, int n) {

    if(n == size) {
        return smallest;
    }

    if(arr[n] < arr[smallest]) {
        smallest = n;
    }

    return findSmallestToRight(arr, size, smallest, n + 1);
}

void swap (int arr[], int a, int b) {

    int swap = arr[a];
    arr[a] = arr[b];
    arr[b] = swap;
}

void printArray(int arr[], int size) {

    for(int i = 0 ; i < size ; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
