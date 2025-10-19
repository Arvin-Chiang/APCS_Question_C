#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int scores[20]; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    
    qsort(scores, n, sizeof(int), compare);

    
    for (int i = 0; i < n; i++) {
        printf("%d", scores[i]);
        if (i != n - 1) printf(" ");
    }
    printf("\n");

    int max_fail = -1; 
    int min_pass = 101; 
    for (int i = 0; i < n; i++) {
        if (scores[i] < 60) {
            if (scores[i] > max_fail) max_fail = scores[i];
        } else {
            if (scores[i] < min_pass) min_pass = scores[i];
        }
    }

    
    if (max_fail == -1)
        printf("best case\n");
    else
        printf("%d\n", max_fail);

    if (min_pass == 101)
        printf("worst case\n");
    else
        printf("%d\n", min_pass);

    return 0;
}
