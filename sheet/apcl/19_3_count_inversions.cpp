#include <iostream>
using namespace std;

//brute force approach  TC : O(n^2)
int countInversion(int arr[],int n){
    int inversion=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i] & i<j){
                inversion++;
                // cout<<"( "<<arr[i]<<","<<arr[j]<<" )"<<endl; 
            }
        }
    }
    return inversion;
}


// optimised approach by modifying merge sort

long long merge(int arr[],int l,int mid,int h){
    long long inv=0;

    int n1=mid-l+1;
    int n2=h-mid;

    int a[n1],b[n2];

    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+i+1];
    }

    int i=0,j=0,k=l;
    while(i<n1 & j<n2){
        if(a[i]<=b[j])
            arr[k++]=a[i++];
        if(a[i]>b[j]){
            arr[k++]=b[j++];
            // a[i]> b[j] i<j 
            inv+=n1-i;
        }
    }
    while(i<n1){
        arr[k++]=a[i++];
    }
    while(j<n2){
        arr[k++]=b[j++];
    }

    return inv;
}

long long mergeSort(int arr[],int l,int h){
    long long inv=0;
    if(l<h){
        int mid=(l+h)/2;

        inv += mergeSort(arr,l,mid);
        inv += mergeSort(arr,mid+1,h);

        merge(arr,l,mid,h);
    }
}

int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // cout<<countInversion(arr,n);
int arr[8]= {3, 5, 6, 9, 1, 2, 7, 8};
    cout<<mergeSort(arr,0,7);
    return 0;
}