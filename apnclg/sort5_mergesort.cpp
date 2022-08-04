#include <bits/stdc++.h>
using namespace std;
void Merge(int a[],int l,int m,int h){
    int i,j;
    i=l;j=m+1;
    int b[h+1];
    int k=l;
    while(i<=m and j<=h){
        if(a[i]<a[j]) b[k++]=a[i++];
        else b[k++]=a[j++];
    }
    for(;i<=m;i++){
        b[k++]=a[i];
    }
    for(;j<=h;j++){
        b[k++]=a[j];
    }
    for(int i=l;i<=h;i++) a[i]=b[i];

}
void iterative_mergeSort(int a[],int n){
    int i,p,l,h,m;
    for(p=2;p<=n;p=p*2){
        for(i=0;i+p-1<n;i=i+p){
            l=i;
            h=i+p-1;
            m=(l+h)/2;
            Merge(a,l,m,h);
        }
    }
    if(p/2 <n){
        Merge(a,0,p/2-1,n-1);
    }
}
void recursive_mergeSort(int a[],int l,int h){
    if(l<h){
        int mid=(l+h)/2;
        recursive_mergeSort(a,l,mid);
        recursive_mergeSort(a,mid+1,h);
        Merge(a,l,mid,h);
    }
}
int main(){
    int arr[8]={8,3,7,4,9,2,6,5};
    // mergeSort(arr,8);
    recursive_mergeSort(arr,0,7);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}