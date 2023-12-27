#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
typedef struct Node Node;

 Node* createLinkedList(int arr[], int size) {
    Node* head = NULL;
    Node* temp = NULL;
    Node* current = NULL;
    for (int i = 0; i < size; i++) {
        temp = ( Node*)malloc(sizeof( Node));
        temp->data = arr[i];
        temp->next = NULL;
        if (head == NULL) {
            head = temp;
            current = temp;
        } else {
            current->next = temp;
            current = current->next;
        }
    }
    return head; 
}
Node* delete(Node* head , int data){
    Node *dummyHead = (Node *)malloc(sizeof(Node));
    dummyHead->next = head;
    Node *temp = dummyHead;
    while(temp->next != NULL){
        if(temp->next->data == data){
           //delete logic
            temp->next = temp->next->next;
        }
        temp = temp->next;
    }
    return dummyHead->next;
} 
void print( Node* head){
    Node *temp = head;
    printf("Original Linked List:\n");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
} 
int main() {
    int a[] = {5, 10, 15 , 20 ,25,30,300};
    Node* head = NULL;
    head = createLinkedList(a, 7 );
    print(head);
    Node *newHead = delete (head, 25);
    print(newHead);
    return 0;
}

