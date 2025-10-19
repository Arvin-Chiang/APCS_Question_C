#include <stdio.h>
#include <stdlib.h>

int main() {
    char X[101]; 
    scanf("%s", X);

    int A = 0; 
    int B = 0; 

    
    int len = 0;
    while (X[len] != '\0') len++;

    
    for (int i = 0; i < len; i++) {
        int digit = X[len - 1 - i] - '0'; 
        if (i % 2 == 0) { 
            A += digit;
        } else { 
            B += digit;
        }
    }

    int diff = A - B;
    if (diff < 0) diff = -diff;

    printf("%d\n", diff);

    return 0;
}
