#include<stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;
void push(int x){
    if(top<CAPACITY-1){
  stack[++top] = x;
  printf("Add successful : %d\n" , x);
    }else{
  printf("No space\n");
    }
  
}
int pop(){
 if(top >= 0){
  int value = stack[top];
  top--;
  return value;
 }
 printf("Empty stack\n");
 return -1;
}
int peek(){
 if(top >= 0){
  return stack[top];
 }
 printf("No data \n");
 return -1;
}
int main(){
 peek();
 push(10);
 push(20);
 push(30);
  printf("delete : %d\n", pop());
 
 push(40);
 printf("Top of stack: %d\n", peek());
 return 0;
}