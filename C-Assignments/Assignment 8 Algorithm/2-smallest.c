/* Find kth Smallest
 *
 *@Saurabh 1910990417
 *DOS: 28-08-2021
 *Assignment: Assignment-8: Algorithm
 *Compilation: gcc -o 2-smallest 1-smallest.c
 *Execution: ./1-smallest 
*/

#include<stdio.h>

int swap(int arr[], int i, int j) {

    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int findPivot(int arr[], int left, int right) {

    int pivot = arr[right];
    int i = left;

    for(int j = left ; j < right ; j++) {
    
        if(arr[j] < pivot) {
	    swap(arr, i, j);
	    i++;
	}
    }

    swap(arr, i, right);
    return i;
}

int findKthSmallest(int arr[], int left, int right, int k) {
   
    if(left == right) {
        return arr[right];
    }

    int pivotIndex = findPivot(arr, left, right);

    if(k - 1 == pivotIndex) {
        return arr[pivotIndex]; 
    }
    else if(k - 1 < pivotIndex) {
        return findKthSmallest(arr, left, pivotIndex - 1, k);
    }
    else {
        return findKthSmallest(arr, pivotIndex + 1, right, k);
    }
}


int main() {

    int size, k;
    scanf("%d %d",&size, &k);

    int arr[size];
    for(int i = 0 ; i < size ; i++) {
        scanf("%d", &arr[i]);
    }

    int ans = findKthSmallest(arr, 0, size - 1, k);

    printf("%d\n", ans);

    return 0;
}
