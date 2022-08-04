#include <bits/stdc++.h>
using namespace std;
int partition(int a[],int l,int h){
    int pivot=a[l];
    int i=l;int j=h;
    do{
        do{i++;}
            while(a[i]<=pivot);
        do{j--;}
            while(a[j]>pivot);
        if(i<j) swap(a[i],a[j]);
    }while(i<j);
    swap(a[j],a[l]);
    return j;
}
void QuickSort(int ar[],int l,int h){
    if(l<h){
        int j=partition(ar,l,h);
        QuickSort(ar,l,j);      
        QuickSort(ar,j+1,h);      
    }
}
int main(){
    int arr[7]={50,40,30,20,90,70,80};
    QuickSort(arr,0,6);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}