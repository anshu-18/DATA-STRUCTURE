#include <stdio.h>
#include<stdlib.h>
#define n 50

 char str[n];
 int top=-1;
 
void push(char t){
    if(top== n-1){
        printf("stack is full");
    }
    else{
        ++top;
        str[top]=t;
    }
}

void pop(){
    if(top==-1){
        printf("stack is empty");
    }
    else{
        int data=str[top];
        --top;
    }
}

int main()
{
  
   printf("Enter the expression with parentheses: ");
   scanf("%s",str);
   
   int i;
   for(i=0; str[i]!='\0'; i++){
       if(str[i]=='(' || str[i]=='{' ||str[i]=='['){
           char t= str[i];
           push(t);
       }
        if(str[i]==')' || str[i]=='}' ||str[i]==']'){
           if(top==str[i] || top!=-1){
               pop();
           }
           else
           printf("ERROR");
           break;
       }
      
          
   }
           if(top==-1)
               printf("Parentheses is balanced");
            else
               printf("Parentheses is not balanced");
            

    return 0;
}

