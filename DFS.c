#include <stdio.h>
#include<stdlib.h>
int Visited[7] = {0,0,0,0,0,0,0};
int Graph[7][7]={{0,1,1,1,0,0,0},
                 {1,0,1,0,0,0,0},
                 {1,1,0,1,1,0,0},
                 {1,0,1,0,1,0,0},
                 {0,0,1,1,0,1,1},
                 {0,0,0,0,1,0,0},
                 {0,0,0,0,1,0,0}
               };
void DFS(int i){
    printf("%d->",i);
    Visited[i]=1;
    for(int j=0;j<7;j++){
    if(Graph[i][j]==1 && !Visited[j]){
        DFS(j);
    }
    }

}  

void main(){
    int n;
    printf("Enter Starting Vertex to Start DFS Traversal : ");
    scanf("%d",&n);
    DFS(n);
}