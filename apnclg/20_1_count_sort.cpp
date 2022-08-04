#include <iostream>
#include "bits/stdc++.h"
using namespace std;
void countSort(int arr[],int n){
    int max_=INT_MIN;    

    for(int i=0;i<n;i++){
        max_=max(max_,arr[i]);      // 6
    }cout<<max_<<endl;
    
    int count[10]={0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=0;i<=max_;i++){
        cout<<count[i]<<" ";
    }cout<<endl;
    
    for(int i=1;i<=max_;i++){
        count[i]+=count[i-1];
    }
    
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--count[arr[i]]]=arr[i];
    }
    
    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }
}
int main(){
    int arr[9]={1,3,2,3,4,1,6,4,3};
    countSort(arr,9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}