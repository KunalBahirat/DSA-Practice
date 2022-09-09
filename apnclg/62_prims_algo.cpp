#include <bits/stdc++.h>
using namespace std;
int cost[8][8]={
        // 0       1           2           3           4           5           6       7
    {INT_MAX,   INT_MAX,    INT_MAX,    INT_MAX,    INT_MAX,    INT_MAX,    INT_MAX,INT_MAX},
    {INT_MAX,   INT_MAX,    25,         INT_MAX,    INT_MAX,    INT_MAX,    5,      INT_MAX}, 
    {INT_MAX,   25,         INT_MAX,    12,         INT_MAX,    INT_MAX,    INT_MAX,10},
    {INT_MAX,   INT_MAX,    12,         INT_MAX,    8,          INT_MAX,    INT_MAX,INT_MAX},
    {INT_MAX,   INT_MAX,    INT_MAX,    8,          INT_MAX,    16,         INT_MAX,14},
    {INT_MAX,   INT_MAX,    INT_MAX,    INT_MAX,    16,         INT_MAX,    20,     18},
    {INT_MAX,   5,          INT_MAX,    INT_MAX,    INT_MAX,    20,         INT_MAX,INT_MAX},
    {INT_MAX,   INT_MAX,    10,         INT_MAX,    14,         18,         INT_MAX,INT_MAX}
};
int x=0;
void prims(){
    int n=8;
    int u,v;
    int near[8]={-1,-1,-1,-1,-1,-1,-1,-1};
    int ans[2][6]={0};
    pair<int,int> p; int temp=INT_MAX;
    for(int i=1;i<8;i++){
        for(int j=i;j<8;j++){
            if(cost[i][j] <temp){
                temp=cost[i][j];
                u=i;
                v=j;
            }
        }
    }
    ans[0][0]=u;ans[1][0]=v;
    near[u]=near[v]=0; x++;
    for(int i=1;i<8;i++){
        if(near[i]!=0 and cost[u][i] < cost[v][i]){
            near[i]=u;
        }
        else if(near[i]!=0){
            near[i]=v;
        }
    }
    for(int w=0;w<5;w++){
        int k=1;
        for(int i=1;i<n;i++){
            if(near[i]!=0 and cost[i][near[i]]<cost[i][k]) {
                ans[0][x]=i;
                k=i;
                ans[1][x]=near[i];
            }
        }x++;
        near[k]=0;
        for(int i=1;i<n;i++){
            if(near[i]!=0 and cost[i][near[i]]> cost[i][k]){
                near[i]=k;
            }
        }

    }
    for(int i=0;i<6;i++){
        cout<<ans[0][i]<<" "<<ans[1][i]<<endl;
    }
    
}
int main(){
    prims();
    return 0;
}