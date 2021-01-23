#include<stdio.h> 


void merge(int a[], int start, int mid, int end){
   int b[end+1];
    int i,j,k;
     i=start;
     j=mid+1;
     k=0;
    while(i<=mid && j<=end){
       if(a[i]<a[j]){
          b[k] =a[i];
            k++;
            i++;    }
       else{
          b[k] =a[j];
             k++;
             j++;
            }
                           }
   while(i<=mid){
         b[k]=a[i];
           k++;
           i++; }
    while(j<=end){
         b[k]=a[j];
          k++;
          j++ ;  }
  for(int p=0;p<k;p++){
       a[start+p]=b[p];}
}
void mergesort(int a[], int start,int end){
   if(start<end){
   int mid =(start+end)/2;
   mergesort(a,start,mid);
   mergesort(a,mid+1,end);
   merge(a,start,mid,end);
                }
}
void main(){

     int a[4]={2,9,4,1};
     mergesort(a,0,3);
    for(int k=0;k<4;k++){
     printf("%d ",a[k]); }
}

