#include <stdio.h>
#include <stdlib.h>
struct stack {
   int top;
   int a[100];
   int size;
 };

void push(struct stack *s){
       if(s->top == (s->size)-1){
            printf("__stack is full__\n");}
       else{
             s->top = s->top +1;
             printf("enter the element ");
             scanf("%d",&(s->a[s->top]));
             }
  }
void pop(struct stack *s){
      if(s->top == -1){
           printf("__stack is empty__\n");}
      else{
            printf("%d\n",s->a[s->top]);
            s->top = s->top -1;
           }
}
void main(){
  struct stack *s;
  s=(struct stack*)malloc(1*sizeof(struct stack));
  printf("enter the size of stack ");
  scanf("%d",&(s->size));
  s->top=-1;
  int option;
  do{
   printf("enter the option\n\t 1 for push \n\t 2 for pop\n\t 3 for exit\n>>>>>>");
   scanf("%d",&option);
   switch (option){
       case 1:{
             push(s);
             break;}
       case 2:{
             pop(s);
             break;}
       case 3:{
             printf("__exiting from stack__\n");}
       }
  }while(option != 3);
if(s->top == -1){
     printf("nothing to display\n");}
else{

for (int i=0; i<= s->top;i++){
    printf("%d ",s->a[i]);}
printf("\n");}


}

