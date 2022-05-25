// #include "bits/stdc++.h"
// using namespace std;

// int main(){
//     // Maximum sum of subarray : brute-force approach
// //    int n=5;
// //     int a[n]={1,-4,3,2,1};
// //     int sum=0;int ans=0;
// //     for(int i=0;i<n;i++){
// //         for(int j=i;j<n;j++){
// //             for(int k=i;k<=j;k++){
// //                 cout<<a[k]<<" ";
// //                 sum+=a[k];
// //             }
// //             ans=max(ans,sum);
// //             sum=0;
// //             cout<<endl;
// //         }
        
// //     }
// //     cout<<"Max sum of subarray= "<<ans;

//     // Maximum sum of subarray : optimised approach
//     // int n=5;
//     // int a[n]={1,-4,3,2,1};
//     // int currsum[n+1];
//     // currsum[0]=0;
//     // for(int i=1;i<=n;i++){
//     //     currsum[i] = currsum[i-1] + a[i-1];
//     // }
//     // int max_sum=INT_MIN;
//     // for(int i=1;i<=n;i++){
//     //     int sum=0;
//     //     for(int j=0;j<i;j++){
//     //         sum=currsum[i] - currsum[j];
//     //         max_sum=max(sum,max_sum);
//     //     }
//     // }
//     // cout<<"Maximum sum= "<<max_sum;


//     //********************** Kadane's Algo ***********************************************************
//     // int n=7;
//     // int a[n]={-1,4,-6,7,-4,9,2};
//     // int currsum=0;
//     // int maxSum=INT_MIN;
//     // for(int i=0;i<n;i++){
//     //     currsum+=a[i];
//     //     if(currsum<0){
//     //         currsum=0;
//     //     }
//     //     maxSum=max(currsum,maxSum);
//     //     cout<<maxSum<<" ";
//     // }
//     // cout<<"Max Sum= "<<maxSum;


//     return 0; 
// }

#include "bits/stdc++.h"
using namespace std;
int kadane(int a[],int n){
    int currsum=0;
    int maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        currsum+=a[i];
        if(currsum<0){
            currsum=0;
        }
        maxsum=max(maxsum,currsum);
    }
    return maxsum;
}
int main(){
    // Maximum circular subarray sum
    // approach: max subarray sum = total sum of array - sum of non constributing elements  
    

    int n=7;
    int a[n]={4,-4,6,-6,10,-11,12};
    
    //my method total 4 loops
    // for(int i=0;i<n;i++){
    //     a[i]=-a[i];
    // }
    // int x=kadane(a,n);
    // int sum=0;
    // for(int i=0;i<n;i++){
    //     a[i]=-a[i];
    // }
    // for(int i=0;i<n;i++){
    //     if(a[i]==-x){
    //         continue;
    //     }
    //     sum+=a[i];
    // }
    // cout<<sum<<endl;

    //her method 3 loops
    int nonwrapsum=kadane(a,n);
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=a[i];
        a[i]=-a[i];
    }

    int wrapsum = totalsum + kadane(a,n);

    cout<<max(wrapsum,nonwrapsum)<<endl;
    return 0; 
}

//pair sum problem
// #include "bits/stdc++.h"
// using namespace std;
// int sum(int a,int b){
//     return a+b;
// }
// int main(){
//     int n=8;int k=31;
//     int a[n]={2,4,7,11,14,16,20,21};
//     int low=0,high=n-1;
//     while(low<high){
//         if(sum(a[low],a[high])==k){
//             cout<<"low="<<low<<" "<<"high="<<high;
//             return 0;
//         }
//         else if(sum(a[low],a[high])<k){
//             low++;
//         }
//         else{
//             high--;
//         }
//     }
//     cout<<"Not found!"<<endl;
//     return 0;
// }