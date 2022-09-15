#include <iostream>
using namespace std;
// knapsack{
//     if(n==0 or w==0) return 0;
//     if(wt[i-1]<=j) {
//         t[i][j]= max(val[i-1]+t[i-1][j-wt[i-1]]) , t[i-1][j];
//     }
//      t[i][j]= t[i-1][j];
// }

bool subset_sum(int a[],int n,int k){
    bool t[n+1][k+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=k;j++){
            if(i==0) t[i][j]=false;
            if(j==0) t[i][j]=true;
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=k;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(a[i-1]<=j){
                t[i][j]= t[i-1][j-a[i-1]] || t[i-1][j];
            }
            else t[i][j]=t[i-1][j];
        }
    }
    cout<<"\n\n\n";
    for(int i=0;i<=n;i++){
        for(int j=0;j<=k;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n\n\n";
    return t[n][k];
}
int main(){
    int n=6;
    // int a[]={3, 34, 4, 12, 5, 2};
    // int k = 9;
    // {3, 34, 4, 12, 5, 2} 30 


    int a[]={2,3,5,5,8,10};
    int k = 10;
    if(subset_sum(a,n,k)){
        cout<<"Yes"<<endl;
    }
    else {cout<<"No";}
    return 0;
}
