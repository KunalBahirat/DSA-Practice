#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    //program to find unique number in array where all except one are present twice
//by using sorting and loop
// void unique1(int a[],int n){
//     sort(a,a+n);
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     for(int i=0,j=i+1;i<n;i++,j++){
//         if(a[i]==a[j]){
//             i++;j++;
//         }
//         else{
//             cout<<a[i];
//         }
//     }
// }
// //by using bit manipulation
// int unique2(int arr[],int n){
//     int xorSum=0;
//     for(int i=0;i<n;i++){
//         xorSum = xorSum ^ arr[i];
//     }
//     return xorSum;
// }

//     //program to find 2 unique number in array where all numbers except two are present twice
// //by using sorting and loop
// int unique3(int a[],int n) {

//     sort(a,a+n);
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     int i=0,j=i+1;
//     for(i=0,j=i+1;i<n-1,j<n;i++,j++){
//         if(a[i]==a[j]){
//             if(j==(n-2)){
//                 cout<<a[j+1];
//             }
//             i++;j++;
//         }        
//         else if(a[i]!=a[j]){
//             cout<<a[i]<<" ";
            
//         }
//     }
// }



//by  bit manipulation
void getbit(int xorSum){
    int pos=0;int i=0;
    while(1){
        if((xorSum & (1<<i))!=1){
            i++;
        }
        else{
            cout<<i;
            break;
        }
    }
    
}
void unique4(int a[],int n){
    int xorSum=0;
    for(int i=0;i<n;i++){
        xorSum=xorSum^a[i];
    }
    cout<<xorSum<<endl;
    getbit(xorSum);

}

int main(){
    // int a[7]={2,6,6,3,4,3,2};
    // cout<<unique2(a,7);
    // unique1(a,7);

    int n=8;
    int a[n]={1,2,3,1,2,3,5,7};
    // unique3(a,n);
    // cout<<endl;
    unique4(a,n);

    return 0;
}