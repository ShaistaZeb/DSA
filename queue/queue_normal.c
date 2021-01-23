#include<stdio.h>

void main(){
    int size,option;
    printf("enter the max size of queue ");
    scanf("%d",&size);
    int a[size];
    int rear=-1,front=-1;
    do{
    printf("enter the option\n\t1 for enqueue\n\t2 for dequeue\n\t3 for exit\n>>>>>>>");
    scanf("%d",&option);
    switch(option){
         case 1:{
             if(rear == size-1){
                   printf("__queue is full__\n");}
             else{
                  rear++;
                  printf("enter the element ");
                  scanf("%d",&a[rear]); 
                  }
             break;}
         case 2:{
             if(rear == front){
                     printf("__queue is empty__\n");}
             else{
                 front++;
                 printf("%d\n",a[front]);}
          break;}
         case 3:{
             printf("__exiting from queue__\n");
             break;}
                     }
      }while(option != 3);
if(front == rear){
    printf("nothing to display\n");}
 else{
    for(int i=front+1; i<=rear; i++){
   printf("%d ",a[i]);}
printf("\n");}
}
