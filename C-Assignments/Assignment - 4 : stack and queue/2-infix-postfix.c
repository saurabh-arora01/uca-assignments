/* Convert Infix expression to Postfix expression
 *
 *@Saurabh 1910990417
 *DOS: 24-08-2021
 *Assignment: Assignment 4 - Stacks and Queues
 *Compilation: gcc -o 2-infix-postfix 2-infix-postfix.c
 *Execution: ./2-infix-postfix
 */

#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#include<string.h>

int checkPrecedence(char operator);
int isOperator(char value);

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


    char infix[100], postfix[100];
    fgets(infix, 100, stdin);

    int lenInfix = strlen(infix) - 1, k = 0;
    
    for(int i = 0 ; i < lenInfix ; i++) {
    
        if(isOperator(infix[i])) {
	    
	    while(!isEmpty() && peek() != '(' && checkPrecedence(peek()) >= checkPrecedence(infix[i])) {
	    
	        postfix[k] = pop();
		k++;
	    }

	    push(infix[i]);
	}
	else if(infix[i] == '(') {
	    push(infix[i]);
	}
	else if(infix[i] == ')') {
	
            while(peek() != '(') {

	        postfix[k] = pop();
		k++;
	    }
	    pop();
	}
	else {
	    postfix[k] = infix[i];
	    k++;
	}

    }

    while(!isEmpty()) {
    
        postfix[k] = pop();
	k++;
    }

    postfix[k] = '\0';

    printf("%s\n", postfix);

    free(stack);

    return 0;
}

int checkPrecedence(char operator) {

    if(operator == '+' || operator == '-') {
        return 0;
    }
    else if(operator == '*' || operator == '/') {
        return 1;
    }
}

int isOperator(char value) {

    if(value == '+' || value == '-'  || value == '*' || value == '/') {
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
