#include<stdio.h>
#include<stdlib.h>

struct stack{
    int val;
    struct stack *next;
};

void push(struct stack **head, int data){
    struct stack *new_n = (struct stack *)malloc(sizeof(struct stack));
    struct stack *p= *head;
    if(*head== NULL){
        new_n ->val= data;
        new_n ->next= NULL;
       (*head)= new_n;
        return;
    }
    else{
        while(p->next !=NULL){
            p= p->next;
        }
        new_n ->val = data;
        p->next= new_n;
        new_n ->next = NULL;
    }
}

void pop(struct stack **head){
    struct stack *p= *head;
     struct stack *q= (*head)->next;
    if(*head== NULL){
        printf("Stack is empty");
        return ;
    }
    else{
          while(q->next !=NULL){
              q= q->next;
              p= p->next;
          }
          p->next= NULL;
          free(q);
    }
}

void print(struct stack **head){
    struct stack *p= *head;
    while(p!=NULL){
        printf("%d ", p->val);
        p= p->next;
    }
    printf("\n");
}


int main(){
    struct stack *head =NULL;
   
    int choice, value;
    while(1){
        printf("1.PUSH Operation\n");
        printf("2.POP Operation\n");
        printf("3.PRINT the value present in stack\n");
        printf("4.EXIT\n");
        printf("Enter your choice  ");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
                printf("enter the value to push into stack  ");
                scanf("%d",&value);
                push(&head, value);
                break;
                
            case 2:
                 pop(&head);
                 break;
                 
            case 3:
                  print(&head);
                  break;
                 
            case 4:
                  exit(0);
                  break;
                  
            default:
                 printf("invalid input, please enter valid input\n");
        }
    }
        return 0;
}