#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int a[],int n){
    int i,j;
    for(int i=1;i<n;i++){
        int x=a[i];
        int j=i-1;
        while(j>-1 and a[j]>x){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
}
int main(){
    
    int arr[]={17,25,11,2,22,17,44,5};
    int n=8;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    insertion_sort(arr,n);
    cout<<"After Insertion Sort "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}