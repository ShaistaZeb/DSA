#include<stdio.h>

void dfs(int n,int k, int visit[n],int graph[n][n]){
      if(visit[k] == 0){
         visit[k] = 1;
         printf("%d ",k);
         for(int j =0 ; j < n; j++){
                if(graph[k][j] == 1 && visit[j] == 0){
                      dfs(n,j,visit,graph);        }
                                   }
                        }
}
void main(){
   int n;
   printf("enter no of nodes ");
   scanf("%d",&n);
   int graph[n][n];
   int visit[n];
   for(int i = 0; i < n; i++)
   {
    for(int j =0; j < n; j++)
    {
      scanf("%d",&graph[i][j]);
     }
    }
    printf("__the graph is__\n");
    for(int i = 0; i < n; i++)
    {
     for(int j = 0; j < n; j++)
     {
      printf("%d ",graph[i][j]);
     }
    printf("\n");
     }
    printf("__Depth first search__\n");
    for(int j = 0; j < n; j++){
        visit[j]=0;} 
   for(int k = 0; k < n; k ++){
         if(visit[k] != 1){
            dfs(n,k,visit,graph);
                          }
                  }
                               
}
