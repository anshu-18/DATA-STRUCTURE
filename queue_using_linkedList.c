#include<stdio.h>
#include<stdlib.h>

struct queue{
    int val;
    struct queue *next;
};

void enqueue(struct queue **head, int data){
    struct queue *new_n = (struct queue *)malloc(sizeof(struct queue));
    struct queue *p= *head;
    if((*head) == NULL){
        new_n ->val= data;
        new_n ->next = NULL;
        (*head)= new_n;
        return;
    }
    else{
        while(p->next !=NULL){
            p= p->next;
        }
        new_n ->val = data;
        p->next = new_n;
        new_n ->next = NULL;
    }
}

void dequeue(struct queue **head){
   
    
   if((*head)== NULL){
       printf("No value in queue\n");
       return;
   }
   else{
        struct queue *p= *head;
       head= (*head)->next;
       free(p);
   }
}

void print(struct queue **head){
    struct queue *p= *head;
    while(p!=NULL){
        printf("%d ", p->val);
        p= p->next;
    }
    printf("\n");
}


int main(){
    struct queue *head =NULL;
   
    int choice, value;
    while(1){
        printf("1.Enqueue the value\n");
        printf("2.Dequeue \n");
        printf("3.PRINT the value present in queue\n");
        printf("4.EXIT\n");
        printf("Enter your choice  ");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
                printf("enter the value in queue ");
                scanf("%d",&value);
                enqueue(&head, value);
                break;
                
            case 2:
                 dequeue(&head);
                 break;
                 
            case 3:
                  print(&head);
                  break;
                 
            case 4:
                  exit(0);
                  break;
                  
            default:
                 printf("invalid input, Please enter valid input\n");
        }
    }
        return 0;
}