#include <stdio.h>

int f91(int N) {
    if (N >= 101)
        return N - 10;
    else
        return 91; 
}

int main() {
    int N;
    while (scanf("%d", &N) == 1 && N != 0) {
        printf("%d\n", f91(N));
    }
    return 0;
}
