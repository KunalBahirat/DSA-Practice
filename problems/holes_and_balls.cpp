#include <bits/stdc++.h>
using namespace std;
// Input 3 
    // 21 3 6 
    // 20 15 5 7 10 4 2 1 3 6 8

// Output 1 0 3 0 0 3 3 2 2 0 0

void final_position(int holes[],int n,int balls[],int m){
    int capacity[n];
    for(int i=0;i<n;i++) capacity[i]=i+1;
    for(int i=0;i<m;i++){
        bool printed=false;
        for(int j=n-1;j>=0;j--){
            if(holes[j]>=balls[i] and capacity[j]>0){
                cout<<j+1<<" ";
                --capacity[j]; printed=true;
                break;
            }
        }
        if(!printed) cout<<"0 "; 
    }

}
int main(){
    // int n;
    // cin>>n;
         //  hl-size occ index
    // map <int,pair <int ,int>> holes;
    // for(int i=0;i<n;i++){
    //     int val;
    //     cin>>val;
    //     holes[i+1]={val,i+1};
    // }
    // int m;
    // cin>>m; int balls[m];
    // for(int i=0;i<m;i++){
    //     cin>>balls[i];
    // }
    // for(int i=0;i<m;i++){
    //     bool printed=false;
    //     for(auto it=holes.rbegin();it!=holes.rend();it++){
    //         if(it->second.first >=balls[i] and it->second.second >=1){
    //             cout<<it->first<<" ";
    //             --it->second.second;
    //             printed=true;
    //             break;
    //         }
    //     }
    //     if(!printed) cout<<"0 ";
    // }

    //**************************  Method 2 **************************
    
    int n;
    cin>>n;int holes[n];
    for(int i=0;i<n;i++){
        cin>>holes[i];
    }
    int m;
    cin>>m; int balls[m];
    for(int i=0;i<m;i++){
        cin>>balls[i];
    }
    final_position(holes,n,balls,m);
    return 0;
}

