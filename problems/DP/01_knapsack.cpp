// #include <iostream>
// using namespace std;
// int t[102][1002];
// void memset(int t[][1002]){
//     for(int i=0;i<102;i++){
//         for(int j=0;j<1002;j++){
//             t[i][j]=-1;
//         }
//     }
// }
// int knapsack(int wt[],int val[],int W,int n){
//     if(n==0 || W==0) return 0;
//     if(t[n][W]!=-1){
//         return t[n][W];
//     }
//     if(wt[n-1]<=W){
//         return  t[n][W]=max(val[n-1]+knapsack(wt,val,W-wt[n-1],n-1),knapsack(wt,val,W,n-1));
//     }
//     else if(wt[n-1]>W){
//         return t[n][W]=knapsack(wt,val,W,n-1);
//     }
// }
// int main(){
//     // int wt[]={ 10, 20, 30 };
//     // int val[]={ 60, 100, 120 };
//     // int W=50;
//     int wt[]={ 2,3,4,5};
//     int val[]={ 1,2,5,6 };
//     int W=8;
//     memset(t);
//     cout<<knapsack(wt,val,W,4);
//     return 0;
// }

// Abdul Bari
// #include <bits/stdc++.h>
// using namespace std;
// int knapsack(int wt[],int val[],int W,int n){
//     int t[n+1][W+1];
//     memset(t,0,sizeof(t));
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<=W;j++){
//             if(j-wt[i]<0){
//                 t[i][j]=t[i-1][j];
//             }
//             else{
//                 t[i][j]=max(t[i-1][j], t[i-1][j-wt[i]]+val[i]);
//             }
//         }
//     }
//     return t[n][W];
    


// }
// int main(){
//     int wt[]={ 2,3,4,5};
//     int val[]={ 1,2,5,6 };
//     int W=8;
//     // memset(t);
//     cout<<knapsack(wt,val,W,4);
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
int t[102][1002];
int knapsack2(int wt[],int val[],int W,int n){
    for(int i=0;i<=n;i++){
        for(int j=0;j<=W;j++){
            if(i==0 or j==0){
                t[i][j]=0;
            }
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=W;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=W;j++){
            if(wt[i-1]<=j){
                t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]] , t[i-1][j]);
            }
            else if(wt[i-1]>j){
                t[i][j]=t[i-1][j];
            }
        }
    }
    return t[n][W];
}

int main(){
    // int wt[]={ 10, 20, 30 };
    // int val[]={ 60, 100, 120 };
    // int W=50;
    int wt[]={ 2,3,4,5};
    int val[]={ 1,2,5,6 };
    int W=8;
    cout<<knapsack2(wt,val,W,4);
    // cout<<knapsack2(wt,val,W,3);
    return 0;
}

