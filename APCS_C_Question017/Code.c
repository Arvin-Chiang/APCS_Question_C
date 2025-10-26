#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int D, I;
        scanf("%d %d", &D, &I);

        int node = 1;
        for (int level = 1; level < D; level++) {
            if (I % 2 == 1) {
                node = node * 2;  
                I = (I + 1) / 2;
            } else {
                node = node * 2 + 1;  
                I = I / 2;
            }
        }

        printf("%d\n", node);
    }

    return 0;
}
