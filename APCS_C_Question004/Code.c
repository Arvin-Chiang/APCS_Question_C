#include <stdio.h>
#include <time.h>

// 計算最大公因數 GCD
int gcd(int a, int b) {
    while (b != 0) {
        int tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}

// 計算最小公倍數 LCM
int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    int N;
    scanf("%d", &N);

    int periods[20]; 
    for (int i = 0; i < N; i++) {
        scanf("%d", &periods[i]);
    }

    int year, month, day;
    scanf("%d/%d/%d", &year, &month, &day);

    
    int total_lcm = periods[0];
    for (int i = 1; i < N; i++) {
        total_lcm = lcm(total_lcm, periods[i]);
    }

    
    struct tm t = {0};
    t.tm_year = year - 1900;
    t.tm_mon = month - 1;
    t.tm_mday = day + total_lcm;

    mktime(&t); 

    printf("%04d/%02d/%02d\n", t.tm_year + 1900, t.tm_mon + 1, t.tm_mday);

    return 0;
}
