#include<stdio.h>

void swap(int a[], int i,int j){
    
   if(i<j){int temp;
     temp =a[i];
     a[i]=a[j];
     a[j]=temp;}
}

void quicksort(int a[], int start, int end){
   int pivot,i,j;
   if(end-start>1)
      {
      pivot =a[start];
     i = start+1;
      j = end;
      while(i<j)
         {
         while(a[i]<=pivot && i<end)
               i++;
         while(a[j]>pivot)
               j--;
         swap(a,i,j);
         }      
      swap(a,start,j);
      quicksort(a,start,j-1);
      quicksort(a,j+1,end);
      }
   else
      {
      if(a[start]>a[end]){
         swap(a,start,end);}
      }


}


void main(){
     int a[5]={4,3,2,1,0};
      quicksort(a,0,4);
     for(int k=0;k<5;k++){

       printf("%d ",a[k]);
}


}
