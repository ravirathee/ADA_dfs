//Ravi Rathee
//16csu292
//Depth First Search (Stack)

#include <stdio.h>
#define MAX 5

void dfs(int adj[MAX][MAX],int visited[],int current){
   int stack[MAX],top = -1;
   int i;
   printf("%c \t",current+65);
   stack[++top] = current;
   visited[current] = 1;
   while(top != -1){
       current = stack[top];
       for(i=0; i< MAX ; i++){
           if( adj[current][i]==1 && visited[i]==0){
               stack[++top]=i;
               visited[i]=1;
               printf("%c \t",i + 65);
               break;
           }
       }
       if(i==MAX){
           top--;
       }
   }
}
int main() {
    int visited[MAX]={0};

    int adj[MAX][MAX]={
            {0,1,0,1,0},
            {1,0,0,0,1},
            {0,0,0,0,1},
            {1,0,0,0,1},
            {0,1,1,1,0}
    };

    dfs(adj,visited,0);
}

/*
OUTPUT

A 	B 	E 	C 	D

*/