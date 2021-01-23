#include<stdio.h>
struct stack{
   char a[100];
   int ind;
   int size;
     };
void push(struct stack *s,char);
char pop(struct stack *s);
int prior(char);
int is_empty(struct stack *s);
char top(struct stack *s);

void main(){
    
    struct stack s;
    s.ind=-1;
    printf("enter the length of the expression");
    scanf("%d ",&s.size);
    char exp[100];
    scanf("%s",exp);
    char *e;
    e=exp;
    while(*e != '\0'){
        if(*e == '('){
            push(&s,'(');}
        else if(*e == '+' || *e == '-'){
               while(prior(top(&s))>=prior(*e)){
                             printf("%c",pop(&s));
                           s.ind--; }
               push(&s,*e);}
         else if(*e == '*' || *e == '/'){
               while(prior(top(&s))>=prior(*e)){
                             printf("%c",pop(&s));
                           s.ind--;  }
                push(&s,*e);}
         else if(*e == ')'){
                 while(top(&s) != '('){
                     printf("%c",pop(&s));
                         s.ind--;   }
                 pop(&s); 
                 s.ind--;  }
         else{
             printf("%c",*e);}
         e++;
                       }
      while(! is_empty(&s)){
           printf("%c",pop(&s));
             s.ind--;}
               }

int prior(char c){

         if(c == '('){
            return 0; }
         else if( c == '+' || c == '-'){
                return 1;               }
         else if( c == '*' ||c == '/'){
                return 2;             }
         else{
               return 3;}
         
                   }
 
int is_empty (struct stack *s){
    
          if(s->ind==-1){
                return 1;}
           else{
             
                return 0;}

                             }

char top(struct stack *s){
   
   if(s->ind == -1){
          return '(' ;}
    else{
       return s->a[s->ind];}
                         }


void push(struct stack *s, char f){
  
       
       if(s->ind == s->size-1)
            printf("stack full");
       else{
              s->ind++;
              s->a[s->ind] = f;
                     }
                                  }

char pop(struct stack *s){
 
       if(s->ind == -1)
            printf("stack empty");
       else{
         
           return s->a[s->ind];}
                   
                         }
