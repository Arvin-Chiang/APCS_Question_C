#include <stdio.h>
#include <stdlib.h>

#define MAXN 801

typedef struct Node {
    int v;
    struct Node* next;
} Node;

Node* graph[MAXN];
int visited[MAXN];


void addEdge(int x, int y) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->v = y;
    newNode->next = graph[x];
    graph[x] = newNode;
}


void dfs(int now) {
    visited[now] = 1;
    for (Node* p = graph[now]; p != NULL; p = p->next) {
        if (!visited[p->v]) dfs(p->v);
    }
}

int main() {
    int N, M;
    while (scanf("%d %d", &N, &M) == 2) {
        
        for (int i = 1; i <= N; i++) {
            graph[i] = NULL;
            visited[i] = 0;
        }

        
        for (int i = 0; i < M; i++) {
            int x, y;
            scanf("%d %d", &x, &y);
            addEdge(x, y);
        }

        int A, B;
        scanf("%d %d", &A, &B);

        dfs(A);
        if (visited[B])
            printf("Yes\n");
        else
            printf("No\n");

        
        for (int i = 1; i <= N; i++) {
            Node* cur = graph[i];
            while (cur) {
                Node* tmp = cur;
                cur = cur->next;
                free(tmp);
            }
        }
    }
    return 0;
}
