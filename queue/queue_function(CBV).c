#include<stdio.h>

int enqueue(int a[], int rear, int size){
        if(rear == size-1){
                   printf("__queue is full__\n");}
        else{
             rear++;
             printf("enter the element ");
             scanf("%d",&a[rear]); 
             }
        return rear;
}
int dequeue(int a[], int rear, int front){
    if(rear == front){
                     printf("__queue is empty__\n");}
             else{
                 front++;
                 printf("%d\n",a[front]);}
          return front;
}
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
             rear=enqueue(a,rear,size);
             break;}
         case 2:{
              front=dequeue(a,rear,front);	
          break;}
         case 3:{
             printf("__exiting from queue__");
             break;}
                     }
      }while(option != 3);
if(rear == front){
   printf("nothing to display\n");
else{
for(int i=front+1; i<rear; i++){
   printf("%d ",a[i]);}
printf("\n");}
}
