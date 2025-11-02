#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;    
}Node;

Node* createNode(int value){
    Node* newNode = (Node*)malloc(sizeof(Node));
    if(newNode == NULL){
        printf("createNode Memory allocated faild!\n");
    }
    newNode -> data = value;
    newNode -> next = NULL;
    return newNode;
}

void append(Node** head,int value){
    Node* newNode = createNode(value);
    if(*head == NULL){
        *head = newNode;
        return;
    }
    Node* current = *head;
    while (current ->  next !=NULL){
        current = current -> next;    
    }
    current -> next = newNode;
}

void freeList(Node* head){
    Node* temp;
    while(head != NULL){
        temp = head;
        head = head -> next;
        free(temp);
    }
}

void printList(Node* head) { 
    Node* current = head;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main()
{
    Node* head = NULL;  

    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 70);

    printList(head); 

    freeList(head);
    return 0;
}