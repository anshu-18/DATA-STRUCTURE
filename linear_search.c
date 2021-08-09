#include<stdio.h>
#include<stdlib.h>
#define n 6

void linear_search(int arr[n], int s_elem){
  int i;
  for( i=0; i<n; i++){
    if(arr[i]== s_elem){
        printf("Element is present in array\n ");
        break;
    }
  }
  if(i== n){
    printf("Element is not present in array\n");
  }
}

int main(){
 int arr[n];

 printf("Enter the elements of an array: ");
 for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
}

 int s_elem;
 printf("Enter the element to search : ");
 scanf("%d",&s_elem);

 linear_search(arr, s_elem);

 return 0;
}
