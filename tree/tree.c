#include<stdio.h>
#include<stdlib.h>
struct tnode{
      struct tnode *right;
      struct tnode *left;
      int ele;
};
struct queue{
     struct tnode *a[100];
     int front,rear;
};
void enqueue(struct queue *q,struct tnode *nn){
     q->front ++;
     q->a[q->front]=nn;
}
struct tnode * dequeue(struct queue *q){
     if(q->front == q->rear){
         printf("__queue is empty__\n");}
     else{
         q->rear ++;
         return q->a[q->rear]; }
}
int isempty(struct queue *q){
      if(q->front == q->rear){
         return 1;  }
        else{
          return 0 ;
           }
} 
struct tnode * findparent(struct tnode *root,struct tnode *last){
        if(root != NULL){
             struct tnode *temp;
            struct queue *q;
            q=(struct queue *)malloc(sizeof(struct queue));
             q->front = -1;
             q->rear = -1;
             enqueue(q,root);
             while(! isempty(q)){
                  temp = dequeue(q);
                  if(temp->right == last || temp->left == last ||temp == last){
                       return temp; }
                  if(temp->right != NULL){
                       enqueue(q,temp->right); }
                   if(temp->left != NULL){
                       enqueue(q,temp->left);  }
                           }       
}
}
struct tnode * lastnode(struct tnode *root){
       if(root != NULL){
            struct tnode *temp;
            struct queue *q;
            q=(struct queue *)malloc(sizeof(struct queue));
            q->front = -1;
            q->rear = -1;
            enqueue(q,root);
            while(! isempty(q)){
               temp = dequeue(q);
               if(temp->right == NULL){
                    if(temp->left != NULL){
                          return temp->left; }
                    else{
                          return temp; }
                                    }
               if(temp->right != NULL){
                    enqueue(q,temp->right); }
               if(temp->left != NULL){
                    enqueue(q,temp->left);  }
}
}
}
struct tnode * search (struct tnode *root,int dval){
          if(root == NULL){
              printf("__tree is empty__\n"); }
          else{
             struct tnode *temp;
             struct queue *q;
             int f=0,c=1;
             q=(struct queue *)malloc(sizeof(struct queue));
             q->front = -1;
             q->rear = -1;
             enqueue(q,root);
             while(! isempty(q)){
                temp = dequeue(q);
                if(temp->ele == dval){
                      f = 1;
                      printf("element found at %dth node\n",c);
                      break;  }
               if(temp->right != NULL){
                      enqueue(q,temp->right);  }
               if(temp->left != NULL){
                      enqueue(q,temp->left);   }
               c++;
}
           if(f == 1){
              return temp;  }
           else{
              printf("__element not found__\n");
              return NULL;  }
}
} 
struct tnode * delete(struct tnode *root, int dval){
         struct tnode *temp,*parent,*last;
            temp = search(root,dval);
            if(temp != NULL){
                 last = lastnode(root);
                 parent = findparent(root,last);
                 temp->ele = last->ele;
                 if(parent->right == last){
                     parent->right = NULL;}
                 else{
                      parent->left = NULL; }
                        }
          return root;
}
struct tnode * insert(struct tnode *root, int val){
          struct tnode *temp,*nn;
          if(root == NULL){
              root=(struct tnode *)malloc(sizeof(struct tnode));
              root->right=NULL;
              root->ele=val;
              root->left=NULL;}
         else{
           temp = root;
           nn=(struct tnode *)malloc(sizeof(struct tnode));
           nn->right=NULL;
           nn->ele=val;
           nn->left=NULL;
           while(1){
             if(temp->ele > val){
                  if(temp->left != NULL){
                         temp=temp->left;}
                  else{
                      temp->left = nn;
                      break;}    }
             else{
                 if(temp->right != NULL){
                       temp=temp->right;}
                   else{
                       temp->right = nn;
                       break;}   }
                   }
             }
     return root;
}
void display(struct tnode *root){
      struct tnode *temp; 
      int a[100];
       if(root == NULL){
             printf("__TREE IS EMPTY__\n");}
       else{
           struct queue *q;
           q=(struct queue *)malloc(sizeof(struct queue));
           q->front=-1;
           q->rear=-1;
           enqueue(q,root);
           while(! isempty(q)){
                temp=dequeue(q);
                printf("%d ",temp->ele);
                if(temp->left != NULL){
                    enqueue(q,temp->left);}
                if(temp->right != NULL){
                    enqueue(q,temp->right);}
                              }
           printf("\n");
                }
}
void main(){
      struct tnode *root;
      root = NULL;
      int op,val,dval;
      do{
        printf("Enter the option\n\t1 for insert\n\t2 for delete\n\t3 for display\n\t4 for exit\n>>>>>>  ");
        scanf("%d",&op);
        switch(op){
           case 1:{
                 printf("enter the element ");
                 scanf("%d",&val);
                 root = insert(root,val);
                 break;}
          case 2:{
                 printf("enter the element to be deleted ");
                 scanf("%d",&dval);
                 root = delete(root,dval);
                 break;}
          case 3:{
                 display(root);
                 break;}
          case 4:{
                 printf("__exiting from tree__\n");
                 break;}
                  }
       }while(op != 4);
}
        
