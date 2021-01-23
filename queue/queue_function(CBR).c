#include<stdio.h>

void enqueue(int *q,int *rear,int *p){
       if(*rear == *p -1){
          printf("__queue is full__\n");}
       else{
            *rear = *rear + 1;
            printf("Enter the element ");
            scanf("%d",(q + *rear));
           }
}
void dequeue(int *q,int *rear,int *front){
        if(*rear == *front){
           printf("__queue is empty__\n");}
        else{
           *front = *front + 1;
           printf("%d\n",*(q + *front));}
}
void main(){
     int size,option;
     printf("enter the max size of the queue ");
     scanf("%d",&size);
     int a[size];
     int rear=-1,front=-1;
     do{
     printf("Enter the option\n\t1 for enqueue\n\t2 for dequeue\n\t3 for exit\n>>>>>>");
    scanf("%d",&option);
    switch(option){
         case 1:{
              enqueue(a,&rear,&size);
              break;}
         case 2:{
              dequeue(a,&rear,&front);
              break;}
         case 3:{
               printf("__exiting from the queue__\n");
               break;}
                  }
       }while (option != 3);
if(front == rear){
    printf("nothing to display\n");}
else{
for(int i=front+1; i<=rear; i++){
    printf("%d ",a[i]);}
printf("\n");}

}

