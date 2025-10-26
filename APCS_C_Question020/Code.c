#include <stdio.h>

int unique_digits(int a, int b) {
    int used[10] = {0};
    for (int i = 0; i < 5; i++) {
        used[a % 10]++;
        used[b % 10]++;
        a /= 10;
        b /= 10;
    }
    for (int i = 0; i < 10; i++) {
        if (used[i] > 1) return 0;
    }
    return 1;
}

int main() {
    int N, first_case = 1;
    while (scanf("%d", &N) == 1 && N != 0) {
        if (!first_case) printf("\n");
        first_case = 0;

        int found = 0;
        for (int fghij = 1234; fghij <= 98765 / N; fghij++) {
            int abcde = fghij * N;
            if (abcde > 98765) continue;

            
            int a = abcde, b = fghij;
            if (unique_digits(a, b)) {
                found = 1;
                printf("%05d / %05d = %d\n", a, b, N);
            }
        }
        if (!found)
            printf("There are no solutions for %d.\n", N);
    }
    return 0;
}
