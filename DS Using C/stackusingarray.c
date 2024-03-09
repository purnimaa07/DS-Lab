#include<stdio.h>
#include<stdlib.h>
struct stack{
  int size;
  int top;
  int *arr;
};

//function to check if the stack is full
int isfull(struct stack *ptr){
  if(ptr->top==ptr->size-1){
    return 1; 
  }
  else{
    return 0;
  }
}
//function to check if stack is empty
int isempty(struct stack *ptr){
  if(ptr->top==-1){
    return 1;
  }
  else{
    return 0;
  }
}
//push operation
void push(struct stack *ptr,int val){
  if(isfull(ptr)){
    printf("Stack overflow.Cannot push %d value into the stack\n",val);
  }
  else{
    ptr->top++;
    ptr->arr[ptr->top]=val;
  }
}
void pop(struct stack *ptr){
  if(isempty(ptr)){
    printf("Stack underflow.Can enter values in the stack\n");
    return -1;
  }
  else{
    int val=ptr->arr[ptr->top];
    ptr->top--;
    return val;
  }
}
int main(){
  //creating a stack
  // sp is a structure pointer to dynamically store the address of the structure stack
  struct stack *sp=(struct stack *)malloc(sizeof(struct stack));//an instance is created of struct stack to dynamically store the requirements in te memory
  sp->size=10;
  sp->top=-1;
  sp->arr=(int *)malloc(sp->size * sizeof(int));
  printf("Stack has been created successfully\n");
  printf("Before stack,full:%d\n",isfull(sp));
  printf("Before stack,empty:%d\n",isempty(sp));
  push(sp,1);
  push(sp,2);
  push(sp,3);
  printf("After stack,full:%d\n",isfull(sp));
  printf("After stack,empty:%d\n",isempty(sp));
  }