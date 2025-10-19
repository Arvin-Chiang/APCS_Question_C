#include <stdio.h>
#include <math.h>
#include <stdbool.h>


bool all_even_digits(long long num) {
    while (num > 0) {
        if ((num % 10) % 2 != 0) return false;
        num /= 10;
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    
    while (n--) {
        int k;
        scanf("%d", &k);
        
        long long start = pow(10, k - 1);
        long long end = pow(10, k) - 1;
        
        long long root = (long long)ceil(sqrt((double)start));
        long long result = -1;
        
        while (1) {
            long long square = root * root;
            if (square > end) break;
            if (all_even_digits(square)) {
                result = square;
                break;
            }
            root++;
        }
        
        if (result != -1)
            printf("%lld\n", result);
        else
            printf("No solution\n");
    }
    
    return 0;
}
