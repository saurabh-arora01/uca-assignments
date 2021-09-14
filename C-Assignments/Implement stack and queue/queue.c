/* Implementation of Queue
 *
 *@Saurabh 1910990417
 *DOS: 04-08-2021
 *Assignment: Day2_Coding_Assignment
 *Compilation: gcc -o queue queue.c
 *Execution: ./queue
 */

#include<stdio.h>
#include<limits.h>

void enque(int value);
int deque();
int isFull();
int isEmpty();
int peek();

int queue[7];
int capacity = 7;
int front = -1, back = -1;
int isLastEnque = 0;

int main() {

    return 0;
}

void enque(int value) {

    if(isFull()) {

        printf("Queue is Full\n");
        return;
    }
    if(front == -1) {
        front = 0;
    }

    isLastEnque = 1;

    back = (back + 1) % capacity;

    queue[back] = value;
}

int deque() {

    if(isEmpty()) {
  
        printf("Queue is Empty\n");
        return INT_MAX;
    } 

    isLastEnque = 0;

    int value = queue[front];

    front = (front + 1) % capacity;

    return value;
}

int peek() {

    if(isEmpty()) {
     
        printf("Queue is Empty\n");
	return INT_MIN;
    }

    return queue[front];
}

int isFull() {

    // if front becomes 1 greater than back and the last operation was enque than the queue is full
    if(isLastEnque && (back + 1) % capacity == front) {
        return 1;
    }

    return 0;
}

int isEmpty() {

    if(front == -1) {
        return 1;
    }
    // if front becomes 1 greater than back and the last operation was deque than the queue is empty
    else if( (!isLastEnque) && (back + 1) % capacity == front ) {
        return 1;
    }

    return 0;
}
