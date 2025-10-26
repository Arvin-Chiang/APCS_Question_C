#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char expr[1000];
    while (fgets(expr, sizeof(expr), stdin)) {
        int stack[1000];
        int top = -1;

        for (int i = 0; expr[i] != '\0'; i++) {
            char c = expr[i];

            if (isspace(c)) continue; 

            if (isdigit(c)) {
                stack[++top] = c - '0'; 
            } else {
                if (top < 1) continue; 

                int b = stack[top--];
                int a = stack[top--];
                int result = 0;

                if (c == '+')
                    result = a + b;
                else if (c == '-')
                    result = a - b;
                else if (c == '*')
                    result = a * b;
                else if (c == '/')
                    result = a / b;
                else if (c == '%')
                    result = a % b;

                stack[++top] = result;
            }
        }

        printf("%d\n", stack[top]);
    }
    return 0;
}
