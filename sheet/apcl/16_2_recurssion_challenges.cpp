#include "bits/stdc++.h"
#include <numeric>
#include <iostream>
#include <vector>
using namespace std;

// bool isSorted(int arr[],int n){
//     if(n==1 || n==0){
//         return true;
//     }
//     if(arr[0]>arr[1]){
//         return false;
//     }
//     bool isSmallSorted=isSorted(arr+1,n-1);
    
//     if(isSmallSorted==true) return true;
//     else return false;
// }



// void printDec(int arr[],int n,int i){
//     if(n==0)return;
//     printDec(arr+1,n-1,i);
//     cout<<arr[i]<<" ";
// }


// void printInc(int arr[],int n){
//     if(n==0){
//         return;
//     }
//     cout<<arr[0]<<" ";
//     printInc(arr+1,n-1);
// }

//by iteration method
// void occurance(int a[],int n,int k){
//     int i=0;int last=-1;int first=-1;
//     while(i<n){
//         if(a[i]==k){
//             if(first==-1)
//                 first=i;
//             last=i;
//         }
//         i++;

//     }
//     cout<<"First "<<first;
//     cout<<endl<<"Last "<<last;

// }


// int firstOccur(int arr[],int n,int i,int k){
//     if(i==n) return -1;
//     if(arr[i]==k) return i;
//     else{
//         firstOccur(arr,n,i+1,k);
//     }
// }

int lastOccur(int arr[],int n,int k,int i){
    if(i==n)
        return -1;
    int last=lastOccur(arr,n,k,i+1);
    if(last!=-1)
        return last;
    if(arr[i]==k)
        return i;
    else  
        return -1;
}

int main(){
    // int n=7;
    // int arr[n]={1,2,3,8,5,6,7};
    // cout<<isSorted(arr,n);
    // printDec(arr,n,0);cout<<endl;
    // printInc(arr,n);
    int n2=7;
    int arr2[n2]={4,2,1,2,5,2,7};
    // cout<<firstOccur(arr2,n2,0,2);
    cout<<lastOccur(arr2,n2,2,0);
}


