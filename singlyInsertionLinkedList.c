#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node Node;
// function to create new node
Node *getNewNode(int x)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}
// Function to insert a node at the beginning
Node *insertAtBegin(Node *temp, int data)
{
    Node *firstNode = getNewNode(data);
    firstNode->next = temp;
    return firstNode;
}
// function to print new linked list
void printList(Node *temp)
{
    while (temp != NULL)
    {
        printf("%d ->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
// function to insert a node at the middle based on the given position
Node *insertAtMiddle(Node *head, int x, int position)
{
    Node *newNode = getNewNode(x);
    if (position <= 0)
    {
        printf("Invalid position for insertion.\n");
        return head;
    }
    if (position == 1)
    {
        newNode->next = head;
        return newNode;
    }
    Node *current = head;
    int currentPosition = 1;
    while (currentPosition < position - 1 && current != NULL)
    {
        current = current->next;
        currentPosition++;
    }
    if (current == NULL)
    {
        printf("Invalid position for insertion.\n");
        return head;
    }
    newNode->next = current->next;
    current->next = newNode;
    return head;
}
// function to insert a node at the end
void insertAtEnd(Node *temp, int data)
{
    Node *lastNode = getNewNode(data);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = lastNode;
}

int main(){
    Node *head = NULL;
    Node *first = getNewNode(2);
    Node *second = getNewNode(7);
    Node *third = getNewNode(9);
    
    first->next = second;
    second->next = third;
    head = first;
    printf("Linked List: ");
    printList(head);
    printf("Insert at Beginning: ");
    head = insertAtBegin(head, 1);
    printList(head);

    printf("Insert at Middle: ");
    head = insertAtMiddle(head, 5 , 4);
    printList(head);

    printf("Insert at Last: ");
    insertAtEnd(head, 10);
    printList(head);
    return 0;
}