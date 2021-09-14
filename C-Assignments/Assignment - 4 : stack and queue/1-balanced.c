/* Check whether the sequence of brackets is balanced or not
 *
 *@Saurabh 1910990417
 *DOS: 24-08-2021
 *Assignment: Assignment 4 - Stacks and Queues
 *Compilation: gcc -o 1-balanced 1-balanced.c
 *Execution: ./1-balanced
 */

#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>

int checkBalanced(char* str);

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


    char str[100];
    fgets(str, 100, stdin);

    if(checkBalanced(str)) {
        printf("true\n");
    }
    else  {
        printf("false\n");
    }

    free(stack);

    return 0;
}


int checkBalanced(char *str) {

    int len = strlen(str) - 1;

    for(int i = 0 ; i < len ; i++) {
    
        if(str[i] == '}' && peek() == '{') {
	    pop();
	}
	else if(str[i] == ')' && peek() == '(') {
	    pop();
	}
	else if(str[i] == ']' && peek() == '[') {
	    pop();
	}
	else {
	    push(str[i]);
	}
    }

    if(isEmpty()) {
        return 1;
    }

    return 0;
}



// stack related functions
void push(int value) {

    top++;

    if(isFull()) {
        resizeStack();
    }

    stack[top] = value;
}

int pop() {

    if(isEmpty()) {
	return INT_MIN;
    }

    int value = stack[top];

    top--;

    return value;
}

int peek() {

    if(isEmpty()) {
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
