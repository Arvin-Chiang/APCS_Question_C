#include <stdio.h>

int main() {
    int coins[] = {1, 5, 10, 25, 50};
    long long dp[30001] = {0}; 
    dp[0] = 1; 

    
    for (int i = 0; i < 5; i++) {
        int coin = coins[i];
        for (int j = coin; j <= 30000; j++) {
            dp[j] += dp[j - coin];
        }
    }

    int n;
    while (scanf("%d", &n) != EOF) {
        if (dp[n] == 1) {
            printf("There is only 1 way to produce %d cents change.\n", n);
        } else {
            printf("There are %lld ways to produce %d cents change.\n", dp[n], n);
        }
    }

    return 0;
}
