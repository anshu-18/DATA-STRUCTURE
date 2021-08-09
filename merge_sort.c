#include<stdio.h>
#include<stdlib.h>
#define n 10

void merge(int arr[], int left, int mid, int right){
      int temp[n];
      int i= left;
      int j=mid+1;
      int k=left;
      while(i<=mid && j<=right){
        if(arr[i]<arr[j]){
            temp[k]=arr[i];
            i++;
            k++;
        }
        else{
            temp[k]=arr[j];
            j++;
            k++;
        }
      }

        if(i>mid){
            while(j<=right){
                temp[k]=arr[j];
                j++;
                k++;
            }
        }else {
                while(i<=mid){
                temp[k]=arr[i];
                i++;
                k++;
            }
        }

      for(k=left; k<=right; k++){
        arr[k]=temp[k];
      }
}


void merge_sort(int arr[],int left, int right){
  if(left<right){
  int mid= (left+ right)/2;
  merge_sort(arr,left, mid);
  merge_sort(arr, mid+1, right);
  merge(arr,left,mid,right);
  }
}

void print(int arr[]){
  for(int i=1; i<=n; i++){
    printf("%d\t", arr[i]);
  }
}

int main(){
  int arr[n];
  printf("enter the elements in an array: ");
  for(int i=1; i<=n; i++){
    scanf("%d",&arr[i]);
  }
  merge_sort(arr,1,n);
  print(arr);
  return 0;
}
