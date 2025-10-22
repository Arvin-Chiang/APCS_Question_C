#include <stdio.h>

int main() {
    int n, caseNum = 1;
    while (scanf("%d", &n) != EOF) {   
        int s[20];
        for (int i = 0; i < n; i++) {
            scanf("%d", &s[i]);       
        }

        long long mP = -1e18;  
        for (int i = 0; i < n; i++) {
            long long p = 1;
            for (int j = i; j < n; j++) {
                p *= s[j];
                if (p > mP)
                    mP = p;
            }
        }

        if (mP <= 0)
            mP = 0;

        printf("Case #%d: The maximum product is %lld.\n\n", caseNum++, mP);
    }
    return 0;
}
