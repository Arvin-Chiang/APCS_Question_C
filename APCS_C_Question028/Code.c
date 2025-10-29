#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
    char x[100];
    int A = 0, B = 0;

    scanf("%s", x);  
    int len = strlen(x);

    for (int i = 0; i < len; i++) {
        int digit = x[i] - '0';
        
        if ((i + 1) % 2 == 0)
            A += digit;  
        else
            B += digit;  
    }

    printf("%d\n", abs(A - B));
    return 0;
}
