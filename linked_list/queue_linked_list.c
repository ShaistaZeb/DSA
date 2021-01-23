//stack using linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int ele;
    struct node *next;
};
struct node *head;
void push();
void pop();
void display();
void main(){
     int op;
     do{
      printf("enter the option\n\t1 for enqueue\n\t2 for dequeue\n\t3 for display\n\t4 for exit\n>>>>>> ");
      scanf("%d",&op);
      switch(op){
           case 1:{
               push();
               break;}
          case 2:{
               pop();
               break;}
          case 3:{
               display();
               break;}
          case 4:{
               printf("__exiting from the queue__\n");
               break;}
               }
       }while(op != 4);
}
void push(){
    struct node *nn,*temp;
    nn=(struct node *)malloc(sizeof(struct node));
    printf("enter the element");
    scanf("%d",&nn->ele);
    nn->next=NULL;
    if(head== NULL){
        nn->next=NULL;
        head=nn;}
    else{
       temp=head;
       while(temp->next != NULL){
            temp=temp->next;}
        temp->next=nn;}
}
void pop(){
   struct node *temp;
   temp=head;
   if(head == NULL){
        printf("__queue is empty__\n");}
   else{
       head=temp->next;
     }
}
void display(){
    struct node *temp;
    temp= head;
    if(head == NULL){
        printf("__nothing to display__\n");}
    else{
        while(temp != NULL){
            printf("%d ",temp->ele);
            temp= temp->next;}
    printf("\n");  }      
}
