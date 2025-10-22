#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, x;
    scanf("%d", &n);

    
    int *arr = (int *)malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    
    int left = 0, right = n - 1;
    int count = 0;
    int found_index = -1;

    while (left <= right) {
        count++;
        int mid = left + (right - left) / 2;

        if (arr[mid] == x) {
            found_index = mid;
            break;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (found_index != -1) {
        printf("%d %d\n", found_index, count);
    } else {
        printf("not found %d\n", count);
    }

    
    free(arr);

    return 0;
}
