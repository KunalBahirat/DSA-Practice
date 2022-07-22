#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void insertHeap(int a[],int n,int num){
    a[n]=num;
    int i=n;
    int temp=a[i];
    while(i>1 and a[i/2]<temp){
        a[i]=a[i/2];
        i=i/2;
    }
    a[i]=temp;
}
void createHeap(int a[],int n){
    int i;
    for(int i=2;i<n;i++){
        insertHeap(a,i,a[i]);
    }
}
void deleteHeap(int a[],int n){   // n=length   
    int i=1;
    int x=a[i];
    a[i]=a[n-1];
    int j=i*2;
    while(j<(n-1)){
        if(a[j]<a[j+1]){
            j++;
        }
        if(a[i]<a[j]){
            swap(a[i],a[j]);
            i=j;
            j=j*2;
        }
        else break;
    }
    a[n]=x;
}
int main(){
    // int arr[100]={0,40,35,15,10,12,6,5};
    // int n=8;
    // for(int i=1;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;
    // cout<<"Inserting 50 in Heap "<<endl;
    // insertHeap(arr,n,50);n++;
    // for(int i=1;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;
    // insertHeap(arr,n,41);n++;
    // for(int i=1;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;

    int l=100;int n=8;
    int arr[n]={0,10,20,30,25,5,40,35};
    createHeap(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=n;i>1;i--){
        deleteHeap(arr,i);
    }
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    
    return 0;
}