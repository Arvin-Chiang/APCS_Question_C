#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    long long value;
    struct Node* next;
} Node;


Node* createNode(long long val) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = val;
    newNode->next = NULL;
    return newNode;
}


void insertSorted(Node** head, long long val) {
    Node* newNode = createNode(val);
    if (*head == NULL || val < (*head)->value) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    Node* cur = *head;
    while (cur->next != NULL && cur->next->value < val)
        cur = cur->next;
    newNode->next = cur->next;
    cur->next = newNode;
}


long long popFront(Node** head) {
    if (*head == NULL) return -1;
    Node* temp = *head;
    long long val = temp->value;
    *head = temp->next;
    free(temp);
    return val;
}


void freeList(Node* head) {
    while (head) {
        Node* tmp = head;
        head = head->next;
        free(tmp);
    }
}

int main() {
    int N;
    while (scanf("%d", &N) == 1 && N != 0) {
        Node* head = NULL;
        for (int i = 0; i < N; i++) {
            long long x;
            scanf("%lld", &x);
            insertSorted(&head, x);
        }

        long long totalCost = 0;

        while (head && head->next) {
            long long a = popFront(&head);
            long long b = popFront(&head);
            long long sum = a + b;
            totalCost += sum;
            insertSorted(&head, sum);
        }

        printf("%lld\n", totalCost);
        freeList(head);
    }

    return 0;
}
