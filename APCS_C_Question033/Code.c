#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, caseNum = 1;

    while (scanf("%d", &n) == 1) {
        int *arr = (int*)malloc(n * sizeof(int));  
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        long long maxProduct = -1e18; 

        
        for (int i = 0; i < n; i++) {
            long long product = 1;
            for (int j = i; j < n; j++) {
                product *= arr[j];
                if (product > maxProduct)
                    maxProduct = product;
            }
        }

        if (maxProduct <= 0)
            maxProduct = 0;

        printf("Case #%d: The maximum product is %lld.\n\n", caseNum, maxProduct);
        caseNum++;

        free(arr); 

    return 0;
}
