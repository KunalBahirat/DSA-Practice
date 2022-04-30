#include "bits/stdc++.h"
using namespace std;

int main(){
//Finding index of repeating element (min)
    // int n=7;
    // int a[n]={1,5,3,4,5,6};
    // int hash[n]={-1,-1,-1,-1,-1,-1,-1};
    // int minIndex=INT_MAX;
    // for(int i=0;i<n;i++){
    //     if(hash[a[i]]!=-1){
    //         minIndex=min(minIndex,hash[a[i]]);
    //     }
    //     else{
    //         hash[a[i]]=i;
    //     }
        
    // }
    // cout<<minIndex;
// ---------------------------------------Not solved prblm 2-------------------------
    // int n=5,s=6;
    // int a[n]={1,2,3,7,5};
    // int i=0,j=0,st=-1,en=-1,sum=0;
    // while(j<n && sum+a[j] <=s){
    //     sum+=a[j];
    //     j++;
    // }
    // if(sum==s){
    //     j--;
    //     cout<<i<<" "<<j;
    //     return 0;
    // }
    // while (j<n)
    // {
    //     sum+=a[j];
    //     while(sum>s){
    //         sum=sum-a[i];
    //         i++;
    //     }
    // }
    

    //Finding smallest missing number from array
    int n;
    cin>>n;int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }    
    const int N=1e6;
    bool check[N];
    for(int i=0;i<N;i++){
        check[i]=0;
    }
    for(int i=0;i<n;i++){
        if(a[i]>=0){
            check[a[i]]=1;
        }
    }
    int ans=-1;
    for(int i=1;i<N;i++){
        if(check[i]==0){
            ans=i;
            cout<<i;
            return 0;
        }
    }

    
    
    return 0;
}