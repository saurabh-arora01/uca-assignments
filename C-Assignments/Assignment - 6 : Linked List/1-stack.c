/* Implement stack using linked list
 *
 *@Saurabh 1910990417
 *DOS: 30-08-2021
 *Assignment: Assignment 6 - Linked List
 *Compilation: gcc -o 1-stack 1-stack.c
 *Execution: ./1-stack
 */

#include<stdio.h> 
#include<limits.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Stack {
    struct Node *head;
};

struct Stack* initalizeStack() {

    struct Stack *stack = malloc(sizeof(struct Stack));

    stack -> head = NULL;

    return stack;
}

int isEmpty(struct Stack *stack) {

    if(stack -> head == NULL) {
        return 1;
    }

    return 0;
}

void push(struct Stack *stack, int value) {

    struct Node *new = (struct Node*) malloc(sizeof(struct Node));
    new -> data = value;

    if(isEmpty(stack)) {
        stack -> head = new;
	return;
    }

    new -> next = stack -> head;
    stack -> head = new;
}

int pop(struct Stack *stack) {

    if(isEmpty(stack)) {
        return INT_MIN;
    }

    int value = stack -> head -> data;

    stack -> head = stack -> head -> next;

    return value;
}

int peek(struct Stack *stack) {

    if(isEmpty(stack)) {
        return INT_MIN;
    }

    return stack -> head -> data;
}



int main() {

    struct Stack *stack = initalizeStack();

    push(stack, 10);
    push(stack, 20);

    printf("%d\n", pop(stack));
    printf("%d\n", peek(stack));

    return 0;
}
