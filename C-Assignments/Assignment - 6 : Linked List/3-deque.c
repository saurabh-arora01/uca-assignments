/* Implement stack using linked list
 *
 *@Saurabh 1910990417
 *DOS: 30-08-2021
 *Assignment: Assignment 6 - Linked List
 *Compilation: gcc -o 3-deque 3-deque.c
 *Execution: ./3-deque
 */


#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Node {
    int data;
    struct Node *prev, *next;
};

struct Deque {
    struct Node *front, *back;
};

struct Deque* initalizeDeque() {

    struct Deque *deque = (struct Deque*) malloc(sizeof(struct Deque));

    deque -> front = NULL;
    deque -> back = NULL;

    return deque;
}

int isEmpty(struct Deque *deque) {

    if(deque -> front == NULL) {
        return 1;
    }

    return 0;
}

void addFront(struct Deque* deque, int value) {

    struct Node *new = (struct Node*) malloc(sizeof(struct Node));
    new -> data = value;
    new -> prev = NULL;

    if(isEmpty(deque)) {
        
	deque -> front = new;
        deque -> back = new;

	return;
    }

    deque -> front -> prev = new;
    new -> next = deque -> front;
    deque -> front = new;
}

void addBack(struct Deque* deque, int value) {

    struct Node *new = (struct Node*) malloc(sizeof(struct Node));
    new -> data = value;
    new -> next = NULL;

    if(isEmpty(deque)) {
        
	deque -> front = new;
        deque -> back = new;

	return;
    }

    deque -> back -> next = new;
    new -> prev  =  deque -> back;
    deque -> back = new;
}

int peekFront(struct Deque* deque) {

    if(isEmpty(deque)) {
        return INT_MIN;
    }

    return deque -> front -> data;
}

int peekBack(struct Deque* deque) {

    if(isEmpty(deque)) {
        return INT_MIN;
    }

    return deque -> back -> data;
}

int removeFront(struct Deque *deque) {

    if(isEmpty(deque)) {
        return INT_MIN;
    }

    int value = deque -> front -> data;

    if(deque -> front == deque -> back) {
        deque -> front = NULL;
	deque -> back = NULL;
    }
    else {
        deque -> front = deque -> front -> next;
    }

    return value;
}

int removeBack(struct Deque *deque) {

    if(isEmpty(deque)) {
        return INT_MIN;
    }

    int value = deque -> back -> data;

    if(deque -> front == deque -> back) {
        deque -> front = NULL;
	deque -> back = NULL;
    }
    else {
        deque -> back = deque -> back -> prev;
    }

    return value;
}

int isPresent(struct Deque *deque, int value) {

    if(isEmpty(deque)) {
        return INT_MIN;
    }

    struct Node *current = deque -> front;

    while(current != deque -> back -> next) {

        if(current -> data == value) {
	    return 1;
	}

	current = current -> next;
    }

    return 0;
}

int main () {

    struct Deque *deque = initalizeDeque();

    addFront(deque, 10);
    addFront(deque, 20);
    addBack(deque, 30);

    printf("%d\n", isPresent(deque, 20));
    printf("%d\n", removeFront(deque));
    printf("%d\n", removeBack(deque));

    return 0;
}
