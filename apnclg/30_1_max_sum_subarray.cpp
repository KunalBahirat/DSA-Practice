#include <bits/stdc++.h>
using namespace std;
int max_sum_subarray(int a[],int n,int k,int x){
    int sum=0;int max_sum=INT_MIN;
    for(int i=0;i<k;i++){
        sum+=a[i];
    }
    if(sum<x) max_sum=sum;
    for(int i=k;i<n;i++){
        sum=sum-a[i-k]+a[i];
        if(sum<x) max_sum=max(max_sum,sum);
    }
    return max_sum;
}
int main(){
    int n;
    cin>>n;int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int k,x;
    cin>>k>>x;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    cout<<max_sum_subarray(a,n,k,x);

    return 0;
}