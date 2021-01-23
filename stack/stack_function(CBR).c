#include <stdio.h>

void push(int *, int *, int *);
void pop(int *, int *);

void main(){
   
   
   int top=-1;
   int size,op,ele;
   printf("Enter the size of stack");
   scanf("%d",&size);
   int a[size];
   do
     {
       printf("enter ur option:\n\t1 for push\n\t2 for pop\n\t3 for exit\n>>>>>>");
       scanf("%d",&op);
       switch(op)
          {
            case 1:
                {
                 push(a,&top,&size);
               }
             break;  
             case 2:
               {
                 pop(a,&top);
                }
              break;
              case 3:
                {
                   printf("__Exiting from stack__\n");
                }
              break;
           }
    }
   while(op!=3);
if(top == -1){
     printf("nothing to display\n");}
else{
 for(int i=0;i<=top;i++)
      {
        printf("%d ",a[i]);
       }
  printf("\n");}
                  }                                                                                                                                                  void push(int *s,int *top,int *p)
     { 
       if(*top == *p -1)
                      {
                        printf("__stack is full__\n");
                       }
           else
                      { 
                        *top = *top + 1;
                        printf("enter the element ");
                        scanf("%d",(s + *top));
                      }
      }
void pop(int *s,int *top)
     {
        if(*top == -1)
                       {
                         printf("__stack is empty__\n");
                       }
                   else
                       {
                         printf("%d\n",*(s + *top));
                         *top = *top - 1;
                        }
     }














