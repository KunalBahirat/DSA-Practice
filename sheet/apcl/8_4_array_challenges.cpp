#include <iostream>
using namespace std;

int main(){
    //sum of all subarrays
    int n=5;
    int arr[n]={1,2,0,7,2};
    int sum=0;
    for(int i=0;i<n;i++){
        sum=arr[i];
       for(int j=i;j<n;j++){
           if(j==i){
               cout<<arr[i]<<endl;
           }
           else{
               sum=sum+arr[j];
               cout<<sum<<endl;
           }
       }
    }

    //Finding length of longest contiguous arithmatic subarray (means differnce between 2 consecutive element is same)
    // int n=11;
    // int arr[n]={1,2,4,6,8,9,10,11,12,13,14};
    // int prdiff=arr[1]-arr[0],count=2,ans=2;
    // int i=2;
    // for(int i=2;i<n;i++){
    //     if((arr[i]-arr[i-1])==prdiff){
    //         count++;
    //     }
    //     else{
    //         prdiff=arr[i]-arr[i-1];
    //         count=2;
    //     }
    //     ans=max(ans,count);
    
    // }

    // cout<<ans;


    // No of record breaking day

    // int n=12;
    // int arr[n]={1,2,0,7,2,0,2};
    // int max1=arr[0];int RBday=0;
    
    // for(int i=1;i<n;i++){
    //     if(arr[i]>max1 && arr[i+1]<arr[i]){
    //         RBday++;
    //         max1=max(max1,arr[i]);
    //         cout<<max1<<endl;
    //     }
    // }
    // cout<<RBday;

    return 0;
}