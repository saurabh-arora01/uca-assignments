/* Analysis of run time complexity of Insertion Sort
 *
 *@Saurabh 1910990417
 *Assignment: Day2_Coding_Assignment
 *Compilation: gcc -o insertion_sort insertion_sort.c
 *Execution: ./insertion_sort
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<sys/time.h>

void insertionSort (int arr[], int size );
double sortAndCalculateTime (int arr[], int size);
void addRandomData (int arr[], int size);
void addAscData (int arr[], int size);
void addDecData (int arr[], int size);
void printArray (int arr[], int size);


int main() {

    int size;
    scanf("%d", &size);

    int arr[size];
    double timeTaken;

    // For Random Values
    addRandomData(arr, size);
    timeTaken = sortAndCalculateTime(arr, size);

    printf("Time taken for random values: %lf \n",timeTaken);


    //For Ascending Values  
    addAscData(arr, size); 
    timeTaken = sortAndCalculateTime(arr, size);

    printf("Time taken for ascending values: %lf \n",timeTaken);


    //For Descending Values
    addDecData(arr, size);
    timeTaken = sortAndCalculateTime(arr, size);

    printf("Time taken for descending values: %lf \n",timeTaken);
  
    return 0;
}


double sortAndCalculateTime(int arr[], int size) {

    struct timeval start, end;

    gettimeofday(&start , NULL);
    insertionSort(arr, size);
    gettimeofday(&end , NULL);

    double timeTaken = (end.tv_sec - start.tv_sec) * 1000000;
    timeTaken = (timeTaken + (end.tv_usec - start.tv_usec)) * 0.000001;

    return timeTaken;
}

void insertionSort (int arr[], int size) {

    for(int i = 1; i < size ; i++) {
    
        int currentElement = arr[i], j = i;

	while(j > 0 && arr[j-1] > currentElement) {
	
	    arr[j] = arr[j-1];
	    j--;
	}
	arr[j] = currentElement;
    }
}
void addRandomData (int arr[], int size) {
    
    srand(time(0));

    for(int i = 0; i < size ; i++) {
        arr[i]= rand();
    }
}

void addAscData (int arr[], int size) {

    for(int i = 0; i < size ; i++ ) {
        arr[i] = i;
    }
}

void addDecData (int arr[] ,int size) {

    for(int i = 0; i < size ; i++) {
        arr[i] = size - i;
    }
}

void printArray (int arr[], int size) {
  
    for(int i = 0; i < size ; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
