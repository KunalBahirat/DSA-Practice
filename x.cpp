#include <iostream>
#include "bits/stdc++.h"
using namespace std;
int sum(int n){
    if(n==0)
        return 0;

    return n+sum(n-1);
}
int power(int n,int p){
    if(p==1){
        return n;
    }
    return n* power(n,p-1);
}

int factorial(int n){
    
    if(n==1){
        return 1;
    }
    return n* factorial(n-1);
}

int fib(int n){
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1)+ fib(n-2);
}

bool isSorted(int arr[] ,int n){
    if(n==1)
        return true;
    return arr[0]<arr[1] & isSorted(arr+1,n-1);
}

void print(int n){
    if(n==1){
        cout<<1<<" ";
        return;
    }
    print(n-1);
    cout<<n<<" ";
}

void firstOccur(int arr[],int n,int i,int k){
    if(i==n){
        cout<<"-1";
    }
    if(arr[i]==k){
        cout<<"Found at index "<<i;
        return;
    }
    else firstOccur(arr+1,n,i+1,k);
} 

int main(){
    // cout<<sum(12);
    // cout<<power(4,3);
    // cout<<factorial(5);

    // cout<<fib(6);

    // int arr[]={2,4,5,6,15,12,14};
    // cout<<isSorted(arr,7);
    // print(6);


    // int n=7;
    // int a[n]={4,1,2,2,5,2,7};
    // int firstO=-1,lastO=-1;
    // for(int i=0;i<n;i++){
    //     if(a[i]==2){
    //         if(firstO==-1)
    //             firstO=i;
    //         lastO=i;
    //     }
        
    // }
    // cout<<firstO<<" "<<lastO;

    int n=7;
    int a[n]={4,1,2,2,5,2,7};
    cout<<lastoccur(a,n-1,0,2);



    return 0;
}