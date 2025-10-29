#include <stdio.h>
#include <string.h>

#define MAX 1000  

int main() {
    int N = 120;
    int result[MAX];
    int len = 1;

    
    memset(result, 0, sizeof(result));
    result[0] = 1;

    
    for (int i = 0; i < N - 1; i++) {
        int carry = 0;
        for (int j = 0; j < len; j++) {
            int temp = result[j] * 4 + carry;
            result[j] = temp % 10;
            carry = temp / 10;
        }
        while (carry) {
            result[len] = carry % 10;
            carry /= 10;
            len++;
        }
    }

    
    printf("4^%d = ", N-1);
    for (int i = len - 1; i >= 0; i--) {
        printf("%d", result[i]);
    }
    printf("\n");

    return 0;
}
