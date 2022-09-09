#include <bits/stdc++.h>
using namespace std;
void BFS(int adj[][10],int n,int size){
    queue <int> q;
    int visited[10]={0};
    q.push(n);
    cout<<n<<" ";
    visited[n]=1;
    while(!q.empty()){
        int x=q.front();q.pop();
        for(int i=1;i<size;i++){
            if(adj[x][i]==1 and visited[i]==0){
                q.push(i);
                cout<<i<<" ";
                visited[i]=1;
            }
        }
        
    }
}
int sizearray[10]={0};
int visited2[10]={0};
void DFS(int **ptr,int i){
    if(visited2[i]==0){
        cout<<i<<" ";
        visited2[i]=1;
        for(int j=0;j<sizearray[i];j++){
            DFS(ptr,ptr[i][j]);
        }
    }
}
int main(){
    int adj[10][10]=
    {
        //   0 1 2 3 4 5 6 7 8 9
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,1,1,0,0,0,0,0,0},
        {0,1,0,0,1,0,0,0,0,0},
        {0,1,0,0,1,1,0,1,0,0},
        {0,0,1,1,0,1,1,0,1,0},
        {0,0,0,1,1,0,1,0,0,1},
        {0,0,0,0,1,1,0,0,0,1},
        {0,0,0,1,0,0,0,0,0,1},
        {0,0,0,0,1,0,0,0,0,0},
        {0,0,0,0,0,1,1,1,0,0}
    };
    // BFS(adj,1,10);
    int **ptr=new int*[10]; ptr[0]=NULL;
    for(int i=1;i<=9;i++){
        int num;
        cin>>num;
        sizearray[i]=num;
        ptr[i]=new int[num];
        for(int j=0;j<num;j++){
            cin>>ptr[i][j];
        }
    }
    // for(int i=1;i<=9;i++){
    //     for(int j=0;j<sizearray[i];j++){
    //         cout<<ptr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    DFS(ptr,1);
    for(int i=0;i<=9;i++){
        delete []ptr[i];
    }
    
    return 0;
}

// 2 3
// 1 4
// 1 4 5 7
// 2 3 5 6 8
// 3 4 6 9
// 4 5 9
// 3 9
// 4
// 5 6 7 