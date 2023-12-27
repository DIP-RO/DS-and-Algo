#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
typedef struct Node Node;
void reverseLinkedList(Node *head) {
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;
    while (current != NULL) {
        //store the next node
        next = current->next;
        //reverse the link/connection
        current->next = prev;
        //propagate 
        prev = current;
        current = next;
    }
    head = prev;
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
 Node* createLinkedList(int arr[], int size) {
     Node* head = NULL;
     Node* temp = NULL;
     Node* current = NULL;
    for (int i = 0; i < size; i++) {
        temp = (Node*)malloc(sizeof(Node));
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
int main() {
    int a[] = {5, 10, 15 , 20 ,25,30,300};
    Node* head = NULL;
    head = createLinkedList(a, 7);
    Node* newHead = head;
    printf("Original Linked List:\n");
    Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
    printf("Reversed Linked List:\n");
    reverseLinkedList(newHead);
    return 0;
}
