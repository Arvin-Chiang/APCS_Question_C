#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    while (cin >> N && N != 0) {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        for (int i = 0; i < N; ++i) {
            long long x;
            cin >> x;
            pq.push(x);
        }

        long long total_cost = 0;
        while (pq.size() > 1) {
            long long a = pq.top(); pq.pop();
            long long b = pq.top(); pq.pop();
            long long cost = a + b;
            total_cost += cost;
            pq.push(cost);
        }

        cout << total_cost << "\n";
    }

    return 0;
}
