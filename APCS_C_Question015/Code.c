#include <stdio.h>
#include <string.h>

char stack[1000];
int top = -1;


void push(char c) {
    stack[++top] = c;
}


char pop() {
    return stack[top--];
}


int isEmpty() {
    return top == -1;
}


int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    return 0;
}

int main() {
    char infix[1000];
    scanf("%s", infix);  

    char postfix[1000];
    int k = 0; 

    for (int i = 0; i < strlen(infix); i++) {
        char c = infix[i];

        if (c >= 'A' && c <= 'Z') {
           
            postfix[k++] = c;
        } else if (c == '(') {
            push(c);
        } else if (c == ')') {
            
            while (!isEmpty() && stack[top] != '(') {
                postfix[k++] = pop();
            }
            pop(); 
        } else {
            
            while (!isEmpty() && precedence(stack[top]) >= precedence(c)) {
                postfix[k++] = pop();
            }
            push(c);
        }
    }

    
    while (!isEmpty()) {
        postfix[k++] = pop();
    }

    postfix[k] = '\0'; 
    printf("%s\n", postfix);
    return 0;
}
