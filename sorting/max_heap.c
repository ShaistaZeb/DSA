#include<stdio.h>

void swap (int *a, int *b){
      int temp;
        temp = *a;
        *a = *b;
        *b = temp;
}
void heapcity(int arr[], int n, int i){
   int left,right,max=i;
   left = 2*i + 1;
    right = 2*i + 2;
    if(left < n && arr[left] > arr[max]){
             max = left;}
    if(right < n && arr[right] > arr[max]){
             max = right;}
     if(max != i){
          swap(&arr[i],&arr[max]);
         heapcity(arr,n,max);}
}
void heapsort(int arr[],int n){
    for(int i= (n/2)-1 ; i >= 0 ; i--){
         heapcity(arr,n,i);
          }
    for(int j= n-1 ; j >= 0 ; j--){
         swap(&arr[0],&arr[j]);
         heapcity(arr,j,0);
          }
 }
void printarray(int arr[], int n){
       for(int i = 0; i < n; i++){
           printf("%d ",arr[i]);}
       printf("\n");
}
void main(){
  int n;
   int arr[]={4,1,2,9,0,3};
   n = sizeof(arr) / (sizeof(arr[0]));
   printf("__the array is__ \n");
   printarray(arr,n);
   heapsort(arr,n);
   printf("__sorted array__\n");
   printarray(arr,n);
}
    
