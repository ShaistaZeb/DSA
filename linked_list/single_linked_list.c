#include<stdio.h>
#include<stdlib.h>

struct node{
   int ele;
   struct node *next;
};
struct node *head = NULL;
void append(){
   struct node *nn,*temp;
   nn=(struct node *)malloc(sizeof(struct node));
   printf("enter the element ");
   scanf("%d",&nn->ele);
   nn->next = NULL;
   if(head == NULL){
         head = nn;}
   else{
    temp = head;
    while(temp->next != NULL){
          temp = temp->next;}
    temp->next = nn;}
}
void delete(){
   struct node *temp;
   temp = head;
   if(head == NULL){
         printf("__nothing to remove__\n");}
   else{
       if(temp->next == NULL){
           head = NULL;}
       else{
       while(temp->next->next != NULL){
            temp = temp->next;}
  temp->next = NULL;}
           }
}
void insert_head(){
      struct node *nn;
      nn=(struct node *)malloc(sizeof(struct node));
      printf("enter the element ");
      scanf("%d",&nn->ele);
      if(head == NULL){
             head = nn;}
      else{
         nn->next = head;
         head = nn;
         }
}
void search(){
     int search_key,node=1;
     struct node *temp;
     printf("enter the element you want to search ");
     scanf("%d",&search_key);
     if(head == NULL){
           printf("__list is contain no elements__\n");}
     else{
       temp = head;
       while(temp != NULL){
             if(temp->ele == search_key){
                    printf("element found at %dth node\n",node);
                    node = 0;
                    break;} 
              temp = temp->next;
              node = node+1;}
      if(node != 0){
             printf("__element not found__\n");} 
       }
}
void insert_position(){
     int pos,node=0;
     struct node *nn, *temp, *prev;
     nn =(struct node *)malloc(sizeof(struct node));
     printf("enter the element ");
     scanf("%d",&nn->ele);
     if(head == NULL){
           printf("__no elements yet so inserting it as first element__\n");
           head = nn;
           nn->next = NULL;}
     else{
       temp = head;
       prev = head;
       printf("enter the position ");
       scanf("%d",&pos);
       if(pos == 1){
           nn->next = temp;
           head = nn;} 
       else{
       while(temp != NULL ){
           if(node+1 == pos){
                prev = head;
                while(prev->next != temp){
                        prev = prev->next;} 
                prev->next = nn;
                nn->next = temp;
                pos = 0;
                break;}
          temp = temp->next;
          node = node+1;
         if(prev->next != NULL){
                prev = prev->next;}
         }
      if(pos != 0){
           printf("__It is not a valid position so inserting at the end__\n");
           prev->next = nn;
           nn->next = NULL;} }
   }
}
void delete_node(){
      int node=0, pos;
      struct node *temp, *prev;
      if(head == NULL){
            printf("__list is empty so nothing to remove__\n");}
      else{
          temp = head;
          prev = head;
          printf("enter the node you want to remove ");
          scanf("%d",&pos);
          if(pos == 1){
               head = temp->next;}
          else{
          while(temp != NULL){
             if(node+1 == pos){
                 prev = head;
                 while(prev->next != temp){
                      prev = prev->next;}
                 prev->next = temp->next;
                 temp->next = NULL; 
                 pos = 0;
                 break;}
             temp = temp->next;
             node = node+1;
             if(prev->next != NULL){
                   prev = prev->next;}
         }
         if(pos != 0){
             printf("__you entered invalid position so deleting last node__\n");
             prev->next = NULL;}}
        }
}
void length(){
     int node=0;
     struct node *temp;
     temp = head;
     if(head == NULL){
           printf("__length is zero__\n");}
     else{
        while(temp != NULL){
              temp = temp->next;
              node = node +1 ;}
        printf("length of the list is %d\n",node);}
}
void print(){
    struct node *temp;
    temp = head;
    if(head == NULL){
       printf("__list is empty__\n");}
    else{
        while(temp != NULL){
            printf("%d ",temp->ele);
            temp = temp->next;}
   printf("\n");     }
}
void swap_nodes(){
    struct node *temp, *prev, *temp1, *prev1;
    temp1=(struct node *)malloc(sizeof(struct node));
    int len=0,node,pos1,pos2;
    temp = head;
    while(temp != NULL){
        temp = temp->next;
        len = len+1;}
    if(head == NULL){
        printf("__no nodes to swap__\n");}
    else if(len == 1){
        temp = head;
        printf("__only one node__\n");
        printf("%d\n",temp->ele);}
    else{
        printf("enter two nodes to swap ");
        scanf("%d %d",&pos1,&pos2);
        if((pos1 <= len || pos1 > 0) && (pos2 <= len || pos2 > 0)){
           temp = head; 
           node=1;
           while(node <= len ){
                  if(node == pos1){
                       temp1->ele=temp->ele;
                       temp1->next=temp->next;
                       prev = head;
                       while(prev != temp){
                           prev= prev->next;}
                       pos1 = -1;}
                  if(node == pos2){
                       prev1 = head;
                       while(prev1->next != temp){
                           prev1= prev1->next;}
                       pos2 = -1;}
                  if(pos1 == -1 && pos2 == -1){ 
                         break;}
                  temp = temp->next;
                  node += 1;}  
      prev->ele=temp->ele;
      prev->next=temp1->next;
      temp->ele=temp1->ele;
      prev1->next=temp1; 
      temp1->next=temp->next;                             }
      else{
          printf("__can't swap...one or both nodes are invalid__\n");}
     }
}
void sorting(){
     int l=0,i,j,min;
     struct node *temp, *temp1;
    // temp=(struct node *)malloc(sizeof(struct node));
     if(head == NULL){
        printf("__list is empty__\n");}
     else{
        temp = head;
        while(temp != NULL){
              l ++;
              temp = temp->next;}
        temp = head;
        temp1 =head;
        for(i=0; i<l;i++){
           while(temp1 != NULL){
               if(temp1->ele < temp->ele){
                     min = temp->ele;
                     temp->ele = temp1->ele;
                      temp1->ele = min; }
                  temp1 = temp1->next;}
            temp = temp->next;
            temp1= temp;}
         }
}
void reverse(){
     int l=0,i=0,k,nn;
     struct node *temp, *temp1;
     if(head == NULL){
          printf("__list has nothing to reverse__\n");}
     else{
        temp = head;
        while(temp != NULL){
             l++;
             temp = temp->next;}
        temp = head;
        while(i<l){
            k=1;
            temp1 = head;
            while(k<l){
               temp1 = temp1->next;
               k++;}
            nn = temp1->ele;
            temp1->ele=temp->ele;
            temp->ele=nn;
            l--; 
            i++;
            temp = temp->next;}
         }
}
void main(){
    int option;
    while(option != 12){
    printf("enter the option\n\t1 for append\n\t2 for deletion\n\t3 for inserting at head\n\t4 for searching elememt\n\t5 for inserting at a given postion\n\t6 for deleting given node\n\t7 for length of the list\n\t8 for printing list\n\t9 for swapping two nodes\n\t10 for sorting\n\t11 for reversing\n\t12 for exit\n>>>>>");
   scanf("%d",&option);
   switch (option){
       case 1:{
          append();
          break;}
       case 2:{
          delete();
          break;}
       case 3:{
          insert_head();
          break;}
       case 4:{
           search();
           break;}
       case 5:{
           insert_position();
           break;}
       case 6:{
           delete_node();
           break;}
       case 7:{
           length();
           break;}
       case 8:{
            print();
           break;}
       case 9:{
            swap_nodes();
            break;}
       case 10:{
            sorting();
            break;}
       case 11:{
            reverse();
            break;}
       case 12:{
            printf("__exiting from the list__\n");
            break;}
        }
                   }    

}
