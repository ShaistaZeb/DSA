#include<stdio.h>
#include <stdlib.h>
struct queue{
     int front;
     int rear;
     int size;
     int a[100];
};

void enqueue(struct queue *q){
    if(q->rear == q->size-1){
                    printf("__queue is full__\n");}
              else{
                     q->rear ++;
                      printf("enter the element ");
                     scanf("%d",&q->a[q->rear]);}

}
void dequeue(struct queue *q){
    if(q->rear == q->front){
                      printf("__queue is empty__\n");}
               else{
                      q->front ++;
                      printf("%d\n",q->a[q->front]);}
}




void main(){
    struct queue *q;
    q=(struct queue *)malloc(1*sizeof(struct queue));
    q->front=-1;
    q->rear=-1;
    printf("enter the max size of queue ");
    scanf("%d",&q->size);
    int option;
    do{
    printf("enter the option \n 1 for push\n 2 for pop\n 3 for exit\n>>>>>>");
  scanf("%d",&option);
     switch(option){
        case 1:{
              enqueue(q);
              break;}
        case 2:{
              dequeue(q);
               break;}
         case 3:{
               printf("__exiting from the queue__\n");
               break;}
                     }
      }while(option != 3);

if(q->rear == q->front){
      printf("nothing to display\n");}
else{
   for(int i=q->front+1; i<=q->rear; i++){
         printf("%d ",q->a[i]);}
   printf("\n");}
}

