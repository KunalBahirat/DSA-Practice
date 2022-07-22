#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void bubble(int a[],int n){     // Improving Bubble sort
    int flag=0;
    for(int i=0;i<n-1;i++){
        flag=0;
        for(int j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                flag=1;
            }
        }
        if(flag==0) break;
    }
}
int main(){
    int arr[]={3,7,9,10,6,5,4,12,6,11,2}; int n=11;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubble(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}