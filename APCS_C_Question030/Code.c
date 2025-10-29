#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) && n != 0) {
        int matrix[100][100];
        int row_sum[100] = {0};
        int col_sum[100] = {0};
        int i, j;

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                scanf("%d", (*(matrix + i) + j));
                row_sum[i] += *(*(matrix + i) + j);
                col_sum[j] += *(*(matrix + i) + j);
            }
        }

        int odd_row = -1, odd_col = -1;
        int row_count = 0, col_count = 0;

        for (i = 0; i < n; i++) {
            if (*(row_sum + i) % 2 != 0) {
                odd_row = i;
                row_count++;
            }
        }

        for (j = 0; j < n; j++) {
            if (*(col_sum + j) % 2 != 0) {
                odd_col = j;
                col_count++;
            }
        }

        if (row_count == 0 && col_count == 0) {
            printf("OK\n");
        } else if (row_count == 1 && col_count == 1) {
            printf("Change bit (%d,%d)\n", odd_row + 1, odd_col + 1);
        } else {
            printf("Corrupt\n");
        }
    }
    return 0;
}
