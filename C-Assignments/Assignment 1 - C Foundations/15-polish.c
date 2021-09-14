/* Evaluate reverse polish notation
 *
 *@Saurabh 1910990417
 *DOS: 02-08-2021
 *Assignment: Assignment 1 - C Foundations
 *Compilation: gcc -o 15-polish 15-polish.c
 *Execution: ./15-polish
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int evaluatePolishExpression(char polish[]);

void push (int stack[], int *top, int value);
int pop (int stack[], int *top);

int main() {

    char polish[200] ;

    printf("Enter each number/operator seprated by space: ");
    fgets(polish, 200, stdin);

    int ans = evaluatePolishExpression(polish);

    printf("%d\n", ans);

    return 0;
}

int evaluatePolishExpression(char polish[]) {

    int stack[100] = {0};
    int top = -1;

    char *token = strtok(polish, " ");

    while(token != NULL) {
	
	int second, first;

        if ( isdigit(token[0]) || isdigit(token[1]) ) {  //checking 2nd for negative numbers
	
            push(stack, &top, atoi(token));
	}
        else {	

	    switch (token[0]) {

	        case '+' : second = pop (stack, &top);
			   first = pop(stack, &top);
			   push(stack, &top, first + second);
			   break;
			   
		case '-' : second = pop (stack, &top);
			   first = pop(stack, &top);
			   push(stack, &top, first - second);
			   break;
	
		case '*' : second = pop (stack, &top);
			   first = pop(stack, &top);
			   push(stack, &top, first * second);
			   break;

		case '/' : second = pop (stack, &top);
			   first = pop(stack, &top);
			   push(stack, &top, first / second);
			   break;
	    }
	}

        token = strtok(NULL," ");
    }

    return stack[top];
}



// stack related functions :-  

void push (int stack[], int *top, int value) {
    
    (*top)++;
    
    stack[*top] = value;
}

int pop (int stack[], int *top) {
   
    (*top)--;
    
    return stack[*top + 1];
}
