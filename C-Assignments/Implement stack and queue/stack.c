/* Implementation of Stack
 *
 *@Saurabh 1910990417
 *DOS: 04-08-2021
 *Assignment: Day2_Coding_Assignment
 *Compilation: gcc -o stack stack.c
 *Execution: ./stack
 */


#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

void push(int value);
int pop();
int peek();
int isEmpty();
int isFull();
void resizeStack();
void printStack();


int top = -1, capacity = 7;
int *stack;

int main() {

    stack = (int*) calloc(capacity, sizeof(int));

    free(stack);

    return 0;
}

void push(int value) {

    top++;

    if(isFull()) {
        resizeStack();
    }

    stack[top] = value;
}

int pop() {

    if(isEmpty()) {

        printf("Stack Underflow\n");
	return INT_MIN;
    }

    int value = stack[top];

    top--;

    printf("Popped Element: %d\n", value);

    return value;
}

int peek() {

    if(isEmpty()) {

	printf("Stack Underflow\n");
        return INT_MIN;	
    }

    return stack[top];
}

void resizeStack() {

    capacity = capacity * 2;
    stack = (int*) realloc(stack, capacity * sizeof(int));

}

int isEmpty() {

    if(top == -1) {
        return 1;
    }

    return 0;
}

int isFull() {

    if(top == capacity) {
        return 1;
    }

    return 0;
}

void printStack() {

    for(int i = top ; i >= 0 ; i--) {
        printf("%d\n", stack[i]);
    }

}
