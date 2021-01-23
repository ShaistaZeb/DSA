#include<stdio.h>
#include<stdlib.h>
struct queue{
    int rear;
    int *a;
    int size;
    int front;
};
void main(){
   struct queue *q;
   q=(struct queue *)malloc(1*sizeof(struct queue));
   printf("enter the max size of queue ");
   scanf("%d",&q->size);
   q->a=(int *)malloc((q->size)*sizeof(int));
   q->rear =-1;
   q->front=-1;
   int option;
   do{
     printf("enter the option\n\t1 for push\n\t2 for pop\n\t3 for exit\n>>>>>>");
     scanf("%d",&option);
     switch(option){
          case 1:{
               if(q->rear == (q->size )-1){
                   printf("__queue is full__\n");}
               else{
                    q->rear ++;
                    printf("enter the element ");
                    scanf("%d",&q->a[q->rear]);}
               break;}
          case 2:{
                if(q->rear == q->front){
                    printf("__queue is empty__\n");}
                else{
                    q->front ++;
                    printf("%d\n",q->a[q->front]);}
                    
                break;}
          case 3:{
                printf("__exiting from the queue__\n");
                break;}
                    }
     }while(option != 3);
 if(q->rear == q->front){
    printf("nothing to display\n");}
else{
  for(int i=q->front; i<=q->rear ;i++){
    printf("%d ",q->a[i]);}
  printf("\n");}
}


