#include<stdio.h>
#include<stdlib.h>
#define n 6

void binary_search(int arr[n], int search){
  int start= 0;
  int end= n-1;
  int mid;
  while(start<=end){
        mid= start+ (end-start)/2;
    if(arr[mid]==search){
        printf("Element is present in array\n");
        break;
    }
    else if(search>arr[mid]){
        start= mid+1;
    }
    else if(search<arr[mid]){
        end= mid-1;
    }
  }
  if(start>end){
  printf("Element is NOT present in array\n");
  }
}

int main(){
 int arr[n];

 printf("Enter the elements in an array: ");
 for(int i=0; i<n; i++){
   scanf("%d", &arr[i]);
 }

 int search;
 printf("enter the element to be search: ");
 scanf("%d", &search);

 binary_search(arr, search);

 return 0;
}
