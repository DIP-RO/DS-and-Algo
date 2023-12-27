#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

typedef struct Node Node;

Node*head = NULL;

Node* creatNode(int x){                            //Node return kora hoise,tai return type Node*
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = x;
    temp->next = NULL;

    return temp;
}

void deleteFromBegin(){
    if(head == NULL){
        printf("Sob faka re vai! delete korar kisu nai!!\n");
        return;
   }else{

    Node* temp = head;
    head = head->next;
    free(temp);
}
}

void deleteFromEnd(){
    if(head == NULL){
        printf("Nothing to delete\n");
        return;
    }else{
        Node* NextNode = head;
        Node* PrevNode = NULL;

        while(NextNode->next !=NULL){
            PrevNode = temp;
            NextNode = NextNode->next;

        }
        free(temp);
        PrevNode->next = NULL;
    }
}

int main()
{

    Node* first = creatNode(9);
    Node* second = creatNode(17);
    Node* third = creatNode(14);

    head = first;
    head->second;
    second->third;

    return 0;
}
