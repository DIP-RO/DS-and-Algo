#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};
typedef struct Node Node;

Node *front = NULL;
Node *rear = NULL;

int isFull(Node *p)
{
  return p == NULL;
}

int isEmpty()
{
  return front == NULL && rear == NULL;
}

void enqueue(int x)
{
  Node *temp = (Node *)malloc(sizeof(Node));
  temp->data = x;
  temp->next = NULL;

  if (isFull(temp))
  {
    printf("Queue is full\n");
    free(temp);
    return;
  }

  if (front == NULL && rear == NULL)
  {
    front = rear = temp;
  }
  else
  {
    rear->next = temp;
    rear = temp;
  }
}

void dequeue()
{
  Node *temp = front;

  if (isEmpty())
  {
    printf("Queue is empty\n");
    return;
  }

  if (front == rear)
  {
    front = rear = NULL;
  }
  else
  {
    front = front->next;
  }

  free(temp);
}

int peek()
{
  if (isEmpty())
  {
    printf("Queue is empty\n");
    return -1;
  }

  return front->data;
}

void print()
{
  Node *temp = front;

  while (temp != NULL)
  {
    printf("%i ", temp->data);
    temp = temp->next;
  }

  printf("\n");
}

int main()
{
  print();
  enqueue(5);
  print();
  enqueue(3);
  print();
  enqueue(24);
  print();
  enqueue(40);
  print();
  enqueue(84);
  print();
  dequeue();
   print();
  dequeue();
   print();
  dequeue();
   print();
   printf("Peek value is %d\n", peek());

   return 0;
}
