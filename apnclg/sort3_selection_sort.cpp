#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void selection_sort(int a[],int n){
    int j,k;
    for(int i=0;i<n-1;i++){
        for(j=k=i;j<n;j++){
            if(a[j]<a[k]){
                k=j;
            }
        }
        swap(a[k],a[i]);
    }
}
int main(){
    int arr[]={17,25,11,2,22,17,44,5};
    int n=8;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    selection_sort(arr,n);
    cout<<"After selection Sort "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}