/* Implement queue using linked list
 *
 *@Saurabh 1910990417
 *DOS: 30-08-2021
 *Assignment: Assignment 6 - Linked List
 *Compilation: gcc -o 2-queue 2-queue.c
 *Execution: ./2-queue
 */


#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Node {
    int data;
    struct Node *next;
};

struct Queue {
    struct Node *front, *back;
};

struct Queue* initalizeQueue() {

    struct Queue *queue = (struct Queue*) malloc(sizeof(struct Queue));

    queue -> front = NULL;
    queue -> back = NULL;

    return queue;
}

int isEmpty(struct Queue *queue) {

    if(queue -> front == NULL) {
        return 1;
    }

    return 0;
}

void enqueue(struct Queue *queue, int value) {

    struct Node *new = (struct Node*) malloc(sizeof(struct Node));
    new -> data = value;

    if(isEmpty(queue)) {
        queue -> front = new;
	queue -> back = new;

	return;
    }

    queue -> back -> next = new;
    queue -> back = new;
}

int dequeue(struct Queue *queue) {

    if(isEmpty(queue)) {
        return INT_MIN;
    }

    int value = queue -> front -> data;

    if(queue -> front == queue -> back) {
        queue-> front = NULL;
	queue -> back = NULL;
    }
    else {
        queue -> front = queue -> front -> next;
    }

    return value;
}

int peek(struct Queue *queue) {

    if(isEmpty(queue)) {
        return INT_MIN;
    }

    return queue -> front -> data;
}

int main() {

    struct Queue *queue = initalizeQueue();

    enqueue(queue, 10);
    enqueue(queue, 20);

    printf("%d\n", dequeue(queue));
    printf("%d\n", dequeue(queue));

    enqueue(queue, 30);

    printf("%d\n", dequeue(queue));

    printf("%d\n", peek(queue));

    return 0;
}
