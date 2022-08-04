#include <bits/stdc++.h>
#include "includes/queue.h"
int n=7;
void BFS(int G[][8],int i){
    Queue q;
    int visited[8]={0};
    visited[i]=1;
    q.enqueue(i);
    std::cout<<i<<" ";
    while(!q.isEmpty()){
        int u=q.dequeue();
        for(int v=1;v<=n;v++){
            if(G[u][v]==1 and visited[v]==0){
                std::cout<<v<<" ";
                q.enqueue(v);
                visited[v]=1;
            }
        }
    }
}
int main(){
    int G[8][8]={{0,0,0,0,0,0,0,0},
                 {0,0,1,1,1,0,0,0},
                 {0,1,0,1,0,0,0,0},
                 {0,1,1,0,1,1,0,0},
                 {0,1,0,1,0,1,0,0},
                 {0,0,0,1,1,0,1,1},
                 {0,0,0,0,0,1,0,0},
                 {0,0,0,0,0,1,0,0}};
    BFS(G,1);
    return 0;
}