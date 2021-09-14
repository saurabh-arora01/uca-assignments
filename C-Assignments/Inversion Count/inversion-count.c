#include<stdio.h>

int inversionCount(int arr[], int size) {

    int count = 0;

    for(int i = 0; i < size  ; i++) {
    
        for(int j = i + 1 ; j < size ; j++) {
	
	    if(arr[i] > arr[j]) {
	        count++;
	    }
	}
    }

    return count;
}


int main() {

    int size;
    scanf("%d", &size);

    int arr[size];
    for(int i = 0 ; i < size ; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", inversionCount(arr, size));

    return 0;
}



