#include <stdio.h>
#include <ctype.h>

int main() {
    char expr[101];
    while (scanf("%s", expr) != EOF) {
        int stack[100];
        int top = -1;

        for (int i = 0; expr[i] != '\0'; i++) {
            char c = expr[i];
            if (isdigit(c)) {
                stack[++top] = c - '0';
            } else {
                int b = stack[top--];
                int a = stack[top--];
                int res = 0;
                switch (c) {
                    case '+': res = a + b; break;
                    case '-': res = a - b; break;
                    case '*': res = a * b; break;
                    case '/': res = a / b; break;  
                    case '%': res = a % b; break;  
                }
                stack[++top] = res;
            }
        }

        printf("%d\n", stack[top]);
    }

    return 0;
}
