#include "bits/stdc++.h"
#include <iostream>
using namespace std;
void merge(int arr[],int l,int mid,int h){
    int n1=mid-l+1;
    int n2=h-mid;
    
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<n1 & j<n2){
        if(a[i]<b[j])
            arr[k++]=a[i++];
        if(b[j]<a[i])
            arr[k++]=b[j++];
    }
    while (i<n1)
    {
        arr[k++]=a[i++];
    }
    while (j<n2)
    {
        arr[k++]=b[j++];
    }
    

}
void mergeSort(int arr[],int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,h);

        merge(arr,l,mid,h);
    }
}
int main(){
    int arr[8]={9,3,7,5,6,4,8,2};
    mergeSort(arr,0,7);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

