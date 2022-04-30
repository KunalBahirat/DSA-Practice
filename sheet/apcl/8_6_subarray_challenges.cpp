#include "bits/stdc++.h"
using namespace std;

int main(){
    // Maximum sum of subarray : brute-force approach
//    int n=5;
//     int a[n]={1,-4,3,2,1};
//     int sum=0;int ans=0;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             for(int k=i;k<=j;k++){
//                 cout<<a[k]<<" ";
//                 sum+=a[k];
//             }
//             ans=max(ans,sum);
//             sum=0;
//             cout<<endl;
//         }
        
//     }
//     cout<<"Max sum of subarray= "<<ans;

    // Maximum sum of subarray : optimised approach
    // int n=5;
    // int a[n]={1,-4,3,2,1};
    // int currsum[n+1];
    // currsum[0]=0;
    // for(int i=1;i<=n;i++){
    //     currsum[i] = currsum[i-1] + a[i-1];
    // }
    // int max_sum=INT_MIN;
    // for(int i=1;i<=n;i++){
    //     int sum=0;
    //     for(int j=0;j<i;j++){
    //         sum=currsum[i] - currsum[j];
    //         max_sum=max(sum,max_sum);
    //     }
    // }
    // cout<<"Maximum sum= "<<max_sum;


    //********************** Kadane's Algo ***********************************************************
    int n=7;
    int a[n]={-1,4,-6,7,-4,9,2};
    int currsum=0;
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        currsum+=a[i];
        if(currsum<0){
            currsum=0;
        }
        maxSum=max(currsum,maxSum);
        cout<<maxSum<<" ";
    }
    cout<<"Max Sum= "<<maxSum;
    return 0; 
}