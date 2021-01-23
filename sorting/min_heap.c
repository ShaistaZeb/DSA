#include<stdio.h>

void swap (int *a, int *b){
      int temp;
        temp = *a;
        *a = *b;
        *b = temp;
}
void heapcity(int arr[], int n, int i){
   int left,right,min=i;
   left = 2*i + 1;
    right = 2*i + 2;
    if(left < n && arr[left] < arr[min]){
             min = left;}
    if(right < n && arr[right] < arr[min]){
             min = right;}
     if(min != i){
          swap(&arr[i],&arr[min]);
         heapcity(arr,n,min);}
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
  int op,n;
   int arr[]={4,1,2,9,0,3};
   n=sizeof(arr)/(sizeof(arr[0]));
   printf("__the array is__ \n");
   printarray(arr,n);
   heapsort(arr,n);
   printf("__sorted array__\n");
   printarray(arr,n);
}
    
