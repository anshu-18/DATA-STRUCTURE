#include <stdio.h>
#include<stdlib.h>
#define n 10

int arr[n];
int front=-1,back=-1;

void enqueue(int num){
    if(back==(n-1)){
        printf("Queue is full");
    }
    else if(front==-1 && back==-1){
        front++;
        back++;
        arr[back]=num;
    }
    else{
        arr[++back]=num;
    }
}

void dequeue(){
    if(front==-1 && back==-1){
        printf("Queue is empty");
    }
    else{
        int data= arr[++front];
    }
}

void display(){
    int i;
	for( i=front; i<=back; i++){
        printf("%d\t",arr[i]);
    }
}
int main()
{   
    int choice,num;
    while(1){
    printf("\n******OPERATIONS ON QUEUE*****\n");
    printf("1.press 1 to perform Enqueue operation\n");
    printf("2.press 2 to perform Dequeue operation\n");
    printf("3.press 3 to display all the elements in queue\n");
    printf("4.EXIT\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    switch(choice){
        case 1: 
           printf("Enter the value in queue:");
           scanf("%d",&num);
           enqueue(num);
           break;
           
        case 2:
            dequeue();
            break;
            
        case 3:
            display();
            break;
            
        case 4:
           exit(0);
           break;
           
        default:
        printf("Invalid input");
      }
    }
  
    return 0;
}

