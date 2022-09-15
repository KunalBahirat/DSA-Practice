#include <iostream>
#include <vector>
using namespace std;
int subset_sum(int a[],int sum,int n,vector<vector<int>> &t){
    for(int i=1;i<=n;i++){
      for(int j=1;j<=sum;j++){
         if(a[i-1]<=j){
            t[i][j]=t[i-1][j] + t[i-1][j-a[i-1]];
         }
         else t[i][j]=t[i-1][j];
      }
    }
    return t[n][sum];
}
int count_subset_sum(int a[],int sum,int n){
    vector<vector<int>> t ((n+1) ,vector<int> (sum+1));
    // int t[n+1][sum+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=sum;j++){
            if(i==0) t[i][j]=0;
            if(j==0) t[i][j]=1;
        }
    }

    //subset sum problem
    return subset_sum(a,sum,n,t);
    
}
int main(){
    // int a[]={2,3,5,6,8,10};
    // int a[]={1,2,3,3};
    int a[]={1,1,1,1};
    // cout<<count_subset_sum(a,10,6);
    // cout<<count_subset_sum(a,6,4);
    cout<<count_subset_sum(a,1,4);
    return 0;
}