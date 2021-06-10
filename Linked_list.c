#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void insert_at_beginning(struct node **head, int new_data){
    struct node *new_node= (struct node *)malloc(sizeof(struct node));
    
    new_node -> data = new_data;
    new_node -> next = *head;
    *head = new_node;
}

void insert_at_specific(struct node **head, int new_data, int pos){
     struct node *new_node= (struct node *)malloc(sizeof(struct node));
      
      struct node *p= *head;
      
      new_node ->data = new_data;
      int i=0;
      while(i!= (pos-1)){
          p = p->next;
          i++;
      }
      new_node -> next= p->next;
      p ->next = new_node;
}

void insert_at_end(struct node **head, int new_data){
     struct node *new_node= (struct node *)malloc(sizeof(struct node));
    
     struct node *p= *head;
     
     new_node-> data= new_data;
     while(p->next !=NULL){
         p= p->next;
     }
     p->next = new_node;
     new_node ->next= NULL;
}

void display(struct node **head){
    struct node *p = *head;
    
    while(p!= NULL){
        printf("%d\t", p->data);
        p = p->next;
    }
}

void delete_at_begin(struct node **head){
    struct node *p= *head;
    head = (*head)->next;
    free(p);
    
}

void delete_specific_pos(struct node **head,int pos){
    struct node *p = *head;
    struct node *q = (*head)->next;
    
    for (int i = 0; i < pos-1; i++){
         p = p->next;
        q = q->next;
    }
     p->next = q->next;
        free(q);
}

void delete_end(struct node **head){
    struct node *p = *head;
    struct node *q = (*head)->next;
    
   while(q->next != NULL){
         p = p->next;
        q = q->next;
    }
    p->next= NULL;
    free(q);
    return;
}

int main()
{
   
   struct node *head;
    int choice,num,pos;
  while(1){
  printf("\n*****OPERATION  IN SINGLY LINKED LIST******\n");
  printf("1.Insert data at the beginning of the linked list\n");
  printf("2.Insert data at the end of the linked list\n");
  printf("3.Insert data at specific position\n");
  printf("4.Display the elements present in linked list\n");
  printf("5.Delete first element of linked list\n");
  printf("6.Delete last element of linked list\n");
  printf("7.Delete a particular node\n");
  printf("8.Exit\n");
  printf("Enter your choice: ");
  scanf("%d",&choice);
  switch(choice){
      case 1:
          printf("Enter the number to be inserted:");
          scanf("%d",&num);
          insert_at_beginning(&head, num);
          break;
          
      case 2:
          printf("Enter the number to be inserted:");
          scanf("%d",&num);
          insert_at_end(&head, num);
          break;
          
      case 3: 
          printf("Enter the number to be inserted:");
          scanf("%d",&num);
          printf("\nEnter the position at which you want to enter the data: ");
          scanf("%d",&pos);
          insert_at_specific(&head, num,pos);
          break;
          
       case 4:
            printf("ELEMENTS INT LINKED LIST ARE: ");
           display(&head);
           break;
           
      case 5:
           delete_at_begin(&head);
           break;
           
      case 6:
          delete_end(&head);
          break;
          
      case 7:  
            printf("enter the position of node you want to delete: ");
            scanf("%d",&pos);
            delete_specific_pos(&head,pos);
            break;
            
      
           
       case 8:
           exit(0);
           break;
           
        default:
             printf("Invalid input");
  }
  }
 return 0;
}

