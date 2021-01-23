#include <stdio.h>
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
                 if(top==size-1)
                      {
                        printf("__stack is full__\n");
                       }
                  else
                      { 
                        top++;
                        printf("enter the element ");
                        scanf("%d",&ele);
                        a[top]=ele;
                      }
               }
             break;  
             case 2:
               {
                  if(top==-1)
                       {
                         printf("__stack is empty__\n");
                       }
                   else
                       {
                         printf("%d\n",a[top]);
                         top--;
                        }
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
   for(int i=0;i<=(top);i++)
      {
        printf("%d ",a[i]);
       }
   printf("\n");}
                  }                                                                                                                                                
  


