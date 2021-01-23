#include<stdio.h>

void swapi(int i[], int k, int j){
  int temp;
   temp=i[k];
    i[k]=i[j];
     i[j]=temp;                 }

void insertion_sort(int i[], int end){
     for(int k=1;k<end;k++){
        for(int j=k;j>=1;j--){
          if(i[j]<i[j-1]){
              swapi(i,j,j-1);}
                         }
                       }
      printf("\n\n\"INSERTION SORT\"\n ");
      for(int p=0;p<end;p++){
           printf("%d ",i[p]);}
}
void swaps(int s[], int i, int j){
  int temp;
   temp=s[i];
    s[i]=s[j];
     s[j]=temp;                 }

void selection_sort(int s[], int end){
     int min,loc,i,j;
     for(i=0;i<end;i++){
         min=s[i];
         for(j=i+1;j<end;j++){
           if(s[j]<min){
               loc=j;
                min=s[j];}
                           }
       swaps(s,i,loc);
                         }
    printf("\n\n\"SELECTION SORT\"\n ");
    for(int p=0;p<end;p++){
         printf("%d ",s[p]);}
}
void swapb(int b[], int i, int j){
  int temp;
   temp=b[i];
    b[i]=b[j];
     b[j]=temp;                 }

void bubble_sort(int b[], int end){
   for(int i=0; i<end;i++){
      for(int j=0; j<end-1-i;j++){
          if(b[j]>b[j+1]){
              swapb(b,j,j+1);}    
                                 }
                           }
  printf("\"BUBBLE SORT\"\n ");
  for(int p=0;p<end;p++){
      printf("%d ",b[p]);}
}

void main(){

     int b[10]={5,3,7,1,0,8,2,9,6,4};
     bubble_sort(b,9);
     int s[10]={5,3,7,1,0,8,2,9,6,4};
     selection_sort(s,9);
     int i[10]={5,3,7,1,0,8,2,9,6,4};
     insertion_sort(i,9);

}





