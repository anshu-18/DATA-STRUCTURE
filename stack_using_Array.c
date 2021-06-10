#include <stdio.h>
#include<stdlib.h>
#define N 7

int arr[N];
int top=-1;

void push(int num){
    if(top==N-1){
        printf("Stack is already full");
    }
    else{
        arr[++top]=num;
    }
 }
 
 void pop(){
     int data;
     if(top==-1){
         printf("Stack is empty");
     }
     else{
        data=arr[top];
        top=top-1;
     }
 }
 
 void display(){
     int i;
     for(i=0; i<=top; i++)
     printf("%d\t",arr[i]);
 }
 
int main()
{  
  int choice;
   int num;
   while(1){
  printf("\n****OPERATIONS ON STACK*****\n");
  printf("1.PUSH Operation\n");
  printf("2.POP operation\n");
  printf("3.Display the data present in stack\n");
  printf("4.Exit\n");
  printf("Enter your choice: ");
  scanf("%d",&choice);
  switch(choice){
      case 1: 
           
            printf("Enter the number: ");
            scanf("%d",&num);
            push(num);
            break;
         case 2:
          pop();
          break;
          
          case 3:
           display();
           break;
           
          case 4:
            exit(0);
            break;
      default:
         printf("Invalid input.");
    }
   }
    return 0;
}

