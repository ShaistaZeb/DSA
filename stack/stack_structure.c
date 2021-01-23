#include <stdio.h>
struct stack{
   int top;
   int a[100];
   int size;
};
 
void main(){
  struct stack s;
   int option;
   s.top=-1;
   printf("enter the size of the stack");
   scanf("%d",&s.size);
  do{
    printf("enter the option \n 1 for push\n 2 for pop\n 3 for exit\n>>>>>>");
  scanf("%d",&option);
    switch(option){
      case 1:{
          if(s.top == s.size-1){
              printf("__stack is full__\n");}
          else{
              s.top++;
              printf("enter the element ");
              scanf("%d",&s.a[s.top]);}
          break;
             }
      case 2:{
          if(s.top == -1){
              printf("__stack is empty__\n");}
          else{
               printf("%d\n",s.a[s.top]);
               s.top--;}
          break;
              }
      case 3:{
          printf("__exiting from stack__\n");}
          break;   
               }
    }while(option != 3); 
if(s.top == -1){
     printf("nothing to display\n");}
else{ 
 for(int i=0;i<=(s.top);i++){
    printf("%d ", s.a[i]);}
printf("\n");}      
        

}
