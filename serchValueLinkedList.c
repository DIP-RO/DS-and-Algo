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
int searchLinkedList(Node* head , int value){
    int index = 1;
    while (head!= NULL){
        if(head->data == value){
            return index;
        }
        index++;
        head = head->next;
    }
    return -1;
}
int main() {
    int a[] = {5, 10, 15 , 20, 25};
    Node* head;
    head = createLinkedList(a, 3);
    printf("Index: %d" , searchLinkedList(head , 15));
   return 0;
}
